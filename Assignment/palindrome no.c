#include <stdio.h>

int isPalindrome(int num) {
    static int reversedNum = 0;
    
    if (num == 0)
        return reversedNum;
    
    reversedNum = (reversedNum * 10) + (num % 10);
    
    return isPalindrome(num / 10);
}

int main() {
    int num, reversedNum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    reversedNum = isPalindrome(num);

    if (reversedNum == num)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    
    return 0;
}