/*
Need to write a program to count the no. of distinct elements

Sample Input 0

6
1 2 3 4 2 3
Sample Output 0

2
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void countDistinctElement(int n,int a[]);
int minimum(int n,int a[]);
int maximum(int n,int a[]);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    countDistinctElement(n,a);
    return 0;
}
int minimum(int n,int a[])
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            
        }
        
    }
    // printf("%d ",min);
    return min;
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

void countDistinctElement(int n,int a[])
{
    int max=maximum (n,a);
    int min=minimum(n,a);
    int k=max+1-min;
    
    int b[k];
    for(int i=0;i<k;i++)
    {
        b[i]=0;
    }
    for(int m=0;m<n;m++)
    {
        int h=a[m];
        b[h-min]++;
    }
    int count=0;
    for(int i=0;i<k;i++)
    {
        if(b[i]==1)
        {
            count++;
        }
    }
    printf("%d",count);
}
