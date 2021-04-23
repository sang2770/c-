#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
	int a, b, elem; // quan li daon[a, b] -> elem = max(A[a], ...A[b])
	node *left ,*right;
	node(int u, int v)  // tao cay
	{
		a=u, b=v, elem =-INT_MAX;
		if(u==v) left=right=NULL;
		else left=new node(a, (a+b)/2), right=new node((a+b)/2+1, b);
		
	}
};
void update(node *T, int x, int p)  // dua x=A[p] vao cay T
{
	if(T->a ==T->b)  T->elem=x;
	else  {
		update(p<=T->left->b? T->left:T->right, x, p);
		T->elem=max(T->left->elem, T->right->elem);		
	}
}
int get(node *T , int L, int R)
{
	if(L==T->a && R==T->b)  return T->elem;
	if(R<=T->left->b) return get(T->left, L, R);
	if(L>=T->right->a) return get(T->right, L, R);
	return max(get(T->left,L, T->left->b), get(T->right, T->right->a, R));
//	if(R<T->a || L>T->b)  return -INT_MAX;
//	if(L<=T->a && T->a b<=R)  return T->elem;
//	return max(get(T->left, L, R), get(T->right, L, R));
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[]={0,4, 8, 3, 2, 4, 7, 2, 8, 6};
	int n=sizeof a/sizeof(int);
//	cin>>n;
	node *T= new node(1, n);
	for(int i=1;i<=n;i++)
	update(T, a[i], i);
	cout<<"\n max[3, 7]="<<get(T, 3, 7);
	cout<<"\n max[3, 5]="<<get(T, 3, 5);
	cout<<"\n max[2, 7]="<<get(T, 2, 7);
	
}


