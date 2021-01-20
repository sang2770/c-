# include"math.h"
# include"stdio.h"
void nhap(int *a, int n, int m)
{
	int i, j;
	for(i=0;i<n;i++)
	  for(j=0;j<m;j++)
	   scanf("%d", a+i*10+j);
	   
}
void in(int *a, int n, int m)
{
	int i, j;
	for(i=0;i<n;i++){
	
	  for(j=0;j<m;j++)
	   printf("%d\t", *(a+i*10+j));
	   printf("\n");
}
}


main()
{
	int a[10][10];
	int n, m, i, j;
	scanf("%d%d", &n, &m);
	nhap((int*)a, n, m);
    printf("Ma tran vua nhap la:\n");
    in((int*)a,n, m);
    printf("\n Ma tran xoay 90 do la:\n");
   if(n==m)
   for(j=0;j<n;j++){
       for(i=m-1;i>=0;i--)
	printf("%d", a[i][j]);
	printf("\n");}
	else if(n<m)
	for(i=0; i<m;i++)
	{
	
	 for(j=n-1;j>=0;j--)
	 printf("%d", a[j][i]);
	 printf("\n");
}
else
  for(i=0; i<m;i++)
	{
	
	 for(j=n-1;j>=0;j--)
	 printf("%d", a[j][i]);
	 printf("\n");
}
	
	
	
}
