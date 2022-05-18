#include<iostream>
#include<algorithm>
using namespace std;
void Binary_Search(int data[],int length,int search){
	int left=0,right=length-1,mid;
	while(left<=right){
		mid = (left+right)/2;
		if(data[mid]==search){
			cout<<"��� "<<search<<" �b�� "<<mid+1<<" ��\n";
			return;	
		}
		else if(data[mid]<search) left = mid + 1;
		else if(data[mid]>search) right = mid - 1; 
	}
}
int main(){
	// �G���j�M�k Binary Search 
	cout<<"Binary Search:\n\n";
	int length, search, ans;
	cout<<"��Ƽƶq�G ";
	cin>>length; 
	int data[length];
	cout<<"��J "<<length<<" ����ơG ";
	for(int q=0;q<length;q++) cin>>data[q];
	sort(data,data+length);
	cout<<"���j�M��ơG ";
	cin>>search;
	Binary_Search(data,length,search);
	return 0;
}

