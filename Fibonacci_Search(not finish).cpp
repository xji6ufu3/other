#include<iostream>
#include<algorithm>
using namespace std;
void Create_Fibonacci(int fibonacci[],int length){ // return y
	fibonacci[0]=0;
	fibonacci[1]=1;
	for(int q=2;q<length;q++) fibonacci[q]=fibonacci[q-1] + fibonacci[q-2];
}
int FindY(int fibonacci[],int length){
	int q=0;
	while(fibonacci[q]<=length) ++q;
	return q-1;
}
void Fibonacci_Search(int data[],int length,int search){
	//Fy + m = n
	int fibonacci[length];
//	for(int q=0;q<length;q++) fibonacci[q]=INT_MIN;
	Create_Fibonacci(fibonacci,length);
	for(int q=0;q<length;q++) cout<<fibonacci[q]<<' ';
	cout<<'\n';
	int y=FindY(fibonacci,length+1);
	int x=y-1;
	int m=length-fibonacci[y];
	int i=x;
	if(data[x]<search) i+=m;
	
	while(fibonacci[x]>0){
		if(data[i]<search) i+=fibonacci[--x];
		else if(data[i]>search) i-=fibonacci[--x];
		else{
			cout<<"資料 "<<search<<" 位在第 "<<i+1<<" 項\n";
			return; 
		}
	}
} 
int main(){
	int search,length;
	cout<<"Fibonacci Search:\n\n";
	cout<<"資料長度： ";
	cin>>length;
	cout<<"輸入 "<<length<<" 項資料： ";
	int data[length];
	for(int q=0;q<length;q++) cin>>data[q];
	sort(data,data+length);
	cout<<"輸入欲搜尋資料： ";
	cin>>search;
	Fibonacci_Search(data,length,search);
	return 0;
}

