#include<bits/stdc++.h>
using namespace std;
int dinh;
  vector<int>duongdi[100];
void BFS(int dinh_bandau, int dinh_ketthuc)
{
	queue<int>save;
	save.push(dinh_bandau);
	while(1)
	{
		int x=save.front();
		save.pop();
		cout<<x<<endl;
		if(x==dinh_ketthuc)
			 return ;
		for(int i=0;i<duongdi[x].size();i++)
		{
			save.push(duongdi[x][i]);
			 }
			 }
			 }
			
		
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  freopen("input.txt", "r", stdin);
    cin>>dinh;
  for(int i=1;i<=dinh;i++)
   {
   	int sodinh;
   	cin>>sodinh;
   	for(int j=0;j<sodinh;j++)
   	 {
   	 	int x;
   	 	cin>>x;
   	 	duongdi[i].push_back(x);
   	 	}
   	}
   	BFS(1, 13);
   	}
   	
   	 



