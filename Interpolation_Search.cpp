#include<iostream>
#include<algorithm>
using namespace std;
void Interpolation_Search(int data[],int length,int search){
	int low=0,upper=length-1;
	while(low<=upper){
		int mid=low+(upper-low)*(search-data[low])/(data[upper]-data[low]);
		if(data[mid]==search){
			cout<<"資料 "<<search<<" 位於第 "<<mid+1<<" 項\n";
			return; 
		}
		else if(data[mid]>search) upper=mid-1;
		else if(data[mid]<search) low=mid+1;
	}
}
int main(){
	//內插搜尋法 Interpolation Search
	int search,length,ans;
	cout<<"Interpolation Search:\n\n";
	cout<<"資料數量： ";
	cin>>length;
	cout<<"輸入 "<<length<<" 項資料： ";
	int data[length];
	for(int q=0;q<length;q++) cin>>data[q];
	sort(data,data+length);
	cout<<"搜尋資料： ";
	cin>>search;
	Interpolation_Search(data,length,search);
	return 0;
}

