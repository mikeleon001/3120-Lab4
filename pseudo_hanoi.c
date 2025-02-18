// Program Name: pseudo_hanoi.c
// Program Description: Implements Hanoi Tower Puzzle problem recursively
// Author: Mihail Chitorog
// Date: February 16, 2025

#include <stdio.h>

int moveCount = 0;  

void Hanoi(int n, char original, char target, char buffer) {
    if (n == 1) {
        moveCount++;  
        return;
    }
    Hanoi(n - 1, original, buffer, target);
    moveCount++;     
    Hanoi(n - 1, buffer, target, original);
}

int main() {
    int num;

    printf("Enter how tall you want the tower of Hanoi to be: ");
    scanf("%d", &num);
    
    if (num <= 0)
        printf("Please enter a number greater than 0 next time!\n");
    else {
        moveCount = 0;  
        Hanoi(num, 'A', 'C', 'B');
        printf("\nFor %d tall, it will require %d move(s) to move "
                "the tower\n", num, moveCount);
    }

    return 0;
}
