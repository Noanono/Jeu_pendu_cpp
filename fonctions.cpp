//
// Created by soler on 06/11/2022.
//
#include "myvars.h"
#include "fonctions.h"

#include <iostream>
#include <vector>

using namespace std;


void AfficherMotCache(string mot_cache){
    cout << "Mot a trouver : " << mot_cache << endl;
}

void AfficherNombreEssais(int nbEssais){
    cout << "Nombre d'essais restants : " << nbEssais << endl;
}

void AfficherDessinPendu(int nbEssais){
    cout << dessin_pendu[10 - nbEssais] << endl;
}

void AfficherLettresProposees(vector<string> lettresProposees){
    cout << "Lettres deja proposées : ";
    for (int i = 0; i < lettresProposees.size(); i++) {
        cout << lettresProposees[i] << " ";
    }
    cout << endl;
}

void AfficherFinPartie(bool trouve, string mot){
    if (trouve) {
        cout << "Bravo ! Vous avez trouve le mot !" << mot << endl;
    } else {
        cout << "Perdu ! Le mot etait : " << mot << endl;
    }
}

string DemandeLettreProposee(){
    string lettre;
    cout << "Proposez une lettre : ";
    cin >> lettre;
    return lettre;
}

vector<string> ChoixMot(){
    string mot_choisi;
    string mot_cache;
    srand(time(NULL));
    int nombre_aleatoire = rand() % mots.size();
    mot_choisi = mots[nombre_aleatoire];
    for (int i = 0; i < mot_choisi.size(); i++) {
        mot_cache += ("*");
    }
    return {mot_choisi, mot_cache};
}

bool VerifierLettre(string lettre, string mot, string &mot_cache){
    bool trouveLettre = false;
    for (int i = 0; i < mot.length(); i++) {
        if (lettre[0] == mot[i]) {
            mot_cache[i] = lettre[0];
            trouveLettre = true;
        }
    }
    return trouveLettre;
}

bool VerifierMot(string mot, string mot_cache){
    return mot_cache == mot;
}

