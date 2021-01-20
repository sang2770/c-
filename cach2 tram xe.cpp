#include<bits/stdc++.h>
using namespace std;
bool  ss(int a, int b)
{
	 return a>b;
	 }
int res(int T, int D, vector<int> name)
{
	int dem=0, xe=1, max=0,tg=T,xemax=0;
	do{
		if(max<dem)
		{ max=dem;
		  xemax=xe;
		  }
		if(name.back()<=tg)
		 {dem++;
		 name.pop_back();
		 }
		else{
		    tg+=D;
			xe++;
			dem=0;}
			
			}while(name.size()!=0);
			return xemax;
			}
	
int main()
{
    cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    int T, D, a; cin>>T>>D;
	int n;       cin>>n;
	vector<int>name;
	for(int i=0;i<n;i++)
	 {
	 cin>>a;
	 name.push_back(a);
	 }
	 sort(name.begin(), name.end(), ss);
	 cout<<res(T, D,name);
	
	}
			
		
	



