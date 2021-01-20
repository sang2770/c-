#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  fflush(stdin);
  char *p=(char *)malloc(n*sizeof(char));
  for(int i=0;i<n;i++)
   cin>>*(p+i);
   for(int i=n-1;i>=0;i--)
   cout<<*(p+i);
   
   }



