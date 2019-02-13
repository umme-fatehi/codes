#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int a[50];
    //int a[50]={0,1,1,0,1,1};
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter numbers\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
printf("voltage level=%d\n",a[0]);
for(int i=0;i<n-1;i++)
{
    if (a[i]<a[i+1])
    {
        printf("voltage level=%d || rising edge\n",a[i+1]);
    }

    else if (a[i]>a[i+1])
    {
        printf("voltage level=%d || falling edge\n",a[i+1]);
    }
    else
     {
        printf("voltage level=%d || no level edge\n", a[i+1]);
    }

}
return 0;
}
