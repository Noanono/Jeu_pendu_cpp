#include <iostream>
#include <vector>

#include "fonctions.h"

using namespace std;

int main() {
    //Jeu du pendu
    cout << "Jeu du pendu" << endl;

    //Mot à trouver
    string mot  = ChoixMot()[0];
    //Mot à trouver caché
    string motCache = ChoixMot()[1];
    //Lettre proposée
    string lettre;
    //lettres déjà proposées
    vector<string> lettresProposees;

    //Nombre d'essais
    int nbEssais = 10;

    //Boucle de jeu
    while (nbEssais > 0 && !VerifierMot(mot, motCache)) {
        //Affichage du mot à trouver
        AfficherMotCache(motCache);

        //Affichage du nombre d'essais restants
        AfficherNombreEssais(nbEssais);

        //Affichage du dessin du pendu
        AfficherDessinPendu(nbEssais);

        //Affichage des lettres déjà proposées
        AfficherLettresProposees(lettresProposees);

        //Demande de la lettre proposée
        lettre = DemandeLettreProposee();

        //Vérification de la lettre proposée
        if (VerifierLettre(lettre, mot, motCache)) {
            cout << "Bravo ! La lettre " << lettre << " est dans le mot !" << endl;
        } else {
            cout << "Dommage ! La lettre " << lettre << " n'est pas dans le mot !" << endl;
            lettresProposees.push_back(lettre);
            nbEssais--;
        }
    }
    AfficherFinPartie(VerifierMot(mot, motCache), mot);

    return 0;
}
