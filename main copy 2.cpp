#include <iostream>
#include <string>

int main() {

 std::string userLogin;
 std::string userPassword;
 std::cout << "Enter your login: ";
 std::cin >> userLogin;
 std::cout << "Enter your password: ";
 std::cin >> userPassword;
 std::cout << userLogin << " " <<userPassword << ", вы успешно зашли!";

}