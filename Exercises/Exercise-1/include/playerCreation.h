struct player_struct
    {
        string name;
    };


player_struct playerCreation()
    {
        player_struct Player;
        cout<<"Creando al Jugador 2"<<endl;
        cout<<"Inserte el Nombre"<<endl;
        cin>>Player.name;
        cout<<"Jugador creado"<<endl;
        return Player;
    }