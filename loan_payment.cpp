/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double loan_amount;
    double annual_rate_percent;
    int number_of_payments;
    double monthly_payment;

    std::cout << "Enter the loan amount: $";
    std::cin >> loan_amount;

    std::cout << "Enter the annual interest rate (percent): ";
    std::cin >> annual_rate_percent;

    std::cout << "Enter the number of monthly payments: ";
    std::cin >> number_of_payments;

    const double monthly_rate = annual_rate_percent / 100.0 / 12.0;
   
    const double rate = pow(1.0 + monthly_rate, number_of_payments);
    monthly_payment = (monthly_rate * rate / (rate - 1.0)) * loan_amount;

    const double amount_paid_back = monthly_payment * number_of_payments;
    const double interest_paid = amount_paid_back - loan_amount;

    std::cout << "\nLoan Payment Report\n"
              << "-------------------\n"
              << "Monthly interest rate: " << monthly_rate << " ("
              << monthly_rate * 100.0 << "%)\n"
              << "Number of payments: " << number_of_payments << '\n'
              << std::fixed << std::setprecision(2)
              << "Loan amount: $" << loan_amount << '\n'
              << "Monthly payment: $" << monthly_payment << '\n'
              << "Amount paid back: $" << amount_paid_back << '\n'
              << "Interest paid: $" << interest_paid << '\n';

    return 0;
}
