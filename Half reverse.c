/*
Half reverse.

Need to write a program to reverse half of the given array

Input Format

5
4 5 3 8 1

Constraints

1<=n<=20

Output Format

4 5 1 8 3

Sample Input 0

6
4 3 2 1 6 7
Sample Output 0

4 3 2 7 6 1

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 void reverse(int n,int a[]);

int main() {
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    reverse(n,a);
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
 void reverse(int n,int a[])
 {
      int st=n/2;
     for(int i=st,j=n-1;i<j;i++,j--)
     {
         int temp=a[i];
         a[i]=a[j];
         a[j]=temp;
     }
 }
