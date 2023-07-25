// Kilometer per liter - Function
#include <iostream>

class DivideByZeroException {
};
class NegativeValueException {
};

double calculate_kpl(int km, int liters)
{
    if (liters == 0)
        throw DivideByZeroException();
    if (liters < 0 || km < 0)
        throw NegativeValueException();

    return static_cast<double>(km) / liters;
}

int main()
{
    int Kilometer{};
    int liters{};
    double Kilometer_per_liter{};

    std::cout << "Enter the Kilometer: ";
    std::cin >> Kilometer;
    std::cout << "Enter the liters: ";
    std::cin >> liters;
    try
    {
        Kilometer_per_liter = calculate_kpl(Kilometer, liters);
        std::cout << "Result: " << Kilometer_per_liter << std::endl;
    }
    catch (const DivideByZeroException &ex) {
        std::cerr << "Tried to divide by zero" << std::endl;
    }
    catch (const NegativeValueException &ex) {
        std::cerr << "Sorry, one of your parameters is negative" << std::endl;
    }

    std::cout << "Bye" << std::endl;

    return 0;
}
