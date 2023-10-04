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
   fifthProgram();
//    sixthProgram();
//    seventhProgram();

}

void fistProgram() {

    int x,y;
    std::cout << "input x y:"; std::cin >> x >> y;
    if(x > 0)
    {
        if(y > 0)
        {
            std::cout << "1" << std::endl;
        }
        else if(y < 0)
        {
            std::cout << "4" << std::endl;
        }
        else
        {
            std::cout <<"On the border" << std::endl;
        }
    }
    else if(x < 0)
    {
        if(y > 0)
        {
            std::cout << "2" << std::endl;
        }
        else if(y < 0)
        {
            std::cout << "3" << std::endl;
        }
        else
        {
            std::cout << "On the border" << std::endl;
        }
    }
    else
    {
        std::cout << "On the border" << std::endl;
    }
}

void secondProgram(){
    int getMoney;
    std::cout << "Введите сумму для снятия\n";
    std::cin >> getMoney;
    int limit = 100000;
    if(getMoney > limit){
        std::cout << "Недостаточно средств\n";
    }
    else if(getMoney <= limit){
        if(getMoney % 100 == 0){
            std::cout << "Вот ваши деньги\n";
        }
        else{
            std::cout << "В банкомате купюры только по 100 рублей введите подходящую сумму\n";
        }
    }
}


void threethProgram(){
    int year;
    std::cout << "input year:"; std::cin >> year;
    if(year % 4 == 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else if(year % 100 == 0)
    {
        if(year % 400 == 0)
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;
    }
    else
    {
         std::cout << "No" << std::endl;
    }
}

void fourthProgram(){
    int firstCar;
    int secondCar;
    int thirdCar;
    int fourthCar;
    std::cout << "input weight of four cars:"; std::cin >> firstCar;std::cin >> 
    secondCar;std::cin >> thirdCar;std::cin >> fourthCar;
    int availibleWeight = 1200;

    if(firstCar > availibleWeight) std::cout << " yes";
    if(secondCar > availibleWeight) std::cout << " yes";
    if(thirdCar > availibleWeight) std::cout << " yes";
    if(fourthCar > availibleWeight) std::cout << " yes";

}

void fifthProgram(){
    int a;
    int b;
    int c;
    std::cout << "input A B C:"; std::cin >> a;std::cin >> 
    b;std::cin >> c;

    if(a + b < c & b + c < a c + a < b ){
        std::cout << "no";
    }
    else{
         std::cout << "yes";
    }
    }