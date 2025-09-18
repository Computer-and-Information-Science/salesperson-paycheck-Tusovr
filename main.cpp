#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

  // Prompt for the file name
  cout << "Enter the file name: ";
  string fileName;
  getline(cin, fileName);

  // Open the file
  ifstream inputFile(fileName);

  // Read the data from the file
  string firstName, lastName;
  double baseSalary, commissionPercent;
  double totalSales;
  double expenses;

  inputFile >> firstName >> lastName;
  inputFile >> baseSalary >> commissionPercent;
  inputFile >> totalSales;
  inputFile >> expenses;

  // Compute the values
  double commission = (commissionPercent / 100) * totalSales;
  double grossSalary = baseSalary + commission + expenses;

  // Set the output formatting
  cout << fixed << setprecision(2);

  // Print the payroll data
  cout << "Payroll data for " << firstName << " " << lastName << endl;

  cout << endl;

  cout << left << setw(15)<< "Base Salary: " 
       << right << setw(10) << baseSalary << endl;

  cout << left << setw(15)<< "Commission: " 
       << right << setw(10) << commission << " "
       << "(" << setprecision(1) << commissionPercent << "% of " 
       << setprecision(2) << totalSales << ")" << endl;

  cout << left << setw(15)<< "Expenses: " 
       << right << setw(10) << expenses << endl;

  cout << left << setw(15) << "" 
       << right << setw(10) << "--------" << endl;

  cout << left << setw(15) << "Total: " 
       << right << setw(10) << grossSalary << endl;

  return 0;

}
