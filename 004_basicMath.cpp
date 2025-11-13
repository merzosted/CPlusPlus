#include<iostream>
using namespace std;

// Sum of n numbers

double sumOfNumber(int n){
    int sum = 0;
    for(int i=0; i <= n; i++){
        sum+=i;
    }

    return sum;
}

// Reverse a number

int reverse(int n){

    int rev = 0;

    while(n != 0 ){
        rev = rev*10 + n%10;
        n/=10;
    }

    return rev;
}

// Palindrome

bool isPalindrome(int n){
    int rev=0, temp = n;

    while(temp != 0){
        rev = rev*10 + temp%10;
        temp/=10;
    }
    if(rev == n) return true;
    else return false;
}

// Prime Number

bool isPrime(int n){
    for (int i = 2; i <= n/2; i++){
        if(n%i == 0) return false;
    }
    return true;
}



int main(){
    return 0;
}