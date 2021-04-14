#include<bits/stdc++.h>
using namespace std;
#define in(x) cout<<"Nhap"<<#x<<":";cin>>x;
int main()
{
//	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a, b;
	buoc1:
		in(a);in(b);
	buoc2:
		if(a!=b)
		{
			a>b?a-=b:b-=a;
			goto buoc2;
		}
	buoc3:
		cout<<a;
	
}


