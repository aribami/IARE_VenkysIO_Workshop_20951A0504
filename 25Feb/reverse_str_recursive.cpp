#include <iostream>
#include <string>
#include "abhirami.h"
int main(int argc, char const *argv[])
{
    std::string str;
    std::cin >> str;
    std::string res = "";
    std::string ans = abhirami::reverseString(str, res);
    std::cout << ans << "\n";

    return 0;
}
