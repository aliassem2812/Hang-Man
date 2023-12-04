#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

string RandomWord(int);
int RandomNumber(int);
void Design(int);
int write_word(string word,string letter);

bool win=false;

int main()
{
    int live=7;
    int choice;
    string letter;
    string word;
    int num;
    string GuessedLetters="";

    cout<<"Choose your level: \n1)Easy\n2)Medium\n3)Hard\n-->";
    cin>>choice;

    while(choice<1 || choice>3)
    {
        system("cls");
        cout<<"You have entered wrong number renter your level..\n";
        cout<<"Choose your level: \n1)Easy\n2)Medium\n3)Hard\n-->";
        cin>>choice;
    }

    num= RandomNumber(choice);
    word=RandomWord(num);
    system("cls");

    bool Help=false;

    while(live>0)
    {
        win=true;
        Design(live);
        write_word(word,GuessedLetters);

        if(Help)
        {
            win=false;
            Help=false;
        }

        if(win==true)
            break;

        cout<<"\n\nIf you want to know the first letter write > help < [YOUR LIFE WILL DECREASE!!]"<<endl;
        cout<<"\n\nPay Attention: The words are in German and may include Umlauts"<<endl;
        cout<<"\n\nLetters guessed: "<<GuessedLetters<<endl;
        cout<<"\n\nEnter a letter: ";
        cin>>letter;

        int b=0;

        while(letter[b]!= '\0')
            b++;

        if(b>2)
        {
            if(letter=="help")
            {
                Help=true;
                live--;
                cout<<"-->\""<<word[0]<<"\"<--"<<endl;
                system("pause");
            }
            else
            {
            system("cls");
            for(;;)
            cout<<"-_- YOU ARE CHEATING -_-"<<endl;
            }

        }

        GuessedLetters+=letter[0];

        if(word.find(letter)!= -1 ||Help)
        {
             system("cls");
                continue;
        }
        else
        {
             system("cls");
             live--;
        }

    }

    if(live==0)
    {
        cout<<"\n\n\n\t\t\t\t >>>YOU LOSE<<< 0_0\n\n";
        cout<<"THE WORD WAS: "<<word<<endl;
    }

    if(live>0)
    {
        cout<<"\n\n\n\t\t\t\t >>>YOU WIN<<< ;D\n\n";
        cout<<"THE WORD WAS: "<<word<<endl;
    }

    return 0;
}

string RandomWord(int random_number)
{

    int counter=1;
    string line;
    string word;
    ifstream file("wordlist.txt");
    while(getline(file,line))
    {
       if(random_number==counter)
       {
           word=line;
           break;
       }
       counter++;
    }
        return word;
}

int RandomNumber(int choice)
{
    //There are 192 words
    //There are 64 words with number of letters less than 5
    //There are 60 words with number of letters between 5 and 8
    //There are 68 words with number of letters more than 8
    srand(time(NULL));
    int random;

    if(choice==1)
     random= (rand()%(64+1 -1))+1;

    if(choice==2)
     random= (rand()%(124+1 -65))+65; //60+64=124

     if(choice==3)
     random= (rand()%(192+1 -125))+125;//124+68=192
    return random;
}


void Design(int live)
{
    switch(live)
    {
    case 0:
    cout<<"\t\t\t|--------|"<<endl;
    cout<<"\t\t\t|        0"<<endl;
    cout<<"\t\t\t|       /|\\"<<endl;
    cout<<"\t\t\t|        |"<<endl;
    cout<<"\t\t\t|       / \\"<<endl;
    cout<<"\t\t\t|"<<endl;
    cout<<"\t\t\t|_"<<endl;
        break;

    case 1:
    cout<<"\t\t\t|--------|"<<endl;
    cout<<"\t\t\t|        0"<<endl;
    cout<<"\t\t\t|       /|\\"<<endl;
    cout<<"\t\t\t|        |"<<endl;
    cout<<"\t\t\t|         \\"<<endl;
    cout<<"\t\t\t|"<<endl;
    cout<<"\t\t\t|_"<<endl;
        break;

    case 2:
    cout<<"\t\t\t|--------|"<<endl;
    cout<<"\t\t\t|        0"<<endl;
    cout<<"\t\t\t|       /|\\"<<endl;
    cout<<"\t\t\t|        |"<<endl;
    cout<<"\t\t\t|          "<<endl;
    cout<<"\t\t\t|"<<endl;
    cout<<"\t\t\t|_"<<endl;
        break;

    case 3:
    cout<<"\t\t\t|--------|"<<endl;
    cout<<"\t\t\t|        0"<<endl;
    cout<<"\t\t\t|       /|\\"<<endl;
    cout<<"\t\t\t|        "<<endl;
    cout<<"\t\t\t|      "<<endl;
    cout<<"\t\t\t|"<<endl;
    cout<<"\t\t\t|_"<<endl;
        break;

    case 4:
    cout<<"\t\t\t|--------|"<<endl;
    cout<<"\t\t\t|        0"<<endl;
    cout<<"\t\t\t|        |\\"<<endl;
    cout<<"\t\t\t|        "<<endl;
    cout<<"\t\t\t|       "<<endl;
    cout<<"\t\t\t|"<<endl;
    cout<<"\t\t\t|_"<<endl;
        break;

    case 5:
    cout<<"\t\t\t|--------|"<<endl;
    cout<<"\t\t\t|        0"<<endl;
    cout<<"\t\t\t|        |"<<endl;
    cout<<"\t\t\t|        "<<endl;
    cout<<"\t\t\t|       "<<endl;
    cout<<"\t\t\t|"<<endl;
    cout<<"\t\t\t|_"<<endl;
        break;

    case 6:
    cout<<"\t\t\t|--------|"<<endl;
    cout<<"\t\t\t|        0"<<endl;
    cout<<"\t\t\t|        "<<endl;
    cout<<"\t\t\t|        "<<endl;
    cout<<"\t\t\t|       "<<endl;
    cout<<"\t\t\t|"<<endl;
    cout<<"\t\t\t|_"<<endl;
        break;

    case 7:
        cout<<"\t\t\t|--------|"<<endl;
    cout<<"\t\t\t|        "<<endl;
    cout<<"\t\t\t|        "<<endl;
    cout<<"\t\t\t|        "<<endl;
    cout<<"\t\t\t|       "<<endl;
    cout<<"\t\t\t|"<<endl;
    cout<<"\t\t\t|_"<<endl;
        break;

    }

}

int write_word(string word,string letter)
{
    for(int x=0;x<word.size();x++)
    {

        if(letter.find(word.at(x)) != -1)
            cout<<word.at(x)<< " ";
        else
        {
            cout<<"_ ";
            win=false;
        }

    }
    return 0;
}
