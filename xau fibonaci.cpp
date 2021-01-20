#include<bits/stdc++.h>
using namespace std;

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
   {
   	string s;
   	int n;
   	long long j;
   	cin>>n>>j;
   	if(n==1)
     s="A";
    else if(n==2)
     s="B";
     else
    {
    int k=3;
    string a1="A", a2="B";
    while(k<=n)
    {
    	
    	s=a1+a2;
		a1=a2;
		a2=s;
		k++;
		}
		}
	cout<<s[j-1]<<endl;
	
   }
   	}

