#include <iostream>
using namespace std;

int main() {
    //Jeu du pendu
    cout << "Jeu du pendu" << endl;

    //Déclaration des variables
    //Liste de mots
    string mots[5] = {"bonjour", "bonsoir", "bonne nuit", "bonne journée", "bonne année"};
    //Mot à trouver
    string mot;
    //Mot à trouver caché
    string motCache;
    //Lettre proposée
    string lettre;
    //Nombre de coups
    int nbEssais = 10;
    bool trouve = false;

    //Choix du mot à trouver
    srand(time(NULL));
    int nbAleatoire = rand() % 5;
    mot = mots[nbAleatoire];

    //Initialisation du mot caché
    for (int i = 0; i < mot.length(); i++) {
        motCache += "*";
    }


    //Boucle de jeu
    while (nbEssais > 0 && !trouve) {
        //Affichage du mot caché
        cout << "Mot à trouver : " << motCache << endl;
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
    }

    return 0;
}
