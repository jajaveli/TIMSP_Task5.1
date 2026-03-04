#include <iostream>
#include <string>

int main() {
    std::string user_name;
    std::string password;
    std::string repeat_password;

    std::cout << "Registration\n";

    std::cout << "Enter username: ";
    std::cin >> user_name;

    std::cout << "Enter password: ";
    std::cin >> password;

    do {
        std::cout << "Repeat password: ";
        std::cin >> repeat_password;

        if (password != repeat_password) {
            std::cout << "Passwords do not match. Try again.\n";
        }

    } while (password != repeat_password);

    std::cout << "Registration successful!\n\n";

    std::string login_name;
    std::string login_password;

    std::cout << "Login\n";

    while (true) {
        std::cout << "Username: ";
        std::cin >> login_name;

        std::cout << "Password: ";
        std::cin >> login_password;

        if (login_name == user_name && login_password == password) {
            std::cout << "Login successful!\n";
            break;
        }
        else {
            std::cout << "Wrong username or password. Try again.\n";
        }
    }

    return 0;
}