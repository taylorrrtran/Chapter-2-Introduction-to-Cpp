#include <iostream>
#include <cmath>
#include "Chapter2Problems.h"

int main()
{
	/* The functions below are personal coding solutions to the programming exercises in Chapter 2 - Introduction to C++ from the textbook
	"Starting out with C++: From Control Structurs through Objects (8th Edition)" - By Tony Gaddis. (CIN WAS NOT COVERED IN THIS CHAPTER)
	
	To test a different function, simply replace the function name on line 10 to whichever one you desire */

	chapter2Problems *p1 = new chapter2Problems();
	p1->energyDrinkConsumption();
	system("pause");
	return 0;
}

	void chapter2Problems::addVariables() {

		//This program will output the sum of two variables

		int x = 50, y = 100, sum = x + y;
		std::cout << "Sum of 50 and 100 is " << sum << std::endl;
	}
	
	void chapter2Problems::salesPrediction() {

		//This program will calculate a percentage of total sales

		double percent = 0.58, sales = 8.6 * pow(10, 6), total = percent * sales;
		std::cout << "Total Sales: $" << total << std::endl;
	}

	void chapter2Problems::salesTax() {

		//This program will output the total sales tax on a $95 purchase.

		double stateTax = 0.04, countyTax = 0.02;
		stateTax = stateTax * 95;
		countyTax = countyTax * 95;
		double totalTax = stateTax + countyTax;
		std::cout << "Total sales tax: $" << totalTax << std::endl;
	}
	
	void chapter2Problems::restaurantBill() {

		//This program will output the meal cost, tax amount, tip amount, and total bill

		double bill = 88.67, tax = 0.0675, tip = .20;
		std::cout << "Meal Cost: $" << bill << std::endl;
		tax = tax * bill;
		tip = tip * (bill + tax );
		bill = bill + tax + tip;
		std::cout << "Tax Amount: $" << tax << std::endl;
		std::cout << "Tip Amount: $" << tip << std::endl;
		std::cout << "Total bill: $" << bill << std::endl;
		
	}

	void chapter2Problems::annualPay() {

		//This program will output the annual pay of an employee

		double payAmount = 2200.0, payPeriods = 26.0, annualPay = payAmount * payPeriods;
		std::cout << "Annual Pay: $" << annualPay << std::endl;
	}

	void chapter2Problems::averageValues() {

		//This program will calculate the average of 5 integers

		double var1 = 28, var2 = 32, var3 = 37, var4 = 24, var5 = 33;
		double sum = var1 + var2 + var3 + var4 + var5, average = sum / 5;
		std::cout << "Average value of 28, 32, 37, 24, and 33: " << average << std::endl;
	}

	void chapter2Problems::oceanLevels() {

		/*This program will display the number of millimeters of the ocean's level based on different years. Assume
		  the ocean's level is currently rising at about 1.5 mm per year.*/

		double year5 = 1.50 * 5, year7 = 1.50 * 7, year10 = 1.50 * 10;
		std::cout << "The number of millimeters that the ocean level has increased in 5 years: " << year5 << std::endl;
		std::cout << "The number of millimeters that the ocean level has increased in 7 years: " << year7 << std::endl;
		std::cout << "The number of millimeters that the ocean level has increased in 10 years: " << year10 << std::endl;
		
	}

	void chapter2Problems::totalPurchase() {

		//This program will display an item's price, subtotal of the sale, amount of sales tax (assumed to be 7%), and total.

		double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;
		double sum = item1 + item2 + item3 + item4 + item5;
		double salesTax = sum * 0.07;

		//Display the subtotal, sales tax, and each individual item
		std::cout << "Price of Item 1: $" << item1 << std::endl;
		std::cout << "Price of Item 2: $" << item2 << std::endl;
		std::cout << "Price of Item 3: $" << item3 << std::endl;
		std::cout << "Price of Item 4: $" << item4 << std::endl;
		std::cout << "Price of Item 5: $" << item5 << std::endl;

		std::cout << "Subtotal: $" << sum << std::endl;
		std::cout << "Sales Tax: $" << salesTax << std::endl;
		
		//Calculate the total and display
		sum = sum + salesTax;
		std::cout << "Total: $" << sum << std::endl;

	}

	void chapter2Problems::dataTypeSizes() {

		//This program will display the amount of bytes the following data types use

		std::cout << "Amount of bytes used for the 'char' data type: " << sizeof(char) << std::endl;
		std::cout << "Amount of bytes used for the 'int' data type: " << sizeof(int) << std::endl;
		std::cout << "Amount of bytes used for the 'float' data type: " << sizeof(float) << std::endl;
		std::cout << "Amount of bytes used for the 'double' data type: " << sizeof(double) << std::endl;
	}

	void chapter2Problems::milesPerGallon() {

		//This program will calculate the miles per gallon of a car

		int gasTank = 15, miles = 375;
		double mpg = miles / gasTank;

		//Display variables
		std::cout << "Gallons of gasoline in car: " << gasTank << std::endl;
		std::cout << "Amount of miles car can travel before refueling: " << miles << std::endl;
		std::cout << "Car's miles per gallon: " << mpg << std::endl;
	}

	void chapter2Problems::distancePerTank() {

		/* This program will calculate the distance a car can travel on one tank of gas when driven in town and on the highway.
		   Car has a 20-gallon gas tank that averages 23.5 miles per gallon when driven in town and 28.9 miles per gallon on highway. */

		double highway = 20 * 28.9, town = 20 * 23.5;

		//Display variables
		std::cout << "The distance the car can travel on one tank of gas when driven in town is " << town << " miles." << std::endl;
		std::cout << "The distance the car can travel on one tank of gas when driven in highway is " << highway << " miles." << std::endl;
	}

	void chapter2Problems::circuitBoardPrice() {

		//This program will calculate the selling price of a circuit board that costs $14.95 with 35% profit

		double profit = 14.95 * 0.35, total = 14.95 + profit;

		//Display the selling price
		std::cout << "The selling price of a circuit board that costs $14.95 with a 35 percent profit is $" << total << std::endl;
	}

	void chapter2Problems::personalInfo() {

		//This program will display pieces of personal information on new lines: name, address, college major, telephone number

		std::cout << "Taylor Tran" << std::endl;
		std::cout << "9989 Burbank Drive, Baton Rouge, LA, 70810" << std::endl;
		std::cout << "(985)631-3342" << std::endl;
		std::cout << "College Major: Computer Engineering" << std::endl;
	}

	void chapter2Problems::trianglePattern() {

		//This program will display a triangle pattern

		std::cout << "   *   " << std::endl;
		std::cout << "  ***  " << std::endl;
		std::cout << " ***** " << std::endl;
		std::cout << "*******" << std::endl;
	}

	void chapter2Problems::diamondPattern() {

		//This program will display a diamond pattern

		std::cout << "   *   " << std::endl;
		std::cout << "  ***  " << std::endl;
		std::cout << " ***** " << std::endl;
		std::cout << "*******" << std::endl;
		std::cout << " ***** " << std::endl;
		std::cout << "  ***  " << std::endl;
		std::cout << "   *   " << std::endl;

	}

	void chapter2Problems::landCalculation() {

		/* This program will calculate the number of acres in a tract of land with 391,876 square feet. 
		1 acre is equivalent to 43,560 square feet */

		double acre = 391876 / 43560;
		
		//Display the amount of acres
		std::cout << "The amount of acres in a tract of land with 391,876 square feet is: " << acre << std::endl;
	}

	void chapter2Problems::stockCommission() {

		/* This program will caclucate the amount paid for stock, amount of commission, and total amount paid. 750
		   shares of stock at $35.00/share were bought, and there is 2% commission for the transaction. */

		double stock = 750 * 35, commission = stock * 0.02, total = stock + commission;

		//Display variables
		std::cout << "Amount paid for the stock alone (without the commission): $" << stock << std::endl;
		std::cout << "Amount of commission                                    : $" << commission << std::endl;
		std::cout << "Total ammount paid (for the stock plus the commission)  : $" << total << std::endl;
	}

	void chapter2Problems::energyDrinkConsumption() {

		/*  This program will display the approximate number of customers who purchase one or more energy drinks per week and
			the approximate number of customers who prefer citrus-flavored energy drinks based on customers in the survey.
			The survey consists of 16,500 of its customers and found that approximately 15% of those surveyed purchases 
			one or more energy drinks per week. Of those customers who purhcase energy drinks, approximately 58% of them
			prefer citrus-flavored energy drinks. */

		double purchaseEnergy = 16500 * .15, preferCitrus = purchaseEnergy * 0.58;

		//Display variables
		std::cout << "The approximate number of customers in the survey (16,500 participants) who purchase one or more energy drinks per week: " << purchaseEnergy << std::endl;
		std::cout << "The approximate number of customers in the survey (16,500 participants) who prefer citrus-flavored energy drinks       : " << preferCitrus   << std::endl;
	}

	chapter2Problems::chapter2Problems()
	{
	}