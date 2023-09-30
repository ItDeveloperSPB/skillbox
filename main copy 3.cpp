#include <iostream>
#include <string>

int main() {

std::cout << "Бумбук VS Вредители!\n";
int startHeight = 100;
int growth = 50;
int losses = 20;



int thirdDayGrowth = growth * 2 + growth / 2;
int thirdDayLosses = losses * 2;

int thirdDayHeight = startHeight + thirdDayGrowth - thirdDayLosses;
std::cout << "Высота бамбука к середине 3 дня: " << thirdDayHeight << ".\n";
}