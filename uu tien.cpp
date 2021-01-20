#include<bits/stdc++.h>
using namespace std;
typedef struct
{
	int first, second;
	}toado;
bool ss(toado a, toado b)
{
	return a.second>b.second;
	}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  map<int, int>A;
  int n;
  cin>>n;
  int a[n];
  toado b[n];
  for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	A[a[i]]++;
   	}
   	int i=0, dem=0;
   	for(auto M:A)
   	{
   		b[i].first=M.first;
   		b[i].second=M.second;
   		i++;
   		dem++;
   		}
   	sort(b, b+dem, ss);
   	for(int i=0;i<dem;i++)
   	 cout<<b[i].first<<" "<<b[i].second<<endl;
   	
   	 
   	
   
   	
   	 }
   	 
   	



