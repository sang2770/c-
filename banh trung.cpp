#include<bits/stdc++.h>
using namespace std;
bool ss(int a, int b)
{
	return a>b;
	}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int a[n+3];
  int res=0, dem1=0, dem2=0;
  for(int i=0;i<n;i++)
   {cin>>a[i];
   res+=a[i];
   if(a[i]==1)
   dem1++;
   if(a[i]==3)
   dem2++;}
   if(dem2>dem1)
   {
   	res=res-(dem2-dem1)*3;
   	if(res%4!=0)
   	cout<<res/4+(dem2-dem1)+1;
   	else
   	cout<<res/4+(dem2-dem1);
   	}
   	else
   	{
   		if(res%4==0)
   		cout<<res/4;
   		else
   		cout<<res/4+1;
   		}
   
   
 }
 



