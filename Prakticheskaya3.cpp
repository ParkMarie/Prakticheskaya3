

#include <iostream>
#include <Windows.h>
using namespace std;

double findPloshad(int Ploshad, int VnutrRadius, int VneshnRadius)
{
    cout << "Введите внешний радиус:";
    cin >> VneshnRadius;
    cout << "Введите внутренний радиус:";
    cin >> VnutrRadius;
    Ploshad = 3, 14159 * (VneshnRadius ^ 2 - VnutrRadius ^ 2);

    if (VneshnRadius <= VnutrRadius)
    {
        cout << "Внешний радиус должен быть больше внутреннего! Попробуйте ещё раз пожалуйста.\n";
    }
    else
    {
        cout << "Площадь кольца равна: " << Ploshad << endl;

    }
}

double vixod() 
{
    cout << "Ну, ладно, покаааа :3";
}




int main()
{
    while (true) 
    {
        SetConsoleCP(1251);
        setlocale(LC_ALL, "Rus");
        int choise;

        cout << "Добро пожаловать!\n";
        cout << "Выберите операцию:\n";
        cout << "1. Вычисление площади кольца по значениям внутреннего и внешнего радиусов.\n";
        cout << "2. Выпустите пж.\n";
        cin >> choise;

        if (choise == 1) 
        {
            double findPloshad
            
        }    
        else if (choise == 2) 
        {
            double vixod
            break;
        }




    }


}
