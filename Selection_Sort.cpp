#include<iostream>
using namespace std;
void Selection_Sort(int data[],int size){
	int min;
	for(int q=0;q<size;q++){
		min=q;
		for(int w=q+1;w<size;w++){
			if(data[min]>data[w]) min=w;
		}
		if(q!=min) swap(data[q],data[min]);
	}
}
int main(){
	//  選擇排序法 Selection Sort
	// O(T) = n*(n-1)/2 效率太差 
	int size; 
	cout<<"資料數量： " ;
	cin>>size;
	int data[size];
	cout<<"輸入 "<<size<<" 筆資料： ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	Selection_Sort(data,size);
	
	cout<<"排序結果：";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n';
	return 0;
}

