#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Jeu du pendu
    cout << "Jeu du pendu" << endl;

    //Déclaration des variables
    //Liste de mots du jeu du pendu
    vector<string> mots = {"abaisser", "abandon", "abasourdir", "abattre", "abdiquer", "abeille", "abolir", "aborder", "aboutir", "aboyer", "abrasif", "abreuver", "abriter", "abroger", "abrupt", "absence", "absolu", "absurde", "abusif", "abuter", "académie", "acajou", "acarien", "accabler", "accepter", "acclamer", "accolade", "accroche", "accuser", "acerbe", "achat", "acheter", "aciduler", "acier", "acompte", "acquérir", "acronyme", "acteur", "actif", "actuel", "adepte", "adequat", "adhésif", "adjectif", "adjuger", "admettre", "admirer", "adopter", "adorer", "adoucir", "adresse", "adroit", "adulte", "adverbe", "aérer", "aéroport", "affaire", "affecter", "affiche", "affreux", "affubler", "agacer", "agencer", "agile", "agiter", "agrafer", "agréable", "agrume", "aider", "aiguille", "ailier", "aimable", "aisance", "ajouter", "ajuster", "alarmer", "alchimie", "alerte", "algèbre", "algue", "aliéner", "aliment", "alléger", "alliage", "allouer", "allumer", "alourdir", "alpaga", "altesse", "alvéole", "amateur", "ambigu", "ambre", "aménager", "amertume", "amidon", "amiral", "amorcer", "amour", "amovible", "amphibie", "ampleur", "amusant", "analyse", "anaphore", "anarchie", "anatomie", "ancêtre", "anéantir", "angle", "angoisse", "anguleux", "animal", "annexer",
    "annonce", "annuel", "anodin", "anomalie", "anonyme", "anormal", "antenne", "antidote", "anxieux", "apaiser", "apéritif", "aplanir", "apologie", "appareil", "appeler", "apporter", "appuyer", "aquarium", "aqueduc", "arbitre", "arbuste", "ardeur", "ardoise", "argent", "arlequin", "armature", "armoire", "armure", "arpenter", "arracher", "arriver", "arroser", "arsenic", "artefact", "article", "aspect", "asphalte", "aspirer", "assaut", "asservir", "assiette", "associer", "assurer", "asticot", "astre", "astuce", "atelier", "atome", "atrium", "atroce", "attaque", "attentif", "attirer", "attraper", "aubaine", "auberge", "audace", "audible", "augurer", "aurore", "automne", "autruche", "avaler", "avancer", "avarice", "avenir", "averse", "aveugle", "aviateur", "avide", "avion", "aviser", "avoine", "avouer", "avril", "axiome", "badge", "bagage", "baguette", "baignade", "balancer", "balcon", "baleine", "balisage", "bambin", "bancaire", "bandage", "banlieue", "bannière", "banquier", "barbier", "baril", "baron", "barque", "barrage", "bassin", "bastion", "bataille", "bateau", "batterie", "baudrier", "bavard", "belette", "bélier", "belote", "bénéfice", "berceau", "berger", "berline", "bermuda", "besace", "besogne", "bétail", "beurre",
    "biberon", "bicycle", "bidule", "bijou", "bilan", "bilingue", "billard", "binaire", "biologie", "biopsie", "biotype", "biscuit", "bison", "bistouri", "bitume", "bizarre", "blafard", "blague", "blanchir", "blessant", "blinder", "blond", "bloquer", "blouson", "bobard", "bobine", "boire", "boiser", "bolide", "bonbon", "bondir", "bonheur", "bonifier", "bonus", "bordure", "borne", "botte", "boucle", "boueux", "bougie", "boulon", "bouquin", "bourse", "boussole", "boutique", "boxeur", "branche", "brasier", "brave", "brebis", "brèche", "breuvage", "bricoler", "brigade", "brillant", "brioche", "brique", "brochure", "broder", "bronzer", "brousse", "broyeur", "brume", "brusque", "brutal", "bruyant", "buffle", "buisson", "bulletin", "bureau", "burin", "bustier", "butiner", "butoir", "buvable", "buvette", "cabanon", "cabine", "cachette", "cadeau", "cadre", "caféine", "caillou", "caisson", "calculer", "calepin", "calibre", "calmer", "calomnie", "calvaire", "camarade", "caméra", "camion", "campagne", "canal", "caneton", "canon", "cantine", "canular", "capable", "caporal", "caprice", "capsule", "capter", "capuche", "carabine", "carbone", "caresser", "caribou", "carnage", "carotte", "carreau", "carton", "cascade"};
    //Liste des etapes du dessin du pendu
    vector<string> dessin_pendu = {"", " \n \n \n \n \n \n \n _______", " \n    |\n    |\n    |\n    |\n    |\n    |\n ___|___", " --|-/-----\n    |/\n    |\n    |\n    |\n    |\n    |\n ___|___", " --|-/--|--\n    |/   |\n    |\n    |\n    |\n    |\n    |\n ___|___", " --|-/--|--\n    |/   |\n    |    0\n    |\n    |\n    |\n    |\n ___|___", " --|-/--|--\n    |/   |\n    |    0\n    |    |\n    |    |\n    |\n    |\n ___|___", " --|-/--|--\n    |/   |\n    |    0\n    |  --|\n    |    |\n    |\n ___|___", " --|-/--|--\n    |/   |\n    |    0\n    |  --|--\n    |    |\n    |\n ___|___", " --|-/--|--\n    |/   |\n    |    0\n    |  --|--\n    |    |\n    |   /\n ___|___", " --|-/--|--\n    |/   |\n    |    0\n    |  --|--\n    |    |\n    |   / \\\n ___|___"};
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
