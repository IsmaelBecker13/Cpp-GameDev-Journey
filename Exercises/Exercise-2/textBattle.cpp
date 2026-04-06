#include <iostream>
#include <cstdlib>
#include<ctime>
#include <limits>
#define MAX_HEALTH_TOL_DIFF 20
#define MID_HEALTH_TOL_DIFF 10
#define MAX_DEF_TOL_DIFF 5

using namespace std;
class Character
    {
        private:
            int health;
            int ATK;
            int DEF;
            int turnMode;
        public:
            int showHealth()
                {
                    return health;
                }
            int showTurnMode()
                {
                    return turnMode;
                }
            int showATK()
                {
                    return ATK;
                }      
            int showDEF()
                {
                    return DEF;
                }                           
            void init(int rand_turn_mode)
                {
                    health = 100;
                    ATK = rand() % (5 + 1) + 2;
                    DEF = rand() % (5 + 1);
                    turnMode = rand_turn_mode;
                    cout << "Successfully created character!"<<endl;
                }
            void receiveDamage(int enemy_ATK)
                {
                    int result;
                    cout  << "Attacker ATK: " << enemy_ATK<<endl;
                    cout  << "Defender DEF: " << DEF<<endl;
                    result = (DEF < enemy_ATK) ? health - (enemy_ATK - DEF) : health;
                    health = (result < 0) ? 0 : result;
                    cout << "Defender health after attack: "<<result<<endl;
                }
            void increaseHealth()
                {
                    int inc = rand() % (5 + 1);
                    health = ((health + inc) < 100) ? health + inc : 100;
                    cout << "Final health increment: "<<inc<<endl;
                }
            void increaseATK()
                {
                    ATK += rand() % (5 + 1);
                }
            void increaseDEF()
                {
                    int inc = rand() % (5 + 1);
                    DEF += inc;
                    cout << "Final DEF increment: "<<inc<<endl;
                }                
            int returnValue()
                {
                    int value = rand() % (5 + 1);
                    return value;
                }
            void showStats()
                {
                    cout<<"---Stats---"<<endl
                        <<"Health: "<<health<<endl
                        <<"ATK: "<<ATK<<endl
                        <<"DEF: "<<DEF<<endl;
                }
    };

    int main()
        {
            srand(time(0));
            Character player, enemy;
            int turn = 0;
            int rand_turn_mode = rand() % 2;
            cout<<"Creating Player..."<<endl;
            player.init(rand_turn_mode);
            player.showStats();

            rand_turn_mode = (rand_turn_mode == 1) ? 0 : 1;
            cout<<"Creating Enemy..."<<endl;
            enemy.init(rand_turn_mode); 
            enemy.showStats();

            bool run = true;
            int selection;
            while(run)
                {
                    cout << "Starting Turn "<<turn + 1<<"..."<<endl; 
                    if (turn % 2 == player.showTurnMode())
                        {
                            // Player´s turn
                            cout << "Players turn" << endl
                                 <<"1. Attack." << endl
                                 <<"2. Defend or reduce incoming damage." << endl
                                 <<"3. Heal or recover health." << endl
                                 <<"4. Inspect status." <<endl
                                 <<"5. Quit or flee the battle." <<endl
                                 <<"Your Selection: ";
                            do
                                {
                                    if (!(cin >> selection))
                                        {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpia todo hasta fin de línea
                                            if (selection < 1 || selection > 5)
                                                cout << "Invalid option!"<< endl <<"Your Selection: ";
                                        }
                                }
                            while(selection < 1 || selection > 5);
                            switch (selection)
                                {
                                    case 1:
                                        {
                                            cout << "Player Attacks..." << endl;
                                            enemy.receiveDamage(player.showATK());
                                        }
                                    break;
                                    case 2:
                                        {
                                            cout << "Player Increasing DEF..." << endl;
                                            player.increaseDEF();
                                        }
                                    break;
                                    case 3:
                                        {
                                            cout << "Player Healthing..." << endl;
                                            player.increaseHealth();
                                        }
                                    break;
                                    case 4:
                                        {
                                            player.showStats();
                                        }
                                    break;
                                    case 5:
                                        {
                                            cout << "Player has fled the battle" << endl;
                                            run = false;
                                        }
                                    break;                                                                                    
                                }
                            cout << "Presiona Enter para continuar...";
                            cin.get();
                            turn++;
                        }
                    else
                        {
                            // Enemy's turn
                            cout << "Enemys turn" << endl;
                            if (player.showHealth() - enemy.showHealth() > MAX_HEALTH_TOL_DIFF)
                                {
                                    cout << "Enemy surrender because healthing difference: "<<player.showHealth() - enemy.showHealth()<<endl;
                                    selection = 5; // Surrender
                                }
                            else if (player.showHealth() - enemy.showHealth() > MID_HEALTH_TOL_DIFF)
                                {
                                    cout << "Enemy healthing because healthing difference: "<<player.showHealth() - enemy.showHealth()<<endl;
                                    selection = 3; // Healthing
                                }                                  
                            else if (player.showDEF() - enemy.showDEF() > MAX_DEF_TOL_DIFF)
                                {
                                    cout << "Enemy increasing DEF because DEF difference: "<<player.showDEF() - enemy.showDEF()<<endl;
                                    selection = 2; // Increasing DEF
                                }
                            else if (player.showDEF() < enemy.showATK())
                                {
                                    cout << "Enemy attacking because enemy ATK: "<<enemy.showATK()<<" | player DEF: "<<player.showDEF()<<endl;
                                    selection = 1; // Attack!
                                }
                            else
                                {
                                    cout << "Enemy healthing by default"<<endl;
                                    selection = 3; // Healthing
                                }
                              
                            switch (selection)
                                {
                                    case 1:
                                        {
                                            cout << "Enemy Attacks..." << endl;
                                            player.receiveDamage(enemy.showATK());
                                        }
                                    break;
                                    case 2:
                                        {
                                            cout << "Enemy Increasing DEF..." << endl;
                                            enemy.increaseDEF();
                                        }
                                    break;
                                    case 3:
                                        {
                                            cout << "Enemy Healthing..." << endl;
                                            enemy.increaseHealth();
                                        }
                                    break;
                                    case 4:
                                        {
                                            enemy.showStats();
                                        }
                                    break;
                                    case 5:
                                        {
                                            cout << "Enemy has fled the battle" << endl;
                                            run = false;
                                        }
                                    break;                                                                                    
                                }
                            cout << "Presiona Enter para continuar...";                            
                            cin.get();
                            turn++;
                        }
                    if (player.showHealth() <= 0)
                        {
                            cout << "Enemy has won the battle" << endl;
                            run = false;                           
                        }
                    else if (enemy.showHealth() <= 0)
                        {
                            cout << "Player has won the battle" << endl;
                            run = false; 
                        }                        
                    else if (selection != 5)
                        cout<<endl<<"### NEXT TURN ###"<<endl<<endl;
                }
            return 0;
        }