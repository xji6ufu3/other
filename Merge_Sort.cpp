#include<iostream>
using namespace std;
void Merge(int data[],int left[],int right[],int q,int w){
	int leftpoint,rightpoint,datapoint;
	leftpoint=rightpoint=datapoint=0;
	while(leftpoint<q && rightpoint<w){
		if(left[leftpoint]<right[rightpoint]) data[datapoint++]=left[leftpoint++];
		else data[datapoint++]=right[rightpoint++];
	}
	while(leftpoint<q) data[datapoint++]=left[leftpoint++];
	while(rightpoint<w) data[datapoint++]=right[rightpoint++];
	// left跟right其中之一會有剩下全部大的數，因先前有排序過，直接加在data後面即可 
}
void Merge_Sort(int data[],int size){
	if(size <= 1) return;
	
	int q=size/2,w=size-(size/2);
	int left[q],right[w];
	for(int e=0;e<q;e++) left[e]=data[e];
	for(int e=0;e<w;e++) right[e]=data[q+e];
	Merge_Sort(left,q);
	Merge_Sort(right,w);
	Merge(data,left,right,q,w);
}
int main(){
	// 合併排序法 Merge_Sort
	// 分成分割(Merge_Sort)跟合併(Merge)兩部分 
	// 運用分治法，將資料分到最小，再進行合併排序
	// 因為邊排序邊合併，因此耗時較少
	// O(T) = n * log n
	int size; 
	cout<<"資料數量： " ;
	cin>>size;
	int data[size];
	cout<<"輸入 "<<size<<" 筆資料： ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	Merge_Sort(data,size);
	
	cout<<"排序結果：";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n'; 
	return 0;
}

