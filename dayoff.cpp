#include<iostream>
using namespace std;

int main(){
    int b_year, b_month, b_day;
    int e_year, e_month, e_day;
    int tiar = 0;
    int tmpsum = 0, cnt = 0;
    int daysum = 0, month_off = 0, year_off = 0;

    cin >> b_year >> b_month >> b_day;
    cin >> e_year >> e_month >> e_day;

    // cin >> sy >> sm >> sd >> dy >> dm >> dd;
    // d = (dy - sy) * 360 + (dm - sm) * 30 + dd - sd;
    // for (int i = 1; i <= d / 360 ; i++) y += 15 + (i - 1) / 2;
    // cout << y << " " << min(36, (d / 30)) << "\n"<< d <<"days";

    daysum = ((e_year - b_year) * 360) + ((e_month - b_month) * 30) + (e_day - b_day);

    month_off = daysum / 30;
    if(month_off > 36){
        month_off = 36;
    }
    tmpsum = daysum;
    while(true){
        if(tmpsum < 360){
            break;
        }
        tmpsum -= 360;
        tiar = cnt / 2;
        year_off += (15 + tiar);
        cnt++;
    }

    cout << year_off << " " << month_off << "\n";
    cout << daysum <<"days";
    return 0;
}

    