#include <iostream>
#include <cmath>

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double total_cost;

    total_cost = meal_cost + meal_cost*tip_percent/100 + meal_cost*tax_percent/100;

    std::cout << round(total_cost) << std::endl;
}

int main()
{
    double meal_cost;
    int tip_percent, tax_percent;

    std::cin >> meal_cost >> tip_percent >> tax_percent;

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
