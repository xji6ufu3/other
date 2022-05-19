#include<iostream>
using namespace std;
void Insertion_Sort(int data[],int size){
	for(int q=1;q<size;q++){ // ���Ƨ� 
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
	// ���J�ƧǪk Insertion_Sort
	// O(T) => n-1 ~ n*(n-1)/2
	int size; 
	cout<<"��Ƽƶq�G " ;
	cin>>size;
	int data[size];
	cout<<"��J "<<size<<" ����ơG ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	Insertion_Sort(data,size); 
	
	cout<<"�Ƨǵ��G�G";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n';
	return 0;
}

