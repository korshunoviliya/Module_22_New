#include <iostream>
#include <string>
#include <map>

bool checkRequest(std::string &request)
{
    const int lengthNumber = 8;
    if(request[2] != '-' || request[5] != '-') return false;
    for (int i = 0; i < lengthNumber; ++i)
    {
        if(i == 2 || i == 5) ++i;
        if(request[i] < '0' || request[i] > '9') return false;
    }
    return true;
}

void findSurname(std::map<std::string, std::string> &phoneBook, std::string &request)
{
    std::map<std::string, std::string>::iterator it;
    for(it = phoneBook.begin(); it != phoneBook.end(); it++)
    {
        if(it->second == request) std::cout << it->first << std::endl;
    }
}

void add(std::map<std::string, std::string> &phoneBook, std::string &request)
{
    std::string name;
    name.append(request, 9, request.length());
    request.resize(8);

    phoneBook.insert(std::pair<std::string, std::string>(name, request));
}

void findNumber(std::map<std::string, std::string> &phoneBook, std::string &request)
{
    std::map<std::string, std::string>::iterator it;
    for(it = phoneBook.begin(); it != phoneBook.end(); it++)
    {
        if(it->first == request) std::cout << it->second << " ";
    }
}
void printBook(std::map<std::string, std::string> &phoneBook)
{
    std::map<std::string, std::string>::iterator it;
    for(it = phoneBook.begin();
        it != phoneBook.end(); it++)
    {
        std::cout << "*" << it->first << " " << it->second << std::endl;
    }
}

int main() {

    const int lengthNumber = 8;
    std::string request;

    std::map<std::string, std::string> phoneBook;

    while(true) {
        request.clear();
        std::cout << "Enter your request: ";
        std::getline(std::cin, request);

        if (request == "end") return 0;
        else if (request == "list") printBook(phoneBook);
        else if ((request.length() == lengthNumber) && (checkRequest(request)))
            findSurname(phoneBook, request);
        else if ((request.length() > lengthNumber) && (checkRequest(request)))
            add(phoneBook, request);
        else findNumber(phoneBook, request);
    }
}
