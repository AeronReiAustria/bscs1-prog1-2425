#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string username;
    string password;
    string userType;

public:
    User(string uname, string pword, string utype) {
        username = uname;
        password = pword;
        userType = utype;
    }

    bool login(string uname, string pword) {
        return (username == uname && password == pword);
    }

    void displayRole() {
        cout << endl;
        cout << "Welcome, " << userType << "!" << "how may we assist you?" << endl;
    }
};

int main() {
    User student[] = {
        User("student1", "ST1", "Student1"),
        User("student2", "ST2", "Student2"),
        User("student3", "ST3", "Student3")
    };
    User faculty[] = {
        User("faculty1", "FTY1", "Faculty1"),
        User("faculty2", "FTY2", "Faculty2"),
        User("faculty3", "FTY3", "Faculty3")
    };
    User admin[] = {
        User("admin1", "ADMIN1", "Administrator")
    };

    string uname, password;
    bool logIn = false;

   
    while (!logIn) {
        cout << "Enter username: ";
        cin >> uname;
        cout << "Enter password: ";
        cin >> password;

        for (int i = 0; i < 3; i++) {
            if (student[i].login(uname, password)) {
                student[i].displayRole();
                logIn = true;
                break;
            }
        }
        if (!logIn) {
            for (int i = 0; i < 3; i++) {
                if (faculty[i].login(uname, password)) {
                    faculty[i].displayRole();
                    logIn = true;
                    break;
                }
            }
        }

        
        if (!logIn) {
            for (int i = 0; i < 1; i++) {
                if (admin[i].login(uname, password)) {
                    admin[i].displayRole();
                    logIn = true;
                    break;
                }
            }
        }

      
        if (!logIn) {
            cout << "Invalid username or password. Please try again." << endl;
        }
    }
