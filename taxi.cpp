#include <iostream>
#include <string>

int main() {
int peopleTotal = 0;
int peopleOut;
int peopleIn;
int totalAmountForTicket = 0;
int price = 20;
int commonAtr = 0;

std::cout << "Прибываем на остановку «Улица программистов». В салоне пассажиров: " << peopleTotal << "\n";

std::cout << "Сколько пассажиров вышло на основке «Улица программистов»: ";
std::cin >> peopleOut;
peopleTotal -= peopleOut;
std::cout << "Сколько пассажиров зашло на основке «Улица программистов»: ";
std::cin >> peopleIn;
peopleTotal += peopleIn;
totalAmountForTicket += peopleIn * price;
std::cout << "Отправляемся с остановки «Улица программистов». В салоне пассажиров: " << peopleTotal << "\n";
std::cout << "----------Едем----------\n";
std::cout << "Прибываем на основку «Проспект алгоритмов». В салоне пассажиров: " << peopleTotal << "\n";



commonAtr = totalAmountForTicket / 5;

int salaryDriver = totalAmountForTicket / 4;
int result = totalAmountForTicket - (commonAtr * 3 + salaryDriver);

std::cout << "Всего заработали: " << totalAmountForTicket << "\n";
std::cout << "Зарплата водителя: " << salaryDriver << "\n";
std::cout << "Расходы на топливо: " << commonAtr << "\n";
std::cout << "Налоги: " << commonAtr << "\n";
std::cout << "асходы на ремонт машины: " << salaryDriver << "\n";
std::cout << "Итого доход: " << result << "\n";


}