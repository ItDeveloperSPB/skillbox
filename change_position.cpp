#include <iostream>
#include <string>

int main() {
int a = 42;
int b = 153;
int buf;

std::cout << "a: " << a<< "\n"; /* На экран будет выведено 42 */
std::cout << "b: " << b << "\n"; /* На экран будет выведено 153 */

buf = a;
a = b;
b = buf;
// a,b = b, a;

std::cout << "a: " << a << "\n"; /* На экран будет выведено 153 */
std::cout << "b: " << b << "\n"; /* На экран будет выведено 42 */

}