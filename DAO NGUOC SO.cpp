#include<bits/stdc++.h>
using namespace std;
bool test(int n)
{
	int N=n, dem=0;
	int tmp, res=0;
	while(n>0)
	{
		tmp=n%10;
		res=res*10 +tmp;
		n=n/10;
		dem++;
		}
	if(res==N && dem%2==0)
	return true;
	else
	return false;
	}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int a[11]={0,11, 22, 33, 44, 55,66,77,88, 99, 1001};
  int i=1002;
  vector<int>A;
   if(n<=10)
    cout<<a[n];
  else
  {
  	n=n-10;
  	while(n>0)
  	{
  		if(test(i)==true)
  		 {A.push_back(i);
  		 i++;
		 n--;}
  		 else
  		 i++; }
  		  cout<<A.back();
			;}
   }
  



