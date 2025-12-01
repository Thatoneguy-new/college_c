#include <stdio.h>

int main() {
    int num = 153, original, remainder, result = 0;
    original = num;
    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }
    if(result == num) printf("%d is Armstrong", num);
    else printf("%d is not Armstrong", num);
    return 0;
}