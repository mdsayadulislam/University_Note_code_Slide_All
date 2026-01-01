#include <stdio.h>

int main() {
    int monthly_payment, installment;
    int yearly_total, two_year_total;
    int two_year_interest, four_year_interest, six_year_interest ,eight_year_interest, ten_year_interest;
    int sum_of_total_interest, total_monthly_payment_10_years;

    // Input
    printf("Enter the total Installment Amount (Tk): ");
    scanf("%d", &installment);

    printf("Enter your Monthly Payment (Tk): ");
    scanf("%d", &monthly_payment);

    // Calculation
    yearly_total = monthly_payment * 12;
    two_year_total = yearly_total * 2;

    two_year_interest   = (installment * 10) / 100;
    four_year_interest  = (installment * 15) / 100;
    six_year_interest   = (installment * 20) / 100;
    eight_year_interest = (installment * 25) / 100;
    ten_year_interest   = (installment * 30) / 100;

    sum_of_total_interest = (two_year_interest + four_year_interest + six_year_interest + eight_year_interest + ten_year_interest);

    total_monthly_payment_10_years = yearly_total * 10;

    // Output
    printf("\nPayment and Profit Summary\n");
    printf("--------------------------------------------\n");
    printf("Monthly Payment            : %d Tk\n", monthly_payment);
    printf("Yearly Payment             : %d Tk\n", yearly_total);
    printf("2-Year Total Payment       : %d Tk\n", two_year_total);
    printf("--------------------------------------------\n");
    printf("Return after  2 Years (10%%) : %d Tk\n", two_year_interest);
    printf("Return after  4 Years (15%%) : %d Tk\n", four_year_interest);
    printf("Return after  6 Years (20%%) : %d Tk\n", six_year_interest);
    printf("Return after  8 Years (25%%) : %d Tk\n", eight_year_interest);
    printf("Return after 10 Years (30%%) : %d Tk\n", ten_year_interest);
    printf("--------------------------------------------\n");
    printf("Total Profit in 10 Years   : %d Tk\n", sum_of_total_interest);
    printf("Total Payment in 10 Years  : %d Tk\n", total_monthly_payment_10_years);
    printf("--------------------------------------------\n");

    return 0;
}
