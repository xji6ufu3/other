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
	// left��right�䤤���@�|���ѤU�����j���ơA�]���e���ƧǹL�A�����[�bdata�᭱�Y�i 
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
	// �X�ֱƧǪk Merge_Sort
	// ��������(Merge_Sort)��X��(Merge)�ⳡ�� 
	// �B�Τ��v�k�A�N��Ƥ���̤p�A�A�i��X�ֱƧ�
	// �]����Ƨ���X�֡A�]���Ӯɸ���
	// O(T) = n * log n
	int size; 
	cout<<"��Ƽƶq�G " ;
	cin>>size;
	int data[size];
	cout<<"��J "<<size<<" ����ơG ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	Merge_Sort(data,size);
	
	cout<<"�Ƨǵ��G�G";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n'; 
	return 0;
}

