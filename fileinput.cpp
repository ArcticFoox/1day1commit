#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
void add(vector<string>& arr, string num);

void file_input1(vector<string>& arr){
    ifstream readfromFile;
    readfromFile.open("input1.txt");
    if(readfromFile.is_open()){
        while(!readfromFile.eof()){
            string str1;

            readfromFile >> str1;

            add(arr, str1);
        }
        readfromFile.close();
    }
}

void file_input2(vector<string>& arr){
    ifstream readfromFile;
    readfromFile.open("input2.txt");
    if(readfromFile.is_open()){
        while(true){
            string str1;

            readfromFile >> str1;
            if(str1 == ""){
                break;
            }
            add(arr, str1);
        }
        readfromFile.close();
    }
}

void file_output1(vector<string>& arr){
    ofstream writeFile;
    writeFile.open("output1.txt");
    writeFile.clear();

    for(int i = 0; i < arr.size(); i++){
        
        writeFile.write(arr[i].c_str(), arr[i].size());
        writeFile.write("\n", 1);
    }
    writeFile.close();
}

void file_output2(vector<string>& arr){
    ofstream writeFile;
    writeFile.open("output2.txt");
    writeFile.clear();

    for(int i = 0; i < arr.size(); i++){
        
        writeFile.write(arr[i].c_str(), arr[i].size());
        writeFile.write("\n", 1);
    }
    writeFile.close();
}
void add(vector<string>& arr, string str){
    arr.push_back(str);
}

int main(){
    vector<string> arr;
    string arr2[100] = { 0, };
    int i = 0;
    string str;
    while(true){
        cin >> str;
        if(str == "x") break;

        add(arr, str);
    }
    
    return 0;
}