#include <iostream>

bool is_full(int x) {
    return x > 20;
}

void fill_train(int (&arr)[10]) {
    std::cout << "Enter amount of pessengers in car:" << std::endl;
    for (int i = 0; i < 10; i++) {
        int a;
        std::cout << i << ": ";
        std::cin >> a;
        arr[i] = a;
    }
}

#define FOR(init_exp, cond_exp, loop_exp) for (int i = init_exp; i < cond_exp; i+= loop_exp)
#define FILL_TRAIN(parameter) fill_train(parameter);
#define IS_FULL(parameter) is_full(parameter)
#define CROWDED_CARS FOR(0, 10, 1) if (is_full(train[i])) std::cout << i << " car is crowded" << std::endl;
#define FREE_CARS FOR(0, 10, 1) if (!is_full(train[i])) std::cout << i << " car is free" << std::endl;
#define PASSENGERS_SUM(sum) FOR(0, 10, 1) sum += train[i]; std::cout << "Amount of passangers: :" << sum << std::endl;

int main() {
    int train[10];
    int passengers_sum = 0;
    FILL_TRAIN(train)
    CROWDED_CARS
    FREE_CARS
    PASSENGERS_SUM(passengers_sum)
    return 0;
} 
