#include <iostream>
#include <string>

int main() {
    int amountFlate = 43;
    int shoesSize = 42;
    int animalSizeInPark = 42;
    int newPrice = 42;

    std::cout << amountFlate << "\n";
    std::cout << shoesSize << "\n";
    std::cout << animalSizeInPark << "\n";
    std::cout << newPrice << "\n";
    int circle = 4;
    auto name = "Шумахер";
    int engine = 254;
    int wheel = 93;
    int steeringWheel = 49;
    int wind = 40;
    int rain = 17;
    int speed = engine + wheel + steeringWheel - wind - rain;
    std::cout << "===================" << "\n";
    std::cout << "Супер гонки. Круг " << circle << "\n";
    std::cout << "===================" << "\n";
    std::cout << name << "("<< speed <<")" << "\n";
    std::cout << "===================" << "\n";
    std::cout << "Водитель: "  << name<< "\n";
    std::cout << "Скорость: "  << speed<< "\n";
    std::cout << "___________________" << "\n";
    std::cout << "Оснащение"<< "\n";
    std::cout << "Двигатель: +"  << engine<< "\n";
    std::cout << "Колеса: +"  << wheel<< "\n";
    std::cout << "Руль: +"  << steeringWheel<< "\n";
    std::cout << "___________________" << "\n";
    std::cout << "Действия плохой погоды"<< "\n";
    std::cout << "Ветер: -"  << wind<< "\n";
    std::cout << "Дождь: -"  << rain<< "\n";
 

    }