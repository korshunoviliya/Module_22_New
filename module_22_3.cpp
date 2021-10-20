#include <iostream>
#include <map>
#include <string>

bool anagramm(std::string first, std::string second)
{
    if(first.length() != second.length()) return false;
    std::map<char, int> firstWord;
    std::map<char, int> secondWord;
    auto itFirst = firstWord.begin();
    auto itSecond = secondWord.begin();

    for(int i = 0; i < first.length(); i++)
    {
        firstWord.insert(std::pair<char, int> (first[i], i));
        secondWord.insert(std::pair<char, int> (second[i], i));
    }

   for(itFirst = firstWord.begin(), itSecond = secondWord.begin();
            itFirst != firstWord.end() || itSecond != secondWord.end();
            itFirst++, itSecond++)
    {
        if(itFirst -> first != itSecond -> first) return false;
    }
    return true;
}

int main() {

    if(anagramm("стекловар", "лекарство")) std::cout << "ok!" << std::endl;
    else std::cout << "no!" << std::endl;
    return 0;
}
