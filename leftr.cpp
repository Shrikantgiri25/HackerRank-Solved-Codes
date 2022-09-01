#include<stdio.h>
// My code which passed 9/10 test cases
int main()
{
    int i=0;
    int siz,z=0;
    int rot;
    scanf("%d %d",&siz,&rot);
    if(siz>100000 || siz<=0)
    exit(0);
    if(rot>siz || rot<=0)
    exit(0);
    int arr[siz];
    for(i=0;i<siz;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>1000000 || arr[i]<=0)
        exit(0);
    }
    int j;
    for(i=0;i<rot;i++)
    {
        for(j=0;j<siz;j++)
       { 
          if(j==0)
          {
            z=arr[0];
          } 
          arr[j]=arr[j+1];
          if(j==siz-1)
          arr[siz-1]=z;
        }
    }
    
    for(i=0;i<siz;i++)
    {
        printf("%d ",arr[i]);
    }
} 

// solution code which I saw on net which workerd 10/10  test cases
/*
#include<stdio.h>
int main()
{
    int i=0;
    int siz,z=0;
    int rot;
    scanf("%d %d",&siz,&rot);
    //if(siz>100000 || siz<=0)
    //exit(0);
    //if(rot>siz || rot<=0)
    //exit(0);
    int arr[siz];
    for(i=0;i<siz;i++)
    {
        scanf("%d",&arr[i]);
        //if(arr[i]>1000000 || arr[i]<=0)
        //exit(0);
    }
    for (int i = 0; i < siz; i++)
    {
        printf("%d ", arr[(i + rot) % siz]);    
    }
} 
*/
