#include <iostream>
#include <map>

void print_map(const std::map<std::string, int> &m)
{
    for (const auto &n : m)
    {
        std::cout << '[' << n.first << "] = " << n.second << ";";
    }
}

int main()
{
    std::map<std::string, int> m{{"CPU", 10}, {"GPU", 15}, {"RAM", 20}};
    m["CPU"] = 25;
    m["SSD"] = 30;

    if (m.find("Hello") == m.end())
    {
        std::cout << "could not find hello" << std::endl;
    }
    if (m.find("CPU") != m.end())
    {
        std::cout << "CPU found b4by" << std::endl;
    }
}
