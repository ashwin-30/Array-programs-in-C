/*
Sample Input 0

6
1 2 3 4 5 6
Sample Output 0

3 2 1 6 5 4
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// void reverseSecondHalf(int n,int a[]);
// void reverseFirstHalf(int n,int a[]);
int main() {
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=(n/2)-1;i>=0;i--)
     {
         printf("%d ",a[i]);
     }
    if(n%2==1)
    {
        printf("%d ",a[n/2]);
    }
    for(int i=n-1;i>n/2;i--)
    {
        printf("%d ",a[i]);
    }
    if(n%2==0)
    {
        printf("%d ",a[n/2]);
    }
    
    return 0;
}
