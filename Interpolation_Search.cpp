#include<iostream>
#include<algorithm>
using namespace std;
void Interpolation_Search(int data[],int length,int search){
	int low=0,upper=length-1;
	while(low<=upper){
		int mid=low+(upper-low)*(search-data[low])/(data[upper]-data[low]);
		if(data[mid]==search){
			cout<<"��� "<<search<<" ���� "<<mid+1<<" ��\n";
			return; 
		}
		else if(data[mid]>search) upper=mid-1;
		else if(data[mid]<search) low=mid+1;
	}
}
int main(){
	//�����j�M�k Interpolation Search
	int search,length,ans;
	cout<<"Interpolation Search:\n\n";
	cout<<"��Ƽƶq�G ";
	cin>>length;
	cout<<"��J "<<length<<" ����ơG ";
	int data[length];
	for(int q=0;q<length;q++) cin>>data[q];
	sort(data,data+length);
	cout<<"�j�M��ơG ";
	cin>>search;
	Interpolation_Search(data,length,search);
	return 0;
}

