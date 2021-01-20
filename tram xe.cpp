#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int T, D, a,i;
	cin>>T>>D;
	int n;
	cin>>n;
	vector<int>name;
	vector<int> xe;
	for(int i=0;i<n;i++)
	 {cin>>a;
	name.push_back(a);
	 }
	 sort(name.begin(), name.end());
	 int tg=T;
	 int res=0;
	while(name.size()!=0)
	{
		if(name.size()==1)
		 if(name.front() <=tg)
		 {res++;
		  xe.push_back(res);}
		if(name.front() <=tg)
		 {res++;
		  name.erase(name.begin());
		  }
		else
		{
		xe.push_back(res);
		res=0;
		tg+=D;
		}
		}
	int max=xe[0];
	for(int i=1;i<xe.size();i++)
	 if(max<xe[i])
	  max=xe[i];
	for( i=0;i<xe.size();i++)
	 if(max==xe[i])
	  break;
	cout<<i+1;
	}
	
		 

	 	
	 	
	   
	  
	 
			 
			 
	





