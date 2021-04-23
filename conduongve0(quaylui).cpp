#include<bits/stdc++.h>
using namespace std;
#define ll long long
// moi con duong ve 0
void TRY(int *x, int k, int f)
{
	if(x[k]==f)
	{
		int static d=0;
		cout<<"\n"<<d++<<":";
		for(int i=1;i<k;i++)
		cout<<x[i]<<"->";
		cout<<f;
	}
	else{
		for(int a=1;a*a<=x[k];a++)
		{
			if(x[k]%a==0)
			{
				x[k+1]=(a-1)*(x[k]/a+1);
				if(x[k+1]>=f) TRY(x, k+1, f);
			}
		}
	}
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int x[100], s, f;
	cin>>s>>f;
	x[1]=s;
	TRY(x, 1, f);
	
}


