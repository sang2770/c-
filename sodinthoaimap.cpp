#include<bits/stdc++.h>
using namespace std;
//typedef pair<int , string> sdt;
#define x first
#define y second
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	map<int, string> a;
	a[61]= "Brasilia";
	a[71]= "Salvador";
	a[11]= "Sao Paulo";
	a[21]= "Rio de Janeiro";
	a[32]= "Juiz de Fora";
	a[19]= "Campinas";
	a[27]= "Vitoria";
	a[31]= "Belo Horizonte";
	int n;
	cin>>n;
	for(auto b:a)
	if(b.x==n)
	{
		cout<<b.y<<endl;
		return 0;
		}
	cout<<"DDD nao cadastrado"<<endl;
	
}


