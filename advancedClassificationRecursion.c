#include "NumClass.h"

int length(int n){
    int result = 0;
    while (n > 0){
        result++;
        n /= 10;
    }
    return result;
    
}

int power(int b, int n){
    if (n == 0){
        return 0;
    }
    
    int i, sum = 1;
    for (i = 0; i < b; i++){
        sum *= n;
    }
    return sum;
}

int recurPalindrome(int n, int s){
    if(n == 0){
        return s;
    }
    return recurPalindrome(n / 10, (n % 10 + s * 10));
}

int recurArmstrong(int n, int l){
    if(n == 0){
        return 0;
    }

    return power(l, n % 10) + recurArmstrong(n / 10, l);
}

int isArmstrong(int n){
    int l = length(n);
    if (n == recurArmstrong(n, l)){
        return 1;
    }
    
    return 0;
}

int isPalindrome(int n){
    int rev = recurPalindrome(n, 0);
    if(rev == n){
        return 1;
    }
    return 0;
}