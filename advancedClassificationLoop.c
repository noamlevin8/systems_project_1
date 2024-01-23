#include "NumClass.h"

int length(int n){
    int result = 0;
    int t = n;
    while (t > 0){
        result++;
        t /= 10;
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

int revers(int n){
    int num = 0, t = n;
    int i, l = length(n);
    for (i = l-1; i > 0; i--){
        num += (t % 10)*power(i,10);
        t /= 10;
    }
    num += t % 10;
    return num;
}

int isArmstrong(int n){
    int l = length(n);
    int sum = 0;
    int t = n;
    while (t > 0){
        sum += power(l, t % 10);
        t /= 10;
    }
    if (sum == n){
        return 1;
    }
    return 0;
}

int isPalindrome(int n){
    int rev = revers(n);

    if (rev == n){
        return 1;
    }
    return 0;  
}
