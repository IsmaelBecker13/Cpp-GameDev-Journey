#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "include/playerCreation.h"

void readPlayer(player_struct Player)
    {
        cout<<"Leyendo Datos del Jugador"<<endl;
        cout<<Player.name;
    }
char showMenu()
    {
        char option;
        cout<<"Opciones: "<<endl;
        cout<<"1. Crear Jugador"<<endl;
        cout<<"2. Modificar Jugadores"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Elija una Opcion: "<<endl;
        cin>>option;
        return option;
    }
int main()
{
    char option;
    vector <player_struct> Players;
    cout<<"####playerStats.cpp v1.0###"<<endl;
    //player_struct Player;
    //Player = playerCreation();
    //Players.push_back(Player);
    while(true)
        {
            option = showMenu();
            switch(option)
                {
                    case '1':
                        {
                            cout<<"Elegiste la Opcion 1"<<endl;
                        }
                    break;
                    case '2':
                        {
                            cout<<"Elegiste la Opcion 2"<<endl;
                        }
                    break;
                    case '3':
                        {
                            cout<<"Elegiste la Opcion 1"<<endl;
                        }
                    break;       
                    default:
                        {
                            cout<<"Opcion Incorrecta"<<endl;
                        }                                                     
                    break;
                }
        }
    
    return 0;
}
