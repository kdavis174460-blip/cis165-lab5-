# cis165-lab5-
Name: Kamryn Davis

Course section: CIS-165-W099
# Step-by-Step Process
  	compound_interest.cpp 
    (1)Ask the user for the principal balance  
  	(2) Ask the user for the annual rate as a percentage 
  	(3) Ask the user for the number of times compounded during one year 
    (4)Convert the percentage entered into a decimal form 
    (5) Calculate the amount using the formula 
    (6) Calculate the interest earned by subtracting the principal from the amount
    (7) Create a readable report 


     loan_payment.cpp
    (1)Ask the user for the loan amount 
    (2)Ask the user for the annual interest 
    (3)Ask the user for the number of monthly payments 
    (4)Convert the annual into a monthly rate using (annualRate/100/12) 
	(5)Calculate the monthly payment using the formula 
	(6)Use pow for exponentiation for the monthly payment formula 
	(7) Calculate the amount paid back and interest paid using the monthly payment and the result from the amount paid back for the interest paid 
    (8)Display the input values from steps 1-3 and the results from the formulas used  
	
# Test Table 
Restored it back to its original values, even though the test table also records other values. Ran it again after restoring it to its assigned values. 


| Program | Value Used | Expected Results | Actual Output | Match or Fix |
| --- | --- | --- | --- |  --- |
| **compound_interest.cpp** — assigned values | 1000,4.25%,12 | Interest Earned: $43.34, Amount in Savings: $1,043.34 | $43.34, $1,043.34 | Match |
| **compound_interest.cpp** — changed values | 2000,5.25%,10 | Interest Earned: $107.52, Amount in Savings: $2107.52 | $107.52, $2107.52  | Match |
| **loan_payment.cpp** — assigned values |10000,12,36 | Monthly Payment:$332.14, Amount Paid Back:$11,957.15, Interest Paid:$1,957.15 | Monthly Payment:$332.14, Amount Paid Back:$11,957.15, Interest Paid:$1,957.15 | Match |
| **loan_payment.cpp** — changed values | 12000,5,24 | Monthly Payment:$526.46, Amount Paid Back:$12634.96, Interest Paid:$634.96 | Monthly Payment:$526.46, Amount Paid Back:$12634.96, Interest Paid:$634.96 | Match |

# How To Run The Program 
	1.Copy the code from the file 
  	2.Go to	[OnlineGDB](https://www.onlinegdb.com/) and paste the code 
	3.Make sure the language is C++ and click "Run" 

# Explanation 
**Why must a percentage be divided by 100 before using it in a formula?**
A percentage is normally out of 100, and the formula requires the needed value to be in decimal form instead of a percentage. 
**How does pow represent exponentiation?**
pow raises the base to the exponent by using std::pow(base,exponent). 
**What does the number of compounding periods change in the savings formula?**
The number of compounding period changes in the savings formula because they determine how frequently the interest will be added to the balance input. 
**How is an annual interest rate converted to a monthly rate?**
An annual interest rate is converted to a monthly rate by dividing the annual rate by 100 and then dividing it by 12. You divide it by 100 first to change the percentage into a decimal before dividing by 12. 
**Why should double be used for these calculations?**
For the purpose of finding compound interest and loan payment, using double is useful in terms of getting the most accurate results possible, especially for money calculations. 
**Why should calculations use full precision when money is displayed to two decimal places?**
Rounding your calculations to two decimals before getting the final results can lead to errors and not getting accurate results, then compared to the calculation at full precision and rounding to two decimal places.
**How are the amount paid back and total interest calculated?**
Amount paid back is calculated by first finding the monthly payments and using that result to times it by the number of payments. Total interest is the result of the amount paid back and minus it by the loan amount. 
**Why are calculations stored in variables before being displayed?**
Calculations are stored in variables before being displayed, so it is easier to read, and in case of any errors, it is easier to fix. 
