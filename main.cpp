#include <iostream>

void fistProgram();
void secondProgram();
void threethProgram();
void fourthProgram();
void fifthProgram();
void sixthProgram();
void seventhProgram();
void eighthProgram();
void ninethProgram();

int main() {
//    fistProgram();
//    secondProgram();
//    threethProgram();
//    fourthProgram();
//    fifthProgram();
//    sixthProgram();
//    seventhProgram();
//    eighthProgram();
   ninethProgram();

}

void fistProgram() {
        std::string password;
    
        std::cout << "Введите паролль: \n" << std::endl;
        std::cin >> password;

        while (password != "123"){
            std::cout << "Ввидите пароль еще раз : \n";
             std::cin >> password;
        }
         std::cout << "Пароль верный";
    }

void secondProgram(){
    int count = 0;
    while(count <100){
    std::cout << "Барашки " << count << " \n";
    count +=1;
    }
}

void threethProgram(){

std::string password;
    
  do {  std::cout << "Введите паролль: \n" << std::endl;
        std::cin >> password;
    }
  while (password != "123");
  std::cout << "Пароль верный";
}

void fourthProgram(){

std::string answer;


do {
std::cout << "Ты выполнил задания которое я тебе давал? \n";
std::cin >> answer;
}while (answer != "ДА КОНЕЧНО");
std::cout << "Молодец";


}

void fifthProgram(){

std::cout << "Как вас зовут? \n";
int count = 0;
std::string answer;
do {
    std::cin >> answer;
    if (count){
        std::cout << "Все говорят " << answer << " а ты купи слона? \n";
    }else{
        std::cout << "Купи слона! "  << answer << "\n";
    }
    count += 1;
}while (answer != "stop");
std::cout << "Молодец";


}

void sixthProgram(){
    int N;
    std::cin >> N;

    int K;
    std::cin >> K;
    int count = 0;
    while (count > N){
        std::cout << " K в степени " << count;
        count +=1;
    }

}

void seventhProgram(){
   std::cout << "Сколько раз вам напомнить? \n";
   int count;
   std::cin >> count;
   int i = 0;
   std::cout << "Введите что вам нужно напомнить ? \n";
   std::string remember;
   std::cin >> remember;


   while (count > i){
       std::cout << "Вам нужно сделать " << remember << " \n";
       i += 1;
    }
}


void eighthProgram(){

   int one;
   int two;
   int three;
   int tour;

   do {
    std::cout << "Введите пинкод? \n";
    std::cin >> one;std::cin >> two;std::cin >> three;std::cin >> tour;
   }

   while (one+two+three+tour != 42);

}

void ninethProgram(){
   std::cout << "Сколько чисел хотите ввести? \n";
   int number;
   std::cin >> number;
   int total = 0;
   int amount;
   int count = 0;
   do {
    std::cout << "Вводите следующее число \n";
    std::cin >> amount;
    total += amount;
    count += 1;
   }

   while (count < number);
    std::cout << "Сумма "<<  total << " \n";
}

