# include <stdio.h>
# include <time.h>

int naive_Fibonacci(int n){
    if (n == 0 || n == 1){
            return 1;
    }
    else{
        return naive_Fibonacci(n-1) + naive_Fibonacci(n-2);
    }
}



int dynamique_Fibonacci(int n, int DP_F){
    if (n <= 1){
        return n;
    }
    else if (DP_F[n] != -1){
        return DP_F[n];
    }
    DP_F[n] = dynamique_Fibonacci(n - 1, DP_F) + dynamique_Fibonacci(n-2, DP_F);
    return DP_F[n]
}


void main(int n){
    naive_Fibonacci(n);
    int DP_F[n + 1] = {-1};
    dynamique_Fibonacci(n, DP_F);
}

