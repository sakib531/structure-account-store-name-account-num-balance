#include<stdio.h>

struct Account
{
    char name[50] ;
    int ac_num ;
    float balance ;
};

int main()
{
    int k , n ;
    printf("Enter customers number please\n");
    scanf("%d" , &n);

    struct Account c[n] ;
    for(k = 1 ; k <= n ; k++)
    {
        printf("Enter information of customer %d\n" , k);
        printf("Enter customer's name please\n");
        scanf("%s" , &c[k].name);

        printf("Enter customer's Account number please\n");
        scanf("%d" , & c[k].ac_num);

        printf("Enter customer's balance please\n");
        scanf("%f" , & c[k].balance);
    }

    for(k = 1 ; k <= n ; k++)
    {
        printf("\nInformation of customer %d\n" , k);
        printf("Customer's name is %s\n" , c[k].name);
        printf("Customer's account number is %d\n" , c[k].ac_num);
        printf("Customer's balance is %.3f$\n" , c[k].balance);
    }
    return 0 ;
}