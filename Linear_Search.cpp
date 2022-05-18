#include<iostream>
#include<algorithm>
using namespace std;
int linear_search(int data[], int length, int search){
	for(int q=0;q<length;q++){
		if(data[q]==search) return q+1;
	}
	return -1;
}
int main(){
	// 循序搜尋法 Linear search
	int search,length,ans;
	cout<<"Linear Search:\n";
	cout<<"資料長度： ";
	cin>>length;
	
	int data[length];
	cout<<"輸入 "<<length<<" 筆資料：\n";
	for(int q=0;q<length;q++) cin>>data[q];
	sort(data,data+length); // include <algorithm>
	
	cout<<"輸入欲搜尋資料：\n";
	cin>>search;
	ans = linear_search(data,length,search);
	
	if(ans < 0) cout<<"can't find "<<search<<'\n';
	else cout<<"在第 "<<ans<<" 處找到 "<<search<<'\n';
	
	return 0;
}

