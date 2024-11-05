#include <stdio.h>
#include <string.h>

// Define a structure for bank account
struct BankAccount {
    char name[50];
    int account_number;
    float balance;
    char account_type; // 'S' for savings, 'C' for current

    // Define a union for account-specific data
    union {
        float interest_rate;    // For savings account
        float overdraft_limit;  // For current account
    } account_info;
};

// Function to display account details based on type
void displayAccountDetails(struct BankAccount account) {
    printf("\nAccount Details:\n");
    printf("Account Holder's Name: %s\n", account.name);
    printf("Account Number: %d\n", account.account_number);
    printf("Balance: %.2f\n", account.balance);

    // Display specific data based on account type
    if (account.account_type == 'S' || account.account_type == 's') {
        printf("Account Type: Savings\n");
        printf("Interest Rate: %.2f%%\n", account.account_info.interest_rate);
    } else if (account.account_type == 'C' || account.account_type == 'c') {
        printf("Account Type: Current\n");
        printf("Overdraft Limit: %.2f\n", account.account_info.overdraft_limit);
    } else {
        printf("Unknown account type.\n");
    }
}

int main() {
    struct BankAccount account;

    // Input basic account details
    printf("Enter Account Holder's Name: ");
    scanf(" %[^\n]", account.name);

    printf("Enter Account Number: ");
    scanf("%d", &account.account_number);

    printf("Enter Balance: ");
    scanf("%f", &account.balance);

    // Determine account type and input specific details
    printf("Enter Account Type (S for Savings, C for Current): ");
    scanf(" %c", &account.account_type);

    if (account.account_type == 'S' || account.account_type == 's') {
        printf("Enter Interest Rate for Savings Account: ");
        scanf("%f", &account.account_info.interest_rate);
    } else if (account.account_type == 'C' || account.account_type == 'c') {
        printf("Enter Overdraft Limit for Current Account: ");
        scanf("%f", &account.account_info.overdraft_limit);
    } else {
        printf("Invalid account type entered.\n");
        return 1;
    }

    // Display account details
    displayAccountDetails(account);

    return 0;
}
