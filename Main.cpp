#include <iostream>
#include<ctime>
#include<cstdlib>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER '\r'

using namespace std;

void character(string A, int D)
{
    for (int i = 0; i < A.length(); i++)
    {
        cout<<A[i];
        Sleep(D);
    }
}

int domanda(string testo, string ra, string rb, string rc, string rd, char rOk1, char rOk2, char S, bool suoni, string A, int D, char R, char Lingua)
{
    Sleep(1000);
    cout<<""<<endl;
    A=testo;
    character(A, D);
    cout<<""<<endl;
    cout<<""<<endl;
    A="A) ";
    character(A, D);
    A=ra;
    character(A, D);
    cout<<""<<endl;
    Sleep(1000);
    A="B) ";
    character(A, D);
    A=rb;
    character(A, D);
    cout<<""<<endl;
    Sleep(1000);
    A="C) ";
    character(A, D);
    A=rc;
    character(A, D);
    cout<<""<<endl;
    Sleep(1000);
    A="D) ";
    character(A, D);
    A=rd;
    character(A, D);
    cout<<""<<endl;
    Sleep(1000);
    cout<<""<<endl;
    cin>>R;
    if (Lingua== 'I')
    {
        character("Sei sicuro della tua risposta?Si o No (S/N)", D);
    }
    else character("Are you sure about your answer? Yes or No (Y/N)", D);
    cout<<""<<endl;
    cout<<""<<endl;
    cin >> S;
    cout << " " << endl;
    while (S == 'N' || S == 'n')
    {
       system("cls");
       if (Lingua=='I')
       {
           character("Scegli pure con calma",D);
       }
       else character("Think about it all the time you want",D);
       cout<<""<<endl;
       Sleep(2000);
       cout<<""<<endl;
       A=testo;
       character(A, D);
       cout<<""<<endl;
       cout<<""<<endl;
       A="A) ";
       character(A, D);
       A=ra;
       character(A, D);
       cout<<""<<endl;
       Sleep(1000);
       A="B) ";
       character(A, D);
       A=rb;
       character(A, D);
       cout<<""<<endl;
       Sleep(1000);
       A="C) ";
       character(A, D);
       A=rc;
       character(A, D);
       cout<<""<<endl;
       Sleep(1000);
       A="D) ";
       character(A, D);
       A=rd;
       character(A, D);
       Sleep(1000);
       cout<<""<<endl;
       cout<<""<<endl;
       cin>>R;
       cout << " " << endl;
       if (Lingua== 'I')
    {
        character("Sei sicuro della tua risposta?Si o No (S/N)", D);
    }
    else character("Are you sure about your answer? Yes or No (Y/N)", D);
       cout<<""<<endl;
       cout<<""<<endl;
       cin >> S;
       cout << " " << endl;
    }
    cout << " " << endl;
    if (Lingua =='I')
    {
        character("E la risposta e'...", D);
    }
    else character("And your answer is...", D);
    cout<<""<<endl;
    Sleep(2000);
    cout << " " << endl;
    if (R== rOk1 || R == rOk2)
    {
        if (suoni)
      {
         Beep(550, 250);
         system("Color 02");
         Beep(550, 150);
         system("Color 07");
         Beep(750, 500);
         system("Color 02");
         Sleep(250);
         system("Color 07");
      }
      if (Lingua=='I')
      {
          cout << "Corretta"<<endl;
      }
      else cout <<"Correct"<<endl;
      Sleep(1000);
      system("cls");
      return 0;

    }
    else
    {
        if (suoni)
        {
            Beep(650, 250);
            system("Color 04");
            Beep(650, 150);
            system("Color 07");
            Beep(450, 700);
            system("Color 04");
            Sleep(250);
            system("Color 07");
        }
        if (Lingua=='I')
        {
            cout <<"Sbagliata...";
        }
        else cout<<"Wrong...";
        Sleep(1000);
        system("cls");
        return 50;
    }
}

int domandaA(string testo, string ra, string rb, string rc, string rd, char rOK1, char rOK2, char R, string A, int D, char Lingua)
{
    A=testo;
    character(A, D);
    cout<<""<<endl;
    cout<<""<<endl;
    character("A) ", D);
    A=ra;
    character(A, D);
    cout<<""<<endl;
    character("B) ", D);
    A=rb;
    character(A, D);
    cout<<""<<endl;
    character("C) ", D);
    A=rc;
    character(A, D);
    cout<<""<<endl;
    character("D) ", D);
    A=rd;
    character(A, D);
    cout<<""<<endl;
    cout<<""<<endl;
    cin>>R;
    if (R == rOK1 || R == rOK2)
    {
        if (Lingua=='I')
      {
          cout << "Corretta"<<endl;
      }
      else cout <<"Correct"<<endl;
        cout<<""<<endl;
        return 0;
    }
    else
    {
        if (Lingua=='I')
        {
            cout <<"Sbagliata..."<<endl;
        }
        else cout<<"Wrong..."<<endl;
        cout<<""<<endl;
        return 1;
    }
}

