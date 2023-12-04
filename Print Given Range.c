/*
Sample Input 0

7
2 3 1 4 9 8 7
1 4
Sample Output 0

3 1 4 9
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
    
    int s,e;
    scanf("%d",&s);
    scanf("%d",&e);
    
    for(int i=s;i<=e;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
