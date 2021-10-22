#include <iostream>
#include <map>
#include <string>

int main() {

    std::map<std::string, int> reg;
    std::string family;
    auto itReg = reg.begin();
    int numRepeat{0};

    while (true)
    {
        std::cout << "Enter family or command:next\n";
        std::cin >> family;

        if (family == "next")
        {
            if (itReg != reg.end())
            {
                    if((itReg -> second) > 1)
                    {
                        std::cout << itReg -> first << std::endl;
                        (itReg -> second)--;
                    }
                    else
                    {
                        std::cout << itReg -> first << std::endl;
                        reg.erase(itReg);
                        if(itReg != reg.end()) itReg = reg.begin();
                    }
            }
            else
            {
                std::cout << "The queue is over!!!" << std::endl;
            }
        }
        else
        {
            reg.insert(std::pair<std::string, int>(family, numRepeat));
                bool check = true;
                for (auto itRepeat = reg.begin();
                     (itRepeat != reg.end()) && check; itRepeat++) {
                    if (itRepeat->first == family)
                    {
                        (itRepeat -> second)++;
                        check = false;
                    }
                }
            itReg = reg.begin();
        }
    }
}