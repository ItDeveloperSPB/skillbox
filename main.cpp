#include <iostream>
#include <string>
#include <algorithm>
int main() {
int a = 42;
int b = 153;

std::cout << "a: " << a<< "\n"; /* На экран будет выведено 42 */
std::cout << "b: " << b << "\n"; /* На экран будет выведено 153 */

std::swap(a, b);

std::cout << "a: " << a << "\n"; /* На экран будет выведено 153 */
std::cout << "b: " << b << "\n"; /* На экран будет выведено 42 */

}