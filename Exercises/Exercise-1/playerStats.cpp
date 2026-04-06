#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
#define MAX_HEALTH 100
#define MAX_DAMAGE 100
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
    cout<<"####playerStats.cpp v1.6###"<<endl;
    bool run = true;
    while(run)
        {
            cout<<endl<<endl;
            option = showMenu();
            cout<<endl<<endl;
            switch(option)
                {
                    case '1':
                        {
                            // Crear un Jugador
                            Players.push_back(playerCreation());
                        }
                    break;
                    case '2':
                        {
                            // Modificar Jugadores
                            if (Players.size() > 0)
                                {
                                    player_struct& selectedPlayer = selectAPlayer(&Players);
                                    modifyAPlayer(selectedPlayer);
                                }
                            else
                                {
                                    cout<<"No hay jugadores aun"<<endl;
                                }                                
                        }
                    break;
                    case '3':
                        {
                            cout<<"Programa Finalizado"<<endl;
                            run = false;
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

