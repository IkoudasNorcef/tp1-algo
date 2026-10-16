#include <stdio.h>

void countdown(int n) {
    if (n == 0) {
        printf("END!");
    }
    else {
        printf("%d", n);
        countdown(n - 1);
    }
}

void countdown2(int n) {
    if (n == 0) {
        printf("END!");
    }
    else {
        countdown2(n - 1);
        printf("%d", n);
    }
}

int hash(int key,int size){
    int sum = 0;
    for (each char in key){
        sum += ASCII(char)
    }
    return sum % size;
}

int main() {
    countdown (3);
    countdown2 (3)
    return 0;
}


struct Date {
    int year , month , day;
};

struct Person {
    char name [32];
    struct Date dob;
};

int main(void) {
    struct Person p = {"Lina", {1999 , 7, 15}};
    printf("%s born %d-%02d-%02d\n",
        p.name , p.dob.year , p.dob.month , p.dob.day);
    struct Person *pp = &p;
    pp ->dob.year = 2000; 
    printf("Updated year: %d\n", p.dob.year);
    return 0;
}
