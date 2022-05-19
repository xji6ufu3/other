#include<iostream>
#include<algorithm>
using namespace std;
void Create_Fibonacci(int fibonacci[],int length){ // return y
	fibonacci[0]=0;
	fibonacci[1]=1;
	for(int q=2;q<length;q++) fibonacci[q]=fibonacci[q-1] + fibonacci[q-2];
	return;
}
int FindY(int fibonacci[],int length){
	int q=0;
	while(fibonacci[q]<=length) ++q;
	return q-1;
}
void Fibonacci_Search(int data[],int length,int search){
	//Fy + m = n
	int fibonacci[length];
	for(int q=0;q<length;q++) fibonacci[q]=INT_MIN;
	Create_Fibonacci(fibonacci,length);
//	for(int q=0;q<length;q++) cout<<fibonacci[q]<<' ';
//	cout<<'\n';
	int y=FindY(fibonacci,length+1);
	int x=y-1;
	int m=length-fibonacci[y];
	int i=x;
	if(data[x]<search) i+=m;
//	cout<<"x: "<<x<<" y: "<<y<<" m: "<<m<<" i: "<<i<<'\n';
//	cout<<length<<' '<<fibonacci[y]<<'\n';
//	system("pause");
//	cout<<"m: "<<m<<'\n';
	while(fibonacci[x]>0){
//		cout<<"x: "<<x<<" fib: "<<fibonacci[x]<<" i: "<<i<<'\n';
		if(data[i]<search) i+=fibonacci[--x];
		else if(data[i]>search) i-=fibonacci[--x];
		else if(data[i] == search){
			cout<<"��� "<<search<<" ��b�� "<<i+1<<" ��\n";
			return; 
		}
		if(i<0) i=0;
		else if(i>=length) i=length-1;
	}
	cout<<"�䤣�� "<<search<<'\n';
} 
int main(){
	int search,length;
	cout<<"Fibonacci Search:\n\n";
	cout<<"��ƪ��סG ";
	cin>>length;
	cout<<"��J "<<length<<" ����ơG ";
	int data[length];
	for(int q=0;q<length;q++) cin>>data[q];
	sort(data,data+length);
	cout<<"��J���j�M��ơG ";
	cin>>search;
	Fibonacci_Search(data,length,search);
	return 0;
}

