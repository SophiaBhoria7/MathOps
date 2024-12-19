//Programmer: Sophia Bhoria
//Date: 9/17/2024
//Purpose: The purpose of this program is to create a program that performs menu-driven math operations that are taken by the user

#include <iostream>

using namespace std;

//Defining the function for addition:
int add(int a, int b) {
  return a + b;
}

//Defining the function for subtraction:
int subtract(int a, int b) {
  return a - b;
}

//Defining the function for multiplication:
int multiply(int a, int b) {
  return a * b;
}

//Defining the function for swapping two numbers
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

//Defining the function to display the menu
void displayMenu(){
  cout << "\n\nPlease choose from the following operations: " << endl;
  cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Swap" << endl;
  cout << "5. Exit" << endl;
}

//Defining to validate the input: 
bool isValidNumber(string input) {  
  for (std::string::size_type i = 0; i < input.length(); i++) { // checks every character in the input
    if (!isdigit(input[i])) { //if it is not a digit, it returns false
      return false;
    }
  }
  return true; // otherwise it returns true
}


int main() {
  int choice;
  int num1, num2;
  string input;

  do {
    displayMenu();
    cout << "Enter your choice (1-5): "; //asks for user choice
    cin >> choice;
    
    if (choice >= 1 && choice <= 4) {
      cout << "Enter two numbers: " << endl; //asks for the two numbers
      cout << "Number 1: " << endl;
      
      // Input validation for the first number
      cin >> input;
      while (!isValidNumber(input)) {
        cout << "Invalid input! Enter a valid number: ";
        cin >> input;
      }
      num1 = stoi(input);

      cout << "Number 2: " << endl;
      
      // Input validation for the second number
      cin >> input;
      while (!isValidNumber(input)) {
        cout << "Invalid input! Enter a valid number: ";
        cin >> input;
      }
      num2 = stoi(input);
    }

    //starting out the switch case statement to allow the user to select one option
    switch (choice) {
      case 1: //this is addition
        cout << "Result: " << add(num1, num2) << endl;
        break;
      case 2: //this is subtraction
        cout << "Result: " << subtract(num1, num2) << endl;
        break;
      case 3: //this is multiplication
        cout << "Result: " << multiply(num1, num2) << endl;
        break;
      case 4: //this is swapping the two numbers
        swap(num1, num2);
        cout << "After your swap, Number 1 is " << num1 << endl;
        cout << "And Number 2 is " << num2 << endl;
        break;
      case 5: //this is exiting the program
        cout << "Bye!" << endl;
        break;
      default: //this is the default option, meaning if its not 1-5, its this
        cout << "Invalid choice! Please select a valid option." << endl;
    }
  } while (choice != 5);
  
  return 0;
}
