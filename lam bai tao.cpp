#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  if(b>c &&a>=d|| c>=b&&d>a)
   cout<<0;
  else
    {
     if(a<c)
      {
      	if(b<=d&&b>c)
      	 cout<<b-c;
      	if(b>d)
      	cout<<d-c;
      	}
      	else
      	{
      		if(d>a &&d<=b)
      		cout<<d-a;
      		if(d>b)
      		cout<<b-a;
      		}
      		
		    
   }
   }