int main ()
{
  string A;
  string B;
  bool animation=false;
  bool refresh=false;
  bool suoni=true;
  bool sel=true;
  bool song=true;
  char R, S, M, Lingua;
  float L, errore=0;
  float Frase;
  int errori,v=2, D=75, d=0, combo=0, scelta=1, disco=0, randomizer1, randomizer2;
  string Salto;
  system("mode con lines=50");
  system("mode con cols=150");
  cout<<"                                 Seleziona la lingua                                 "<<endl;
  cout<<""<<endl;
  cout<<"              Italiano  <==                               Inglese                    "<<endl;
  char f;
  while (sel)
  {
      switch ((f = _getch()))
      {
      case KEY_RIGHT:
        if (scelta != 2)
        {
            scelta++;
            refresh=true;
        }
      break;
      case KEY_LEFT:
        if (scelta != 1)
        {
            scelta--;
            refresh=true;
        }
        break;
      case KEY_ENTER:
        if (scelta == 1)
        {
            Lingua='I';
            sel=false;
            system("cls");
        }
        if (scelta == 2)
        {
            Lingua='E';
            sel=false;
            system("cls");
        }
        break;
        default: break;
      }
      if (refresh == true)
        {
            system("cls");
            if (scelta == 1)
            {
                cout<<"                                 Seleziona la lingua                                 "<<endl;
                cout<<""<<endl;
                cout<<"              Italiano  <==                               Inglese                    "<<endl;
            }
            if (scelta == 2)
            {
                cout<<"                                 Select the language                                 "<<endl;
                cout<<""<<endl;
                cout<<"              Italian                                     English  <==                 "<<endl;
            }
            refresh=false;
        }
  }
  if (Lingua == 'I')
  {
  while (true)
  {
       if (song)
       {
        Beep(450, 250);
        Beep(550, 250);
        Beep(650, 250);
        Beep(700, 500);
        Beep(700, 250);
        Beep(450, 250);
        Beep(550, 250);
        Beep(650, 250);
        Beep(700, 500);
        Beep(700, 250);
        Beep(450, 250);
        Beep(550, 250);
        Beep(650, 250);
        Beep(700, 750);
        Beep(700, 250);
        Beep(550, 500);
        Beep(450, 500);
       }
       int i=0;
       int k=0;
       if (animation==false)
       {
        cout<<"######################################################################################################################################################"<<endl;
        cout<<"#                                                                                                                                                    #"<<endl;
        cout<<"#                      ___   ___        __   __  ___   ___      ___   _______  __    _  _______  ______    ___   _______                             #"<<endl;
        cout<<"#                     |   | |   |      |  |_|  ||   | |   |    |   | |       ||  |  | ||   _   ||    _ |  |   | |       |                            #"<<endl;
        cout<<"#                     |   | |   |      |       ||   | |   |    |   | |   _   ||   |_| ||  |_|  ||   | ||  |   | |   _   |                            #"<<endl;
        cout<<"#                     |   | |   |      |       ||   | |   |    |   | |  | |  ||       ||       ||   |_||_ |   | |  | |  |                            #"<<endl;
        cout<<"#                     |   | |   |___   |       ||   | |   |___ |   | |  |_|  ||  _    ||       ||    __  ||   | |  |_|  |                            #"<<endl;
        cout<<"#                     |   | |       |  | ||_|| ||   | |       ||   | |       || | |   ||   _   ||   |  | ||   | |       |                            #"<<endl;
        cout<<"#                     |___| |_______|  |_|   |_||___| |_______||___| |_______||_|  |__||__| |__||___|  |_||___| |_______|                            #"<<endl;
        cout<<"#                                                                                                                                                    #"<<endl;
        cout<<"######################################################################################################################################################"<<endl;
         srand(time(NULL));
         Frase=(rand() %5) +1;
         if (Frase==1)
         {
             B="Da oggi, senza errori grammaticali!";
         }
         if (Frase == 2)
         {
             B="A good game";
         }
         if (Frase == 3)
         {
             B="Il migliore che ci sia";
         }
         if (Frase== 4)
         {
             B="Vincita in soldi del Monopoly";
         }
         if (Frase == 5)
         {
             B="Ora con il 99% di grassi in meno!";
         }
         cout<<"                                                                                                                 ";
         cout<<B<<endl;
       }
       while(animation)
       {
           if (k < 150)
           {
               A="#";
               cout<<A;
               k++;
               Sleep(1);
           }
           if (k >= 150 && k<300)
           {
               A="#                                                                                                                                                    #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if (k >=300 && k<450)
           {
               if (k== 300)
               {
                   i=0;
               }
                A="#                      ___   ___        __   __  ___   ___      ___   _______  __    _  _______  ______    ___   _______                             #";
                cout<<A[i];
                i++;
                k++;
                Sleep(1);
           }
           if ( k >= 450 && k < 600)
           {
               if (k== 450)
               {
                   i=0;
               }
               A="#                     |   | |   |      |  |_|  ||   | |   |    |   | |       ||  |  | ||   _   ||    _ |  |   | |       |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 600 && k < 750)
           {
               if (k== 600)
               {
                   i=0;
               }
               A="#                     |   | |   |      |       ||   | |   |    |   | |   _   ||   |_| ||  |_|  ||   | ||  |   | |   _   |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 750 && k < 900)
           {
               if (k== 750)
               {
                   i=0;
               }
               A="#                     |   | |   |      |       ||   | |   |    |   | |  | |  ||       ||       ||   |_||_ |   | |  | |  |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 900 && k < 1050)
           {
               if (k== 900)
               {
                   i=0;
               }
               A="#                     |   | |   |___   |       ||   | |   |___ |   | |  |_|  ||  _    ||       ||    __  ||   | |  |_|  |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 1050 && k < 1200)
           {
               if (k== 1050)
               {
                   i=0;
               }
               A="#                     |   | |       |  | ||_|| ||   | |       ||   | |       || | |   ||   _   ||   |  | ||   | |       |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 1200 && k < 1350)
           {
               if (k== 1200)
               {
                   i=0;
               }
               A="#                     |___| |_______|  |_|   |_||___| |_______||___| |_______||_|  |__||__| |__||___|  |_||___| |_______|                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 1350 && k < 1500)
           {
               if (k== 1350)
               {
                   i=0;
               }
               A="#                                                                                                                                                    #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 1500 && k < 1650)
           {
               if (k== 1500)
               {
                   i=0;
               }
               A="######################################################################################################################################################";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
          if (k==1650)
          {
              animation=false;
              cout<<""<<endl;
          }

       }
        cout<<""<<endl;
        cout<<""<<endl;
        Sleep(2000);
        cout<<""<<endl;
        cout<<"Start  <==               Modalita' Allenamento                    Prova a vinecere un MILIONEE!"<<endl;
                        cout<<""<<endl;
                        cout<<"Esci                     Impostazioni"<<endl;
        sel=true;
        char c;
        scelta=1;
        while (sel)
        {
            switch((c= _getch()))
            {
                case KEY_UP:
                    if (scelta != 1 && scelta != 2)
                    {
                        scelta=scelta-2;
                        refresh=true;
                        if (scelta == 2 && disco == 2)
                        {
                            disco=3;
                        }
                    }
                break;
                case KEY_DOWN:
                    if (scelta !=3 && scelta !=4)
                    {
                        scelta=scelta+2;
                        refresh=true;
                        if (scelta==3 && disco == 0)
                        {
                            disco=1;
                        }
                        if (scelta==4 && disco==3)
                        {
                            disco=0;
                        }
                    }
                break;
                case KEY_LEFT:
                    if (scelta != 3 && scelta != 1)
                    {
                        scelta=scelta-1;
                        refresh=true;
                    }
                break;
                case KEY_RIGHT:
                    if (scelta != 2 && scelta !=4)
                    {
                        scelta=scelta+1;
                        refresh=true;
                        if (scelta == 4 && disco == 1)
                        {
                            disco=2;
                        }
                    }
                    break;
                case KEY_ENTER:
                    sel=false;
                    if (scelta == 1)
                    {
                        S='S';
                    }
                    if (scelta == 2)
                    {
                        S='A';
                    }
                    if (scelta == 3)
                    {
                        S='E';
                    }
                    if (scelta == 4)
                    {
                        S='I';
                    }
                    break;
            }
            if (refresh)
                {
                    system("cls");
                     cout<<"######################################################################################################################################################"<<endl;
                     cout<<"#                                                                                                                                                    #"<<endl;
                     cout<<"#                      ___   ___        __   __  ___   ___      ___   _______  __    _  _______  ______    ___   _______                             #"<<endl;
                     cout<<"#                     |   | |   |      |  |_|  ||   | |   |    |   | |       ||  |  | ||   _   ||    _ |  |   | |       |                            #"<<endl;
                     cout<<"#                     |   | |   |      |       ||   | |   |    |   | |   _   ||   |_| ||  |_|  ||   | ||  |   | |   _   |                            #"<<endl;
                     cout<<"#                     |   | |   |      |       ||   | |   |    |   | |  | |  ||       ||       ||   |_||_ |   | |  | |  |                            #"<<endl;
                     cout<<"#                     |   | |   |___   |       ||   | |   |___ |   | |  |_|  ||  _    ||       ||    __  ||   | |  |_|  |                            #"<<endl;
                     cout<<"#                     |   | |       |  | ||_|| ||   | |       ||   | |       || | |   ||   _   ||   |  | ||   | |       |                            #"<<endl;
                     cout<<"#                     |___| |_______|  |_|   |_||___| |_______||___| |_______||_|  |__||__| |__||___|  |_||___| |_______|                            #"<<endl;
                     cout<<"#                                                                                                                                                    #"<<endl;
                     cout<<"######################################################################################################################################################"<<endl;
                     if (song==true)
                     {
                         cout<<"                                                                                                                 ";
                     cout<<B<<endl;
                     }
                     cout<<""<<endl;
                     cout<<""<<endl;
                     cout<<""<<endl;
                     if (scelta == 1)
                    {
                        cout<<"Start  <==               Modalita' Allenamento                    Prova a vincere un MILIONEE!"<<endl;
                        cout<<""<<endl;
                        cout<<"Esci                     Impostazioni"<<endl;
                    }
                    if (scelta == 2)
                    {
                        cout<<"Start                    Modalita' Allenamento   <==              Perfetta per allenarsi"<<endl;
                        cout<<""<<endl;
                        cout<<"Esci                     Impostazioni"<<endl;
                    }
                    if (scelta == 3)
                    {
                        cout<<"Start                    Modalita' Allenamento "<<endl;
                        cout<<""<<endl;
                        cout<<"Esci  <==                Impostazioni                             Gia' te ne vai?"<<endl;
                    }
                    if (scelta == 4)
                    {
                        cout<<"Start                    Modalita' Allenamento "<<endl;
                        cout<<""<<endl;
                        cout<<"Esci                     Impostazioni  <==                        Per modificare questa"<<endl;
                        cout<<"                                                                  bellissima esperienza"<<endl;
                    }
                    if (scelta == 1 && disco == 3)
                        {
                            system("Color 04");
                            Sleep(250);
                            system("Color 02");
                            Sleep(250);
                            system("Color 0B");
                            Sleep(250);
                            system("Color 05");
                            Sleep(250);
                            system("Color 01");
                            Sleep(250);
                            system("Color 07");
                            disco=0;
                        }
                    refresh=false;
                }
        }
        if (S=='E')
        {
            system("cls");
            cout<<"Alla prossima!"<<endl;
            return 0;
        }
        if (S=='I')
        {
            system("cls");
            cout<<"Velocita' di testo  <=="<<endl;
            cout<<"Suoni "<<endl;
            cout<<"Home"<<endl;
            char e;
            scelta=1;
            sel=true;
            refresh=false;
            while  (sel)
            {
                switch((e = _getch()))
                {
                case KEY_UP:
                    if (scelta != 1)
                    {
                        scelta--;
                        refresh=true;
                    }
                    break;
                case KEY_DOWN:
                    if (scelta != 3)
                    {
                        scelta++;
                        refresh=true;
                    }
                    break;
                case KEY_ENTER:
                    {
                        sel=false;
                        if (scelta == 1)
                        {
                            S='v';
                        }
                        if (scelta == 2)
                        {
                            S='s';
                        }
                        if (scelta == 3)
                        {
                            S='=';
                        }
                    }
                }
                if (refresh)
                {
                    system("cls");
                    if (scelta==1)
                    {
                        cout<<"Velocita' di testo  <=="<<endl;
                        cout<<"Suoni "<<endl;
                        cout<<"Home "<<endl;
                    }
                    if (scelta == 2)
                    {
                        cout<<"Velocita' di testo  "<<endl;
                        cout<<"Suoni <=="<<endl;
                        cout<<"Home "<<endl;
                    }
                    if (scelta == 3)
                    {
                        cout<<"Velocita' di testo  "<<endl;
                        cout<<"Suoni "<<endl;
                        cout<<"Home <=="<<endl;
                    }
                }
            }
            if (S=='v')
            {
                sel=true;
                while (sel)
                {
                    if (v==4)
                    {
                         cout<<"Premere < o > per aumentare o diminuire la velocità di testo durante il gioco, o = per tornare alla home"<<endl;
                         cout<<"Attualmente la velocita' e' in modalita' supersonica"<<endl;
                    }
                    else
                    {
                        cout<<"Premere < o > per aumentare o diminuire la velocità di testo durante il gioco, o = per tornare alla home"<<endl;
                        cout<<"Attualmente la velocita' e' di "<<v<<endl;
                    }
                    cin>>S;
                    if (S == '=')
                    {
                        sel=false;
                        song=false;
                        Sleep(1000);
                        system("cls");
                        Sleep(500);
                        cout<<"Ritorno alla home";
                        int i=0;
                        while (i!=6)
                            {
                                Sleep(1000);
                                A=".";
                                cout<<A;
                                i++;
                                if (i==3)
                                   {
                                       Sleep(1000);
                                       system("cls");
                                       cout<<"Ritorno alla home";
                                       animation=true;
                                   }
                             }
                        Sleep(1000);
                    }
                    if (S== '>' && v<3)
                    {
                        v++;
                        D=D-25;
                        cout<<"Velocita di testo in game aumentata"<<endl;
                    }
                    else
                    {
                        if (v == 4 && S== '>')
                        {
                            if (combo==0)
                            {
                                cout<<"La velocita' e' gia' al massimo"<<endl;
                                Sleep(2000);
                                system("cls");
                            }
                            if (combo == 1)
                            {
                                cout<<"Gli easter egg sono finiti smettila di cercare"<<endl;
                                Sleep(2000);
                                system("cls");
                            }
                            if (combo == 2)
                            {
                                cout<<"..."<<endl;
                                Sleep(2000);
                                system("cls");
                            }
                            if (combo == 3)
                            {
                                cout<<"Smettila..."<<endl;
                                Sleep(2000);
                                system("cls");
                            }
                            if (combo == 4)
                            {
                                cout<<"Vuoi un easter egg?"<<endl;
                                Sleep(1000);
                                cout<<"Eccolo qua"<<endl;
                                Sleep(1000);
                                return 0;
                            }
                            combo++;
                        }
                        if(d==3)
                        {
                            cout<<"E va bene, visto che sei cosi' impaziente..."<<endl;
                            Sleep(1000);
                            cout<<"Attivero' la velocita' supersonica!"<<endl;
                            v++;
                            D=0;
                            d++;
                            combo=0;
                            Sleep(1000);
                            system("cls");
                        }
                        else if (v==3)
                        {
                            cout<<"La velocita' e' gia' al massimo"<<endl;
                            d++;
                        }
                    }
                    if (S=='<' && v>=1)
                    {
                        if (v==1 && v != 4)
                        {
                            cout<<"La velocita' e' gia' al minimo"<<endl;
                        }
                        else
                        {
                            v--;
                            D=D+25;
                            cout<<"Velocita' del testo in game diminuita"<<endl;
                            d=0;
                            combo=0;
                        }
                        if (v==4)
                        {
                            cout<<"Velocita' supersonica disattivata!"<<endl;
                            v--;
                            D=50;
                            d=0;
                            combo=0;
                        }
                    }
                        if (d != 4 && S != '=')
                        {
                            cout<<"Hai finito di modificare la velocita'? (S/N)"<<endl;
                            cin>>S;
                            if (S== 'S' || S== 's')
                                {
                                   sel=false;
                                   song=false;
                                   S='G';
                                }
                            else
                              {
                                  system("cls");
                              }
                        }
                }
            }
            else
            {
                if (S == 's')
                {
                    sel=true;
                    while (sel)
                    {
                         cout<<"Vuoi disattivare i suoni? (S/N)"<<endl;
                         cin>>S;
                         if (S == 's' || S == 'S')
                         {
                             suoni= false;
                             song = false;
                             cout<<"suoni disattivati"<<endl;
                         }
                         else
                         {
                             suoni = true;
                             song = true;
                             cout<<"Suoni attivati"<<endl;
                         }
                         cout<<"Hai finito con le modifiche?"<<endl;
                         cin>>S;
                         if (S =='s' || S == 'S')
                         {
                             sel=false;
                             S='G';
                         }
                    }
                }
                if (S == 'G' || S == '=')
                {
                    system("cls");
                    cout<<"Ritorno alla home";
                    int i=0;
                    while (i!=6)
                       {
                          Sleep(1000);
                          A=".";
                          cout<<A;
                          i++;
                          if (i==3)
                              {
                                   Sleep(1000);
                                   system("cls");
                                   cout<<"Ritorno alla home";
                                   animation=true;
                              }
                       }
                Sleep(1000);
                system("cls");
                S='G';
                song=false;
                }
            }
        }

 if (S=='S')
    {
    system("cls");
  character("Benvenuto a chi vuol essere Milionario", D);
  Sleep(2000);
  cout<<""<<endl;
  cout<<""<<endl;
  character("Il tema delle domande di oggi sono gli anime e i manga", D);
  cout<<""<<endl;
  Sleep(2000);
  character("Sta attento nel dare le tue risposte!", D);
  cout<<""<<endl;
  cout<<""<<endl;
  Sleep(1000);
  character("Bene, e questo e' quanto", D);
  cout<<""<<endl;
  character("Premi un tasto casuale quando sei pronto", D);
  cout<<""<<endl;
  cin>>Salto;
  Sleep(1000);
  cout<<""<<endl;
  character("Cominciamo con le domande", D);
  Sleep(1000);
  system("cls");
  srand(time(NULL));
  L=(rand() %6) +1;
  randomizer1=L;
  int I=0;
  for (; I<3; I++)
  {
      if ( L == 0)
      {
          srand(time(NULL));
          L=(rand() %6) +1;
          if (I == 1 && randomizer1 == L)
      {
          while (randomizer1 == L)
          {
              srand(time(NULL));
              L=(rand() %6) +1;
          }
          randomizer2=L;
      }
      if (I == 2 && (randomizer1 == L || randomizer2 == L) )
      {
          while (randomizer1 == L || randomizer2 == L)
          {
              srand(time(NULL));
              L=(rand() %6) +1;
          }
      }
      }
      if(I==2 && L!=50)
      {
              system("cls");
              A="Questa e' l'ultima domanda di oggi!";
              character(A, D);
              cout<<""<<endl;
              cout<<""<<endl;
              A="La domanda in questione e'...";
              character(A, D);
              cout<<""<<endl;
      }
      if(L==1)
      {
         L = domanda("Da dove sono originari i manga?", "Italia", "Corea", "Cina", "Giappone", 'D', 'd', S, suoni, A, D, R,Lingua);
    }
    if (L == 2)
    {
        L = domanda("Quale fu il primo anime?", "Death Note", "Doraemon", "Astro boy", "Naruto", 'C', 'c', S, suoni, A, D, R,Lingua);
    }
    if (L==3)
    {
        L = domanda("Qual'e' la nazione che piu' guarda gli anime? (senza contare il Giappone)", "Stati Uniti", "Cina", "Filippine", "Italia", 'C', 'c', S, suoni, A, D, R,Lingua);
    }
      if (L==4)
      {
          L = domanda("Che cos'e' un manga?", "Una pietanza tipica cinese", "Un indumento costoso", "Un fumetto giapponese", "Una marca di dentifrici", 'C', 'c', S, suoni, A, D, R,Lingua);
      }
      if(L==5)
      {
          L = domanda("Chi fu l'inventore dei manga?", "Osamu Tezuka", "Hiro Nakamura", "Bill Gates", "Andrea Primavera", 'A', 'a', S, suoni, A, D, R,Lingua);
      }
      if (L==6)
      {
          L= domanda("Quale fra questi NON e' un manga?", "Heidi", "Re-Zero", "Doraemon", "Death Note", 'A', 'a', S, suoni, A, D, R,Lingua);
      }
  }
  if (L!=50)
  {
      cout<<"Complimenti hai vinto!!!"<<endl;
      Beep(550, 250);
      Beep(550, 250);
      Beep(750, 500);
      cout<<""<<endl;
      Sleep(1500);
      cout<<"Premi un tasto casuale per continuare"<<endl;
      cin>>Salto;
  }
  else
    {
    cout<<"Mi spiace, ma hai perso..."<<endl;
    Sleep(1500);
    cout<<"Premi un tasto casuale per continuare"<<endl;
    cin>>Salto;
  }
      system("cls");
  }
  if (S=='A')
  {
      errori=0;
      system ("cls");
    Sleep(1000);
    cout<<""<<endl;
    cout<<"Benvenuto alla modalita' allenamento"<<endl;
    Sleep(1000);
    cout<<"Qui potrai allenarti nelle domande presenti nel quiz"<<endl;
    Sleep(1000);
    cout<<"Se desideri tornare alla schermata principale premi B"<<endl;
    cin>>M;
    if (M!='B' && M!='b')
    {
        Sleep(1000);
    cout<<"Bene, se davvero desideri allenarti in queste domande preparati per bene"<<endl;
    Sleep(1500);
    character("Domanda 1",D);
    cout<<""<<endl;
    errore = domandaA("Da dove sono originari i manga", "Italia", "Cina", "Corea", "Giappone", 'D', 'd', R, A, D,Lingua);
    errori = errori+errore;
    character("Domanda 2",D);
    cout<<""<<endl;
    errore = domandaA("Quale fu il primo anime?", "Death Note", "Doraemon", "Astro boy", "Naruto", 'C', 'c', R, A, D,Lingua);
    errori = errori+errore;
    character("Domanda 3",D);
    cout<<""<<endl;
    errore = domandaA("Qual e' la nazione che piu' guarda gli anime? (senza contare il Giappone)", "Stati Uniti", "Cina", "Filippine", "Italia", 'C', 'c', R, A, D,Lingua);
    errori = errori+errore;
    character("Domanda 4",D);
    cout<<""<<endl;
    errore = domandaA("Che cos'e' un manga?", "Una pietanza tipica cinese", "Un indumento costoso", "Un fumetto giapponese", "Una marca di dentifrici", 'C', 'c', R, A, D,Lingua);
    errori = errori+errore;
    character("Domanda 5",D);
    cout<<""<<endl;
    errore = domandaA("Chi invento' i manga?", "Osamu Tezuka", "Hiro Nakamura", "Bill Gates", "Andrea Primavera", 'A', 'a', R, A, D,Lingua);
    errori = errori+errore;
    character("Domanda 6",D);
    cout<<""<<endl;
    errore = domandaA("Quale fra questi NON e' un manga?", "Heidi", "Re-Zero", "Doraemon", "Death Note", 'A', 'a', R, A, D,Lingua);
    errori = errori+errore;
  character("Fine delle domande",D);
  cout<<""<<endl;
  Sleep (2000);
  cout<<"####################################################"<<endl;
  cout<<"#                   Resoconto                      #"<<endl;
  cout<<"####################################################"<<endl;
  cout<<"#                                                  #"<<endl;
  cout<<"#        hai commesso "<<errori<<" errore/i                   #"<<endl;
  cout<<"#                                                  #"<<endl;
  cout<<"####################################################"<<endl;
  Sleep(1000);
  cout<<""<<endl;
    cout<<"Premi un pulsante casuale per tornare alla lobby"<<endl;
    cin>>Salto;
    }
 else
 {
     system("cls");
                    cout<<"Ritorno alla home";
                    int i=0;
                    while (i!=6)
                       {
                          Sleep(1000);
                          A=".";
                          cout<<A;
                          i++;
                          if (i==3)
                              {
                                   Sleep(1000);
                                   system("cls");
                                   cout<<"Ritorno alla home";
                                   animation=true;
                                   song=false;
                              }
                       }
 }

  }
  system ("cls");
}
  }
if (Lingua == 'E')
{
    while (true)
  {
       if (song)
       {
        Beep(450, 250);
        Beep(550, 250);
        Beep(650, 250);
        Beep(700, 500);
        Beep(700, 250);
        Beep(450, 250);
        Beep(550, 250);
        Beep(650, 250);
        Beep(700, 500);
        Beep(700, 250);
        Beep(450, 250);
        Beep(550, 250);
        Beep(650, 250);
        Beep(700, 750);
        Beep(700, 250);
        Beep(550, 500);
        Beep(450, 500);
       }
       int i=0;
       int k=0;
       if (animation==false)
       {
        cout<<"######################################################################################################################################################"<<endl;
        cout<<"#                                                                                                                                                    #"<<endl;
        cout<<"#                      ___   ___        __   __  ___   ___      ___   _______  __    _  _______  ______    ___   _______                             #"<<endl;
        cout<<"#                     |   | |   |      |  |_|  ||   | |   |    |   | |       ||  |  | ||   _   ||    _ |  |   | |       |                            #"<<endl;
        cout<<"#                     |   | |   |      |       ||   | |   |    |   | |   _   ||   |_| ||  |_|  ||   | ||  |   | |   _   |                            #"<<endl;
        cout<<"#                     |   | |   |      |       ||   | |   |    |   | |  | |  ||       ||       ||   |_||_ |   | |  | |  |                            #"<<endl;
        cout<<"#                     |   | |   |___   |       ||   | |   |___ |   | |  |_|  ||  _    ||       ||    __  ||   | |  |_|  |                            #"<<endl;
        cout<<"#                     |   | |       |  | ||_|| ||   | |       ||   | |       || | |   ||   _   ||   |  | ||   | |       |                            #"<<endl;
        cout<<"#                     |___| |_______|  |_|   |_||___| |_______||___| |_______||_|  |__||__| |__||___|  |_||___| |_______|                            #"<<endl;
        cout<<"#                                                                                                                                                    #"<<endl;
        cout<<"######################################################################################################################################################"<<endl;
         srand(time(NULL));
         Frase=(rand() %5) +1;
         if (Frase==1)
         {
             B="From today, without grammatical errors";
         }
         if (Frase == 2)
         {
             B="A good game";
         }
         if (Frase == 3)
         {
             B="The best";
         }
         if (Frase== 4)
         {
             B="The money you'll win is (not) real";
         }
         if (Frase == 5)
         {
             B="Now with tea and biscuits";
         }
         cout<<"                                                                                                                 ";
         cout<<B<<endl;
       }
       while(animation)
       {
           if (k < 150)
           {
               A="#";
               cout<<A;
               k++;
               Sleep(1);
           }
           if (k >= 150 && k<300)
           {
               A="#                                                                                                                                                    #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if (k >=300 && k<450)
           {
               if (k== 300)
               {
                   i=0;
               }
                A="#                      ___   ___        __   __  ___   ___      ___   _______  __    _  _______  ______    ___   _______                             #";
                cout<<A[i];
                i++;
                k++;
                Sleep(1);
           }
           if ( k >= 450 && k < 600)
           {
               if (k== 450)
               {
                   i=0;
               }
               A="#                     |   | |   |      |  |_|  ||   | |   |    |   | |       ||  |  | ||   _   ||    _ |  |   | |       |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 600 && k < 750)
           {
               if (k== 600)
               {
                   i=0;
               }
               A="#                     |   | |   |      |       ||   | |   |    |   | |   _   ||   |_| ||  |_|  ||   | ||  |   | |   _   |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 750 && k < 900)
           {
               if (k== 750)
               {
                   i=0;
               }
               A="#                     |   | |   |      |       ||   | |   |    |   | |  | |  ||       ||       ||   |_||_ |   | |  | |  |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 900 && k < 1050)
           {
               if (k== 900)
               {
                   i=0;
               }
               A="#                     |   | |   |___   |       ||   | |   |___ |   | |  |_|  ||  _    ||       ||    __  ||   | |  |_|  |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 1050 && k < 1200)
           {
               if (k== 1050)
               {
                   i=0;
               }
               A="#                     |   | |       |  | ||_|| ||   | |       ||   | |       || | |   ||   _   ||   |  | ||   | |       |                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 1200 && k < 1350)
           {
               if (k== 1200)
               {
                   i=0;
               }
               A="#                     |___| |_______|  |_|   |_||___| |_______||___| |_______||_|  |__||__| |__||___|  |_||___| |_______|                            #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 1350 && k < 1500)
           {
               if (k== 1350)
               {
                   i=0;
               }
               A="#                                                                                                                                                    #";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
           if ( k >= 1500 && k < 1650)
           {
               if (k== 1500)
               {
                   i=0;
               }
               A="######################################################################################################################################################";
               cout<<A[i];
               i++;
               k++;
               Sleep(1);
           }
          if (k==1650)
          {
              animation=false;
              cout<<""<<endl;
          }

       }
        cout<<""<<endl;
        cout<<""<<endl;
        Sleep(2000);
        cout<<""<<endl;
        cout<<"Start  <==               Training room                    Try to win lots of money!"<<endl;
                        cout<<""<<endl;
                        cout<<"Quit                     Settings"<<endl;
        scelta = 1;
        sel=true;
        char c;
        while (sel)
        {
            switch((c= _getch()))
            {
                case KEY_UP:
                    if (scelta != 1 && scelta != 2)
                    {
                        scelta=scelta-2;
                        refresh=true;
                        if (scelta == 2 && disco == 2)
                        {
                            disco=3;
                        }
                    }
                break;
                case KEY_DOWN:
                    if (scelta !=3 && scelta !=4)
                    {
                        scelta=scelta+2;
                        refresh=true;
                        if (scelta==3 && disco == 0)
                        {
                            disco=1;
                        }
                        if (scelta==4 && disco==3)
                        {
                            disco=0;
                        }
                    }
                break;
                case KEY_LEFT:
                    if (scelta != 3 && scelta != 1)
                    {
                        scelta=scelta-1;
                        refresh=true;
                    }
                break;
                case KEY_RIGHT:
                    if (scelta != 2 && scelta !=4)
                    {
                        scelta=scelta+1;
                        refresh=true;
                        if (scelta == 4 && disco == 1)
                        {
                            disco=2;
                        }
                    }
                    break;
                case KEY_ENTER:
                    sel=false;
                    if (scelta == 1)
                    {
                        S='S';
                    }
                    if (scelta == 2)
                    {
                        S='A';
                    }
                    if (scelta == 3)
                    {
                        S='E';
                    }
                    if (scelta == 4)
                    {
                        S='I';
                    }
                    break;
            }
            if (refresh)
                {
                    system("cls");
                     cout<<"######################################################################################################################################################"<<endl;
                     cout<<"#                                                                                                                                                    #"<<endl;
                     cout<<"#                      ___   ___        __   __  ___   ___      ___   _______  __    _  _______  ______    ___   _______                             #"<<endl;
                     cout<<"#                     |   | |   |      |  |_|  ||   | |   |    |   | |       ||  |  | ||   _   ||    _ |  |   | |       |                            #"<<endl;
                     cout<<"#                     |   | |   |      |       ||   | |   |    |   | |   _   ||   |_| ||  |_|  ||   | ||  |   | |   _   |                            #"<<endl;
                     cout<<"#                     |   | |   |      |       ||   | |   |    |   | |  | |  ||       ||       ||   |_||_ |   | |  | |  |                            #"<<endl;
                     cout<<"#                     |   | |   |___   |       ||   | |   |___ |   | |  |_|  ||  _    ||       ||    __  ||   | |  |_|  |                            #"<<endl;
                     cout<<"#                     |   | |       |  | ||_|| ||   | |       ||   | |       || | |   ||   _   ||   |  | ||   | |       |                            #"<<endl;
                     cout<<"#                     |___| |_______|  |_|   |_||___| |_______||___| |_______||_|  |__||__| |__||___|  |_||___| |_______|                            #"<<endl;
                     cout<<"#                                                                                                                                                    #"<<endl;
                     cout<<"######################################################################################################################################################"<<endl;
                     if (song==true)
                     {
                         cout<<"                                                                                                                 ";
                     cout<<B<<endl;
                     }
                     cout<<""<<endl;
                     cout<<""<<endl;
                     cout<<""<<endl;
                     if (scelta == 1)
                    {
                        cout<<"Start  <==               Training room                    Try to win lots of money!"<<endl;
                        cout<<""<<endl;
                        cout<<"Quit                     Settings"<<endl;
                    }
                    if (scelta == 2)
                    {
                        cout<<"Start                    Training room   <==              Like a gym, but better"<<endl;
                        cout<<""<<endl;
                        cout<<"Quit                     Settings"<<endl;
                    }
                    if (scelta == 3)
                    {
                        cout<<"Start                    Training room "<<endl;
                        cout<<""<<endl;
                        cout<<"Quit  <==                Settings                             Do you have some other stuff to do?"<<endl;
                    }
                    if (scelta == 4)
                    {
                        cout<<"Start                    Training room "<<endl;
                        cout<<""<<endl;
                        cout<<"Quit                     Settings  <==                        To change this beautiful experience"<<endl;
                    }
                    if (scelta == 1 && disco == 3)
                        {
                            system("Color 04");
                            Sleep(250);
                            system("Color 02");
                            Sleep(250);
                            system("Color 0B");
                            Sleep(250);
                            system("Color 05");
                            Sleep(250);
                            system("Color 01");
                            Sleep(250);
                            system("Color 07");
                            disco=0;
                        }
                    refresh=false;
                }
        }
        if (S=='E')
        {
            system("cls");
            cout<<"Goodbyee!"<<endl;
            return 0;
        }
        if (S=='I')
        {
            scelta=1;
            system("cls");
            cout<<"Text speed  <=="<<endl;
            cout<<"Sounds "<<endl;
            cout<<"Home"<<endl;
            char e;
            scelta=1;
            sel=true;
            refresh=false;
            while  (sel)
            {
                switch((e = _getch()))
                {
                case KEY_UP:
                    if (scelta != 1)
                    {
                        scelta--;
                        refresh=true;
                    }
                    break;
                case KEY_DOWN:
                    if (scelta != 3)
                    {
                        scelta++;
                        refresh=true;
                    }
                    break;
                case KEY_ENTER:
                    {
                        sel=false;
                        if (scelta == 1)
                        {
                            S='v';
                        }
                        if (scelta == 2)
                        {
                            S='s';
                        }
                        if (scelta == 3)
                        {
                            S='=';
                        }
                    }
                }
                if (refresh)
                {
                    system("cls");
                    if (scelta==1)
                    {
                        cout<<"Text speed  <=="<<endl;
                        cout<<"Sounds "<<endl;
                        cout<<"Home "<<endl;
                    }
                    if (scelta == 2)
                    {
                        cout<<"Text speed  "<<endl;
                        cout<<"Sounds <=="<<endl;
                        cout<<"Home "<<endl;
                    }
                    if (scelta == 3)
                    {
                        cout<<"Text speed  "<<endl;
                        cout<<"Sounds "<<endl;
                        cout<<"Home <=="<<endl;
                    }
                }
            }
            if (S=='v')
            {
                sel=true;
                while (sel)
                {
                    if (v==4)
                    {
                         cout<<"Press < or > to increase or to decrease the in-game speed, or press = to get to the home"<<endl;
                         cout<<"Super-Speed mode"<<endl;
                    }
                    else
                    {
                        cout<<"Press < or > to increase or to decrease the in-game speed, or press = to get to the home"<<endl;
                        cout<<"Attualmente la velocita' e' di "<<v<<endl;
                    }
                    cin>>S;
                    if (S == '=')
                    {
                        sel=false;
                        song=false;
                        Sleep(1000);
                        system("cls");
                        Sleep(500);
                        cout<<"Loading";
                        int i=0;
                        while (i!=6)
                            {
                                Sleep(1000);
                                A=".";
                                cout<<A;
                                i++;
                                if (i==3)
                                   {
                                       Sleep(1000);
                                       system("cls");
                                       cout<<"Loading";
                                       animation=true;
                                   }
                             }
                        Sleep(1000);
                    }
                    if (S== '>' && v<3)
                    {
                        v++;
                        D=D-25;
                        cout<<"Text speed increased"<<endl;
                    }
                    else
                    {
                        if (v == 4 && S== '>')
                        {
                            if (combo==0)
                            {
                                cout<<"Text speed already at the highest speed"<<endl;
                                Sleep(2000);
                                system("cls");
                            }
                            if (combo == 1)
                            {
                                cout<<"There isn't any easter egg"<<endl;
                                Sleep(2000);
                                system("cls");
                            }
                            if (combo == 2)
                            {
                                cout<<"..."<<endl;
                                Sleep(2000);
                                system("cls");
                            }
                            if (combo == 3)
                            {
                                cout<<"Stop it..."<<endl;
                                Sleep(2000);
                                system("cls");
                            }
                            if (combo == 4)
                            {
                                cout<<"Do you really want that much an easter egg"<<endl;
                                Sleep(1000);
                                cout<<"Here it is"<<endl;
                                Sleep(1000);
                                return 0;
                            }
                            combo++;
                        }
                        if(d==3)
                        {
                            cout<<"You are so impatient, you now what?"<<endl;
                            Sleep(1000);
                            cout<<"I'll activate super-speed mode!"<<endl;
                            v++;
                            D=0;
                            d++;
                            combo=0;
                            Sleep(1000);
                            system("cls");
                        }
                        else if (v==3)
                        {
                            cout<<"Text speed already at the highest speed"<<endl;
                            d++;
                        }
                    }
                    if (S=='<' && v>=1)
                    {
                        if (v==1 && v != 4)
                        {
                            cout<<"Text speed already at the lowest speed"<<endl;
                        }
                        else
                        {
                            v--;
                            D=D+25;
                            cout<<"In game text speed decreased"<<endl;
                            d=0;
                            combo=0;
                        }
                        if (v==4)
                        {
                            cout<<"Super-speed mode disabled"<<endl;
                            v--;
                            D=50;
                            d=0;
                            combo=0;
                        }
                    }
                        if (d != 4 && S != '=')
                        {
                            cout<<"Have you finished with the changes? (Y/N)"<<endl;
                            cin>>S;
                            if (S== 'Y' || S== 'y')
                                {
                                   sel=false;
                                   song=false;
                                   S='G';
                                }
                            else
                              {
                                  system("cls");
                              }
                        }
                }
            }
            else
            {
                if (S == 's')
                {
                    sel=true;
                    while (sel)
                    {
                         cout<<"Do you want to disable sounds? (Y/N)"<<endl;
                         cin>>S;
                         if (S == 'Y' || S == 'y')
                         {
                             suoni= false;
                             song = false;
                             cout<<"sounds disabled"<<endl;
                         }
                         else
                         {
                             suoni = true;
                             song = true;
                             cout<<"Sounds renabled"<<endl;
                         }
                         cout<<"Have you finished with your changes (Y/N)"<<endl;
                         cin>>S;
                         if (S =='y' || S == 'Y')
                         {
                             sel=false;
                             S='G';
                         }
                    }
                }
                if (S == 'G' || S == '=')
                {
                    system("cls");
                    cout<<"Loading";
                    int i=0;
                    while (i!=6)
                       {
                          Sleep(1000);
                          A=".";
                          cout<<A;
                          i++;
                          if (i==3)
                              {
                                   Sleep(1000);
                                   system("cls");
                                   cout<<"Loading";
                                   animation=true;
                              }
                       }
                Sleep(1000);
                system("cls");
                S='G';
                song=false;
                }
            }
        }

 if (S=='S')
    {
    system("cls");
  character("Welcome to Who wants to be Millionaire", D);
  Sleep(2000);
  cout<<""<<endl;
  cout<<""<<endl;
  character("Today's question them are anime and manga", D);
  cout<<""<<endl;
  Sleep(2000);
  character("Stay focused!", D);
  cout<<""<<endl;
  cout<<""<<endl;
  Sleep(1000);
  character("Well, this is it", D);
  cout<<""<<endl;
  character("Press a random key when you are ready", D);
  cout<<""<<endl;
  cin>>Salto;
  Sleep(1000);
  cout<<""<<endl;
  character("Let's begin with the questions", D);
  Sleep(1000);
  system("cls");
  srand(time(NULL));
  L=(rand() %6) +1;
  randomizer1=L;
  int I=0;
  for (; I<3; I++)
  {
      if ( L == 0)
      {
          srand(time(NULL));
          L=(rand() %6) +1;
          if (I == 1 && randomizer1 == L)
      {
          while (randomizer1 == L)
          {
              srand(time(NULL));
              L=(rand() %6) +1;
          }
          randomizer2=L;
      }
      if (I == 2 && (randomizer1 == L || randomizer2 == L) )
      {
          while (randomizer1 == L || randomizer2 == L)
          {
              srand(time(NULL));
              L=(rand() %6) +1;
          }
      }
      }
      if(I==2 && L!=50)
      {
              system("cls");
              A="This is today's last question";
              character(A, D);
              cout<<""<<endl;
              cout<<""<<endl;
              A="The question is...";
              character(A, D);
              cout<<""<<endl;
      }
      if(L==1)
      {
         L = domanda("Where did manga originate?", "Italy", "Korea", "China", "Japan", 'D', 'd', S, suoni, A, D, R,Lingua);
    }
    if (L == 2)
    {
        L = domanda("What's the first anime ever made?", "Death Note", "Doraemon", "Astro boy", "Naruto", 'C', 'c', S, suoni, A, D, R,Lingua);
    }
    if (L==3)
    {
        L = domanda("What's the nation that watches anime the most? (excluding Japan)", "United States", "China", "Filippines", "Italy", 'C', 'c', S, suoni, A, D, R,Lingua);
    }
      if (L==4)
      {
          L = domanda("What's a manga?", "A typical chinese dish", "A T-shirt", "A chinese comic", "A toothpaste brand", 'C', 'c', S, suoni, A, D, R,Lingua);
      }
      if(L==5)
      {
          L = domanda("Who invented anime?", "Osamu Tezuka", "Hiro Nakamura", "Bill Gates", "Andrea Primavera", 'A', 'a', S, suoni, A, D, R,Lingua);
      }
      if (L==6)
      {
          L= domanda("Which of the following ones is NOT an anime?", "Heidi", "Re-Zero", "Doraemon", "Death Note", 'A', 'a', S, suoni, A, D, R,Lingua);
      }
  }
  if (L!=50)
  {
      cout<<"You in, good job!!!"<<endl;
      Beep(550, 250);
      Beep(550, 250);
      Beep(750, 500);
      cout<<""<<endl;
      Sleep(1500);
      cout<<"Press a random key to proceed"<<endl;
      cin>>Salto;
  }
  else
    {
    cout<<"I'm sorry but you lost"<<endl;
    Sleep(1500);
    cout<<"Press a random key to proceed"<<endl;
    cin>>Salto;
  }
      system("cls");
  }
  if (S=='A')
  {
      errori=0;
      system ("cls");
    Sleep(1000);
    cout<<""<<endl;
    cout<<"Welcome to the training room"<<endl;
    Sleep(1000);
    cout<<"You can train to get better at the quiz here"<<endl;
    Sleep(1000);
    cout<<"If you think you are already ready for the quiz press B and you'll get to the home"<<endl;
    cin>>M;
    if (M!='B' && M!='b')
    {
        Sleep(1000);
    character("If you want to train be focused", D);
    Sleep(1500);
    cout<<""<<endl;
    character("first question", D);
    cout<<""<<endl;
    errore = domandaA("Where did manga originate?", "Italy", "Korea", "China", "Japan", 'D', 'd', R, A, D,Lingua);
    errori = errori+errore;
    character("Second question", D);
    cout<<""<<endl;
    errore = domandaA("What's the first anime ever made?", "Death Note", "Doraemon", "Astro boy", "Naruto", 'B', 'b', R, A, D,Lingua);
    errori = errori+errore;
    character("Third question", D);
    cout<<""<<endl;
    errore = domandaA("What's the nation that watches anime the most? (excluding Japan)", "United States", "China", "Filippines", "Italy", 'C', 'c', R, A, D,Lingua);
    errori = errori+errore;
    character("fourth question", D);
    cout<<""<<endl;
    errore = domandaA("What's a manga?", "A typical chinese dish", "A T-shirt", "A chinese comic", "A toothpaste brand", 'C', 'c', R, A, D,Lingua);
    errori = errori+errore;
    character("fifth question", D);
    cout<<""<<endl;
    errore = domandaA("Who invented anime?", "Osamu Tezuka", "Hiro Nakamura", "Bill Gates", "Andrea Primavera", 'A', 'a', R, A, D,Lingua);
    errori = errori+errore;
    character("sixth question", D);
    cout<<""<<endl;
    errore = domandaA("Which of the following ones is NOT an anime?", "Heidi", "Re-Zero", "Doraemon", "Death Note", 'A', 'a', R, A, D,Lingua);
    errori = errori+errore;
  cout<<"End of the questions"<<endl;
  character("End of the questions", D);
  Sleep (2000);
  cout<<"####################################################"<<endl;
  cout<<"#                   Report                         #"<<endl;
  cout<<"####################################################"<<endl;
  cout<<"#                                                  #"<<endl;
  cout<<"#        You did "<<errori<<" error/s                    #"<<endl;
  cout<<"#                                                  #"<<endl;
  cout<<"####################################################"<<endl;
  Sleep(1000);
  cout<<""<<endl;
    cout<<"Press a random key to get back to the home"<<endl;
    cin>>Salto;
    }
 else
 {
     system("cls");
                    cout<<"Loading";
                    int i=0;
                    while (i!=6)
                       {
                          Sleep(1000);
                          A=".";
                          cout<<A;
                          i++;
                          if (i==3)
                              {
                                   Sleep(1000);
                                   system("cls");
                                   cout<<"Loading";
                                   animation=true;
                                   song=false;
                              }
                       }
 }

  }
  system ("cls");
}
}
}
