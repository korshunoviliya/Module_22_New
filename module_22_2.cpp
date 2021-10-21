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

        if (family == "n")
        {
            if(itReg != reg.end())
            {
                itReg = reg.find(itTemp -> second);
                std::cout << itReg->second << std::endl;
                if(itReg != reg.end()) itReg++;
                if(itReg -> second != itTemp -> first)
                {
                    temp.erase(itTemp);
                    itTemp = temp.begin();
                    itReg--;
                    reg.erase(itReg);
                    itReg = reg.begin();
                }
                else
                {
                    reg.erase(itReg);
                    itReg--;
                    itTemp = temp.begin();
                }
            }
            else
            {
                std::cout << "The queue is over!!!" << std::endl;
            }
        }
        else
        {
            reg.insert(std::pair<int, std::string>(count, family));
            temp.insert(std::pair<std::string, int>(family, count));
            count++;
            itReg = reg.begin();
            itTemp = temp.begin();
        }
    }
}