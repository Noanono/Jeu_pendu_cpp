#include <iostream>
#include <vector>

#include "myvars.h"

using namespace std;

int main() {
    //Jeu du pendu
    cout << "Jeu du pendu" << endl;

    //Mot à trouver
    string mot = ChoixMot()[0];
    //Mot à trouver caché
    string motCache = ChoixMot()[1];
    //Lettre proposée
    string lettre;

    //Boucle de jeu
    while (nbEssais > 0 && !VerifierMot(mot, motCache)) {
        //Affichage du mot à trouver
        AfficherMotCache(motCache);

        //Affichage du nombre d'essais restants
        AfficherNombreEssais(nbEssais);

        //Affichage du dessin du pendu
        AfficherDessinPendu(nbEssais);

        //Demande de la lettre proposée
        lettre = DemandeLettreProposee();

        //Vérification de la lettre proposée
        if (VerifierLettre(lettre, mot, motCache)) {
            cout << "Bravo ! La lettre " << lettre << " est dans le mot !" << endl;
        } else {
            cout << "Dommage ! La lettre " << lettre << " n'est pas dans le mot !" << endl;
            nbEssais--;
        }
    }
    AfficherFinPartie(VerifierMot(mot, motCache), mot);

    return 0;
}
