#include<iostream>
#include<cstdlib> // malloc (malloc 也在<stdlib.h>內)
using namespace std;
struct node{
	node* before;
	int data;
	node* next;
};
node* create_node(int data){
	node* n = (node*)malloc(sizeof(node));
	n->data = data;
	n->before = NULL;
	n->next = NULL;
	return n;
}
void insert_node(node* n1,node* n2){ // n1後面插入n2 
	n2->next = n1->next; // n2指向原本n1指的n3 
	n2->before = n1;
	n1->next = n2; // n1指向n2 
}
void remove_node(node* n){ // 將n的下一個移除，也就是將n->next指向下一個的下一個((n->next)->next) 
	n->next = n->next->next; // 與singly-linked list的部分相同 
}
void print_list(node* list){ // 與singly-linked list的部分相同  
	while(list->next!=NULL){
		cout<< list->data <<' ';
		list = list->next;
	}
	cout<< list->data <<'\n';
}
void free_list(node* list){ // 與singly-linked list的部分相同 
	if(list->next != NULL) free_list(list);
	free(list);
}
int main(){
	node* list = create_node(0); // 創立起點並在起點存入資料'0'
	node* a = create_node(1);
	node* b = create_node(2);
	node* c = create_node(3);
	node* d = create_node(4);
	node* e = create_node(5);
	
	insert_node(list,e); // 0 -> 5
	insert_node(list,a); // 0 -> 1 -> 5
	insert_node(a,b); // 0 -> 1 -> 2 -> 5 
	insert_node(a,c); // 0 -> 1 -> 3 -> 2 -> 5
	insert_node(e,d); // 0 -> 1 -> 3 -> 2 -> 5 -> 4 
	remove_node(a); // 移除a的下一個，也就是c； 0 -> 1 -> 2 -> 5 -> 4
	print_list(list);
	free_list(list); // 釋放空間 
	
	return 0;
}

