#include <iostream>

#define DAY_WEEK(a) WEEK ## _ ## a
#define WEEK_0 "Monday"
#define WEEK_1 "Thuesday"
#define WEEK_2 "Wednesday"
#define WEEK_3 "Thursday"
#define WEEK_4 "Friday"
#define WEEK_5 "Saturday"
#define WEEK_6 "Sunday"

int main() {
    int a;
    std::cout << "Enter a number of the day of the week: ";
    std::cin >> a;
    switch (a) {
        case 0:
            std::cout << DAY_WEEK(0) << std::endl;
            break;
        case 1:
            std::cout << DAY_WEEK(1) << std::endl;
            break;
        case 2:
            std::cout << DAY_WEEK(2) << std::endl;
            break;
        case 3:
            std::cout << DAY_WEEK(3) << std::endl;
            break;
        case 4:
            std::cout << DAY_WEEK(4) << std::endl;
            break;
        case 5:
            std::cout << DAY_WEEK(5) << std::endl;
            break;
        case 6:
            std::cout << DAY_WEEK(6) << std::endl;
            break;
        default:
            std::cout << "Wrong number" << std::endl;
            break;
            }
    return 0;
}
