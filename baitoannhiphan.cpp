#include<bits/stdc++.h>
using namespace std;

int nhiphan(int a)
{
	int dem=0;
	int res=0;
	while(a>0)
	{
		res+=(a%2)*pow(10, dem);
		dem++;
		a=a/2;
		}
	return res;
	}
void nhiphan2(queue<int> &A, int n)
{
	while(n>0)
	{
		A.push(n%2);
		n=n/2;
		}
	}

void cong(queue<int>A, queue<int>B)
{
 stack<int>temp;
 int nho=0;
 int m=min(A.size(), B.size());
 for(int i=0;i<m;i++)
 {
    int res=A.front()+B.front();
    A.pop();
	B.pop();
	if(res<=1)
	 {
	  if(res+nho<=1)
	   {
	   temp.push(res+nho);
	   nho=0;}
	  else
	  {
	   nho=1;
	   temp.push(0);
	   
       } 
    }
	  
	else
	 {
	 temp.push(0+nho);
	 nho=1;
	 }}
	while(A.size()!=0)
	{
		int res=A.front()+nho;
		A.pop();
		if(res<=1)
		 {
		 temp.push(res);
		 nho=0;}
		else
		{
			temp.push(0+nho);
			nho=1;
		}
	}
	if(nho==1)
	 temp.push(1);
	while(temp.size()!=0)
	{
		cout<<temp.top();
		temp.pop();
	}
	
}
	 
	
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
//  int a;
//  cin>>a;
//  cout<<nhiphan(a);
  int n, m;
  cin>>n>>m;
queue<int> A;
queue<int> B;
  nhiphan2(A, n);
  nhiphan2(B, m);
  cong(A, B);
  
  
  }

