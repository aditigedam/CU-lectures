#include <stdio.h>
int countCombinations(int n) {
    if (n == 0) {
        return 1;
    } else if (n < 0) {
        return 0;
    } else {
        return countCombinations(n - 2) + countCombinations(n - 3) + countCombinations(n - 5);
    }
}
int main() {
    int n ;
    scanf("%d",&n);
    int numCombinations = countCombinations(n);
    printf("%d",numCombinations);
    return 0;
}
