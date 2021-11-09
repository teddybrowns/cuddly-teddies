#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;

string board[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
string str;
int difficulty = 0;
int player;
int position;
int choice;
bool isWin = false;
bool isFilled = false;
bool single;

void gameBoard();
void changePlayer();
bool filledUp();
bool isWinner();
void updateBoard();
void gameOver();
void takeTurn();
void easyBot();
void normalBot();
void hardBot();
void impossiableBot();
void chooseDif();
void introduction();
void mainMenu();
void resetGame();
void reset();
void choosePlayer();
int main();

void choosePlayer()
{
    if(single == true){
        cout << "-Tic Tac Toe(SinglePlayer)-" << endl;
    }else{
        cout << "-Tic Tac Toe(Multiplayer)-" << endl;
    }
    cout << "Choose your turn" << endl;
    cout << "Player 1) = X (always first)" << endl;
    cout << "Player 2) = O (always second)" << endl;
    cout << "> ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        player = 1;
        introduction();
        break;
    case 2:
        player = 2;
        introduction();
        break;
    default:
        cout << "\nPlease enter the valid numbers given" << endl;
        choosePlayer();
        break;
    }
}

void resetGame()
{
    reset();
    choosePlayer();
}


void gameBoard()
{
    cout << "     |     |     " << endl;
    cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  " << endl;
    cout << "     |     |     " << endl;
}

void changePlayer()
{
    if(player == 1){
        player++;
    }else{
        player--;
    }
}

void reset()
{
    for(int i = 1; i < 10; i++)
    {
        str = to_string(i);
        board[i - 1] = str;
    }
    if(single != true){
        difficulty = 0;
    }
}

bool filledUp()
{
    for(int i = 0; i < 9; i++)
    {
        if(board[i] == "X" || board[i] == "O"){
            isFilled = true;
        }else{
            isFilled = false;
            return 0;
        }
    }
    return 0;
}

bool isWinner()
{
    //X
    if((board[0]==board[1])&&(board[1]==board[2])&&(board[2]!="X")){
        isWin = true;
    }else if((board[3]==board[4])&&(board[4]==board[5])&&(board[5]!="X")){
        isWin = true;
    }else if((board[6]==board[7])&&(board[7]==board[8])&&(board[8]!="X")){
        isWin = true;
    }else if((board[0]==board[3])&&(board[3]==board[6])&&(board[6]!="X")){
        isWin = true;
    }else if((board[1]==board[4])&&(board[4]==board[7])&&(board[7]!="X")){
        isWin = true;
    }else if((board[2]==board[5])&&(board[5]==board[8])&&(board[8]!="X")){
        isWin = true;
    }else if((board[0]==board[4])&&(board[4]==board[8])&&(board[8]!="X")){
        isWin = true;
    }else if((board[2]==board[4])&&(board[4]==board[6])&&(board[6]!="X")){
        isWin = true;
    }
    //O
    else if((board[0]==board[1])&&(board[1]==board[2])&&(board[2]!="O")){
        isWin = true;
    }else if((board[3]==board[4])&&(board[4]==board[5])&&(board[5]!="O")){
        isWin = true;
    }else if((board[6]==board[7])&&(board[7]==board[8])&&(board[8]!="O")){
        isWin = true;
    }else if((board[0]==board[3])&&(board[3]==board[6])&&(board[6]!="O")){
        isWin = true;
    }else if((board[1]==board[4])&&(board[4]==board[7])&&(board[7]!="O")){
        isWin = true;
    }else if((board[2]==board[5])&&(board[5]==board[8])&&(board[8]!="O")){
        isWin = true;
    }else if((board[0]==board[4])&&(board[4]==board[8])&&(board[8]!="O")){
        isWin = true;
    }else if((board[2]==board[4])&&(board[4]==board[6])&&(board[6]!="O")){
        isWin = true;
    }else{
        isWin = false;
    }
    return 0;
}


void gameOver()
{
    if(isWin == true){
        changePlayer();
        cout << "Game's over... Player " << player << "'s the winner!\n" << endl;
        gameBoard();
        cout << "\n1) Play again" << endl;
        cout << "2) return to menu" << endl;
        cout << "> ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            resetGame();
            break;
        case 2:
            reset();
            mainMenu();
            break;
        default:
            cout << "\nPlease enter the valid numbers given" << endl;
            gameOver();
            break;  
        }
    }else if(isFilled == true){
        cout << "Game's over... It's tie!" << endl;
        gameBoard();
        cout << "\n1) Play again" << endl;
        cout << "2) return to menu" << endl;
        cout << "> ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            resetGame();
            break;
        case 2:
            reset();
            mainMenu();
            break;
        default:
            cout << "\nPlease enter the valid numbers given" << endl;
            gameOver();
            break;
        }
    }
}

void updateBoard()
{
    if(board[position - 1] == "X" || board[position - 1] == "O"){
        cout << "That position is already taken!" << endl;
        takeTurn();
    }else{
        if(player % 2 == 1){
            board[position - 1] = "X";
        }else{
            board[position - 1] = "O";
        }
    }
}

void takeTurn()
{
    if(single == true){
        int turns = 1;
        if(player == 1){
            if(player != 1 && turns==1){
                changePlayer();
                turns++;
            }
            cout << "\nPlayer " << player << "'s turn enter(1-9)" << endl;
            cout << "> ";
            cin >> position;
            updateBoard();
            changePlayer();
            isWinner();
            filledUp();
            gameOver();
            if(difficulty == 1){
                easyBot();
            }else if(difficulty == 2){
                normalBot();
            }else if(difficulty == 3){
                hardBot();
            }else if(difficulty == 4){
                impossiableBot();
            }
            changePlayer();
            isWinner();
            filledUp();
            gameBoard();
            gameOver();
            takeTurn();
        }else{
            if(difficulty == 1){
                easyBot();
            }else if(difficulty == 2){
                normalBot();
            }else if(difficulty == 3){
                hardBot();
            }else if(difficulty == 4){
                impossiableBot();
            }
            changePlayer();
            isWinner();
            filledUp();
            gameBoard();
            gameOver();
            takeTurn();
        }
    }else{
        cout << "\nPlayer " << player << "'s turn enter(1-9)" << endl;
        cout << "> ";
        cin >> position;
        updateBoard();
        changePlayer();
        isWinner();
        filledUp();
        gameBoard();
        gameOver();
        takeTurn();
    }
}

