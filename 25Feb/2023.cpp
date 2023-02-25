#include <iostream>
int main(int argc, char const *argv[])
{
    int a, b, M, c, d, x;
    std::cout << "Enter value of a\n";
    std::cin >> a;
    std::cout << "Enter value of b\n";
    std::cin >> b;
    std::cout << "Enter " << a << "/" << b << " of salary\n";
    std::cin >> M;
    std::cout << "Enter c\n";
    std::cin >> c;
    std::cout << "Enter d\n";
    std::cin >> d;
    x = (M * c * b) / (a * d);
    std::cout << c << "/" << d << "th of your salary is " << x << "\n";

    return 0;
}
