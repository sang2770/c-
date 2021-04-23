#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Sudoku{
	int S[9][9];
	public:
	void in(string f)
	{
		ifstream fin(f);
		for(int i=0;i<9;i++)
			for(int j=0;j<9;j++)
				fin>>S[i][j];
		fin.close();
	}
	void out()
	{
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
				cout<<S[i][j]<<" ";
			cout<<endl;	
		}

	}
	bool dienduoc(int u, int v, int t)
	{
		for(int k=0;k<9;k++)
		{
			if(S[u][k]==t || S[k][v]==t) return 0;
		}
		for(int i=u/3*3;i<u/3*3+3;i++)
			for(int j=v/3*3;j<v/3*3+3;j++)
			if(S[i][j]==t) return 0;
		return 1;
	}
	void TRY(int u,int v)
	{
//		out();
		if(u>8)  {
			cout<<"Ket qua la:"<<endl;
			out();
			return;
		}
		if(S[u][v]!=0)
		TRY(u+v/8, (v+1)%9);
		else
		{
			for(int t=1;t<=9;t++)
			{
				if(dienduoc(u, v, t))
				{
					S[u][v]=t;
//					out();
					TRY(u+v/8, (v+1)%9);
					S[u][v]=0;
				}
			}
			
		}
	}
};
int main()
{
//	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	Sudoku G;
	G.in("Sodoku.txt");
	G.out();
	G.TRY(0, 0);
}


