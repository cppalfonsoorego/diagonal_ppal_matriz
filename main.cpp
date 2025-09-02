// La idea es mostrar los datos de la Diagonal Principal de una matriz. 
// La matriz estará representada como: built-in array, Array de C++ y Vector
// Mi usuario en GMAIL es: alfo.orego
#include <iostream>
#include <array>
#include <vector>

using std::cout; 
using std::endl;
using std::string;
using std::array;
using std::vector;

int main()
{
    cout << endl; 

    //Mostrar la Diag Ppal del built-in array
    const int aMatriz[3][3] {
        {1,3,5}, 
        {7,9,11}, 
        {13,15,17}
    }; 
    for (auto i=0; i<3; ++i){
        cout << aMatriz[i][i] << " "; 
    }
    cout << endl; 

    
    //Mostrar la Diag Ppal del Array
    const array< array<int, 3>, 3> arrMatriz {
        1,3,5, 7,19,11, 13,15,17
    };
    for (auto i=0; i<3; ++i){
        cout << arrMatriz[i][i] << " "; 
    }
    cout << endl; 
 

    //Mostrar la Diag Ppal del Vector
    vector<vector< int>> vecMatriz {        {1,3,5},         {7,119,11},         {13,15,17}};
    for (auto i=0; i<3; ++i){
        cout << vecMatriz[i][i] << " "; 
    }
    cout << endl; 

    
    return 0; 
}
