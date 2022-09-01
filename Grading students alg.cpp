#include<stdio.h>
#include<string.h>
int arr[100];
int main()
{
    int i,z;
    //printf("Enter size of array\n");
    scanf("%d",&z);
    if(z<1 || z>60)
    exit(0);
    for(i=0;i<z;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0 || arr[i]>100)
        exit(0);
        if(arr[i]%5>=3 && arr[i] >= 38)
        {
            //printf("inside if\n");
            if(arr[i]%5==4)
            arr[i] = arr[i]+=1;
            else if(arr[i]%5==3)
            arr[i]=arr[i]+=2;
        }
    }
    for(i=0;i<z;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
