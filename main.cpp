#include <iostream>

void BelowAbsoluteZero()
{
    std::cout << "Please enter a value bigger than absolute zero" << std::endl;
}

void EnterValue()
{
    std::cout << "Enter value" << std::endl;
}

void WrongInput()
{
    std::cout << "Wrong Input" << std::endl;
}

int main()
{
    std::cout << "Welcome to temperature unit converter v1.0! Made by Ziya Bahçeci for educational purposes."
              << std::endl << "Contact: ziya2.bahceci@hotmail.com"
              << std::endl << "Absolute zero equals 0K, -273.15C, -459.63F and 0R" << std::endl;
    while(true) //for continuation of the program
    {
        std::cout << "Enter number to convert from: Kelvin (1), Celsius(2), Fahrenheit(3) or Rankine(4)" << std::endl;
        int Temperature;
        std::cin >> Temperature;
        if(Temperature = 1)
        {
            std::cout << "Choose unit to be converted into (1 for Celsius, 2 for Fahrenheit and 3 for Rankine" << std::endl;
            int kelvinTo;
            std::cin >> kelvinTo;
            switch(kelvinTo)
            {
            case 1:
                std::cout << "Kelvin to Celsius" << std::endl;
                EnterValue();
                double KtC;
                std::cin >> KtC;
                if(KtC >= 0)
                {
                    std::cout << "Result is " << KtC - 273.15 << " Celsius Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            case 2:
                std::cout << "Kelvin to Fahrenheit" << std::endl;
                EnterValue();
                double KtF;
                std::cin >> KtF;
                if(KtF >= 0)
                {
                    std::cout << "Result is " << -273.15 * 1.8 + 1.8 * KtF + 32 << " Fahrenheit Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            case 3:
                std::cout << "Kelvin to Rankine" << std::endl;
                EnterValue();
                double KtR;
                std::cin >> KtR;
                if(KtR >= 0)
                {
                    std::cout << "Result is " << KtR * 1.8 << " Rankine Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            default :
                WrongInput();
                break;
            }
        }
        else if (Temperature = 2)
        {
            std::cout << "Choose unit to be converted into (1 for Kelvin, 2 for Fahrenheit and 3 for Rankine" << std::endl;
            int celsiusTo;
            std::cin >> celsiusTo;
            switch(celsiusTo)
            {
            case 1:
                std::cout << "Celsius to Kelvin" << std::endl;
                EnterValue();
                double CtK;
                std::cin >> CtK;
                if(CtK >= -273.15)
                {
                    std::cout << "Result is " << CtK + 273.15 << " Kelvin Degrees";
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            case 2:
                std::cout << "Celsius to Fahrenheit" << std::endl;
                EnterValue();
                double CtF;
                std::cin >> CtF;
                if(CtF >= -273.15)
                {
                    std::cout << "Result is " << CtF * 1.8 + 32 << " Fahrenheit Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            case 3:
                std::cout << "Celsius to Rankine" << std::endl;
                EnterValue();
                double CtR;
                std::cin >> CtR;
                if(CtR >= -273.15)
                {
                    std::cout << "Result is " << 491.67 + CtR * 1.8 << " Rankine Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            default:
                WrongInput();
                break;
            }
        }
        else if(Temperature = 3)
        {
            std::cout << "Choose unit to be converted into (1 for Kelvin, 2 for Celsius and 3 for Rankine" << std::endl;
            int fahrenheitTo;
            std::cin >> fahrenheitTo;
            switch(fahrenheitTo)
            {
            case 1:
                std::cout << "Fahrenheit to Kelvin" << std::endl;
                EnterValue();
                double FtK;
                std::cin >> FtK;
                if(FtK >= -459.67)
                {
                    std::cout << "Result is " << (FtK - 32) / 1.8 + 273 << " Kelvin Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            case 2:
                std::cout << "Fahrenheit to Celsius" << std::endl;
                EnterValue();
                double FtC;
                std::cin >> FtC;
                if(FtC >= -459.67)
                {
                    std::cout << "Result is " <<  (FtC - 32) / 1.8 << " Celsius Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            case 3:
                std::cout << "Fahrenheit to Rankine" << std::endl;
                EnterValue();
                double FtR;
                std::cin >> FtR;
                if(FtR >= -459.67)
                {
                    std::cout << "Result is " << FtR + 459.67 << " Rankine Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            default:
                WrongInput();
                break;
            }
        }
        else if(Temperature = 4)
        {
            std::cout << "Choose unit to be converted into (1 for Kelvin, 2 for Celsius and 3 for Fahrenheit" << std::endl;
            int rankineTo;
            std::cin >> rankineTo;
            switch(rankineTo)
            {
            case 1:
                std::cout << "Rankine to Kelvin" << std::endl;
                EnterValue();
                double RtK;
                std::cin >> RtK;
                if(RtK >= 0)
                {
                    std::cout << "Result is " << RtK * 1.8 << " Kelvin Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            case 2:
                std::cout << "Rankine to Celsius" << std::endl;
                EnterValue();
                double RtC;
                std::cin >> RtC;
                if(RtC >= 0)
                {
                    std::cout << "Result is " << (RtC - 491.67) / 1.8 << " Celsius Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            case 3:
                std::cout << "Rankine to Fahrenheit" << std::endl;
                EnterValue();
                double RtF;
                std::cin >> RtF;
                if(RtF >= 0)
                {
                    std::cout << "Result is " << RtF - 459.67 << " Fahrenheit Degrees" << std::endl;
                    break;
                }
                else
                {
                    BelowAbsoluteZero();
                    break;
                }
            default:
                break;
            }
        }
        else
        {
            WrongInput();
        }
    }

    return 0;
}


