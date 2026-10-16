#include <stdio.h>
#include <math.h>

int is_sorted_increasing(int n, int* A){
    int i = 1;
    for (i; i<= n; i++){
        if (A[i] <= A[i-1]){
            printf("liste pas croissante\n");
            return 1;
        }
    }
    printf("liste croissante\n");
    return 0;
}

int search(int a, int n, int* A){
    int i = 0;
    for(i; i<=n; i++){
        if (A[i] == a){
            printf("valeur dans la liste\n");
            return 0;
        }
    }
    printf("valeur pas dans la liste\n");
    return 1;
}

int jump_search(int a, int n, int* A){
    int b = sqrt(n);
    if (is_sorted_increasing == 1){
        return -1;
    }
    for (int i=b; i<=b; i += b){
        if (A[i-1] >= a){
            for (int j = i-b; j<=i; j++){
                if (A[j] == a){
                printf("valeur dans la liste\n");
                return 0;
                }
            }
        }
    }
    printf("valeur pas dans la liste\n");
    return 1;
}

int binary_search(int a, int n, int* A){
    if (is_sorted_increasing == 1){
        printf("liste pas bonne\n");
        return -1;
    }
    int b = n/2;
    if (A[b] > a){
        binary_search(a, b, A);
    }
    else if (A[b] < a){
        int c = ;
        binary_search(a, c ,A);
    }
    else if (A[b] == a){
        printf("valeur dans la liste\n");
        return 0;
    }
    printf("valeur pas dans la liste\n");
    return 1;
} 




int A[5] = {5, 4, 6, 2, 1};

void main(){
    is_sorted_increasing(5, A);
    search(3, 5, A);
    jump_search(3, 5, A);
}
