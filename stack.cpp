#include<iostream>
using namespace std;
#define max_size 100

void push(int);
void pop();
int stack_top();
int stack_size();

int stack[max_size], top = 0;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	push(0);
	pop();
	pop();
	push(1);
	push(2);
	pop();
	
	cout<<"size: "<<stack_size()<<'\n';
	cout<<"top: "<<stack_top()<<'\n';
	return 0;
}

void push(int data){
	if(top == max_size) cout<<"This stack is full\n";
	else stack[top++] = data; // 存入stack[top]後，top++
	// ex: top==0時，stack[0]=data，top++ -> top==1, 故top==stack中存入的資料數，但stack[top]並未存放資料 
}

void pop(){
	if(top == 0) cout<<"This stack is empty\n";
	else cout<<stack[--top]<<'\n'; // 先top--,並輸出stack[top](最後一筆資料)，若下次push，將會覆蓋當前stack[top]的資料 
}

int stack_top(){
	return stack[top];
}

int stack_size(){
	return top;
}
