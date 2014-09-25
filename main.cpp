//
//  main.cpp
//  Papier
//
//  Created by Pascal Meyer on 15.09.14.
//  Copyright (c) 2014 Homework. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main ()

{
    
    int auswahl;            //1=Schere 2=Stein 3=Papier
    int zufallszahl;        //generierte Zufallszahl 1-3
    int cpwins  =   0;      //Computerwins
    int usrwins =   0;      //Userwins
    int rounds  =   0;      // Gespielte Runden
    
    
    
    
    while (usrwins  <   3 && cpwins <   3)
        
        
    {
        
        
        
        //Anzeige für Auswahl
        cout << "Wählen Sie!:"                                       << endl;
        cout << "1. Schere"                                          << endl;
        cout << "2. Stein"                                           << endl;
        cout << "3. Papier"                                         <<endl<< endl;
        cout << "Gespielte Runden:\t" <<      rounds            <<"\t"        ;
        cout << "Ich:\t" <<                   usrwins           <<"\t"        ;
        cout << "Computer\t" <<               cpwins            <<"\t"  <<endl;
        
        
        
        
        
        
        //eingabe der Auswahl
        cin >> auswahl;
        
        
        //rand()  % 3 würde dir nur einen Wert  zwischen 0 und 2 geben,     daher noch das + 1
        
        
        int number;
        srand( (unsigned) time(NULL) ) ;
        number = 1 + ( rand() % 3 );
        zufallszahl = number;
        
        //Auswahl vergleichen
        switch (auswahl) {
            case 1:                                 // user  auswahl Schere
                switch (zufallszahl) {
                    case 1:
                        cout << "Schere vs Schere"  <<endl;
                        cout << "Unentschieden"     <<endl;
                        rounds++;
                        
                        break;
                        
                    case 2:
                        cout << "Schere vs Stein"  <<endl;
                        cout << "Verloren!!"  <<endl;
                        cpwins++;
                        rounds++;
                        
                        break;
                        
                    case 3:
                        cout << "Schere vs Papier"  <<endl;
                        cout << "Gewonnen!!"  <<endl;
                        usrwins++;
                        rounds++;
                        
                        break;
                        
                        
                        
                }
                
                break;
                
                
                
            case 2:     // Userauswahl Stein
                
                
                switch (zufallszahl) {
                        
                    case 1:
                        cout << "Stein vs Schere"   <<endl;
                        cout << "Gewonnen!!"        <<endl;
                        rounds++;
                        usrwins++;
                        
                        break;
                        
                    case 2:
                        cout << "Stein vs Stein"    <<endl;
                        cout << "Unentschieden"     <<endl;
                        rounds++;
                        
                        break;
                        
                    case 3:
                        cout << "Stein vs Papier"   <<endl;
                        cout << "Verloren!!"        <<endl;
                        cpwins++;
                        rounds++;
                        
                        break;
                        
                        
                }
                
                
                break;
                
                
                
            case 3:                 // Userauswahl Papier
                
                
                
                switch (zufallszahl) {
                    case 1:
                        cout << "Papier vs Schere"      <<endl;
                        cout << "Verloren!!"            <<endl;
                        cpwins++;
                        rounds++;
                        
                        break;
                        
                    case 2:
                        cout << "Papier vs Stein"       <<endl;
                        cout << "Gewonnen!!"         <<endl;
                        rounds++;
                        usrwins++;
                        
                        break;
                        
                    case 3:
                        cout << "Papier vs Papier"      <<endl;
                        cout << "Unentschieden"         <<endl;
                        rounds++;
                        
                        break;
                        
                        
                }
                
                
                break;
                
                
            default:
                cout << " Fehler"          <<endl;
                
                
                break;
        }
        
        
        
        
        if (cpwins==3) {
            cout << "Leider verloren" <<endl;
            
        }
        if (cpwins==3) {
            cout << "Gratulation sie haben Gewonnen!!!" <<endl;
            
        }
        
        
        
        
    }
    
    
    
    
    getchar();
    return 0;
}
