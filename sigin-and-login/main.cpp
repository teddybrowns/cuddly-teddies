#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

ofstream file;
string choices, username, password, un, pw, loggedinName, loggedinPass;
int choice;

void sign_up();
void login();
void forgor();
void menu();
void login_error();
void logged_in_menu();
void change_name();
void change_pass();

int main()
{
    menu();
}

void menu()
{
    system("cls");
    cout << "-Menu-" << endl;
    cout << "1) Sign up" << endl;
    cout << "2) Login" << endl;
    cout << "3) Quit\n" << endl;
    cout << ">";cin >> choice, choices;
    switch(choice)
    {
        case 1:
            sign_up();
            break;
        case 2:
            login();
            break;
        case 3:
            break;
        default:
            cout << "-Please enter the valid number given-\n" << endl; // need to fix // when the input is string, it loops forever
            system("pause");
            menu();
            break;
    }
}

void sign_up()
{
    system("cls");
    
    cout << "-Sign up-" << endl;
    cout << "Enter your username: >";cin >> username;
    cout << "Enter your password: >";cin >> password;


    ifstream read("data\\" + username + ".txt");
    getline(read, un);
    
    if(un != username){
        file.open("data\\" + username + ".txt");
        file << username << endl << password;
        file.close();
    }else if(un == username){
        cout << "-Username already taken-" << endl;
        system("pause");
        menu();
    }else if(un == username && pw == password){
        cout << "-Account already created-" << endl;
        system("pause");
        menu();
    }
    

    cout << "\n-Signed up successfully-" << endl;
    system("pause");
    menu();

}    
    

void login()
{
    system("cls");
    cout << "-Login-" << endl;
    cout << "Enter your username: >";cin >> username;
    cout << "Enter your password: >";cin >> password;

    ifstream read("data\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if(un == username && pw == password)
    {
        loggedinName = username;
        loggedinPass = password;

        cout << "-Welcome " << username << "-" << endl;

        system("pause");
        system("cls");
        logged_in_menu();
    }else if(un != username || pw != password){
        login_error();
    }
}

void forgor()
{
    system("cls");
    cout << "I forgor" << endl;
    system("pause");
    menu();
}

void login_error()
{
    cout << "\n-Wrong username or password-" << endl;
    cout << "0) Return to menu" << endl;
    cout << "1) Forgot your username or password?" << endl;
    cout << "2) Haven't signed up? sign up now!\n" << endl;
    cout << ">";cin >> choice;
    
    switch(choice)
    {
        case 0:
            menu();
            break;
        case 1:
            forgor();
            break;
        case 2:
            sign_up();
            break;
        default:
            cout << "-Please enter the valid number given-\n" << endl;
            system("pause");
            login_error();
            break;
    }
}

void logged_in_menu()
{
    system("cls");
    int choice;
    cout << "-Menu" << "(" << username << ")" << "-" << endl;
    cout << "1) Manage your account" << endl;
    cout << "2) Sign out" << endl;
    cout << "3) Quit\n" << endl;
    cout << ">";cin >> choice;
    switch(choice)
    {
        case 1:
            break;
        case 2:
            loggedinName = "";
            loggedinPass = "";
            menu();
            break;
        case 3:
            break;
        default:
            cout << "-Please enter the valid number given-\n" << endl;
            system("pause");
            logged_in_menu();
            break;
    }
}
