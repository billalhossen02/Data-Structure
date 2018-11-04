#include<stdio.h>
main()
{
    int a[10][10];
    int i,j;
    int n,m,sum=0;
    printf("How many Rows you want to enter:");
    scanf("%d",&n);
    printf("How many column you want to enter:");
    scanf("%d",&m);
    printf("Enter your elements:\n");
    for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
    scanf("%d",&a[i][j]);





   if(i==j)
    {
        sum=sum+a[i][j];
    }
    }
    }
    printf("the sum is:%d",sum);


}
