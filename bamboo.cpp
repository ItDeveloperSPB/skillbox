#include <iostream>
#include <string>

int main() {

std::cout << "Бумбук VS Вредители!\n";
int beginHeight = 100;
int dailyGrowth = 50;
int nightFade = 20;



int dailyGrowth = dailyGrowth * 2 + dailyGrowth / 2;
int nightFade = nightFade * 2;

int thirdDayHeight = beginHeight + dailyGrowth - nightFade;
std::cout << "Высота бамбука к середине 3 дня: " << thirdDayHeight << ".\n";
}