#include<bits/stdc++.h>
using namespace std;
//buon vang

int main()
{
	int n;
	cin>>n;
//	vector<int> a(n);
	 int a[n];
	for(auto &x:a) cin>>x;
	long long res=0;
	for(int i=0;i<n;i++)
	{
//		int Max=-INT_MAX; //am vo cung
//		for(int j=i+1;j<n;j++)
//		Max=max(Max, a[j]);
	    Max=*max_element(a+i+1, a+n); //tim max trong mang
		if(Max>a[i])
		res+=Max-a[i];
	}
	//cach 2
	/*
	long long M=a[n-1];
	for(int i=n-2;i>=0;i--)
	if(a[i]>M)
	M=a[i];
	else
	res+=M-a[i];
	*/
	cout<<res;
		point a(4, 5), b=a, c, d, e;
	c=make_pair(6, 7);
	d.first=d.second=8;
	//gan gia tri
	e={0, 0};
	cout<<a.first<<" "<<a.second<<endl;
	cout<<b.first<<" "<<b.second<<endl;
	cout<<c.first<<" "<<c.second<<endl;
	cout<<d.first<<" "<<d.second<<endl;
	cout<<e.first<<" "<<e.second<<endl;
	//nhan doi dong ctrl+e  xoa dong ctrl+d
	
	
}


