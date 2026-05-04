#include<iostream>
using namespace std;

class User {
    int id;
    int password;
public:
    string username;

    // Parametrized Constructor 
    User(int id) {
        this->id = id;
        cout << id << "\n";
    }

    // Setter
    void setPassword(int password) {
        this->password = password;
    }

    // Getter
    int getPassword() {
        return this->password;
    }; 
    
};

int main() {
    User u1(12);
    u1.username = "Tony Stark";
    u1.setPassword(3981);
    cout << u1.getPassword() << "\n";
    cout << u1.username << "\n";
    return 0;
}  