#include<bits/stdc++.h>
using namespace std;
#define ll long long
void hoanvi(float &a, float &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	}
	
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  scanf("%d", &n);
  float *a=new float[n+1];
  for(int i=0;i<n;i++)
   scanf("%f", &a[i]);
  for(int i=0;i<n-1;i++)
   for(int j=i+1;j<n;j++)
    if(a[i]>a[j])
     hoanvi(a[i], a[j]);
    for(int i=0;i<n;i++)
     printf("%f ", a[i]);
     delete[] a;
     }
   
  

