long long factorial(long long n) {       
    if(n==0) return(1);
    else return(n*factorial(n-1));
}

long long permutation(long long n, long long r) {
    return(factorial(n)/factorial(n-r));
}

long long combination(long long n, long long r) {
    return(factorial(n)/(factorial(n-r)*factorial(r)));
}