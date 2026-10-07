#include <stdio.h>
int main() {
    int pin = 1 ;
    int enterpin ;
    float balance = 12500.00 ;
    int attempt = 3;
    int options ;
    int run_amt = 1;
    int total_transactions = 0;
    
    while (run_amt == 1)
    {
      printf("Enter Pin = ");
      scanf("%d",&enterpin);
      if (enterpin == pin)
      {
        printf("===== Welcome =====\nBalance:  ₹ %.2f\n-------------------\n1. Check Balance\n2. Withdraw\n3. Deposit\n4. Exit\n===================\n",balance);
        printf("Enter Choice : ");
        scanf("\n%d",&options);
        switch (options)
        {
        case 1:
            total_transactions++;
            printf("\n===================\nBalance :  ₹ %.2f\nTransaction Number : %d\n===================\nTHANKYU FOR VISITING\n===================\n\n",balance, total_transactions);
            break;
        case 2: {
            float amount;
            printf("Enter Withdraw Amount : \n");
            scanf("%f",&amount);
            if (amount>balance || amount <= 0)
            {
                printf("ERROR!!! INVALID AMOUNT(YOU DONT HAVE MONEY Begger!!!)\n");
            }
            else
            {
                balance -= amount;
                total_transactions++;
                printf("\n\nTransaction: Withdrawal\nAmount      : ₹ %.2f\nBalance     : ₹ %.2f\nTransaction Number : %d\n===================\n\n===================\nTHANKYU FOR VISITING\n===================\n\n",amount,balance,total_transactions);
            }
            break;
        }   
        case 3: {
            float deposite_amt;
            printf("Enter Deposit Amount : \n");
            scanf("%f",&deposite_amt);
            if (deposite_amt <= 0)
            {
                printf("ERROR!!! INVALID AMOUNT\n");
            }
            else
            {
                balance += deposite_amt;
                total_transactions++;
                printf("\n\nTransaction: Deposit\nAmount      : ₹ %.2f\nBalance     : ₹ %.2f\nTransaction Number : %d\n===================\n\n===================\nTHANKYU FOR VISITING\n===================\n\n",deposite_amt,balance,total_transactions);
            }
            break; 
        } 
        case 4:
            printf("\n\n===================\nTHANKYU FOR VISITING\n===================\n\n");
           
            break;
        default:
            printf("ERROR CHOOSE CORRECT OPTIONS\n");
            break;
        }
        if (total_transactions >= 5) 
        {
            printf("Transaction limit reached. Please re-login.\n\n");
            run_amt = 0;
        }
    }
    else{
        printf("\nWRONG PIN\n");
        attempt--;
        printf("Attempts remaining: %d\n\n", attempt);
        if (attempt == 0) {
            printf("Card blocked! Too many incorrect attempts.\n");
            break; 
        }
    }
}
    return 0;
}