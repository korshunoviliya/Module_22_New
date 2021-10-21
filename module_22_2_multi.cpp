#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> reg;
    std::multimap<std::string, int> temp;
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
            if(itTemp != temp.end())
            {
                std::cout << itTemp -> first << std::endl;
                temp.erase(itTemp);
                itTemp = temp.begin();
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
            itTemp = temp.begin();
            count++;
        }
    }
}