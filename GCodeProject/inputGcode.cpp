#include "inputGcode.h"

void inputGcode::inputXyz(std::vector<double>& vec)
{
    

	i = 0;
	flag = true;
    string x;
    vector<double> vrem;

    
    cout <<" ¬ведите изменение координат в формате x;y;z;";

    while ((i < 3) && (flag == true))
    {

        getline(cin, x, ';');
        
        
        for (int j = 0; j < x.length(); j++)
        {
             
           //input validation
            if (!(x[j]>='0' && x[j]<='9' or x[j]=='-'))
           
            {
                flag = false;
                cout << "ERROR SCRIPT ";
               
            }


        }

        if (flag == true)
        {

            vrem.push_back(stod(x));

            if (i == 2)
            {
                
                
                for (int k = 0; k < 3; k++)
                {            
                    
                    vec.at(k) = vec.at(k)+vrem.at(k);
                }
 
            }
        }


        i++;

    }

    cin.ignore();

   
}


    


