#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> reg;
    std::map<std::string, int> temp;
    std::string family;
    int count{0};
    auto itReg = reg.begin();
    auto itTemp = temp.begin();

    while (true)
    {
        std::cout << "Enter family or command:next\n";
        std::cin >> family;

        if (family == "next")
        {
            for (itReg = reg.begin(); itReg != reg.end(); itReg++)
            {
                temp.insert(std::pair<std::string, int>(itReg->second, itReg->first));
            }

            //
        }
        else
        {
            reg.insert(std::pair<int, std::string>(count, family));
            count++;
        }
    }
}

