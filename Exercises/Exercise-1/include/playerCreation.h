struct player_struct
    {
        string name;
        int health;
        float x_pos;
        float y_pos;
    };


player_struct playerCreation()
    {
        player_struct Player;
        cout<<"### 1. Crear Jugador ###"<<endl;
        cout<<"Inserte el Nombre"<<endl;
        cin>>Player.name;
        Player.health = MAX_HEALTH;
        Player.x_pos = 0;
        Player.y_pos = 0;
        cout<<"Jugador creado"<<endl;
        return Player;
    }



player_struct& selectAPlayer(vector <player_struct>* Players)
    {
        int selectedPlayer;
        int selectedPlayerIndex;
        cout<<"### 2. Modificar Jugadores ###"<<endl;
        for(int i = 0; i < (*Players).size(); i++)
            {
                cout<<"-Jugador #"<<i + 1<<"-"<<endl;
                cout<<"Nombre: "<<(*Players)[i].name<<endl;
                cout<<"Salud: "<<(*Players)[i].health<<endl;
                cout<<"Posicion en X: "<<(*Players)[i].x_pos<<endl;
                cout<<"Posicion en Y: "<<(*Players)[i].y_pos<<endl<<endl;
            }
        cout<<"Seleccione un Jugador: ";
        do
            {
                cin>>selectedPlayer;
                selectedPlayerIndex = selectedPlayer - 1;
                cout<<"Su seleccion ha sido Jugador #: "<<selectedPlayerIndex + 1<<endl;
                if (selectedPlayerIndex < 0 || selectedPlayerIndex >= (*Players).size())
                    {
                        cout<<"Elija dentro del rango disponible";
                    }
            }
        while(selectedPlayerIndex < 0 || selectedPlayerIndex >= (*Players).size());  
        
        return (*Players)[selectedPlayerIndex];
    }

void modifyAPlayer(player_struct& Player)
    {
        cout<<"Modificando Jugador"<<endl;
        int selection_number = 0;
        do
            {
                cout<<"1. Modificar Nombre"<<endl;
                cout<<"2. Modificar Salud"<<endl;
                cout<<"3. Modificar Posicion X"<<endl;
                cout<<"4. Modificar Posicion Y"<<endl;
                cout<<"5. Move UP"<<endl;
                cout<<"6. Move DOWN"<<endl;
                cout<<"7. Move RIGHT"<<endl;
                cout<<"8. Move LEFT"<<endl;
                cout<<"9. Take DAMAGE"<<endl;
                cout<<"10. HEALING"<<endl;
                cout<<"11. Status"<<endl;
                cout<<"Seleccione la Opcion: ";
                cin>>selection_number;
                cout<<"Su seleccion: "<<selection_number<<endl;
            }
        while(selection_number <= 0 || selection_number > 11);

        cout<<"Showing Stats..."<<endl;
        cout<<"Nombre: "<<Player.name<<endl;
        cout<<"Salud: "<<Player.health<<endl;
        cout<<"Posicion en X: "<<Player.x_pos<<endl;
        cout<<"Posicion en Y: "<<Player.y_pos<<endl<<endl;
      
        switch (selection_number)
        {
        case 1:
            {
                cout<<"Ingrese el nuevo Nombre: ";
                cin>>Player.name;
            }    
        break;
        case 2:
            {
                cout<<"Ingrese la nueva Salud: ";
                cin>>Player.health;
                Player.health = Player.health < 0 ?  0 :  Player.health;
                Player.health = Player.health > MAX_HEALTH ?  MAX_HEALTH :  Player.health;
            }    
        break;
        case 3:
            {
                cout<<"Ingrese la nueva Posicion X: ";
                cin>>Player.x_pos;
            }    
        break;  
        case 4:
            {
                cout<<"Ingrese la nueva Posicion Y: ";
                cin>>Player.y_pos;
            }    
        break;  
        case 5:
            {
                cout<<"Moving UP...";
                Player.y_pos++;
            }    
        break;  
        case 6:
            {
                cout<<"Moving DOWN...";
                Player.y_pos--;
            }    
        break;  
        case 7:
            {
                cout<<"Moving RIGHT...";
                Player.x_pos++;
            }    
        break;  
        case 8:
            {
                cout<<"Moving LEFT...";
                Player.x_pos--;
            }    
        break;  
        case 9:
            {
                cout<<"Taking Damage...";
                int damage = rand() % (MAX_DAMAGE + 1);
                Player.health = (Player.health - damage) >= 0 ? Player.health - damage : 0;
            }    
        break;          
        case 10:
            {
                cout<<"Healthing...";
                int health = rand() % (MAX_HEALTH + 1);
                Player.health = (Player.health + health) <= MAX_HEALTH ? Player.health + health : MAX_HEALTH;
            }    
        break;   
        case 11:
            {
                // Pass away
            }   
        break;  
        }
        cout<<"Showing Stats..."<<endl;
        cout<<"Nombre: "<<Player.name<<endl;
        cout<<"Salud: "<<Player.health<<endl;
        cout<<"Posicion en X: "<<Player.x_pos<<endl;
        cout<<"Posicion en Y: "<<Player.y_pos<<endl<<endl;
                             
    }
