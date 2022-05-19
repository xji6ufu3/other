#include<iostream>
using namespace std;
void Quick_Sort(int data[],int left,int right){
	if(left >= right) return;
	
	int pivot = data[left];
	int lpoint = left+1, rpoint = right; // left and right pointer
	while(true){
		while(lpoint <= right){ //小於軸 
			if(data[lpoint]>pivot) break;
			lpoint++;
		}
		while(rpoint>left){ // 大於軸，且軸不跟軸比 
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
	// 快速排序法 Quick_Sort
	// 效率最高的搜尋法
	// 先找軸，再將data分割成[比軸小],軸,[比軸大]
	// 軸的選擇決定了Quick_Sort的效率
	int size; 
	cout<<"資料數量： " ;
	cin>>size;
	int data[size];
	cout<<"輸入 "<<size<<" 筆資料： ";
	for(int q=0;q<size;q++) cin>>data[q];
	
	int left=0,right=size-1;
	Quick_Sort(data,left,right);
	
	cout<<"排序結果：";
	for(int q=0;q<size;q++) cout<<data[q]<<' ';
	cout<<'\n';
	return 0;
}

