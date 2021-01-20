#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int a[n];
  vector<int>save;
  vector<int>save1;
  vector<int>save2;
  
  for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	
   	if(a[i]%3==0  )
   	 save.push_back(a[i]);
   	else if(a[i] % 3==1&& a[i]>0|| a[i]<0&& (a[i]+(-1))%3==0)
   	 save1.push_back(a[i]);
   	else  if(a[i]%3==2 && a[i]>0|| a[i]<0&& (a[i]+(-2))%3==0)
   	 save2.push_back(a[i]);
   	 }
   	if(save.size()==0)
   	 cout<<"Khong co so nao chia 3 du 0\n";
   	else
   	 {
   	 	sort(save.begin(), save.end());
   	 	cout<<save.front()<<" "<<save.back()<<endl;
   	 	}
   	if(save1.size()==0)
   	 cout<<"Khong co so nao chia 3 du 1\n";
   	else
   	 {
   	 	sort(save1.begin(), save1.end());
   	 	cout<<save1.front()<<" "<<save1.back()<<endl;
   	 	}
   	if(save2.size()==0)
   	 cout<<"Khong co so nao chia 3 du 2\n";
   	else
   	 {
   	 	sort(save2.begin(), save2.end());
   	 	cout<<save2.front()<<" "<<save2.back()<<endl;
   	 	}


   	 	}
   	
   	 

