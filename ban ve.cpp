#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, i;
  cin>>n;
  int *a=new int[n+1];
  for(int i=0;i<n;i++)
   cin>>a[i];
   ll dem=0, dem2=0;
   for(i=0;i<n;i++)
    {
      if(a[i]==25)
       {
	   dem+=25;
	   dem2++;
}
       else
       {
       	if(dem>=a[i]-25)
       	 {
			dem=dem+a[i]-(a[i]-25);
			dem2++;
		}
       	else
       	 {
       	 	cout<<"NO";
       	 	break;
			}
	 }

	}
	if(dem2==n)
	cout<<"YES";

}

