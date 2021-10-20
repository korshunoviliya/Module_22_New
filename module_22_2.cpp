#include <iostream>
#include <map>
#include <string>

/*int main() {
    std::map<int, std::string> reg;
    std::map<std::string, int> temp;
    std::string family;
    int count{0};

    while(true)
    {
        std::cout << "Enter family or command:next\n";
        std::cin >> family;

        if(family == "next")
        {
            for (std::map<int, std::string>::iterator it = reg.begin();
                    it != reg.end(); it++) {
                temp.insert(std::pair<std::string, int> (it -> second, it -> first ));
            }
            //std::pair<int, std::string>()
            for (std::map<int, std::string>::iterator it = reg.begin();
                 it != reg.end(); it++) {
                std::cout << it -> first << " " << it -> second << std::endl;
            }
            for (std::map<std::string, int>::iterator iter = temp.begin();
                 iter != temp.end(); iter++) {
                std::cout << iter -> first << " " << iter -> second << std::endl;
            }
            std::cout << std::endl;
           /* std::map<int, std::string>::iterator it;
            std::map<std::string, int>::iterator iter;

            std::cout << iter ->first << " " << iter -> second << std::endl;
        }
        else
        {
            reg.insert(std::pair<int, std::string>(count, "sidorov"));
            reg.insert(std::pair<int, std::string>(count, "ivanov"));
            reg.insert(std::pair<int, std::string>(count, "ivanov"));
            reg.insert(std::pair<int, std::string>(count, "petrov"));
            //reg.insert(std::pair<int, std::string>(count, family));
            count++;
        }
    }
}*/
int main() {
    std::map<int, std::string> reg;
    int count{0};

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


    std::map<int, std::string>::iterator it;

    for (it = reg.begin(); it != reg.end(); it++) {
        std::cout << it->first << " " << it->second << std::endl;
    }
    std::cout << std::endl;

    std::map<std::string, int> temp;


    for (it = reg.begin();
         it != reg.end(); it++) {
        temp.insert(std::pair<std::string, int>(it->second, it->first));
    }

    std::map<std::string, int>::iterator itTemp;

    for (itTemp = temp.begin();
         itTemp != temp.end(); itTemp++) {
        std::cout << itTemp->first << " " << itTemp->second << std::endl;
    }

    std::cout << std::endl;

    std::map<std::string, int>::iterator a = temp.begin();
    std::cout << a -> second;
    std::pair<int, std::string> as (it -> first, a -> first);
    std::cout << as.first; as.second;
}