/*
Given an array of numbers. Print the numbers without duplication.

Sample Input 0

7
2 2 6 5 2 6 7
Sample Output 0

2 6 5 7
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sortInArray(int n,int a[]);
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
    sortInArray(n,a);
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

void sortInArray(int n,int a[])
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
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        int p=x-min;
        if(b[p]>0)
        {
            printf("%d ",x);
            b[p]=0;
        }
    }
}
