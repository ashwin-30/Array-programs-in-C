/*Arrange the Goat

Raman is a farmer, he grows Goats and he has 2 shelters to keep his all Goats in such a order as below. He keeps his Goats in the shelter based on its unit height.

In shelter -1: 3 5 7 8 9
In shelter -2: 2 4 6 10

Since he wants to clean the shelter -2, so that he put the shelter-2's Goats in the shelter -1 but in the order based on the height.

Input Format

We should receive the Goat's heights to shelter -1 and shelter -2

Constraints

Goats height should be between 1 to 20

Output Format

We should arrange the all Goats in Shelter -1 based on its height.
  
Sample Input 

4
1 3 4 6
4
2 5 7 8
  
Sample Output 

1 2 3 4 5 6 7 8

*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void arrange(int n1,int n2,int a[],int b[]);
int maximum(int n,int a[]);
int main() {
    
    int n1,n2;
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<n1;i++)
    {
       scanf("%d",&a[i]); 
    }
    scanf("%d",&n2);
    int b[n2];
    for(int i=0;i<n2;i++)
    {
       scanf("%d",&b[i]); 
    }
    
    arrange(n1,n2,a,b);

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

void arrange(int n1,int n2,int a[],int b[])
{
    int max1,max2,max;
    max1=maximum(n1,a);
    max2=maximum(n2,b);
    if(max1>=max2)
    {
        max=max1;
    }
    else
    {
        max=max2;
    }
    int c[max];
    
    for(int i=0;i<max;i++)
    {
        c[i]=0;
    }
    
    for(int j=0;j<n1;j++)
    {
        int h=a[j];
        c[h-1]++;
    }
    for(int j=0;j<n2;j++)
    {
        int h=b[j];
        c[h-1]++;
    }
    
    for(int k=0;k<max;k++)
    {
        if(c[k]>0)
        {
            printf("%d ",k+1);
        }
    }
    
}
