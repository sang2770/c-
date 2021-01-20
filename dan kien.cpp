#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int T;
  cin>>T;
// tg ngan nhat bang thoi gian cua 1 con gan dau go
// tg dai nhat = tgmoojt con kien di het go- tg min
    for(int i=0;i<T;i++)
   	{long D, N;
	cin>>D>>N;
   	long a[N+3];
   	for(int i=0;i<N;i++)
   	 cin>>a[i];
   	sort(a, a+N);
   	long min=a[0]<(D-a[N-1])?a[0]:D-a[N-1];
   	cout<<D-min<<" "<<min<<endl;
   	
	   }
   	 }
		   	 
   	 
   	 

