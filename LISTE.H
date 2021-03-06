#ifndef _LISTE_H_
#define _LISTE_H_
#define LARGEUR 15
struct SCellule {
    char val[LARGEUR];
    struct SCellule* pred;
    struct SCellule* succ;
};
typedef struct SCellule Cellule;
typedef Cellule* Adr;
typedef Cellule Liste;
/* Ici, la liste vide est une liste avec un �l�ment (non utilis�). */
/* alloue dynamiquement une liste et retourne son adresse */
extern Liste* Liste_creer();
/* initialise correctement la liste donn�e en param�tre, comme si elle �tait vide. */
extern void Liste_init( Liste* L );
/* d�truit tous les �l�ments stock�s dans la liste L. La liste est vide apr�s.*/
extern void Liste_termine( Liste* L );
/* d�truit tous les �l�ments stock�s dans la liste L, et lib�re l'espace m�moire de la liste. */
extern void Liste_detruire( Liste* L );
/* retourne l'adresse du premier �l�ment. */
extern Adr Liste_debut( Liste* L );
/* retourne l'adresse apr�s le dernier �l�ment. */
extern Adr Liste_fin( Liste* L );
/* passe � l'�l�ment suivant. */
extern Adr Liste_suivant( Liste* L, Adr A );
/* passe � l'�l�ment pr�c�dent. */
extern Adr Liste_precedent( Liste* L, Adr A );
/* ins�re devant l'�l�ment A un nouvel �l�ment de valeur v dans L. */
extern Adr Liste_insere( Liste* L, Adr A, char* v );
/* supprime l'�l�ment A dans L. */
extern void Liste_supprime( Liste* L, Adr A );
/* retourne la valeur stock�e dans l'�l�ment A de la liste L. */
extern char* Liste_valeur( Liste* L, Adr A );
/* modifie la valeur stock�e dans l'�l�ment A de la liste L, en lui assignant la valeur v. */
extern void Liste_modifie( Liste* L, Adr A, char* v );
#endif
