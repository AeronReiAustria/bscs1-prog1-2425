#include <iostream>
using namespace std;

int main() {
    string username[100], password[100], usern, passw;
    int choose;
    int registeredUsers = 0;  
    bool exitProgram = false; 

    while (!exitProgram) {
        cout << "\n--- Welcome to the Login Page! ---" << endl;
        cout << "Choose [1] Register, [2] Login, or [3] Exit: ";
        cin >> choose;

        if(cin.fail() || (choose < 1 || choose > 3)) {
            
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid choice! Please choose either [1], [2], or [3]." << endl;
            continue;
        }

        if (choose == 1) {
            if (registeredUsers < 100) {
                cout << "Please Register!" << endl;
                cout << "Please Enter your username: ";
                cin >> username[registeredUsers];
                cout << "Please Enter your password: ";
                cin >> password[registeredUsers];
                registeredUsers++;
                cout << "Registration successful!" << endl;
            } else {
                cout << "Registration limit reached. Cannot register more users." << endl;
            }
        } else if (choose == 2) {
            if (registeredUsers == 0) {
                cout << "No registered users. Please register first!" << endl;
                continue;
            }

            bool loginSuccess = false;
            for (int count = 0; count < 3; count++) {
                cout << "Please Enter your username: ";
                cin >> usern;
                cout << "Please your password: ";
                cin >> passw;
                for (int i = 0; i < registeredUsers; i++) {
                    if (username[i] == usern && password[i] == passw) {
                        cout << "Login successful!" << endl;
                        loginSuccess = true;
                        break;
                    }
                }

                if (loginSuccess) {
                    break;
                } else if (count < 2) {
                    cout << "Login failed! Wrong Username or Password! Try again!" << endl;
                } else {
                    cout << "Too many failed attempts! Please try again later!" << endl;
                }
            }
        } else if (choose == 3) {
            exitProgram = true;
            cout << "Exiting the program. Jolly Goodbye!" << endl;
        }
    }

    return 0;
}
