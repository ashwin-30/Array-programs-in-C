/*
Sort the array alternately i.e first element should be max value, second min value,
third second max, third second min

Sample Input 0

7
1 2 3 4 5 6 7
Sample Output 0

7 1 6 2 5 3 4
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sortArray(int n,int a[]);
void sortAlternatively(int n,int a[]);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sortArray(n,a);
    return 0;
}
void sortArray(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        int min=a[i];
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
        
        if(min!=a[i])
        {
            int temp=a[i];
            a[i]=a[index];
            a[index]=temp;
        }
    }
    // for(int v=0;v<n;v++)
    // {
    //     printf("%d",a[v]);
    // }
    sortAlternatively(n,a);

}
void sortAlternatively(int n,int a[])
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        printf("%d %d ",a[j],a[i]);
    }
    if(n%2==1)
    {
        printf("%d ",a[n/2]);
    }
}
