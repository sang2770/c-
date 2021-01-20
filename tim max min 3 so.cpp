#include<bits/stdc++.h>
using namespace std;
int timmin(int a, int b, int c)
{
	int min=a;
	if(min>b)
	min=b;
	if(min>c)
	min=c;
	return min;
	
	}
int timmax(int a, int b, int c)
{
	int max=a;
	if(max<b)  max=b;
	if(max<c) max=c;
	return max;
	}
void maxmin(int &a, int &b, int &c, int &max, int &min)
{
	cin>>a>>b>>c;
	max=timmax(a, b, c);
	min=timmin(a, b, c);
	}
	
	
 int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a, b, c;
  int max, min;
  maxmin(a, b, c, max, min);
  cout<<max<<" "<<min;
  }
  
  
  



