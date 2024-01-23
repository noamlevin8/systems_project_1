#include "NumClass.h"

int factorial(int n){
    if (n == 0){
        return 0;
    }
    
    int result = 1, i;
    for (i = 1; i <= n; i++){
        result *= i;
    }
    return result;
    
}

int isPrime(int n){
    int i;
    if (n == 1){
        return 1;
    }
    
    if (n == 0){
        return 0;
    }

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isStrong(int n){
    int t = n;
    int sum = 0;
    while (t > 0){
        sum += factorial(t % 10);
        t /= 10;
    }
    if (sum == n){
        return 1;
    }
    return 0;
}