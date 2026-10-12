/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double principal;
    double annual_rate_percent;
    int times_compounded;
    

    std::cout << "Enter the principal balance: $";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (percent): ";
    std::cin >> annual_rate_percent;

    std::cout << "Enter the number of times interest is compounded per year: ";
    std::cin >> times_compounded;

    const double rate = annual_rate_percent / 100.0;
    const double amount =
        principal * pow(1.0 + rate / times_compounded, times_compounded);
    const double interest_earned = amount - principal;

    std::cout << "\n"
              << std::fixed << std::setprecision(2)
              << "Compound Interest Report\n"
              << "------------------------\n"
              << std::left << std::setw(24) << "Annual interest rate:"
              << std::right << std::setw(12) << annual_rate_percent << "%\n"
              << std::left << std::setw(24) << "Times compounded:"
              << std::right << std::setw(12) << times_compounded << '\n'
              << std::left << std::setw(24) << "Principal:"
              << std::right << "$" << std::setw(11) << principal << '\n'
              << std::left << std::setw(24) << "Interest earned:"
              << std::right << "$" << std::setw(11) << interest_earned << '\n'
              << std::left << std::setw(24) << "Amount in savings:"
              << std::right << "$" << std::setw(11) << amount << '\n';

    return 0;
}
