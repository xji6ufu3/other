#include<iostream>
using namespace std;
void Bubble_Sort(int data[],int size){
	for(int q=0;q<size;q++){
		for(int w=q+1;w<size;w++){
			if(data[q]>data[w]) swap(data[q],data[w]);
		}
	}
}
int main(){
	// �w�j�ƧǪk Bubble Sort
	//O(T) = n*(n-1)/2 �Ĳv�Ӯt 
	int size;
	cout<<"��Ƽƶq�G ";
	cin>>size; 
	int data[size];
	cout<<"��J "<<size<<" ����ơG ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	Bubble_Sort(data,size);
	
	cout<<"�Ƨǵ��G�G";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n';
	return 0;
}

