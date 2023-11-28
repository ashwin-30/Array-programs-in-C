/*
Need to write a program print the array as given input.

Input Format

6
5 6 4 3 8 9

Constraints

1<=n<=20

Output Format

5 6 4 3 8 9

Sample Input 0

5
9 8 6 5 7
Sample Output 0

9 8 6 5 7
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
