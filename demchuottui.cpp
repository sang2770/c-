#include<bits/stdc++.h>
using namespace std;
bool ss(int a, int b)
{
	return a>b;
	}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n,x;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
		}
	sort(a.begin(), a.end(),ss);
	int L=0, R=L+1;
	while(L<R && R<a.size())
	{
		if(a[L]>=2*a[R])
		{
			a.erase(a.begin()+R);
			L++;
			}
		else{
			R++;
		}
		}
		cout<<a.size();	
		
		
	
}


