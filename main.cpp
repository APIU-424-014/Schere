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
    
    enum auswahlEnum{
        SCHERE = 3,
        STEIN = 1,
        PAPIER				//Wert wird eins grösser als Vorgängerwert (also 2)
    };
    auswahlEnum auswahl = SCHERE;
    int zufallszahl;        //generierte Zufallszahl 1-3
    int cpwins  =   0;      //Computerwins
    int usrwins =   0;      //Userwins
    int rounds  =   0;      // Gespielte Runden
    
    
    
    
    while (usrwins  <   3 && cpwins <   3)
        
        
    {
        
        
        
        //Anzeige für Auswahl
        cout << "Wählen Sie!:"                                  << endl;
        cout << SCHERE << ". Schere"                            << endl;
        cout << STEIN << ". Stein"                              << endl;
        cout << PAPIER << ". Papier"                            <<endl<< endl;
        cout << "Gespielte Runden:\t" <<      rounds            <<"\t"        ;
        cout << "Ich:\t" <<                   usrwins           <<"\t"        ;
        cout << "Computer\t" <<               cpwins            <<"\t"  <<endl;
        
        
        
        
        
        
        //eingabe der Auswahl
        scanf("%d", (int*)&auswahl);/*
        //Alternative eingabe:
        int tmp = 0;
        cin >> tmp;
        auswahl = (auswahlEnum)tmp;
        //*/
        
        //rand()  % 3 würde dir nur einen Wert  zwischen 0 und 2 geben,     daher noch das + 1
        
        
        int number;
        srand( (unsigned) time(NULL) ) ;
        number = 1 + ( rand() % 3 );
        zufallszahl = number;
        
        //Auswahl vergleichen
        switch (auswahl) {
            case SCHERE:                                 // user  auswahl Schere
                switch (zufallszahl) {
                    case SCHERE:
                        cout << "Schere vs Schere"  <<endl;
                        cout << "Unentschieden"     <<endl;
                        rounds++;
                        
                        break;
                        
                    case STEIN:
                        cout << "Schere vs Stein"  <<endl;
                        cout << "Verloren!!"  <<endl;
                        cpwins++;
                        rounds++;
                        
                        break;
                        
                    case PAPIER:
                        cout << "Schere vs Papier"  <<endl;
                        cout << "Gewonnen!!"  <<endl;
                        usrwins++;
                        rounds++;
                        
                        break;
                        
                        
                        
                }
                
                break;
                
                
                
            case STEIN:     // Userauswahl Stein
                
                
                switch (zufallszahl) {
                        
                    case SCHERE:
                        cout << "Stein vs Schere"   <<endl;
                        cout << "Gewonnen!!"        <<endl;
                        rounds++;
                        usrwins++;
                        
                        break;
                        
                    case STEIN:
                        cout << "Stein vs Stein"    <<endl;
                        cout << "Unentschieden"     <<endl;
                        rounds++;
                        
                        break;
                        
                    case PAPIER:
                        cout << "Stein vs Papier"   <<endl;
                        cout << "Verloren!!"        <<endl;
                        cpwins++;
                        rounds++;
                        
                        break;
                        
                        
                }
                
                
                break;
                
                
                
            case PAPIER:                 // Userauswahl Papier
                
                
                
                switch (zufallszahl) {
                    case SCHERE:
                        cout << "Papier vs Schere"      <<endl;
                        cout << "Verloren!!"            <<endl;
                        cpwins++;
                        rounds++;
                        
                        break;
                        
                    case STEIN:
                        cout << "Papier vs Stein"       <<endl;
                        cout << "Gewonnen!!"         <<endl;
                        rounds++;
                        usrwins++;
                        
                        break;
                        
                    case PAPIER:
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
