#include<iostream>
using namespace std;
void Quick_Sort(int data[],int left,int right){
	if(left >= right) return;
	
	int pivot = data[left];
	int lpoint = left+1, rpoint = right; // left and right pointer
	while(true){
		while(lpoint <= right){ //�p��b 
			if(data[lpoint]>pivot) break;
			lpoint++;
		}
		while(rpoint>left){ // �j��b�A�B�b����b�� 
			if(data[rpoint]<pivot) break;
			rpoint--;
		}
		if(lpoint > rpoint) break;
		swap(data[lpoint],data[rpoint]);
	}
	swap(data[left],data[rpoint]);
	Quick_Sort(data,left,rpoint - 1);
	Quick_Sort(data,rpoint + 1,right);
}
int main(){
	// �ֳt�ƧǪk Quick_Sort
	// �Ĳv�̰����j�M�k
	// ����b�A�A�Ndata���Φ�[��b�p],�b,[��b�j]
	// �b����ܨM�w�FQuick_Sort���Ĳv
	int size; 
	cout<<"��Ƽƶq�G " ;
	cin>>size;
	int data[size];
	cout<<"��J "<<size<<" ����ơG ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	int left=0,right=size-1;
	Quick_Sort(data,left,right);
	
	cout<<"�Ƨǵ��G�G";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n';
	return 0;
}

