#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int r, i;
    int dp[31][2] = { 0 };
    printf("How many (ð): ");
    scanf("%d", &r);
    dp[1][0] = dp[1][1] = 1;

    for (i = 2; i <= r; i++)
    {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i - 1][0];
    }
    int total = dp[r][0] + dp[r][1];
    printf("amount of numbers with %d (p): %lld\n", r, total);
    return 0;
}