void easyBot()
{
    while(isWin != true || isFilled != true){
        position = rand() % 9;
        if(board[position - 1] == "X" || board[position - 1] == "O" || position == 0){
            continue;
        }else{
            cout << "\nPlayer " << player << " chose " << position << endl;
            updateBoard();
            break;
        }
    }
}

void normalBot()
{
    while(isWin != true || isFilled != true){
        for(int i = 1; i < 10; i++)
        {
            if(board[i-1] != "X" && board[i-1] != "O"){
                if(player == 1){
                    board[i-1] = "X";
                }else{
                    board[i-1] = "O";
                }
                isWinner();
                if(isWin == true){
                    position = i;
                    cout << "\nPlayer " << player << " chose " << position << endl;
                    if(player == 1){
                        board[position-1] = "X";
                    }else{
                        board[position-1] = "O";
                    }
                    changePlayer();
                    gameOver();
                    break;
                }else{
                    str = to_string(i);
                    board[i-1] = str;
                }
            }
        }
        easyBot();
        break;
    }
}


void hardBot()
{
    bool winableMove = false;
    // find winable moves
    while(isWin != true || isFilled != true){
        for(int i = 1; i < 10; i++)
        {
            if(board[i-1] != "X" && board[i-1] != "O"){
                if(player == 1){
                    board[i-1] = "X";
                }else{
                    board[i-1] = "O";
                }
                isWinner();
                if(isWin == true){
                    position = i;
                    cout << "\nPlayer " << player << " chose " << position << endl;
                    if(player == 1){
                        board[position-1] = "X";
                    }else{
                        board[position-1] = "O";
                    }
                    changePlayer();
                    gameOver();
                    break;
                }else{
                    str = to_string(i);
                    board[i-1] = str;
                }
            }
        }
        // find opponet's winable moves (nice engrish lol)
        for(int i = 1; i < 10; i++)
        {
            if(board[i-1] != "X" && board[i-1] != "O"){
                if(player == 2){
                    board[i-1] = "X";
                }else{
                    board[i-1] = "O";
                }
                isWinner();
                if(isWin == true){
                    winableMove = true;
                    position = i;
                    cout << "\nPlayer " << player << " chose " << position << endl;
                    if(player == 1){
                        board[position-1] = "X";
                    }else{
                        board[position-1] = "O";
                    }
                    isWin = false;
                    break;
                }else{
                    str = to_string(i);
                    board[i-1] = str;
                }
            }
        }
        if(winableMove != true){
            easyBot();
        }
        winableMove = false;
        break;
    }
}

void impossiableBot(){
    cout << "Sorry, still in development..." << endl;
    system("pause");
    mainMenu();
}

void chooseDif()
{
    cout << "\n-Tic Tac Toe(Singleplayer)-" << endl;
    cout << "Choose the difficulty" << endl;
    cout << "1) Easy" << endl;
    cout << "2) Normal" << endl;
    cout << "3) Hard" << endl;
    cout << "4) Impossiable(Getting tie is possiable)" << endl;
    cout << "> ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        difficulty = 1;
        choosePlayer();
        break;
    case 2:
        difficulty = 2;
        choosePlayer();
        break;
    case 3:
        difficulty = 3;
        choosePlayer();
        break;
    case 4:
        cout << "Sorry, still in development..." << endl;
        system("pause");
        main();
        break;
    default:
        cout << "\nPlease enter the valid numbers given" << endl;
        chooseDif();
        break;
    }
}

void introduction()
{
    if(single == true)
    {
        if(difficulty == 1){
            cout << "\n-Tic Tac Toe(Easy)-" << endl;
        }else if(difficulty == 2){
            cout << "\n-Tic Tac Toe(Normal)-" << endl;
        }else if(difficulty == 3){
            cout << "\n-Tic Tac Toe(Hard)-" << endl;
        }else if(difficulty == 4){
            cout << "\n-Tic Tac Toe(Impossiable)-" << endl;
        }
        if(player == 1){
            cout << "Player 1 = X" << endl;
            cout << "Player(bot) 2 = O" << endl;
        }else{
            cout << "Player(bot) = 1" << endl;
            cout << "Player = 2" << endl;
        }
    }else{
        cout << "\n-Tic Tac Toe(Multiplayer)-" << endl;
        cout << "Player 1 = X" << endl;
        cout << "Player 2 = O" << endl;
    }
    cout << "\nThe 3x3 grid is shown below Enter(1-9)\n" << endl;
    if(player == 1){
        gameBoard();
    }else if(single != true && player == 2){
        gameBoard();
    }
    takeTurn();
}

void mainMenu()
{
    cout << "\n-Main Menu-" << endl;
    cout << "1) Singleplayer" << endl;
    cout << "2) Multiplayer" << endl;
    cout << "\n> ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        single = true;
        chooseDif();
        break;
    case 2:
        single == false;
        choosePlayer();
        break;
    default:
        cout << "\nPlease enter the valid numbers given" << endl;
        mainMenu();
        break;
    }
}

int main()
{
    system("cls");
    srand(time(0));
    mainMenu();
}