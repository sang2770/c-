#include<bits/stdc++.h>
using namespace std;
vector<int >save;
map<int, int>A;
map<int, int>B;



int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, m;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
   {cin>>a[i];
     A[a[i]]++;
     save.push_back(a[i]);
     }
  cin>>m;
  int b[m];
  for(int i=0;i<m;i++)
   {cin>>b[i];
   B[b[i]]++;
   save.push_back(b[i]);
   }
   int dem=0;
   sort(save.begin(), save.end());
   for(int i=0;i<save.size();i++)
    {if(save[i]!=save[i+1])
    {
      if(A[save[i]]==B[save[i]])
	   continue;
	   else
	   cout<<save[i]<<" ";
	   
	   }
	   }
	   }
	        
   
   
   
   



