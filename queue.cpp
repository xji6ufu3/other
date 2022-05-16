#include<iostream>
using namespace std;
#define max_size 4

void Add(int);
void Del();
int queue[max_size],front=0,rear=0;

int main(){
	Add(0);
	Del();
//	Del();
	Del();
	Add(1);
	Add(2);
	Add(3);
	Add(4);
	Del();

	return 0;
}
void Add(int data){
	if(rear == max_size) cout<<"This queue is full\n";
	else queue[rear++] = data; // 後方加入資料 
}
void Del(){
	if(front == rear) cout<<"This queue is empty\n";
	else cout<<queue[front++]<<'\n'; // 輸出最前端資料，並藉由front++移除資料 
}
/*
queue名為佇列，只允許在後端rear進行插入add操作、
在前端front進行刪除delete。
就像排隊，add表示多一個排隊客人，
delete表示最前端的客人離開隊伍。
操作方式為FIFO(First In First Out)
*/
