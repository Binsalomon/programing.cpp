#include <iostream>

using namespace std;

int main() {
    int id; 
    int password; 
    int savedID; 
    int savedPass;
    char choice;
    char choice2;
    double balance = 0;
    double withdraw = 0.0;

    cout << "Hi! Welcome to the ATM Machine! \n\n";

    do {
        cout << "Please select an option from the menu below: \n\n";
        cout << "l -> Login \n";
        cout << "c -> Create New Account \n";
        cout << "q -> Quit\n";
        cin >> choice;

        switch (choice) {
            case 'c':
                cout << "Please enter your user id: ";
                cin >> savedID;
                cout << "Please enter your password: ";
                cin >> savedPass;
                cout << "Thank You! Your account has been created!\n";
                break;

            case 'q':
                cout << "Thanks for visiting!\n";
                return 0;  // Exit the program
                break;

            case 'l':
                cout << "Please enter your user id: ";
                cin >> id;
                cout << "Please enter your password: ";
                cin >> password;

          if (id == savedID && password == savedPass) {
              cout << "Access Granted! \n";
          do {
              cout << "1 -> Deposit Money \n";
                        cout << "2 -> Withdraw Money \n";
                        cout << "3 -> Request Balance\n";
                        cout << "4 -> Quit \n";
                        cin >> choice2;          

                        switch (choice2) {
                            case '1':
                                int deposit;
                                cout << "Amount of deposit: $ ";
                                cin >> deposit;
                                balance += deposit;
                                break;

                            case '2':
                                double withdraw;
                                cout << "Amount of withdrawal: $ ";
                                cin >> withdraw;

                                if (withdraw <= balance) {
                                    balance -= withdraw;
                                    cout << "Withdrawal successful.\n";
                                } else {
                                    cout << "Your account balance is too low!\n";
                                }
                                break;

                            case '3':
                                cout << "Your balance is: $" << balance << "\n";
                                break;

                            case '4':
                                cout << "Transaction ended. Goodbye!\n";
                                break;

                            default:
                                cout << "Invalid choice! \n";
                                break;
                        }
                    } while (choice2 != '4');  // Exit the loop when '4' is selected
                    
          } else {
             cout << "*** LOGIN FAILED! *** \n";
          }
             break;

            default:
                cout << "Invalid choice! \n";
                break;
        }
    } while (choice != 'q');  // Exit the main loop when 'q' is selected

    return 0;
}

