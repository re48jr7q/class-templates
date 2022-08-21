#include <iostream>

template <typename T>
struct Pair
{
    T first{};
    T second{};
};
constexpr int max(Pair<int> p)
{
    return (p.first > p.second ? p.first : p.second);
}
constexpr double max(Pair<double> p)
{
    return (p.first > p.second ? p.first : p.second);
}
int main()
{
    Pair<int>p1{3, 4};
    std::cout << p1.first << " " << p1.second << '\n';

    Pair<double>p2{ 0.1, 0.2 };
    std::cout << p2.first << " " << p2.second << '\n';

    Pair<double>p3{ 2.3, 2.1 };
    std::cout << p3.first << " " << p3.second << '\n';

    return 0;
}

