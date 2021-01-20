#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define ll long long
void doc(FILE *f, int *n, int *a )
{
	
	f=fopen("so.txt", "rt");
	fscanf(f, "%d", n);
	for(int i=0;i<*n;i++)
	 fscanf(f, "%d", (a+i));
	}
void sapxep(int n, int *a)
{
	int temp;
	for(int i=0;i<n-1;i++)
	 for(int j=i+1;j<n;j++)
	  if(a[i]>a[j])
	   {
	   	temp=a[i];
	   	a[i]=a[j];
	   	a[j]=temp;
	   	}
	   	}
	   	
	  
int main()
{
	FILE *f;
	int n;
	int a[10];
	doc(f, &n, a);
	cout<<n;
	for(int i=0;i<n;i++)
	 printf("%d ", a[i]);
	sapxep(n, a);
	for(int i=0;i<n;i++)
	 printf("%d ", a[i]);
	
	 }
	

