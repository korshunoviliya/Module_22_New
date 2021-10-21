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
    int count{0};

    for(int i = 0; i < first.length(); i++)
    {
        count = 0;
        for(int j = i; j < first.length(); j++)
        {
            if(first[i] == first[j]) count++;
        }
        firstWord.insert(std::pair<char, int> (first[i], count));

        count = 0;
        for(int j = i; j < second.length(); j++)
        {
            if(second[i] == second[j]) count++;
        }
        secondWord.insert(std::pair<char, int> (second[i], count));
    }

    for(itFirst = firstWord.begin(), itSecond = secondWord.begin();
            itFirst != firstWord.end() || itSecond != secondWord.end();
            itFirst++, itSecond++)
    {
        if((itFirst -> first != itSecond -> first)
                || (itFirst -> second != itSecond -> second)) return false;
    }
    return true;
}

int main() {

    //bool check = anagramm("hello", "heloo");
    //bool check = anagramm("steklovar", "lekarstvo");
    //bool check = anagramm("hello", "lhole");
    bool check = anagramm("стекловар", "лекарство");

    if(check) std::cout << "ok!" << std::endl;
    else std::cout << "no!" << std::endl;
    return 0;
}
