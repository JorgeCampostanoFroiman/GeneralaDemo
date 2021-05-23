#include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
# include "funciones.h"


void tirada(int dados[], int tam){
int i;
srand ( time ( NULL ));
    for (i = 0 ; i <tam; i ++) {
     dados [i] =1 + rand ()% 6 ;
     }}

void cargar_dados(int dados[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"Ingresar el valor del " << i+1 <<" dado: " <<endl;
        cin>>dados[i];
}}

void mostrar_dados(int dados[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout << "El dado numero " << i+1 << " es " << dados[i] <<endl; }}

int generala(int dados[], int tam){
    int i, generala = 0, gencon = 0;
    for(i=0;i<tam;i++){
        if (generala==0){
                generala = dados[i];
                gencon++;}
            else{
                if (dados[i]==generala){
                gencon++;}
    }}    return gencon;}


    void lanzamientos(int gencon, int dados[], int tam, char jugador1[], bool azar){
        char sigue_lanzando;
        int i, x, z = 0, dados_a_lanzar, cambio_dado, rondas = 10, puntos = 0;
        for(x=0;x<rondas;x++){
        cout << "RONDA N " << x+1 << " || JUGADOR " << jugador1 << endl;
        cout << "LANZAMIENTO N 1" <<endl;
        if(azar== true){
        tirada(dados, tam);
        mostrar_dados(dados, tam);
       }
        else{
        cargar_dados(dados, tam);
        mostrar_dados(dados, tam);
        }
        gencon = generala(dados, tam);
        if (gencon==5){
        cout << "Generala servida!!!! El jugador " << jugador1 << " gana la partida." << endl;
        cout << "El jugador ha ganado en " << x+1 << " ronda/s, felicitaciones!" <<endl;
        x = rondas;
        }
        else{
        for(z=0;z<2;z++){
        cout << "Desea seguir lanzando? (S/N)" << endl;
        cin >> sigue_lanzando;
        if  (sigue_lanzando == 'S' || sigue_lanzando == 's' ){
            cout << "LANZAMIENTO N " << z+2 <<endl;
            cout << "Cuantos dados quiere lanzar?" <<endl;
            cin >> dados_a_lanzar;
            for(i=0; i<dados_a_lanzar; i++){
                cout << "Que dados quiere cambiar?" << endl;
                cin >> cambio_dado;
                srand ( time ( NULL ));
                dados[cambio_dado-1] = 1 + rand ()% 6 ;
                }mostrar_dados(dados, tam);

                // hay que hacer el puntaje

        }else{
                if(sigue_lanzando == 'N' || sigue_lanzando == 'n'){
                z = 2;
                }
                else{
                    z--;
                    cout << "Opción incorrecta, vuelva a intentarlo." <<endl;
                }}}

        // resta saber si el usuario ingresa correctamente los datos o no
        }
        puntuacion(dados, tam, puntos);
        system("pause");
        system("cls");
        cout << "FINALIZA RONDA N " << x+1 << " || JUGADOR " << jugador1 << "|| PUNTAJE: " << puntos <<endl;
        system("pause");}}


void ordenar_dados(int dados[], int tam){
    int j, i, posmin, aux;
    for(i=0;i<tam;i++){
    posmin=i;
    for(j=i+1;j<tam;j++){
    if(dados[j]<dados[posmin]) posmin=j;
    }
    aux=dados[i];
    dados[i]=dados[posmin];
    dados[posmin]=aux;
}
}

 void coincidencia(int dados[], int tam, int cont1, int cont2){
 int n1 = dados[0], x, n2=0;
    for(x=0; x<5; x++){
        if(dados[x]==n1){
                cont1++;
        }else{
            if(n2==0){
                n2=dados[x];
                cont2 ++;
            }         else{
                if(dados[x]==n2){
                    cont2++;}}}}}


void puntuacion(int dados[], int tam, int puntos){
    int x, cont1 = 0, cont2 =0, cont_escalera = 1;
    ordenar_dados(dados, tam);
    coincidencia(dados, tam, cont1, cont2);
    if (cont1 == 5){
        puntos = 50;
    }
    else{
        if (cont1 == 4 || cont2 == 4){
            puntos = 40;
        }
        else{
            if (cont1 == 3 && cont2 == 2 || cont1 == 2 && cont2 == 3 ){
                puntos = 30;
            }
            else{
                for(x=0; x<5; x++){
                    if (dados[x] == dados[x+1]-1){
                            cont_escalera++;
                    }
                    else{
                    }
                }if(cont_escalera == 5){
                puntos = 25;
                }}}}


    }

void juego_simple(char jugador1[], int puntos[], int dados[], int tam, bool azar, int gencon){
    int i;
    cout << "Ingrese nombre de jugador: " << endl;
    cin.ignore();
    cin.getline (jugador1, 25);
    lanzamientos(gencon, dados, tam, jugador1, azar);}












