/*
Reverse Entire Array

Need to write a program to reverse the entire Array

Input Format

5
7 6 5 2 3

Constraints

1<=n<=20

Output Format

3 2 5 6 7

Sample Input 0

6
4 3 2 7 8 1
Sample Output 0

1 8 7 2 3 4 

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
    for (int i = n-1; i >=0; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}
