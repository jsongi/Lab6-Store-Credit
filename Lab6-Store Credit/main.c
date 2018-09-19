//
//  main.c
//  Lab6-Store Credit
//
//  Created by Wang, Alan on 9/19/18.
//  Copyright © 2018 Alan Wang. All rights reserved.
//  Phase 1:
//  Account number
//  Customer name
//  Beginning balance
//  Total charges
//  Total payments
//  Credit limit
//  New balance
//  Credit remaining
//

#include <stdio.h>
#define CREDIT_LIMIT 500
int main()
{
    // Phase 2:
    int account_num;
    char customer_name[40];
    float old_balance;
    float total_charges;
    float total_payments;
    float new_balance;
    float credit_left;
    
    // Phase 3:
    // I: Input data
    // A: Prompt user for data
    printf("Enter the account number: ");
    // B: Use scanf to retrieve data
    scanf("%d", &account_num);
    printf("Enter the customer name: ");
    scanf("%s", customer_name);
    printf("Enter the current balance: ");
    scanf("%f", &old_balance);
    printf("Enter the total amount of items charged: ");
    scanf("%f", &total_charges);
    printf("Enter the total amount of payments: ");
    scanf("%f", &total_payments);
    
    // II: Calculate new balance
    // A: add balance and charges
    new_balance = old_balance + total_charges;
    // B: Subtract payments
    new_balance -= total_payments;
    // C: subtract from credit limit
    credit_left = CREDIT_LIMIT - new_balance;
    
    // III: Output data
    // A: Print data using printf
    printf("\nAccount number: %d\n", account_num);
    printf("Customer name: %s\n", customer_name);
    printf("Beginning balance: %.2f\n", old_balance);
    printf("Total charges: %.2f\n", total_charges);
    printf("Total payments: %.2f\n", total_payments);
    printf("\nNew balance: %.2f\n", new_balance);
    printf("Credit remaining: %.2f\n", credit_left);
    return 0;
}
