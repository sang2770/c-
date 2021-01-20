#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  int tg=c*60+d-a*60-b;
  if(a==c && d-b<=0)
  {
  	tg=24*60+d-b;
  cout<<"O JOGO DUROU "<<tg/60<<" HORA (S) E "<<tg%60<<" MINUTO (S)";}
  else if(c<a)
  {
  	tg=(24-a)*60+d-b+(c-0)*60;
  cout<<"O JOGO DUROU "<<tg/60<<" HORA (S) E "<<tg%60<<" MINUTO (S)";}
  else
  cout<<"O JOGO DUROU "<<tg/60 <<" HORA (S) E "<<tg%60<<" MINUTO (S)";


}


