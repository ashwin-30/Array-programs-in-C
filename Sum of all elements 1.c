/*
Need to write a program to sum of all elements only if it is positive

Sample Input 0

5
4 3 2 -1 5
Sample Output 0

14
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
        sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}
