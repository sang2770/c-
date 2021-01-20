#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string a("B"), b("A");
  cout<<a+b<<endl;
  a=b;
  b=a;
  cout<<a<<" "<<b;
}

