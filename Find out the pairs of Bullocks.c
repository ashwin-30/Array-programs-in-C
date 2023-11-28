/*Find out the pairs of Bullocks

A farmer Rajendran has Bullocks in shelter-1 and shelter-2.
He has some debt needs to pay to bank, so he plans to sell his bullock.
He sells pairs not as a single Bullock, so that he get more money than selling as a single bullock.

Input Format

Bullocks in shelter-1 and shelter-2.
Shelter-1: 2 4 1 3 6 5 8 7
Shelter-2: 4 1 6 4 1 5 6 1 4

Constraints

1<=H<=20
Here H is the unit height of the bullocks

Output Format

1 - 2
4 - 2
5 - 1
6 - 1

In 4 unit height, he has 2 pairs
In 1 unit height, he has 1 pairs and so on..
The result should be in ascending order of height.

Sample Input 0

5
1 4 3 2 5
7
3 4 2 6 8 1 9
Sample Output 0

1 - 1
2 - 1
3 - 1
4 - 1
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
        int d=c[k]/2;
        
        if(d>0)
        {
            printf("%d - %d\n",k+1,d);
        }
    }
    
}
