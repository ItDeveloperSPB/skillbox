#include <iostream>

void fistProgram();
void secondProgram();
void threethProgram();
void fourthProgram();
void fifthProgram();
void sixthProgram();
void seventhProgram();

int main() {
//    fistProgram();
//    secondProgram();
//    threethProgram();
//    fourthProgram();
//    fifthProgram();
//    sixthProgram();
   seventhProgram();

}

void seventhProgram(){
    // Напишите программу, которая выводит меню бизнес-ланча ресторана в зависимости от дня недели. 
    // В меню есть общая часть, а есть уникальная, которая зависит от дня недели. 
    // Пользователь должен ввести номер дня недели — от 1 (понедельник) до 7 (воскресенье), 
    // а программа должна вывести на экран день недели и меню этого дня.
    int fitstNumber;
    std::cout << "Введите день недели (от 1 до 7): ";
    std::cin >> fitstNumber;

    if(fitstNumber  == 4){

         std::cout << "Меню сегодня (четверг):\n";
         std::cout << "Гороховый суп \n";
         std::cout << "Салат «Цезарь» с креветками\n";
         std::cout << "Куриная ножка с пюре \n";
         std::cout << "Морс \n";

    }
    else if (fitstNumber == 0 || fitstNumber > 7){
        std::cout << "Вы ввели не верное число \n";
    }

}

void sixthProgram(){
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
    if (requiredBarbersCount % mansPerBarberMonth != 0){
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
void fifthProgram(){
    // Напишите программу, которая проверяет, делится ли одно число на другое без остатка.
    int fitstNumber;
    int secondNumber;
    std::cout << "Введите первое число: ";
    std::cin >> fitstNumber;
    std::cout << "Введите второе число: ";
    std::cin >> secondNumber;
    std::cout << "-----Проверяем----- \n";
    if(fitstNumber % secondNumber == 0){
         std::cout << "Да " <<fitstNumber << " делится на " << secondNumber << " без остатка\n";

    }
    else {
         std::cout << "Нет " <<fitstNumber << " не делится на " << secondNumber << " без остатка\n";
    }
}

void fourthProgram(){
//  Напишите программу, которая определяет уровень персонажа в компьютерной игре. 
//  Пользователь вводит число «очков опыта», а программа вычисляет уровень. 
//  Новый уровень даётся при достижении 1000, 2500 и 5000 «очков опыта». Начальный уровень равен 1.

    int numberExpirience;
    int level = 0;
    std::cout << "Введите число очков опыта: ";
    std::cin >> numberExpirience;
    std::cout << "-----Считаем----- \n";

    if(numberExpirience >= 1000 & numberExpirience < 2500){
        std::cout << "Ваш уровень:"<< level <<"\n";

    }
    else if (numberExpirience >= 2500 & numberExpirience < 5000){
        level += 2;
        std::cout << "Первое число больше! " << level << "\n";
    }
    else if (numberExpirience >= 5000){
        level += 3;
        std::cout << "Второе число больше! " << level << "\n";
    }
    std::cout << "Ваш уровень:"<< level <<"\n";
}


void threethProgram(){
//    Напишите программу, которая проверяет, чётное ли число ввел пользователь.
//    Пример: int remainder = x % 2 (вычисляет остаток от деления `x` на 2).

    int fitstNumber;
    std::cout << "Введите число: ";
     std::cin >> fitstNumber;
    std::cout << "-----Проверяем----- \n";
    if(fitstNumber % 2 == 0){
         std::cout << "Число" <<  fitstNumber << " - четное\n";

    }
    else {
         std::cout << "Число" <<  fitstNumber << " - не четное\n";
    }
}
void secondProgram(){
//    Напишите программу которая проверяет то, как вы умеете складывать два числа в уме. 
//    Программа должна выводить два разных сообщения на верный и неверный ответ пользователя. 
//    В последнем случае надо показывать правильный результат.

    int fitstNumber;
    int secondNumber;
    int summNumbers;
    std::cout << "Введите первое число: ";
    std::cin >> fitstNumber;
    std::cout << "Введите второе число: ";
    std::cin >> secondNumber;
    std::cout << "Введите их сумму: ";
    std::cin >> summNumbers;
    std::cout << "-----Проверяем----- \n";
    if(fitstNumber + secondNumber == summNumbers){
         std::cout << "Верно! \n";

    }
    else {
        std::cout << "Ошибка! Верный результат " << summNumbers << "\n";
    }
}

void fistProgram() {
    // Напишите программу, которая ищет минимальное значение из двух чисел.
    int fitstNumber;
    int secondNumber;
    std::cout << "Введите первое число: ";
    std::cin >> fitstNumber;
    std::cout << "Введите второе число: ";
    std::cin >> secondNumber;
    if(fitstNumber == secondNumber){
         std::cout << "Числа равны! \n";

    }
    else if (fitstNumber > secondNumber){
         std::cout << "Первое число больше! " << fitstNumber << "\n";
    }
    else {
        std::cout << "Второе число больше! " << secondNumber << "\n";
    }
}