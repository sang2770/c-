#include<bits/stdc++.h>
using namespace std;
#define ll long long
void nhap(int *a, int n)
{
	for(int i=0;i<n;i++)
	 scanf("%d", &a[i]);
	 }
int res(int *a, int n, int &s)
{
	int  dem=0;
	for(int i=0;i<n;i++)
	 if(a[i]>0)
	 {
	 	dem++;
	 	s=s*a[i];
	 	}
	if(dem==0)
	 return 0;
	return 1;
	}
	
	
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
   int n;
   scanf("%d", &n);
   int *a;
   a=new int[n+1];
   int s=1;
   nhap(a, n);
   int tg=res(a, n, s);
   if(tg==0)
   printf("K co so duong nao!\n");
   else
    printf("%d", s);
	}   

