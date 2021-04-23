#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
	int a, b,elem;
	node *left, *right;
	node(int u, int v)
	{
		a=u;
		b=v;
		elem=v-u;
		left=right=0;
	}
};
void update(node *&T, int x)
{
	if(T->left)
	update(x<T->left->b?T->left:T->right, x);
	else
	{
		T->left=new node(T->a, x);
		T->right=new node(x, T->b);
	}
	T->elem=max(T->left->elem, T->right->elem);
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int m=20;
	int a[]={13,8,17,3,12,4,9,15};
	node*T=new node(0, m);
	for(int x:a)
	{
		update(T,x);
		cout<<T->elem<<" ";
	}
	
}


