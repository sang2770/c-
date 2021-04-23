// danh sach lien ket don -vong
#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
	int elem;
	node *next;
	node(int e=0){
		elem=e;
	}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n, k;
	cin>>n>>k;
	node *V=new node(1), *H=V;  // khoi tao mot node co gtri 1 , H cho vao thang dau
	for(int i=2;i<=n;i++)
	{
		V->next=new node(i);    
		V=V->next;           // them dan vao cuoi ds mot node V luong cho den thang cuoi
	}
	V->next=H;   // vong lai dau
	// xao mot node bang cach bo qua node do
	while(V->next!=V)
	{
		for(int i=1;i<k;i++)
		V=V->next;
		V->next=V->next->next;
	}
	cout<<V->elem;
}


