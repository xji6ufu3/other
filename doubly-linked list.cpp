#include<iostream>
#include<cstdlib> // malloc (malloc �]�b<stdlib.h>��)
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
void insert_node(node* n1,node* n2){ // n1�᭱���Jn2 
	n2->next = n1->next; // n2���V�쥻n1����n3 
	n2->before = n1;
	n1->next = n2; // n1���Vn2 
}
void remove_node(node* n){ // �Nn���U�@�Ӳ����A�]�N�O�Nn->next���V�U�@�Ӫ��U�@��((n->next)->next) 
	n->next = n->next->next; // �Psingly-linked list�������ۦP 
}
void print_list(node* list){ // �Psingly-linked list�������ۦP  
	while(list->next!=NULL){
		cout<< list->data <<' ';
		list = list->next;
	}
	cout<< list->data <<'\n';
}
void free_list(node* list){ // �Psingly-linked list�������ۦP 
	if(list->next != NULL) free_list(list);
	free(list);
}
int main(){
	node* list = create_node(0); // �Х߰_�I�æb�_�I�s�J���'0'
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
	remove_node(a); // ����a���U�@�ӡA�]�N�Oc�F 0 -> 1 -> 2 -> 5 -> 4
	print_list(list);
	free_list(list); // ����Ŷ� 
	
	return 0;
}

