#include<bits/stdc++.h>
using namespace std;
#define ll long long
int find(int *a, int L, int R, int x)
{
	if(L>R) return 0;
	int M=(L+R)/2;
	if (a[M]==x) return 1;
	return  a[M]>x? find(a, L, M-1, x):find(a, M+1, R, x);
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[]={1,2,3,4,5,6,7};
	int n=sizeof(a)/sizeof(int);
	cout<<find(a, 0, 6, 3)?"ok":"no";
//	Ham tim kiem co san																				
	auto *it=lower_bound(a, a+n,5 );   // tim vi tri lown hon hoac bang
//	auto *it=upper_bound(a, a+n,5 );  // tim vi tri lon hon han
	cout<<"Vi tri tim thay"<<it-a;
}


