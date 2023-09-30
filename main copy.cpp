#include <iostream>
#include <string>

int main() {

 int productCost;

 int deliveryCost;

 int discount;

  std::cout << "Для расчета стоимости товара нужно ввести 3 показателя: "<< "\n";
  std::cout << "Стоимость товара: "<< "\n";
  std::cin >> productCost;
  std::cout << "Стоимость доставки: "<< "\n";
  std::cin >> deliveryCost;
  std::cout << "Скидка: "<< "\n";
  std::cin >> discount;
 
 int price = productCost + deliveryCost - discount;


 std::cout << "Стоимость товара: " << productCost << "\n";

 std::cout << "Cтоимость доставки: " << deliveryCost << "\n";

 std::cout << "Скидка: " << discount << "\n";

 std::cout << "---------\n";

 std::cout << "Итого: " << price << "\n";

}