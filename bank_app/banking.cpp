#include <iostream>

void showBalance(double balance);
double withdraw(double &balance);
double deposit(double &balance);

int main() {



  int choice; 
  double balance = 1000;

  do
  {
   std::cout << "Welcome to the banking app, Enter your choice\n";
   std::cout << "1. Show Balance\n";
   std::cout << "2. Deposit Money\n";
   std::cout << "3. Withdraw Money\n";
   std::cout << "4. Exit\n";
   std::cin >> choice;

  switch(choice) {
    case 1: 
      showBalance(balance);
      break;
    case 2: 
      deposit(balance);
      break;
    case 3: 
      withdraw(balance);
      break;
    case 4: 
      std::cout << "Thank you for using me, See you!\n";
      break;
    default: 
      std::cout << "Invalid input, try again\n";
      break;

  }
  } while (choice != 4);
  
}

void showBalance(double balance) {
  std::cout << "Balance: $" << balance << "\n\n";
}
double withdraw(double &balance) {
  double withdrawAmount;
  std::cout << "Enter the balance that you would like to withdraw: $";
  std::cin >> withdrawAmount;

  if (balance < withdrawAmount) {
    std::cout << "You do not have that much to withdraw. You have: $" << balance << " in your acount\n";
  } else {
   balance -= withdrawAmount;
   std::cout << "Your new balance is: $" << balance << "\n\n"; 
  }
    return 0;

}

double deposit(double &balance) {
  double depositAmount;

  std::cout << "Enter the amount that you would like to deposit: $";
  std::cin >> depositAmount;
  balance += depositAmount;

  std::cout << "Your new balance is: $" << balance << "\n\n"; 
  return 0;
}