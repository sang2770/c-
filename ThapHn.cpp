#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dem=1;
void Thap(int n, char A, char B, char C)
{
	if(n>1)
	{
		Thap(n-1, A, C, B);
		dem++;
	}
	
	cout<<"Chuyen dia"<<n<<" tu "<<A<<" Sang "<<B<<endl;
	if(n>1)
	{
		Thap(n-1, C, B, A);
		dem++;
	}
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	Thap(4, 'A', 'B', 'C');
	cout<<"So lan chuyen "<<dem;
}


