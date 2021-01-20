#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct{
	int val, vt;
}diem;
bool ss(diem a, diem b)
{
	return a.val<b.val;
	}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  diem a[n+1];
  for(int i=0;i<n;i++)
   {
   cin>>a[i].val;
   a[i].vt=i+1;
   }
   sort(a, a+n, ss);
   for(int i=0;i<n;i++)
    cout<<a[i].vt<<" ";
    }
   


