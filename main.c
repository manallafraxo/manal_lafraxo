#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef struct Date
{
    int jj;
    int mm;
    int yy;
} date;

typedef struct Voiture
{
    int idVoiture;
    char marque[15];
    char nomVoiture[15];
    char couleur[7];
    int nbplaces;
    int prixJour;
    char EnLocation[4];
} voiture;

typedef struct contratLocation
{
    int numContrat;
    int idVoiture;
    int idClient;
    date debut;
    date fin;
    int cout;
} contrat;

typedef struct Client
{
    int idClient;
    char nom[20];
    char prenom[20];
    int cin;
    char adresse[15];
    int telephone;
} client;


// ****** LES MENUS ****** //


int MenuPrincipal()
{
    int choix;

    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n                               \xb3 Menu Principal  \xb3");
    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Location..............................1   \xba");
    printf("\n               \xba    Gestion voitures......................2   \xba");
    printf("\n               \xba    Gestion clients.......................3   \xba");
    printf("\n               \xba    Quitter...............................4   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}

int MenuGestionDeVoiture()
{
    int choix;

    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n                               \xb3 Gestion des voitures  \xb3");
    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    Liste des voitures..............................1   \xba");
    printf("\n               \xba    Ajouter voiture.................................2   \xba");
    printf("\n               \xba    Modifier voiture................................3   \xba");
    printf("\n               \xba    Supprimer voiture...............................4   \xba");
    printf("\n               \xba    Retour..........................................5   \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}

int MenuLocation()
{
    int choix;

    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n                               \xb3 Location d'une voiture  \xb3");
    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    Visualiser contrat..............................1   \xba");
    printf("\n               \xba    Louer voiture...................................2   \xba");
    printf("\n               \xba    Retourner voiture...............................3   \xba");
    printf("\n               \xba    Modifier contrat................................4   \xba");
    printf("\n               \xba    Supprimer contrat...............................5   \xba");
    printf("\n               \xba    Retour..........................................6   \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}

int MenuGestionClient()
{
    int choix;

    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n                               \xb3 Gestion des Clients  \xb3");
    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                       \xba");
    printf("\n               \xba    Liste des clients..............................1   \xba");
    printf("\n               \xba    Ajouter Client.................................2   \xba");
    printf("\n               \xba    Modifier client................................3   \xba");
    printf("\n               \xba    Supprimer client...............................4   \xba");
    printf("\n               \xba    Retour.........................................5   \xba");
    printf("\n               \xba                                                       \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}


// ****** GESTION DE VOITURE ****** //

int rechercheID(int idrech){
    voiture voiture;
    FILE *fichier=NULL;
    fichier = fopen("Voiture.txt","r");
        do {
                fscanf(fichier," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",&voiture.idVoiture,&voiture.marque,&voiture.nomVoiture,&voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation);
                fflush(stdin);
                 if(voiture.idVoiture == idrech )
                 {
                     fclose(fichier);
                     return 1;
                 }
           }while(!feof(fichier));
           fclose(fichier);
           return -1;
}


void ListeVoitures()
{
    int c;
    FILE *fichier = NULL;
    fichier = fopen("Voiture.txt","r");
    if(fichier!=NULL)
    {
    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n                               \xb3 Liste des Voitures  \xb3");
    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
    printf(" ID Voiture \t    Marque \t  Nom Voiture \t  Couleur \t  Nb places \t Prix jour \t En location\n\n");
        do
        {
            c=fgetc(fichier);
            printf("%c",c);
        }
        while(c!=EOF);
        fclose(fichier);
    }
}

void AjouterVoiture()
{

    int N,i,id;
    voiture v;
    FILE *fichier = NULL;
    fichier = fopen("Voiture.txt","a");
    if(fichier!=NULL)
    {

        printf(" \n \t \t  Veuillez saisir le nombre de voitures a ajouter : ");
        scanf("%d",&N);
        for(i=1; i<=N; i++)
        {
            printf(" \t Id de Voiture : ");
            scanf("%d",&id);
            fflush(stdin);
            while(rechercheID(id)==1)
            {
              printf(" Ce ID existe deja . ");
              printf(" Id de Voiture : ");
              scanf("%d",&id);
            }
            v.idVoiture = id;

            printf(" \t Marque de la voiture : ");
            scanf("%s",&v.marque);
            fflush(stdin);

            printf(" \t Nom de la voiture : ");
            scanf("%s",&v.nomVoiture);
            fflush(stdin);

            printf(" \t Couleur de la voiture : ");
            scanf("%s",&v.couleur);
            fflush(stdin);

            printf(" \t nombre de places de la voiture : ");
            scanf("%d",&v.nbplaces);
            fflush(stdin);

            printf(" \t prix pour jour de la voiture : ");
            scanf("%d",&v.prixJour);
            fflush(stdin);

            printf(" \t La voiture est-il en location ? ");
            scanf("%s",&v.EnLocation);
            fflush(stdin);

            fprintf(fichier," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation);
        }
        fclose(fichier);
    }
}

void modifierVoiture()
{
    voiture voiture;
    FILE *fichier = NULL,*F = NULL;
    fichier = fopen("Voiture.txt","r");
    F = fopen("test.txt","a");
    int id;
    int reponse;
    if(fichier!=NULL)
    {
         printf(" Saisir le ID de la voiture a modifier : ");
         scanf("%d",&id);
         fflush(stdin);
         if(rechercheID(id)==1)
         {
            printf(" Voulez-Vous vraiment modifier les informations de cette Voiture \n 1 -------- OUI \n 0 --------- NON ? ");
            scanf("%d",&reponse);
            fflush(stdin);
            if( reponse == 1 )
                    {
                      do
                        {
                            fscanf(fichier," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",&voiture.idVoiture,&voiture.marque,&voiture.nomVoiture,&voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation);
                            if (id == voiture.idVoiture)
                                {
                                    voiture.idVoiture = id;
                                    printf(" Nouvelle marque : ");
                                    gets(voiture.marque);
                                    fflush(stdin);
                                    printf(" Nouveau nom de Voiture : ");
                                    gets(voiture.nomVoiture);
                                    fflush(stdin);
                                    printf(" Nouvelle couleur : ");
                                    gets(voiture.couleur);
                                    fflush(stdin);
                                    printf(" Nombre de places : ");
                                    scanf("%d",&voiture.nbplaces);
                                    fflush(stdin);
                                    printf(" Prix pour Jour : ");
                                    scanf("%d",&voiture.prixJour);
                                    fflush(stdin);
                                    printf(" La voiture est En Location : ");
                                    scanf("%s",&voiture.EnLocation);
                                    fflush(stdin);
                                }
                                fprintf(F," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);
                        }while(!feof(fichier));
                        fclose(fichier);
                        fclose(F);
                        remove("Voiture.txt");
                        rename("test.txt","Voiture.txt");
                        printf(" La Modification a ete fait avec succes. ");
                    }
                else { printf("   Modification Annulee.   ");}
         }
         else { printf("\n Ce Id n'existe pas .");}
    }
}

void SupprimerVoiture()
{
 voiture voiture;
    FILE *fichier = NULL,*F = NULL;
    fichier = fopen("Voiture.txt","r");
    F = fopen("test.txt","a");
    int id;
    int reponse;
    if(fichier!=NULL)
    {
         printf(" Saisir le ID de la voiture a supprimer : ");
         scanf("%d",&id);
         fflush(stdin);
         if(rechercheID(id)==1)
         {
            printf(" Voulez-Vous vraiment Supprimer cette Voiture de la liste ? \n 1 -------- OUI \n 0 --------- NON ?  ");
            scanf("%d",&reponse);
            fflush(stdin);
            if( reponse == 1 )
                    {
                      do
                        {
                            fscanf(fichier," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",&voiture.idVoiture,&voiture.marque,&voiture.nomVoiture,&voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation);
                            if (id != voiture.idVoiture)
                                {
                                fprintf(F," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);
                                }
                        }while(!feof(fichier));
                        fclose(fichier);
                        fclose(F);
                        remove("Voiture.txt");
                        rename("test.txt","Voiture.txt");
                        printf(" La Supprisson a ete fait avec succes. ");
                    }
            else { printf("   Suppression Annulee.   ");}
         }
         else { printf("\n Ce Id n'existe pas .");}
    }
}


// ****** GESTION DE CLIENTS ****** //

int rechercheid(int idrech){
    client C;
    FILE *fichier=NULL;
    fichier = fopen("Clients.txt","r");
        do {
                fscanf(fichier," %5d  %20s  %20s  %10d  %15s  %15d \n",&C.idClient,&C.nom,&C.prenom,&C.cin,&C.adresse,&C.telephone);
                fflush(stdin);
                 if(C.idClient == idrech )
                 {
                     fclose(fichier);
                     return 1;
                 }
           }while(!feof(fichier));
           fclose(fichier);
           return -1;
}


void ListeClients()
{
    int c;
    FILE *fichier = NULL;
    fichier = fopen("Clients.txt","r");
    if(fichier!=NULL)
    {
    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n                               \xb3  Liste des Clients  \xb3");
    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
    printf("ID Client \t NOM \t Prenom \t CIN  \t Adresse \t  Telephone \n\n");
        do
        {
            c=fgetc(fichier);
            printf("%c",c);
        }
        while(c!=EOF);
        fclose(fichier);
    }
}

void AjouterClients()
{
    int N,i,id;
    client C;
    FILE *fichier = NULL;
    fichier = fopen("Clients.txt","a");
    if(fichier!=NULL)
    {

        printf(" \n \t \t  Veuillez saisir le nombre de Clients ajouter : ");
        scanf("%d",&N);
        for(i=1; i<=N; i++)
        {
            printf(" \t Id de Client \n : ");
            scanf("%d",&id);
            fflush(stdin);
            while(rechercheid(id)==1)
            {
              printf(" Ce ID existe deja . ");
              printf(" Id de Client : ");
              scanf("%d",&id);
            }
            C.idClient = id;

            printf(" \t Nom de Client \n : ");
            scanf("%s",&C.nom);
            fflush(stdin);

            printf(" \t Prenom de Client\n: ");
            scanf("%s",&C.prenom);
            fflush(stdin);

            printf(" \t CIN de client \n : ");
            scanf("%d",&C.cin);
            fflush(stdin);

            printf(" \t adresse de Client \n : ");
            scanf("%s",&C.adresse);
            fflush(stdin);

            printf(" \t Numero de Telephone de Client \n : ");
            scanf("%d",&C.telephone);
            fflush(stdin);

            fprintf(fichier," \t %5d  %20s  %20s  %10d  %15s  %15d \n",C.idClient,C.nom,C.prenom,C.cin,C.adresse,C.telephone);
        }
        fclose(fichier);
    }
}

void ModifierClients()
{
    client C;
    FILE *fichier = NULL,*F = NULL;
    fichier = fopen("Clients.txt","r");
    F = fopen("test1.txt","a");
    int id;
    int reponse;
    if(fichier!=NULL)
    {
         printf(" Saisir le ID du Client a modifier : ");
         scanf("%d",&id);
         fflush(stdin);
         if(rechercheid(id)==1)
         {
            printf(" Voulez-Vous vraiment modifier les informations de ce Client \n 1 -------- OUI \n 0 --------- NON ? ");
            scanf("%d",&reponse);
            fflush(stdin);
            if( reponse == 1 )
                    {
                      do
                        {
                            fscanf(fichier," %5d  %20s  %20s  %10d  %15s  %15d \n",&C.idClient,&C.nom,&C.prenom,&C.cin,&C.adresse,&C.telephone);
                            if (id == C.idClient)
                                {
                                    C.idClient = id;
                                    printf(" Nouveau nom : ");
                                    gets(C.nom);
                                    fflush(stdin);
                                    printf(" Nouveau prenom : ");
                                    gets(C.prenom);
                                    fflush(stdin);
                                    printf(" Nouvelle CIN : ");
                                    scanf("%d",&C.cin);
                                    fflush(stdin);
                                    printf(" Nouvelle Adresse : ");
                                    scanf("%s",C.adresse);
                                    fflush(stdin);
                                    printf(" Nouveau numero de Telephone : ");
                                    scanf("%d",&C.telephone);
                                    fflush(stdin);
                                }
                                fprintf(F," %5d  %20s  %20s  %10d  %15s  %15d \n",C.idClient,C.nom,C.prenom,C.cin,C.adresse,C.telephone);
                        }while(!feof(fichier));
                        fclose(fichier);
                        fclose(F);
                        remove("Clients.txt");
                        rename("test1.txt","Clients.txt");
                        printf(" La Modification a ete fait avec succes. ");
                    }
            else { printf("   Modification Annulee.   ");}
         }
         else { printf("\n Ce Id n'existe pas .");}
    }

}

void SupprimerClients()
{
    client C;
    FILE *fichier = NULL,*F = NULL;
    fichier = fopen("Clients.txt","r");
    F = fopen("test1.txt","a");
    int id;
    int reponse;
    if(fichier!=NULL)
    {
         printf(" Saisir le ID du Client a supprimer : ");
         scanf("%d",&id);
         fflush(stdin);
         if(rechercheid(id)==1)
         {
            printf(" Voulez-Vous vraiment Supprimer ce Client de la liste ? \n 1 -------- OUI \n 0 --------- NON ?  ");
            scanf("%d",&reponse);
            fflush(stdin);
            if( reponse == 1 )
                    {
                      do
                        {
                            fscanf(fichier," %5d  %20s  %20s  %10d  %15s  %15d \n",&C.idClient,&C.nom,&C.prenom,&C.cin,&C.adresse,&C.telephone);
                            if (id != C.idClient)
                                {
                                fprintf(F," %5d \n %20s \n %20s \n %10d \n %15s \n %15d \n",C.idClient,C.nom,C.prenom,C.cin,C.adresse,C.telephone);
                                }
                        }while(!feof(fichier));
                        fclose(fichier);
                        fclose(F);
                        remove("Clients.txt");
                        rename("test1.txt","Clients.txt");
                        printf(" La Suppression a ete fait avec succe. ");
                    }
            else { printf("   Supression  Annulee.   ");}
         }
         else { printf("\n Ce Client n'existe pas .");}
    }
}


// ****** FONCIONS AIDES

int rechercheContrat(int numRech){
    contrat C;
    FILE *fichier=NULL;
    fichier = fopen("ContratsLocations.txt","r");
    do {
                fscanf(fichier," %d \t\t %d \t\t %d \t\t %d/%d/%d \t\t %d/%d/%d \t\t %d \n",&C.numContrat,&C.idVoiture,&C.idClient,&C.debut.jj,&C.debut.mm,&C.debut.yy,&C.fin.jj,&C.fin.mm,&C.fin.yy,&C.cout);
                fflush(stdin);
                 if(C.numContrat == numRech )
                 {
                     fclose(fichier);
                     return 1;
                 }
           }while(!feof(fichier));
           fclose(fichier);
           return -1;

}


void VoitureNONlouee(){
     voiture voiture;
     FILE *fichier = NULL,*F = NULL;
     fichier = fopen("Voiture.txt","r");
     F = fopen("VoitureNON.txt","w");
    if(fichier!=NULL){
      do{
          fscanf(fichier," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",&voiture.idVoiture,&voiture.marque,&voiture.nomVoiture,&voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation);
          fflush(stdin);
            if(!strcmp(voiture.EnLocation,"oui") == 0)
                {
                    fprintf(F," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);
                    fflush(stdin);
                }
            }while(!feof(fichier));
    }
    else
        {fputs(" Aucune Voiture n'est disponible pour l'instant. \n",F);}

    fclose(fichier);
    fclose(F);
}


void ListeVoitureNONlouee(){
    int c;
    FILE *file = NULL;
    VoitureNONlouee();
    file = fopen("VoitureNON.txt","r");
    if(file!= NULL)
    {
    printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n                               \xb3 Liste des Voitures NON louee \xb3");
    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
    printf(" ID Voiture \t    Marque \t  Nom Voiture \t  Couleur \t  Nb places \t Prix jour \t En location\n\n");
        do
        {
            c=fgetc(file);
            printf("%c",c);
        }
        while(c!=EOF);
        fclose(file);
    }
    else
        printf(" Pas de Voiture pour l'instant .");
}


int rechercheVoiture(int idrech){
    voiture voiture;
    FILE *fichier=NULL;
    fichier = fopen("VoitureNON.txt","r");
        do {
                fscanf(fichier," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",&voiture.idVoiture,&voiture.marque,&voiture.nomVoiture,&voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation);
                fflush(stdin);
                 if(voiture.idVoiture == idrech )
                 {
                     fclose(fichier);
                     return 1;
                 }
           }while(!feof(fichier));
           fclose(fichier);
           return -1;
}


int nbJours( int j1, int m1, int a1,   int j2, int m2, int a2 ){
   struct tm d1 = {0};
   struct tm d2 = {0};

   d1.tm_mday = j1;
   d1.tm_mon  = m1 - 1;
   d1.tm_year = a1 - 1900;

   d2.tm_mday = j2;
   d2.tm_mon  = m2 - 1;
   d2.tm_year = a2 - 1900;

   return difftime(mktime(&d2), mktime(&d1)) / 86400;
}


int recherchePrix(int idrech){
    voiture voiture;
    FILE *fichier=NULL;
    fichier = fopen("VoitureNON.txt","r");
        do {
                fscanf(fichier," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",&voiture.idVoiture,&voiture.marque,&voiture.nomVoiture,&voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation);
                fflush(stdin);
                 if(voiture.idVoiture == idrech )
                 {
                     return voiture.prixJour;
                 }
           }while(!feof(fichier));
           fclose(fichier);
}


void VoitureLouee(int id){
        voiture voiture;
        FILE *fichier = NULL, *file = NULL;
        fichier = fopen("Voiture.txt","r");
        file = fopen("test.txt","a");
        do{
            fscanf(fichier," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",&voiture.idVoiture,&voiture.marque,&voiture.nomVoiture,&voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation);
            fflush(stdin);
            if(voiture.idVoiture==id)
            {
             fprintf(file," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,"oui");
             fflush(stdin);
            }
            if(voiture.idVoiture!=id)
            {
             fprintf(file," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);
             fflush(stdin);
            }
          }while(!feof(fichier));
        fclose(fichier);
        fclose(file);
        remove("Voiture.txt");
        rename("test.txt","Voiture.txt");
}


void AjouterContrat(){
    contrat C;
    int num,id,idV,rep;
    FILE *file = NULL;
    file = fopen("ContratsLocations.txt","a");
    printf(" Entrer le numero du nouveau Contrat : ");
    scanf("%d",&num);
    fflush(stdin);
        while(rechercheContrat(num) == 1){
            printf(" Ce Contrat existe deja dans le fichier !! ");
            printf(" Entrer le numero du nouveau Contrat : ");
            scanf("%d",&num);
            fflush(stdin);
        }
    C.numContrat = num;
    printf(" ID du Client :");
    scanf("%d",&id);
    fflush(stdin);
    while(rechercheid(id)!=1){
        printf("Ce ID n'existe pas veuillez retaper a nouveau ID : ");
        scanf("%d",&id);
        fflush(stdin);
        }
    C.idClient = id;
    ListeVoitureNONlouee();
    printf("                 Votre choix : id = ");
    scanf("%d",&idV);
    fflush(stdin);
    while(rechercheVoiture(idV)!=1){
        printf("Ce ID n'existe pas veuillez retaper a nouveau votre choix : ");
        scanf("%d",&idV);
        fflush(stdin);
        }
     C.idVoiture = idV;
    printf(" Entrez la date de debut du contrat : \n");
    do{ printf(" Le jour : "); scanf("%d",&C.debut.jj); }while(C.debut.jj<1 || C.debut.jj>31);
    do{ printf(" Le mois : "); scanf("%d",&C.debut.mm); }while(C.debut.mm<1 || C.debut.mm>12);
    do{ printf(" L'annee : "); scanf("%d",&C.debut.yy); }while(C.debut.yy<2020);
    fflush(stdin);
    printf(" Entrez la date de fin du contrat : \n");
    do{ printf(" Le jour : "); scanf("%d",&C.fin.jj); }while(C.fin.jj<1 || C.fin.jj>31);
    do{ printf(" Le mois : "); scanf("%d",&C.fin.mm); }while(C.fin.mm<1 || C.fin.mm>12);
    do{ printf(" L'annee : "); scanf("%d",&C.fin.yy); }while(C.fin.yy<C.debut.yy);
    fflush(stdin);
    C.cout = (recherchePrix(idV))*(nbJours(C.debut.jj,C.debut.mm,C.debut.yy, C.fin.jj,C.fin.mm,C.fin.yy));
    printf(" Ca vaut fera %d DH .",C.cout);
    printf(" Voulez-vous enregistrer Vos Informations ?\n 1 -------- OUI \n 0 --------- NON ? ");
    scanf("%d",&rep);
    fflush(stdin);
        if(rep == 1)
        {
           fprintf(file," %d \t\t %d \t\t %d \t\t %d/%d/%d \t\t %d/%d/%d \t\t %d \n",C.numContrat,C.idVoiture,C.idClient,C.debut.jj,C.debut.mm,C.debut.yy,C.fin.jj,C.fin.mm,C.fin.yy,C.cout);
           fflush(stdin);
           fclose(file);
           VoitureLouee(idV);
           printf(" La location est faite avec succes. ");
        }
        else
            printf(" Contrat Annulee. ");

}


void VoitureRetourne(int id){
    voiture voiture;
     FILE *fichier = NULL, *file = NULL;
     fichier = fopen("Voiture.txt","r");
     file = fopen("test.txt","a");
     if(fichier!= NULL){
     do{
        fscanf(fichier," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",&voiture.idVoiture,&voiture.marque,&voiture.nomVoiture,&voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation);
        fflush(stdin);
     if(voiture.idVoiture==id)
         {
             if(strcmp(voiture.EnLocation,"oui")==0)
              {
                fprintf(file," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,"non");
                fflush(stdin);
                printf(" La voiture est retournee. ");
             }
            if(strcmp(voiture.EnLocation,"non")==0)
             {
                fprintf(file," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);
                fflush(stdin);
                printf(" La voiture est deja retournee .");
             }
         }
     if(voiture.idVoiture!=id){
            fprintf(file," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",voiture.idVoiture,voiture.marque,voiture.nomVoiture,voiture.couleur,voiture.nbplaces,voiture.prixJour,voiture.EnLocation);
            fflush(stdin);
         }

     }while(!feof(fichier));
     fclose(fichier);
     fclose(file);
     remove("Voiture.txt");
     rename("test.txt","Voiture.txt");
     }
     else
        printf(" Fichier Vide. ");
}


int voitureRendue(int id){
    voiture voiture;
    FILE* file;
    file = fopen("Voiture.txt","r");
    do{
        fscanf(file," %10d  %15s  %15s  %10s  %10d  %15d  %15s \n",&voiture.idVoiture,&voiture.marque,&voiture.nomVoiture,&voiture.couleur,&voiture.nbplaces,&voiture.prixJour,&voiture.EnLocation);
        fflush(stdin);
        if(strcmp(voiture.EnLocation,"non")==0){
            fclose(file);
            return 1;
        }
    }while(!feof(file));
    fclose(file);
    return -1;
}

// ********* LOCATION VOITURE ********* //

void VisualiserContrat()
{
    contrat C;
    int num,c;
    FILE *fichier = NULL, *F = NULL;
    fichier = fopen("ContratsLocations.txt","r");
    F = fopen("ContratClient.txt","w");
    if(fichier!= NULL){
      printf("\t Numero de Contrat : ");
      scanf("%d",&num);
      fflush(stdin);
            if(rechercheContrat(num)!=1)
               {
                printf(" Ce numero de contrat  n'existe pas . ");
                printf("\t Numero de Contrat : ");
                scanf("%d",&num);
               }
             do{
                fscanf(fichier," %d \t\t %d \t\t %d \t\t %d/%d/%d \t\t %d/%d/%d \t\t %d \n",&C.numContrat,&C.idVoiture,&C.idClient,&C.debut.jj,&C.debut.mm,&C.debut.yy,&C.fin.jj,&C.fin.mm,&C.fin.yy,&C.cout);
                fflush(stdin);
                    if (C.numContrat == num)
                        {
                         fprintf(F," %d \t\t %d \t\t %d \t\t %d/%d/%d \t\t %d/%d/%d \t\t %d \n",C.numContrat,C.idVoiture,C.idClient,C.debut.jj,C.debut.mm,C.debut.yy,C.fin.jj,C.fin.mm,C.fin.yy,C.cout);
                         fflush(stdin);
                        }
                }while(!feof(fichier));
                fclose(fichier);
                fclose(F);
    }
    F = fopen("ContratClient.txt","r");
        if(F!= NULL){
             printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
             printf("\n                               \xb3  Contrat de Location \xb3");
             printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
             printf("Num Contrat \t\t ID Voiture \t ID Client \t Date Debut \t\t  Date Fin \t\t Cout \n\n");
             do{
                c=fgetc(F);
                printf("%c",c);
               }
               while(c!=EOF);
               fclose(F);
    }
}

void LouerVoiture()
{
     int id,choix;
     voiture V;
     printf("      Nouveau Client............1 \n");
     printf("      Client existe.............2 \n");
     printf("              Votre choix : ");
     scanf("%d",&choix);
     switch(choix)
     {
        case (1):
            AjouterClients();
            AjouterContrat();
          break;
        case (2):
            AjouterContrat();
          break;
     }


}

void RetournerVoiture()
{
    contrat C;
    int id;
 FILE *file = NULL;
 file=fopen("ContratsLocations.txt","r");
 printf(" Entrer l'id de la voiture que vous voulez retourner : ");
 scanf("%d",&id);
 fflush(stdin);
 while(rechercheID(id)!=1)
            {
              printf(" Ce ID de voiture n'existe pas . ");
              printf(" Id de Voiture : ");
              scanf("%d",&id);
            }
  do{
     fscanf(file," %d \t\t %d \t\t %d \t\t %d/%d/%d \t\t %d/%d/%d \t\t %d \n",&C.numContrat,&C.idVoiture,&C.idClient,&C.debut.jj,&C.debut.mm,&C.debut.yy,&C.fin.jj,&C.fin.mm,&C.fin.yy,&C.cout);
     fflush(stdin);
     if(C.idVoiture==id)
     {
         VoitureRetourne(id);
     }
    }while(!feof(file));
    fclose(file);
}

void ModifierContrat()
{
    contrat C;
    FILE *fichier = NULL, *file=NULL;
    fichier = fopen("ContratsLocations.txt","r");
    file = fopen("test.txt","a");
    int rep,num;
    if(fichier!=NULL){
        printf(" Entrer le numero du Contrat que vous voulez modifier : ");
        scanf("%d",&num);
        fflush(stdin);
            if(rechercheContrat(num)==1)
            {
                    printf(" Voulez-vous vraiment modifier la date du Contrat ? \n 1------- OUI \n 0------- NON   ");
                    scanf("%d",&rep);
                    fflush(stdin);
                    if(rep==1)
                        {
                         do{
                            fscanf(fichier," %d \t\t %d \t\t %d \t\t %d/%d/%d \t\t %d/%d/%d \t\t %d \n",&C.numContrat,&C.idVoiture,&C.idClient,&C.debut.jj,&C.debut.mm,&C.debut.yy,&C.fin.jj,&C.fin.mm,&C.fin.yy,&C.cout);
                            fflush(stdin);
                            if(C.numContrat == num)
                            {
                                C.numContrat = num;
                                printf("Entrez la nouvelle date de debut : ");
                                do{ printf(" Le jour : "); scanf("%d",&C.debut.jj); }while(C.debut.jj<1 || C.debut.jj>31);
                                do{ printf(" Le mois : "); scanf("%d",&C.debut.mm); }while(C.debut.mm<1 || C.debut.mm>12);
                                do{ printf(" L'annee : "); scanf("%d",&C.debut.yy); }while(C.debut.yy<2020);
                                fflush(stdin);
                                printf("Entrez la nouvelle date de retour : ");
                                    do{ printf(" Le jour : "); scanf("%d",&C.fin.jj); }while(C.fin.jj<1 || C.fin.jj>31);
                                    do{ printf(" Le mois : "); scanf("%d",&C.fin.mm); }while(C.fin.mm<1 || C.fin.mm>12);
                                    do{ printf(" L'annee : "); scanf("%d",&C.fin.yy); }while(C.fin.yy<C.debut.yy);
                                fflush(stdin);
                                C.cout = (recherchePrix(C.idVoiture))*(nbJours(C.debut.jj,C.debut.mm,C.debut.yy, C.fin.jj,C.fin.mm,C.fin.yy));
                                fflush(stdin);
                            }
                          fprintf(file," %d \t\t %d \t\t %d \t\t %d/%d/%d \t\t %d/%d/%d \t\t %d \n",C.numContrat,C.idVoiture,C.idClient,C.debut.jj,C.debut.mm,C.debut.yy,C.fin.jj,C.fin.mm,C.fin.yy,C.cout);
                        }while(!feof(fichier));
                         fclose(fichier);
                         fclose(file);
                         remove("ContratsLocations.txt");
                         rename("test.txt","ContratsLocations.txt");
                         printf(" Modification a ete fait avec succes. ");
                        }
                    else {printf(" Modification Annulee. ");}
            }
            else
            {
                printf(" Ce Contrat existe pas !! ");
            }
    }
}

void SupprimerContrat()
{
  FILE *fichier = NULL, *file = NULL;
  fichier=fopen("ContratsLocations.txt","r");
  file=fopen("test.txt","w");
  contrat C;
  int rep,num;
  printf(" Entrer le numero du contrat a supprimer : ");
  scanf("%d",&num);
  fflush(stdin);
  if(rechercheContrat(num)==1)
  {
      printf(" Voulez-vous vraiment Supprimer Ce contrat ?\n 1------- OUI \n 0------- NON ");
      scanf("%d",&rep);
      fflush(stdin);
      if(rep==1)
            {
              do{
                fscanf(fichier," %d \t\t %d \t\t %d \t\t %d/%d/%d \t\t %d/%d/%d \t\t %d \n",&C.numContrat,&C.idVoiture,&C.idClient,&C.debut.jj,&C.debut.mm,&C.debut.yy,&C.fin.jj,&C.fin.mm,&C.fin.yy,&C.cout);
                fflush(stdin);
                if(num==C.numContrat)
                {
                    if(voitureRendue(C.idVoiture)==1)
                    {
                     printf("Suppression Effectuee !!");
                    }
                     if(voitureRendue(C.idVoiture)!=1)
                    {printf(" La voiture n'est pas encore Rendu !! ");}
                }
                if(num!=C.numContrat)
                {
                 fprintf(file," %d \t\t %d \t\t %d \t\t %d/%d/%d \t\t %d/%d/%d \t\t %d \n",C.numContrat,C.idVoiture,C.idClient,C.debut.jj,C.debut.mm,C.debut.yy,C.fin.jj,C.fin.mm,C.fin.yy,C.cout);
                 fflush(stdin);
                }
                }while(!feof(fichier));
                fclose(fichier);
                fclose(file);
                remove("ContratsLocations.txt");
                rename("test.txt","ContratsLocations.txt");
            }
      else
      {printf(" Modification Annulee .");}
  }
  else
  { printf(" Ce Contrat n'existe pas!!" );}
}

main()
{
    int choix=MenuPrincipal();
    do
    {
        switch(choix)
        {
        case (1):
            choix=MenuLocation();
            do
            {
                if(choix==1)
                {
                    VisualiserContrat();
                    choix=MenuLocation();
                }
                else if(choix==2)
                {
                    LouerVoiture();
                    choix=MenuLocation();
                }
                else if(choix==3)
                {
                    RetournerVoiture();
                    choix=MenuLocation();
                }
                else if(choix==4)
                {
                    ModifierContrat();
                    choix=MenuLocation();
                }
                else if(choix==5)
                {
                    SupprimerContrat();
                    choix=MenuLocation();
                }
            }
            while(choix!=6);

            choix=MenuPrincipal();

            break;
        case 2:
            choix=MenuGestionDeVoiture();
            do
            {
                if(choix==1)
                {
                    ListeVoitures();
                    choix=MenuGestionDeVoiture();
                }
                else if(choix==2)
                {
                    AjouterVoiture();
                    choix=MenuGestionDeVoiture();
                }
                else if(choix==3)
                {
                    modifierVoiture();
                    choix=MenuGestionDeVoiture();
                }
                else if(choix==4)
                {
                    SupprimerVoiture();
                    choix=MenuGestionDeVoiture();
                }
            }
            while(choix!=5);

            choix=MenuPrincipal();
            break;
        case 3:
            choix=MenuGestionClient();
            do
            {
                if(choix==1)
                {
                    ListeClients();
                    choix=MenuGestionClient();
                }
                else if(choix==2)
                {
                    AjouterClients();
                    choix=MenuGestionClient();
                }
                else if(choix==3)
                {
                    ModifierClients();
                    choix=MenuGestionClient();
                }
                else if(choix==4)
                {
                    SupprimerClients();
                    choix=MenuGestionClient();
                }
            }
            while(choix!=5);

            choix=MenuPrincipal();
            break;
        case 4:
            break;
        default:
            choix=MenuPrincipal();
            break;
        }
    }
    while(choix!=4);
}
