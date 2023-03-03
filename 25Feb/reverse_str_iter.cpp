#include <iostream>
#include <string>
#include <stack>
void reverseString(std::string &str)
{
    std::stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
    }
}
int main(int argc, char const *argv[])
{
    std::string str;
    std::cout << "Enter String\n";
    std::cin >> str;
    reverseString(str);
    std::cout << str << "\n";
    return 0;
}
