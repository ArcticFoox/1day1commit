#include<iostream>
using namespace std;

int n,m;
int map[100001];
int buf[100001];
int map1[100001];
const int PN =23;
const int HASH_SIZE = 100002;
const int NODE_SIZE = 500003;

int Find(int arr[], int k) {
	int left = 0;
	int right = n;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] == k){
			return 1;
		}
		if (arr[mid] < k) {
			left = mid+1;
		}
		else {
			right = mid-1;
		}
	}
	return 0;
}
void merge_sort(int arr[], int len) {
	if (len < 2)
		return;
	int i, j, mid, k;
	mid = len / 2;
	i = 0;
	j = mid;
	k = 0;

	merge_sort(arr, mid);
	merge_sort((arr + mid), (len - mid));

	while (i < mid && j < len) {
		if (arr[i] < arr[j]) {
			buf[k++] = arr[i++];
		}
		else {
			buf[k++] = arr[j++];
		}

	}
	while (i < mid)
		buf[k++] = arr[i++];
	while (j < len)
		buf[k++] = arr[j++];
	for (int i = 0; i < len; i++)
		arr[i] = buf[i];
}

void init_merge_sort(){
    cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &map[i]);
	}
	merge_sort(map, n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &map1[i]);
		printf("%d\n",Find(map, map1[i]));
	}
}

struct Node {
	int data;
	Node* next;
};
Node node[NODE_SIZE];

int idx;
unsigned int get_key(int data)
{
	unsigned int key = 0, p = 1;
	if (data < 0) data *= -1;
	data *= PN;
	return (data%HASH_SIZE);
}
struct List {
	Node* head;
	void add(int data)
	{
		Node *newNode = head;
		head = &node[idx++];
		head->data = data;
		head->next = newNode;
	}
};
List hasha[HASH_SIZE];

void init_hashing(){
    scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		int key = get_key(x);
		hasha[key].add(x);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int x;
		scanf("%d", &x);
		int key = get_key(x);
		Node *temp = hasha[key].head;
		int flag = 0;
		while (temp != 0)
		{
			if (temp->data == x)
			{
				flag = 1;
				break;
			}
			temp = temp->next;
		}
		if (flag == 1) printf("1\n");
		else printf("0\n");
	}
}
int main(){
	int t;

    cin >> t;

    if(t == 1)
        init_merge_sort();
    else
        init_hashing();
    return 0;
}
//https://hsho.tistory.com/63
//https://coding-factory.tistory.com/615