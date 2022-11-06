//
// Created by soler on 05/11/2022.
//

#ifndef JEU_PENDU_CPP_MYVARS_H
#define JEU_PENDU_CPP_MYVARS_H

#include <iostream>
#include <vector>
using namespace std;

//Variables globales

//Liste des mots du jeu du pendu (sans majuscule ni accent)
vector<string> mots = {"banane", "ordinateur", "terme", "programme", "variable", "tableau", "methode", "classe", "objet", "heritage", "polymorphisme", "abstraction", "encapsulation", "portee", "pointeur", "instance", "constructeur", "destructeur", "surcharge", "sous-classe", "super-classe", "heritage", "polymorphisme", "abstraction", "encapsulation", "portee", "pointeur", "instance", "constructeur", "destructeur", "surcharge", "sous-classe", "super-classe", "heritage", "polymorphisme", "abstraction", "encapsulation", "portee", "pointeur", "instance", "constructeur", "destructeur", "surcharge", "sous-classe", "super-classe", "heritage", "polymorphisme", "abstraction", "encapsulation", "portee", "pointeur", "instance", "constructeur", "destructeur", "surcharge", "sous-classe", "super-classe", "heritage", "polymorphisme", "abstraction", "encapsulation", "portee", "pointeur", "instance", "constructeur", "destructeur", "surcharge", "sous-classe", "super-classe", "heritage", "polymorphisme", "abstraction", "encapsulation", "portee", "pointeur", "instance", "constructeur", "destructeur", "surcharge", "sous-classe", "super-classe", "heritage", "polymorphisme", "abstraction", "encapsulation", "portee", "pointeur", "instance", "constructeur", "destructeur", "surcharge", "sous-classe", "super-classe"};
//Liste des etapes du dessin du pendu
vector<string> dessin_pendu = {"",
                               " \n"
                               " \n"
                               " \n"
                               " \n"
                               " \n"
                               " \n"
                               " \n"
                               " _______",
                               " \n"
                               "    |\n"
                               "    |\n"
                               "    |\n"
                               "    |\n"
                               "    |\n"
                               "    |\n"
                               " ___|___",
                               "  --|-/-----\n "
                               "    |/\n "
                               "    |\n "
                               "    |\n "
                               "    |\n "
                               "    |\n "
                               "    |\n "
                               " ___|___",
                               "  --|-/--|--\n "
                               "    |/   |\n "
                               "    |\n "
                               "    |\n "
                               "    |\n "
                               "    |\n "
                               "    |\n "
                               " ___|___",
                               "  --|-/--|--\n "
                               "    |/   |\n "
                               "    |    0\n "
                               "    |\n "
                               "    |\n "
                               "    |\n "
                               "    |\n "
                               " ___|___",
                               "  --|-/--|--\n "
                               "    |/   |\n "
                               "    |    0\n "
                               "    |    |\n "
                               "    |    |\n "
                               "    |\n "
                               "    |\n "
                               " ___|___",
                               "  --|-/--|--\n "
                               "    |/   |\n "
                               "    |    0\n "
                               "    |  --|\n "
                               "    |    |\n "
                               "    |\n "
                               " ___|___",
                               "  --|-/--|--\n "
                               "    |/   |\n "
                               "    |    0\n "
                               "    |  --|--\n "
                               "    |    |\n "
                               "    |\n "
                               " ___|___",
                               "  --|-/--|--\n "
                               "    |/   |\n "
                               "    |    0\n "
                               "    |  --|--\n "
                               "    |    |\n "
                               "    |   /\n "
                               " ___|___",
                               "  --|-/--|--\n "
                               "    |/   |\n "
                               "    |    0\n "
                               "    |  --|--\n "
                               "    |    |\n "
                               "    |   / \\\n "
                               " ___|___"};
//Nombre de coups
int nbEssais = 10;

//Fonctions

/* R: Fonction qui permet d'afficher le mot cache
 * E: Le mot cache
 * S: Aucun
 */
void AfficherMotCache(string motCache);

/* R: Fonction qui permet d'afficher le nombre d'essais restant
 * E: Le nombre d'essais restant
 * S: Aucun
 */
void AfficherNombreEssais(int nbEssais);

/* R: Fonction qui permet d'afficher le dessin du pendu
 * E: Le dessin du pendu
 * S: Aucun
 */
void AfficherDessinPendu(int nbEssais);

/* R: Fonction qui permet d'Afficher le message de fin de partie
 * E: Si le joueur a trouvé le mot ou non et le mot à trouver
 * S: Aucun
 */
void AfficherFinPartie(bool trouve, string mot);

/* R: Fonction qui permet de faire saisir une lettre a l'utilisateur
 * E: Aucun
 * S: Retourne la lettre saisie
 */
string DemandeLettreProposee();

/* R: Fonction qui permet de choisir un mot au hasard dans la liste des mots
 * E: Aucun
 * S: Retourne le mot choisi
 */
vector<string> ChoixMot();

/* R: Fonction qui permet de verifier si la lettre est dans le mot
 * E: Le mot, la lettre et le mot cache
 * S: Retourne True si la lettre est dans le mot
 */
bool VerifierLettre(string lettre, string mot, string &mot_cache);

/* R: Fonction qui permet de verifier si le mot est trouvé
 * E: Le mot et le mot cache
 * S: Retourne True si le mot est trouvé
 */
bool VerifierMot(string mot, string mot_cache);

#endif //JEU_PENDU_CPP_MYVARS_H
