#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll res=0;
//tao cay
struct node{
	int a, b, elem;
	node *left, *right;
	//ham tao
	node(int u, int v)
	{
		a=u, 
		b=v;
		elem=0;
		if(u==v) 
		left=right=0;
		else
		{
			left=new node(u, (u+v)/2);
			right=new node((u+v)/2+1, v);
		}
	}
};
void update(node *T, int x)
{
	T->elem++;
	if(not T->left)
	return;
	if(T->left->b>=x)
	{
		res+=T->right->elem;
		update(T->left, x);
	}
	else
	{
		update(T->right,x);
	}
}

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ll n;
	cin>>n;
	node *T=new node(1, n);
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		update(T, x);
	}
	cout<<res;
	
}


