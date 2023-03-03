#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>
int main(int argc, char const *argv[])
{
    using clock = std::chrono::high_resolution_clock;
    using micros = std::chrono::microseconds;
    size_t n;

    std::cout << "enter number of words in paragraph\n";
    std::cin >> n;
    std::vector<std::string> words(n);

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> words[i];
    }
    auto start = clock::now();
    for (std::string p : words)
    {
        std::reverse(p.begin(), p.end());
        std::cout << p << " ";
    }
    auto end = clock::now();
    auto duration = std::chrono::duration_cast<micros>(end - start);
    std::cout << "\ntotal time is = " << duration.count() << " microseconds\n";
    return 0;
}
