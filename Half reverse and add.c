/*
Half reverse and add

Need to write a program to reverse the half of the elements from an array and add the even index's elements and print it.

Input Format

7
1 2 3 4 5 6 7

Constraints

1<=n<=10
n is the number of elements
1<=H<=20
H is the elements size.

Output Format

1 2 3 4 7 6 5
12
Here the second half is reveresed

Sample Input 0

6
7 6 5 4 3 2
Sample Output 0

7 6 5 2 3 4
12
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int b=i+1;
        if(b%2==0)
        {
            sum=sum+a[i];
        }
    }
    printf("\n%d",sum);
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
