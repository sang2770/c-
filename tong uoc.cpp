//#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;

void tonguoc(long long n)
{
if (n==0) {cout<<0<<endl; return;}
if (n==1) {cout<<1<<endl; return;}
long m=sqrt(n);
long long i,s=1+n;
for(i=2;i<m;i++)
if(n%i==0)
s+=i+n/i;
if(i*i==n)s+=i;
cout<<s<<endl;
}

int main()
{
long t;

//long long n;
cin>>t;
long long *a=new long long [t];
for(int i=0;i<t;i++)
cin>>a[i];
for(int i=0;i<t;i++)
tonguoc(a[i]);
//getch();
}

