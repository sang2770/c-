#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>save;
string a[2]={"0", "1"};
void nhiphan(int n)
{
	queue<string>np;
	np.push(a[0]);
	np.push(a[1]);
	while(np.size()!=0)
	{
		string x=np.front();
		np.pop();
		if(x.size()==n)
		 save.push_back(x);
		else
		 {
		 	np.push(x+'0');
		 	np.push(x+'1');
		 	
		 }
	}
	
	
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  nhiphan(n);
  sort(save.begin(), save.end());
  for(int i=0;i<save.size();i++)
   cout<<save[i]<<endl;
}

