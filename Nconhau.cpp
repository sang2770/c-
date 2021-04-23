#include<bits/stdc++.h>

// n con hau
using namespace std;
#define ll long long
int dem=0;
//int datduoc(int *x, int k, int t)  /// dat (k, t) co an cac con hau (i, x[i])
//{
//	for(int i=1;i<k;i++)
//	{
//		if(x[i]==t || k-i==abs(t-x[i]))
//		return 0;
////		if(k-i==t-x[i])
////		return 0;
////		if(k-i==x[i]-t)
////		return 0;
//		
//	}
//	return 1;
//}
unordered_map<int, int> C, A, B; // -A- danh dau duong chieo chinh B- phu C-cot

void TRY(int *x, int k, int n)
{
	if(k>n)
	{
		cout<<"\n"<<++dem<<":";
		for(int i=1;i<=n;i++)
		cout<<x[i]<<" ";
		return;
	}
	else
	{
		for(int t=1;t<=n;t++)
		{
//			if(datduoc(x, k, t))
			if(!C[t] && !A[k-t] && !B[k+t] ) 
			{
				C[t]=A[k-t]=B[k+t]=1;
				x[k]=t;
				TRY(x, k+1, n);
				C[t]=A[k-t]=B[k+t]=0;
			}
		}
	}
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int x[100];
	TRY(x, 1, 4);
	
}


