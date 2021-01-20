#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, k;
  cin>>n>>k;
  int dem=1;
  vector<int >save;
  for(int i=1;i<=n;i++)
    save.push_back(i);
    while(save.size()!=1)
    {
    	if(dem<k)
    	{
    		save.push_back(save.front());
    		save.erase(save.begin());
    		dem++;
    		
		}
		else
		{
			save.erase(save.begin());
			dem=1;
		}
	}
	cout<<save[0];
}
    


