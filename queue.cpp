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
	else queue[rear++] = data; // ���[�J��� 
}
void Del(){
	if(front == rear) cout<<"This queue is empty\n";
	else cout<<queue[front++]<<'\n'; // ��X�̫e�ݸ�ơA���ǥ�front++������� 
}
/*
queue�W����C�A�u���\�b���rear�i�洡�Jadd�ާ@�B
�b�e��front�i��R��delete�C
�N���ƶ��Aadd��ܦh�@�ӱƶ��ȤH�A
delete��̫ܳe�ݪ��ȤH���}����C
�ާ@�覡��FIFO(First In First Out)
*/
