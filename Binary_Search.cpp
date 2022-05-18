#include<iostream>
#include<algorithm>
using namespace std;
void Binary_Search(int data[],int length,int search){
	int left=0,right=length-1,mid;
	while(left<=right){
		mid = (left+right)/2;
		if(data[mid]==search){
			cout<<"資料 "<<search<<" 在第 "<<mid+1<<" 項\n";
			return;	
		}
		else if(data[mid]<search) left = mid + 1;
		else if(data[mid]>search) right = mid - 1; 
	}
}
int main(){
	// 二分搜尋法 Binary Search 
	cout<<"Binary Search:\n\n";
	int length, search, ans;
	cout<<"資料數量： ";
	cin>>length; 
	int data[length];
	cout<<"輸入 "<<length<<" 項資料： ";
	for(int q=0;q<length;q++) cin>>data[q];
	sort(data,data+length);
	cout<<"欲搜尋資料： ";
	cin>>search;
	Binary_Search(data,length,search);
	return 0;
}

