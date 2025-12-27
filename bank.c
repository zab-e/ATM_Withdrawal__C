#include <stdio.h>
double withdraw(double amount, double withdraw_amount)
{
    return amount - withdraw_amount;
}
void run_code()
{
    double withdraw_amount;
    double account_balance;
    double balance;
    char again;

    printf("Enter the the account balance:\n");
    scanf("%lf", &balance);

    printf("Enter the amount you wish to withdraw:\n");
    scanf("%lf", &withdraw_amount);

    if (withdraw_amount < 0)
    {
        printf("Invalid amount\n");
        return;
    }
    if (withdraw_amount > balance)
    {
        printf("Insufficient funds\n");
        return;
    }
    else if (withdraw_amount < -1)
    {
        printf("Invalid amount\n");
        return;
    }
    account_balance = withdraw(balance, withdraw_amount);

    printf("Withdrawal amount:$%.2lf\n", withdraw_amount);
    printf("Remaining balance:$%.2lf\n", account_balance);

    
    printf("Do you want to continue (y/n):\n");
    scanf("%lf", &again);
    if (again == 'y' || again == 'Y'){
        run_code();
    }
    
    else if (again == 'n' || again == 'N') {
        return;
    }





    return;

    
}

int main()
{
    run_code();
    return 0;
}
