/*
Need to write a program to count the number of even elements.

Sample Input 0

7
1 2 3 4 5 6 8
Sample Output 0

4
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void countEvenElements(int n,int a[]);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    countEvenElements(n,a);
    return 0;
}
void countEvenElements(int n,int a[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
    }
    printf("%d",count);
}
