#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

void main_menu() {
    int user_option;

    std::cout << "===== Main Menu =====" << std::endl;
    std::cout << "1. Add rider" << std::endl;
    std::cout << "2. Remove rider" << std::endl;
    std::cout << "3. Advertise rider request proposal" << std::endl;
    std::cout << "4. Widthdraw rider request proposal" << std::endl;
    std::cout << "5. Add driver" << std::endl;
    std::cout << "6. Remove driver" << std::endl;
    std::cout << "7. Advertise driver request availability" << std::endl;
    std::cout << "8. Widthdraw driver request availability" << std::endl;
    std::cout << "9. Simulate 1 unit time" << std::endl;
    std::cout << "Option? ";

    std::cin >> user_option;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (user_option) {
    default:
        std::cout << "Invalid option." << std::endl;
    }
}

int main()
{
    winrt::init_apartment();
    while (true) main_menu();
}