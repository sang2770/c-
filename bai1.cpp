#include<bits/stdc++.h>
using namespace std;
string read(string name)
{ 
ifstream f(name);
string t;
while(!f.eof())
{
  string x;
  getline(f, x);
  t+=x+"\n";
}
f.close();
for(char &z:t) z=toupper(z);
return t;

  }
void write(string t, FILE  *f=stdout)// mac dinh xuat ra man hinh
{
	fprintf(f, "%s", t.c_str());
	
}
string upper(string t)
{
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string t=read("kitu.txt");
  FILE *f=fopen("kytuhoa.txt", "wt");
  write(t);
  write(t, f);
  fclose(f);
  return 0;
}



