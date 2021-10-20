#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> reg;
    std::map<std::string, int> temp;
    std::string family;
    int count{0};
    std::map<int, std::string>::iterator itReg;
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

            itTemp = temp.begin();
            /* if (itTemp == temp.end()) std::cout << "The queue is over!" << std::endl;
             else*/

            std::cout << itTemp->first << std::endl;
            itTemp++;

        }
        else
        {
           //reg.insert(std::pair<int, std::string>(count, family));
           //count++;
            reg.insert(std::pair<int, std::string>(count, "syodorov"));
            count++;
            reg.insert(std::pair<int, std::string>(count, "ivanov"));
            count++;
            reg.insert(std::pair<int, std::string>(count, "ivanov"));
            count++;
            reg.insert(std::pair<int, std::string>(count, "petrov"));
            count++;
            reg.insert(std::pair<int, std::string>(count, "avakov"));
            count++;
        }
    }
}

/*

    reg.insert(std::pair<int, std::string>(count, "syodorov"));
    count++;
    reg.insert(std::pair<int, std::string>(count, "ivanov"));
    count++;
    reg.insert(std::pair<int, std::string>(count, "ivanov"));
    count++;
    reg.insert(std::pair<int, std::string>(count, "petrov"));
    count++;
    reg.insert(std::pair<int, std::string>(count, "avakov"));
    count++;

*/
