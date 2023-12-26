#include <iostream>
using namespace std;

int main() {
   double balance = 10000.0; // Initialize the account balance to ₹10,000.

   // Create an infinite loop for the ATM menu
   while (true) {
      int choice;
      cout<<"ATM Menu: " <<endl;
      cout<<"1. CHECK BALANCE" <<endl;
      cout<<"2. DEPOSIT MONEY" <<endl;
      cout<<"3. WITHDRAW MONEY" <<endl;
      cout<<"4. EXIT" <<endl;
      cout<<"Enter your choice (1-4): ";
      cin>>choice;

      switch (choice) {
         case 1:
            cout<<"Your current balance is ₹" << balance <<endl;
            break;

         case 2:
            double depositAmount;
            cout<<"Enter the amount to deposit: ₹";
            cin>>depositAmount;

            if (depositAmount > 0) 
            {
               balance = balance + depositAmount; // Update balance after deposit.
               cout<<"Deposit successful. Your new balance is ₹" << balance <<endl;
            } else 
            {
               cout<<"Invalid deposit amount. Please enter a positive amount." <<endl;
            }
            break;

         case 3:
            double withdrawAmount;
            cout<<"Enter the amount to withdraw: ₹";
            cin>>withdrawAmount;

            if (withdrawAmount > 0 && withdrawAmount <= balance) {
               balance = balance - withdrawAmount; // Update balance after withdrawal.
               cout<<"Withdrawal successful. Your new balance is ₹" << balance <<endl;
            } else if (withdrawAmount <= 0) {
               cout<<"Invalid withdrawal amount. Please enter a positive amount." <<endl;
            } else {
               cout<<"Insufficient funds. Your balance is ₹" << balance <<endl;
            }
            break;

         case 4:
            cout<<"Thank you for using the ATM. GOODBYE..!" <<endl;
            return 0;

         default:
            cout<<"Invalid choice. Please select a valid option (1-4)." <<endl;
      }
   }

   return 0;
}
