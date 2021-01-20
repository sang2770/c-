#include<bits/stdc++.h>
using namespace std;
 
 
void NhapMaTran(int **a, int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         
         cin>>a[i][j];
      }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
        cout<<a[i][j]<<" ";
      printf("\n");
   }
}
 
int main(){
    int a[100][100];
    int m,n;
    cin>>n>>m;
    printf("nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
}
