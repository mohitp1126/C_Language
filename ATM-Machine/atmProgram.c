
#include <stdio.h>

// Global variables: Available notes
int th = 1000;   // Rs. 100 notes
int tt = 1000;   // Rs. 200 notes
int tf = 1000;   // Rs. 500 notes
int ttt = 1000;  // Rs. 2000 notes

int main() {
    int rs100, rs200, rs500, rs2000;
    int amount, totalMoney;

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    // Check valid amount
    if (amount <= 0 || amount % 100 != 0) {
        printf("Error: Invalid amount!\n");
        return 0;
    }

    // Calculate total available money
    totalMoney = th * 100 + tt * 200
               + tf * 500 + ttt * 2000;

    if (amount > totalMoney) {
        printf("Sorry! Insufficient funds.\n");
        return 0;
    }

    // Calculate Rs. 2000 notes
    rs2000 = amount / 2000;

    if (rs2000 > ttt) {
        rs2000 = ttt;
    }

    amount = amount - rs2000 * 2000;

    // Calculate Rs. 500 notes
    rs500 = amount / 500;

    if (rs500 > tf) {
        rs500 = tf;
    }

    amount = amount - rs500 * 500;

    // Calculate Rs. 200 notes
    rs200 = amount / 200;

    if (rs200 > tt) {
        rs200 = tt;
    }

    amount = amount - rs200 * 200;

    // Calculate Rs. 100 notes
    rs100 = amount / 100;

    if (rs100 > th) {
        printf("Sorry! Exact amount is not available.\n");
        return 0;
    }

    amount = amount - rs100 * 100;

    // Check if exact amount can be given
    if (amount != 0) {
        printf("Sorry! Exact amount is not available.\n");
        return 0;
    }

    // Update global note stock
    ttt = ttt - rs2000;
    tf = tf - rs500;
    tt = tt - rs200;
    th = th - rs100;

    // Display transaction details
    printf("\nWithdrawal successful!\n");
    printf("Rs. 2000 notes: %d\n", rs2000);
    printf("Rs. 500 notes : %d\n", rs500);
    printf("Rs. 200 notes : %d\n", rs200);
    printf("Rs. 100 notes : %d\n", rs100);

    return 0;
}

