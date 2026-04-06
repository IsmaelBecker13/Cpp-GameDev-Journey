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

player_struct& selectAPlayer(vector <player_struct>*);
void modifyAPlayer(player_struct*);

player_struct& selectAPlayer(vector <player_struct>* Players)
    {
        char selectedPlayer;
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
                selectedPlayerIndex = atoi(&selectedPlayer) - 1;
                cout<<"Su seleccion ha sido Jugador #: "<<selectedPlayerIndex + 1<<endl;
                if (selectedPlayerIndex < 0 || selectedPlayerIndex >= (*Players).size())
                    {
                        cout<<"Elija dentro del rango disponible";
                    }
            }
        while(selectedPlayerIndex < 0 || selectedPlayerIndex >= (*Players).size());  
        
        return (*Players)[selectedPlayerIndex];;
    }

void modifyAPlayer(player_struct& Player)
    {
        cout<<"Modificando Jugador"<<endl;
        char selection;
        int selection_number = 0;
        do
            {
                cout<<"1. Modificar Nombre"<<endl;
                cout<<"2. Modificar Salud"<<endl;
                cout<<"3. Modificar Posicion X"<<endl;
                cout<<"4. Modificar Posicion Y"<<endl;
                cout<<"Seleccione el atributo a Modificar: ";
                cin>>selection;
                selection_number = atoi(&selection);
            }
        while(selection_number <= 0 || selection_number > 4);
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
                Player.health < 0 ? 0 : Player.health;
                Player.health > MAX_HEALTH ? MAX_HEALTH : Player.health;
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
        }
    }
