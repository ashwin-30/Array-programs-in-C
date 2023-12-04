/*
Need to write a program to sort the given array based on frequency of elements.

Sample Input 0

7
3 4 7 6 3 4 4
Sample Output 0

4 4 4 3 3 7 6
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
    int maxi=maximum(k,b);
    // assending order
    while(maxi>0)
    {
    for(int j=0;j<n;j++)
    {
        int p=a[j];
        int m=p-min;
        if(b[m]==maxi)
        {
            for(int i=0;i<maxi;i++)
            {
                printf("%d ",p);
            }
            b[m]=0;
        }
    }
    maxi--;
    }
}
