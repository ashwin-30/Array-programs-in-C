 
/*
Sample Input 0

6
5 4 3 8 7 1
Sample Output 0

1 3 4 5 7 8
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void arrange(int n,int a[]);
int maximum(int n,int a[]);
int main() {
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    arrange(n,a);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
int maximum(int n,int a[])
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}

void arrange(int n,int a[])
{
    int max;
    max=maximum(n,a);
    int c[max];
    
    for(int i=0;i<max;i++)
    {
        c[i]=0;
    }
    
    for(int j=0;j<n;j++)
    {
        int h=a[j];
        c[h-1]++;
    }
    
    for(int k=0;k<max;k++)
    {
        if(c[k]>0)
        {
            for(int i=0;i<c[k];i++)
            {
                printf("%d ",k+1);
            }
        }
    }
    
}
