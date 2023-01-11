
#include<stdio.h>
main()
{
int i,j,r;
printf("Enter num of colums:\n");
scanf("%d",&r);
i=1;
for(i;i<=r;i++)
{
    j=1;
    for(j;j<=r;j++)
    if(i>j)
    printf("%d",j);
    else
    printf("%d",i);

printf("\n");
}
    
}
