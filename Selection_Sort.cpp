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
	//  ��ܱƧǪk Selection Sort
	// O(T) = n*(n-1)/2 �Ĳv�Ӯt 
	int size; 
	cout<<"��Ƽƶq�G " ;
	cin>>size;
	int data[size];
	cout<<"��J "<<size<<" ����ơG ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	Selection_Sort(data,size);
	
	cout<<"�Ƨǵ��G�G";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n';
	return 0;
}

