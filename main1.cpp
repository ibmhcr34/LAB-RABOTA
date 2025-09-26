#ЛАБ. РАБОТА 1 РЕШЕШИЕ НА С++ ЗАДАЧА 1

#include <iostream>
#include <string>

int main() {
    std::string str = "AaBbCcDd";
    std::string upper = "";
    std::string lower = "";

    for (int i = 0; i < (int)str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upper += str[i];
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lower += str[i];
        }
    }

    std::cout << upper << std::endl;
    std::cout << lower << std::endl;

    return 0;
}
