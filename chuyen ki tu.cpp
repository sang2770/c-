#include<bits/stdc++.h>

using namespace std;
char save[]={'S', 'A', 'N','G'};
// chuyen chu thuong thanh chu hoa
string hoa(string a)
{
	string str="";
	for(int i=0;i<a.size();i++)
	if(a[i]>= 'a' and a[i]<= 'z')
	 str+=a[i]-'a'+'A'; // chhyen hoa ve thuong -'A'+'a';
	else
	 str+=a[i];
	return str;
	}

bool check(char a)
{
	for(int i=0;i<4;i++)
	 {if(a==save[i])
	 return true;}
	 
	  return false;
	  }

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string s;
  getline(cin, s);
  cout<<hoa(s)<<endl;
  int dem=0;
  for(int i=0;i<s.size();i++)
   if(check(s[i])==true)
    dem++;
 if(dem ==4)
 cout<<"co";
 else
  cout<< "ko";
  
  }
  
  



