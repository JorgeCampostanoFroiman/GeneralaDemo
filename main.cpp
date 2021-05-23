#include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
# include "funciones.h"

int main(){
    int menu_principal, puntuacion_top, puntos[2] = {}, generala = 0, gencon;
    char jugador1[25];
    const bool azar = true;
    const  int tam = 5 ;
    int i, dados [tam];
    cout << "Bienvenido/s a Generala´s brothers" <<endl;
    cout << "Para ingresar al modo 1J, pulse 1" <<endl;
    cout << "Para ingresar al modo 2J, pulse 2" <<endl;
    cout << "Si quiere ver la puntuacion mas alta, pulse 3" <<endl;
    cin >> menu_principal;
    switch(menu_principal){
        case 1: juego_simple(jugador1, puntos, dados, tam, azar, gencon);
            break;
        //case 2: juego_deados(jugador1, jugador2, puntos[]);
              //  break;

    }







    return 0;

}
