#include <iostream>
#include <vector>

#include "myvars.h"

using namespace std;

int main() {
    //Jeu du pendu
    cout << "Jeu du pendu" << endl;

    //Déclaration des variables
    //Mot à trouver
    string mot;
    //Mot à trouver caché
    string motCache;
    //Lettre proposée
    string lettre;

    //Choix du mot à trouver
    srand(time(NULL));
    int nbAleatoire = rand() % mots.size();
    mot = mots[nbAleatoire];

    //Initialisation du mot caché
    for (int i = 0; i < mot.length(); i++) {
        motCache += "*";
    }


    //Boucle de jeu
    while (nbEssais > 0 && !trouve) {
        //Affichage du mot caché
        cout << "Mot a trouver : " << motCache << endl;
        //Affichage du nombre d'essais
        cout << "Nombre d'essais restants : " << nbEssais << endl;
        //Proposition d'une lettre
        cout << "Proposez une lettre : ";
        cin >> lettre;
        //Vérification de la lettre
        bool trouveLettre = false;
        for (int i = 0; i < mot.length(); i++) {
            if (lettre[0] == mot[i]) {
                motCache[i] = lettre[0];
                trouveLettre = true;
            }
        }
        //Si la lettre n'est pas dans le mot
        if (!trouveLettre) {
            nbEssais--;
        }
        //Si le mot est trouvé
        if (motCache == mot) {
            trouve = true;
        }
        //Afiche le dessin du pendu
        cout << dessin_pendu[10 - nbEssais] << endl;
    }

    //Fin de partie
    if (trouve) {
        cout << "Bravo ! Vous avez trouve le mot !" << endl;
    } else {
        cout << "Perdu ! Le mot etait : " << mot << endl;
    }

    return 0;
}
