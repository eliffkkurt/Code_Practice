
# Pointer
# https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    // Complete this function 
    int temp_a=(*a)+(*b);
    int temp_b=(*a)-(*b);
    *a=temp_a;
    *b=abs(temp_b);   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
