#include <stdio.h>
double withdraw(double amount,double withdraw_amount) {
    return amount - withdraw_amount;
}
 void run_code () {
    double withdraw_amount;
    double account_balance;
    double balance;


    printf("Enter the the account balance:\n");
    scanf("%lf", &balance);

    printf("Enter the amount you wish to withdraw:\n");
    scanf("%lf", &withdraw_amount);

    if (withdraw_amount < 0) {
        printf("Invalid amount\n");
        return;

    }
    if (withdraw_amount > balance) {
        printf("Insufficient funds\n");
        return;

    }
    else if (withdraw_amount < -1) {
       printf("Invalid amount\n");
       return;

    }
    account_balance = withdraw(balance,withdraw_amount);

    printf("Withdrawal amount:$%.2lf\n", withdraw_amount);
    printf("Remaining balance:$%.2lf\n", account_balance);

    return;



}

int main () {
    run_code();
    return 0;
}