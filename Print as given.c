/*
Need to write a program to print the array as given(multiple of 3)

Sample Input 0

5
Sample Output 0

3 6 9 12 15
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",3*i);
    }
    return 0;
}
