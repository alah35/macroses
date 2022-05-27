#include <iostream>

#define MAX(a, b) a ## _ ## b 
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
    std::cout << MAX("WEEK", a) << std::endl;
    return 0;
}
