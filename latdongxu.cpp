#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a[10000];
  int j=1;
  a[0]=1;
  for(int i=2;i<=1e4;i++)
    {
    	int tg=sqrt(i);
    	if(tg*tg==i)
    	 {
    	 	a[j]=i;
    	 	j++;
    	 	}
    	 	}
    int n;
    cin>>n;
   for(int i=0;i<n;i++)
   {
   int t, dem=0;
   cin>>t;
   int k=0;
   while(true)
   {
   if(a[k]<=t)
     dem++;
    else break;
   	k++;
   	}
   	cout<<t-dem<<endl;
   	}
   	}
   	
   	
     
    	

