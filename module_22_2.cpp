#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> reg;
    std::map<std::string, int> temp;
    std::string family;
    int count{0};
    int countTemp{0};
    std::map<int, std::string>::iterator itReg = reg.begin();
    std::map<std::string, int>::iterator itTemp = temp.begin();

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

            std::map<std::string, int>::iterator itTemp = temp.begin();
            std::advance (itTemp, countTemp);
            std::map<int, std::string>::iterator itReg = reg.find(itTemp -> second);
            std::cout << itReg->second << std::endl;

            if(itReg == reg.end())
            {
                std::cout << "The queue is over!!!" << std::endl;
                itReg--;
            }
            itReg++;
            countTemp++;
        }
        else
        {
            reg.insert(std::pair<int, std::string>(count, family));
            count++;
        }
    }
}