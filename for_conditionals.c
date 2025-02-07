/*Task

For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Input Format

The first line contains an integer, .
The seond line contains an integer, .

Constraints


Output Format

Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd

*/

//My solution//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};    
    for ( a; a <= b; a++){
        if(a <= 9){
            printf("%s\n",words[a]);
        }
        else{
            if(a % 2 == 0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
        }
    }
    
    return 0;
}

