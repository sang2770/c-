#include<bits/stdc++.h>
using namespace std;
char test[]={'A', 'E', 'I','O','U', 'a', 'e','i', 'o', 'u'};
bool check(char a)
{
  for(int i=0;i<10;i++)
   if(a==test[i])
    return true;
return false;
}
string daokitu(string s)
{
	string res="";
	for(int i=0;i<s.size();i++)
	 {
	 	if(s[i]>='A' && s[i]<='Z')
	 	 res+=s[i]-'A'+'a';
	 	else
	 	 res+=s[i]-'a'+'A';
	 	 }
	return res;
	}
string hoa(string s)
{
	string res="";
	for(int i=0;i<s.size();i++)
	 {	if(s[i]>='a' && s[i]<='z')
	 	 res+=s[i]+'A'-'a';
	 	 else res+=s[i];
	 	 }
	return res;
	}
string thuong(string s)
{
	string res="";
	for(int i=0;i<s.size();i++)
	 {	if(s[i]>='A' && s[i]<='Z')
	 	 res+=s[i]-'A'+'a';
	 	 else res+=s[i];
	 	 }
	return res;
	}
string ueoai(string s)
{
	string res="";
	for(int i=0;i<s.size();i++)
	 {
	  if(check(s[i])==true)
	  {
	  	if(s[i]>='A' && s[i]<='Z')
	    res+=s[i]-'A'+'a';
	    else
	    res+=s[i];
	    }	
	 	else 
	{   if(s[i]>='a' && s[i]<='z')
	 	  res+=s[i]-'a'+'A';
	 	else 
	 	 res+=s[i];
	 	 }
	 	}
	return res;
	}
string xenke(string s)
{
string res="";
for(int i=0;i<s.size();i++)
{
 if(i%2==0)
  {
  	if(s[i]>='a' && s[i]<='z')
  	res+=s[i]-'a'+'A';
  	else
  	res+=s[i];
  	}
  else
  {
  	if(s[i]>='A' && s[i]<='Z')
  	 res+=s[i]-'A'+'a';
  	else
  	res+=s[i];
  	}
	}
return res;

}
	
	 	
	
	 	 
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string s;
  cin>>s;
  cout<<s<<endl;
  cout<<daokitu(s)<<endl;
  cout<<hoa(s)<<endl;
  cout<<thuong(s)<<endl;
  cout<<ueoai(s)<<endl;
  cout<<xenke(s);
  }
  

