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
	// 泡沫排序法 Bubble Sort
	//O(T) = n*(n-1)/2 效率太差 
	int size;
	cout<<"資料數量： ";
	cin>>size; 
	int data[size];
	cout<<"輸入 "<<size<<" 筆資料： ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	Bubble_Sort(data,size);
	
	cout<<"排序結果：";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n';
	return 0;
}

