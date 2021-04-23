#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
	int elem;
	vector<node *> child;
	node(int n)  //tao cay
	{
		elem=n;
		for(int a=1;a*a<=n;a++)
		if(n%a==0)
		child.push_back(new node((a-1)*(n/a+1)));
		
	}
};
void preorder(node *T, string d="\n"){
	if(!T) return ;
	cout<<d<<T->elem;
	for(auto z: T->child) preorder(z, d+"\t");
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	node *T=new node(30);
	preorder(T);
}


