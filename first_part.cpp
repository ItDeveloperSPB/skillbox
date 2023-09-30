#include <iostream>

void fistProgram();
void secondProgram();
void threethProgram();
void fourthProgram();
void fifthProgram();
void sixthProgram();

int main() {
//    fistProgram();
//    secondProgram();
//    threethProgram();
//    fourthProgram();
//    fifthProgram();
   sixthProgram();
}

void sixthProgram(){
    int profit;
    std::cout << "¬ведите размер прибыли: ";
    std::cin >> profit;

    if (profit >= 50000) {
        int tax = profit * 30 / 100;
        std::cout << "размер налога (30%) равен: " << tax << "\n";
    } else if (profit >= 10000) {
        int tax = profit * 20 / 100;
        std::cout << "размер налога (20%) равен: " << tax << "\n";
    } else if (profit > 0) {
        int tax = profit * 13 / 100;
        std::cout << "размер налога (13%) равен: " << tax << "\n";
    } else if (profit == 0) {
        std::cout << "Правда? Ќичего не заработали? А если найдем?\n";
    } else {
        std::cout << "Ожидалось не отрицательное число\n";
    }
}
void fifthProgram(){
    int mansCount;
    int barbersCount;

    std::cout << "************** Барбершоп-калькультор **************\n";
    std::cout << "Введите число мужчин в городе: ";
    std::cin >> mansCount;

    std::cout << "Сколько уже барберов удалось нанять?";
    std::cin >> barbersCount;

     // Cколько человек может постричь один барбер за одну смену?
    int mansPerBarber = 8; // один человек в час, смена 8 часов
    // Cколько человек нужно постричь за день?
    int mansPerBarberMonth = mansPerBarber * 30;
    std::cout << "Один барбер стрижет столько клиентов в месяц " << mansPerBarberMonth << "\n";
    // Cколько нужно барберов, чтобы постричь mansPerDay человек?
    int requiredBarbersCount = mansCount / mansPerBarberMonth;
    if (requiredBarbersCount * mansPerBarberMonth < mansCount){
        requiredBarbersCount += 1;
    }
    std::cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";

     // Cколько человек успеет постричь requiredBarbersCount за месяц?
    std::cout << requiredBarbersCount << " барбера могут постричь " << 
    requiredBarbersCount * mansPerBarberMonth << " мужчин за месяцё\n";


    // —равниваем с количеством имеющихс€ барберов
    if (requiredBarbersCount > barbersCount){
        std::cout << "Нужно больше барберов!!!\n";
    }
    else if (requiredBarbersCount == barbersCount) {
         std::cout << "Барберов ровно столько сколько нужно!!!\n";
    }
    else {
         std::cout << "Барберов хватает!!!\n";
    }

}

void fourthProgram(){
    int x;
    std::cout << "Число";
    std::cin >> x; 

    if (x < 0) {
        x = -x;
    }
    std::cout << "Число" << x;
}


void threethProgram(){
    int averageSpeed;
    int endPoint = 200;
    
    std::cin >> averageSpeed;

    if (averageSpeed * 2 == endPoint){
         std::cout << "Вы приехали”. Расстояние между городами - 200 км.\n";
    }


}
void secondProgram(){
     int productCost;
     int discount;
     int totoalProductCost = 0;
     for (int count = 1; count <= 3; ++count){
              std::cout << "¬ведите стоимость" << count <<"го товара: ";
              std::cin >> productCost;
              totoalProductCost += productCost;
              std::cout << " число " << count << "\n";
              std::cout << " сумма " << totoalProductCost << "\n";
     }
     if (totoalProductCost > 10000){
        discount = totoalProductCost /= 10;
        std::cout << " cкидта в 10 % сработала " << discount << "\n";
     }
}


void fistProgram() {
    int productCost;
    int deliveryCost;
    int discount;
    std::cout << "¬ведите стоимость товара: ";
    std::cin >> productCost;
    std::cout << "¬ведите стоимость доставки: ";
    std::cin >> deliveryCost;
    std::cout << "—кидка: ";
    std::cin >> discount;

    
    if ( productCost > 10000){
        productCost /= 2;
        std::cout << "—тоимость товара превышает 10000 рублей.\n";
        std::cout << "ѕоэтому вы получаете скидку на доставку!\n";
    }

    int price = productCost + deliveryCost - discount;
    std::cout << "--------------\n";
    std::cout << "ѕолна€ стоимость товара: " << price << "\n";
}