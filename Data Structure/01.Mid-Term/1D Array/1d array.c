#include<stdio.h>
main()
{
    int a[10];
    int i;
    int n,sum=0;
    printf("How many elements you want to enter:");
    scanf("%d",&n);
    printf("Enter your elements:\n");
    for(i=1;i<=n;i++){
    scanf("%d",&a[i]);

    }
    printf("The value you enter is:\n");
    for(i=1;i<=n;i++){
    printf("%d\n",a[i]);
    sum=sum+a[i];
    }
    printf("The sum is:%d",sum);

}
