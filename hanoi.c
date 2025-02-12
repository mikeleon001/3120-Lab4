// Program Name: hanoi.c
// Program Description: Implements Hanoi Tower Puzzle problem recursively 
// Author: Mihail Chitorog
// Date: February 11, 2025

#include <stdio.h>

int Hanoi(int n) {  
    if (n == 1)
        return n;
    else {
        return (2*Hanoi(n - 1) + 1);
    }
}

int main() {
    
    int num;

    printf("Enter how tall you want the tower of Hanoi to be: ");
    scanf("%d", &num);
    
    if (num <= 0)
       printf("Please enter a number greater than 0 next time!\n");
    else 
        printf("\nFor %d tall, it will require %d move(s) to move "
                "the tower\n", num, Hanoi(num));

    return 0;
}  
