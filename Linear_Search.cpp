#include<iostream>
#include<algorithm>
using namespace std;
int linear_search(int data[], int length, int search){
	for(int q=0;q<length;q++){
		if(data[q]==search) return q+1;
	}
	return -1;
}
int main(){
	// �`�Ƿj�M�k Linear search
	int search,length,ans;
	cout<<"Linear Search:\n";
	cout<<"��ƪ��סG ";
	cin>>length;
	
	int data[length];
	cout<<"��J "<<length<<" ����ơG\n";
	for(int q=0;q<length;q++) cin>>data[q];
	sort(data,data+length); // include <algorithm>
	
	cout<<"��J���j�M��ơG\n";
	cin>>search;
	ans = linear_search(data,length,search);
	
	if(ans < 0) cout<<"can't find "<<search<<'\n';
	else cout<<"�b�� "<<ans<<" �B��� "<<search<<'\n';
	
	return 0;
}

