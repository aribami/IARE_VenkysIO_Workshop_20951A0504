#pragma once
#include <string>
namespace abhirami
{
    std::string reverseString(std::string &str, std::string &res)
    {

        int n = str.length();
        res += str[n - 1];
        str.erase(n - 1);

        if (str.length() == 0)
        {
            return res;
        }
        else
        {
            return reverseString(str, res);
        }
    }

}
