#include <iostream>
#include "Point.h"
#include "inputGcode.h"
#include <vector>


using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    vector<double> vecP;
    inputGcode M;

    vecP.push_back(10);
    vecP.push_back(20);
    vecP.push_back(0);

    bool entry = 1;
    
    while (entry == 1)
    {

        cout << "\n  Установленные координаты";

        for (int i = 0; i < 3; i++) 
        {
            cout << vecP.at(i) << ";";
        }

        cout << endl;

        string sc;
       

        cout << "Для того, чтобы изменить начально положение введите y или другой символ для выхода" << endl;
        cin >> sc;
        cin.ignore();

        if (sc == "y")
          {
            M.inputXyz(vecP);

          }
        else
          {
             entry = 0;
          }
          
     }
    
    
}


