#include <stdio.h>

int main() {
    int monthly_payment, installment;
    int yearly_total, two_year_total, two_year_interest,four_year_interest, six_year_interest, eight_year_interest, ten_year_interest,sum_of_total_interest,sum_of_total_monthly_payment ;

    printf("Enter the total Installment  : ");
    scanf("%d", &installment);

    printf("Enter the monthly payment : ");
    scanf("%d", &monthly_payment);

    yearly_total = monthly_payment * 12;
    two_year_total = yearly_total * 2;
    two_year_interest = (installment * 10) / 100;  // Correct 10% calculation
    four_year_interest = (installment * 15) / 100;
    six_year_interest = (installment * 20) / 100;
    eight_year_interest = (installment * 25) / 100;
    ten_year_interest = (installment * 30) / 100;

    printf("| Monthly Payment    %d\n", monthly_payment);
    printf("| Yearly Total       %d \n", yearly_total);
    printf("| 2-Year Total Base %d\n", two_year_total);

    printf("| You will get your money back after tow year's %d\n", two_year_interest);
    printf("| You will get your money back after four year's %d\n", four_year_interest);
    printf("| You will get your money back after six year's %d\n", six_year_interest);
    printf("| You will get your money back after eight year's %d\n", eight_year_interest);
    printf("| You will get your money back after ten year's %d\n", ten_year_interest);

    sum_of_total_interest = (two_year_interest + four_year_interest + six_year_interest + eight_year_interest + ten_year_interest);

    printf("| You will get your money back in ten year's %d\n",sum_of_total_interest );

    sum_of_total_monthly_payment = (yearly_total*10);
    printf("You have deposited money for 10 year's %d:\n",sum_of_total_monthly_payment  );
    return 0;
}
S
