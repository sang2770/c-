#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Cay IT
//Nghich the
struct node{
	int a, b, elem;
	node *left, *right;
	node(int u, int v)  //ham tao
	{
		a=u;b=v;elem=0;
		if(u==v) left=right=0;
		else
		{
			left=new node(u, (u+v)/2);
			right=new node((u+v)/2+1, v);
		}
	}
};
ll res=0;
void update(node *T, int x)
{
	T->elem++;
	if(not T->left) return;
	if(T->left->b>=x)
	{
		res+=T->right->elem;
		update(T->left,x);
	}
	else
	{
		update(T->right,x);
	}
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n=9;
	node *T=new node(1, n);
	for(int x:{4,7,2,8,1,6,3,9,5})
	update(T, x);
	cout<<res;
}


