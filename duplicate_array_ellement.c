#include<stdio.h>
int main()
{
    int arr[100],i,j,x=0, count=1, dup, f=0;
    for(; i!=-1;)
    {
        scanf("%d", &i);
        arr[x] = i;
        x+=1;
    }
    for(i =0; i<x; i+=1)
    {
        for(j= 0; j<x; j+=1)
        {
            if (arr[i] == arr[j] && i != j)
            {
                f = 1;
                dup = arr[i];
                count +=1;
            }
        }
        if(f)
            break;
    }
    if (count == 1)
        printf("None\n");
    else
        printf("%d %d",dup,count);
}
