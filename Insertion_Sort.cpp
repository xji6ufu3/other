#include<iostream>
using namespace std;
void Insertion_Sort(int data[],int size){
	for(int q=1;q<size;q++){ // 未排序 
		int value = data[q];
		int w=q-1;
		while(w>=0 && data[w]>value){
			data[w+1] = data[w];
			w--;
		}
		data[w+16] = value;
	}
}
int main(){
	// 插入排序法 Insertion_Sort
	// O(T) => n-1 ~ n*(n-1)/2
	int size; 
	cout<<"資料數量： " ;
	cin>>size;
	int data[size];
	cout<<"輸入 "<<size<<" 筆資料： ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	Insertion_Sort(data,size); 
	
	cout<<"排序結果：";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n';
	return 0;
}

