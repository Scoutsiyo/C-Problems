/*
Given a five digit integer, print the sum of its digits.

Input Format

The input contains a single five digit number, .

Constraints


Output Format

Print the sum of the digits of the five digit number.

Sample Input 0

10564
Sample Output 0

16
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int digits[5];
    for(int i = 0; i < 5; i++)
    {
        digits[i] = n % 10;
        n /= 10;
    }
    printf("%d\n",digits[0]+digits[1]+digits[2]+digits[3]+digits[4]);
    return 0;
}