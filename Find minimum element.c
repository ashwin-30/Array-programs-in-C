
/*
Sample Input 0

7
3 9 7 6 1 5 2
Sample Output 0

1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int minimum(int n,int a[]);
int main() {
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    
    printf("%d",minimum(n,a));

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
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
    return min;
}
