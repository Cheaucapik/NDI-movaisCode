#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[][150] = {"1. Quelle similitude existe entre la circulation de l'eau dans les oceans et la circulation sanguine dans le corps humain ?", "2. Comment les oceans et le corps humain regulent-ils leur temperature ?", "3. En quoi les oceans et le corps humain utilisent-ils des systemes de filtration ?", "4. Quelle fonction de protection jouent les oceans et le corps humain ?", "5. De quelle maniere les oceans et le corps humain echangent-ils des gaz ? ", "6. Comment les oceans et le corps humain maintiennent-ils un equilibre des fluides ?", "7. En quoi les oceans et le corps humain sont-ils similaires dans leurs rythmes naturels ?", "8. Comment les oceans et le corps humain s’auto-regulent-ils face aux changements ?", "9. De quelles ressources les oceans et le corps humain ont-ils besoin pour fonctionner efficacement ?", "10. Quelle fonction de transport partagent les oceans et le corps humain ?", "11. Comment les oceans et le corps humain gerent-ils leur energie ?", "12. Quelle est la similarite entre les interactions dans l'ecosysteme oceanique et les processus biologiques du corps humain ?"};

    char b[][600] = {
        "A : Les deux circulent uniquement grace a la gravite.",
        "B : Les deux transportent des elements essentiels pour maintenir un equilibre vital.",
        "C : Les deux sont regulees par des systemes electriques complexes",
        "D : Les deux dependent exclusivement de l'energie solaire pour fonctionner.",
        "A : Les deux transportent de l oxygene uniquement",
        "B : Les deux transportent des elements essentiels comme l oxygene et les nutriments ",
        "C : Les deux regulent la temperature ",
        "D : Les deux eliminent uniquement les dechets ",

        "A : Les oceans refroidissent la Terre et le corps humain regule la temperature interne",
        "B : Les oceans regulent la temperature globale, tandis que le corps humain regule uniquement la temperature de l air",
        "C : Les deux regulent uniquement l'humidite   ",
        "D : Le corps humain ne regule pas sa temperature ",

        "A : Pour eliminer l exces de sel uniquement",
        "B : Pour filtrer les nutriments et les polluants ",
        "C : Pour maintenir l equilibre acido-basique ",
        "D : Pour produire de l oxygene ",

        "A : Empecher la formation de vagues  ",
        "B : Proteger des menaces exterieures, comme les maladies et les polluants  ",
        "C : Aider a la digestion",
        "D : Favoriser la croissance des organismes ",

        "A : Les oceans et le corps humain absorbent du dioxyde de carbone uniquement",
        "B : Les oceans absorbent le dioxyde de carbone et liberent de l oxygene, et le corps humain echange l oxygene et le dioxyde de carbone ",
        "C : Les oceans et le corps humain echangent uniquement de l azote ",
        "D : Les oceans liberent du dioxyde de carbone et le corps humain ne fait aucun echange gazeux ",

        "A : Les oceans maintiennent un equilibre de salinite et d eau, tout comme le corps humain regule les fluides corporels  ",
        "B : Les oceans maintiennent l eau uniquement, et le corps humain maintient l air",
        "C : Les oceans n ont pas d equilibre des fluides, et le corps humain utilise uniquement l eau  ",
        "D : Le corps humain regule l eau dans l'ocean ",

        "A : Les oceans n ont pas de rythmes naturels",
        "B : Les oceans ont des cycles de marees et de courants, tandis que le corps humain suit des rythmes circadiens ",
        "C : Les oceans et le corps humain ont des rythmes qui ne se coordonnent pas ",
        "D : Les oceans et le corps humain suivent un seul cycle de 24 heures ",

        "A : Les oceans et le corps humain reagissent de la meme maniere en cas de stress",
        "B : Les oceans s auto-regulent par des courants, et le corps humain par des processus biologiques comme la temperature corporelle ",
        "C : Les oceans et le corps humain ne peuvent pas s auto - reguler ",
        "D : Seuls les oceans peuvent s auto - reguler ",

        "A : Les oceans ont besoin de carbone et d azote, et le corps humain a besoin d oxygene et de nutriments ",
        "B : Les oceans n ont besoin d’aucune ressource, et le corps humain utilise seulement de l eau",
        "C : Les oceans ont besoin d oxygene, et le corps humain utilise uniquement des mineraux ",
        "D : Les oceans ont besoin de lumiere, et le corps humain de proteines uniquement ",

        "A : Ils transportent uniquement de l air",
        "B : Ils transportent des elements essentiels comme les nutriments et l eau ",
        "C : Ils transportent uniquement de l eau ",
        "D : Les oceans transportent de l eau, et le corps humain ne transporte rien ",

        "A : Les oceans stockent et redistribuent l energie thermique, et le corps humain la stocke sous forme de graisses et de glucides ",
        "B : Les oceans ne gerent pas l energie, et le corps humain utilise de l energie solaire",
        "C : Les oceans et le corps humain n ont pas besoin d energie",
        "D : Les oceans et le corps humain utilisent uniquement l energie solaire ",

        "A : Les deux systemes n ont aucune interaction",
        "B : Les deux fonctionnent independamment, sans connexion entre eux ",
        "C : Dans l ocean, les organismes interagissent de maniere complexe pour maintenir l equilibre ",

    };

    char c[12] = {'B', 'A', 'B', 'B', 'B', 'A', 'B', 'B', 'A', 'B', 'A', 'C'};
    char d;
    int y = -100;

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[1 - 1]);
    printf("%s \n", b[1 - 1]);
    printf("%s \n", b[2 - 1]);
    printf("%s \n", b[3 - 1]);
    printf("%s \n", b[4 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[1 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[1 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[2 - 1]);
    printf("%s \n", b[5 - 1]);
    printf("%s \n", b[6 - 1]);
    printf("%s \n", b[7 - 1]);
    printf("%s \n", b[8 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[2 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[2 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[3 - 1]);
    printf("%s \n", b[9 - 1]);
    printf("%s \n", b[10 - 1]);
    printf("%s \n", b[11 - 1]);
    printf("%s \n", b[12 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[3 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[3 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[4 - 1]);
    printf("%s \n", b[13 - 1]);
    printf("%s \n", b[14 - 1]);
    printf("%s \n", b[15 - 1]);
    printf("%s \n", b[16 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[4 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[4 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[5 - 1]);
    printf("%s \n", b[17 - 1]);
    printf("%s \n", b[18 - 1]);
    printf("%s \n", b[19 - 1]);
    printf("%s \n", b[20 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[5 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[5 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[6 - 1]);
    printf("%s \n", b[2 - 11]);
    printf("%s \n", b[22 - 1]);
    printf("%s \n", b[23 - 1]);
    printf("%s \n", b[24 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[6 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[6 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[7 - 1]);
    printf("%s \n", b[25 - 1]);
    printf("%s \n", b[26 - 1]);
    printf("%s \n", b[27 - 1]);
    printf("%s \n", b[28 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[7 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[7 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[8 - 1]);
    printf("%s \n", b[29 - 1]);
    printf("%s \n", b[30 - 1]);
    printf("%s \n", b[31 - 1]);
    printf("%s \n", b[32 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[8 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[8 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[9 - 1]);
    printf("%s \n", b[33 - 1]);
    printf("%s \n", b[34 - 1]);
    printf("%s \n", b[35 - 1]);
    printf("%s \n", b[36 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[9 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[9 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[10 - 1]);
    printf("%s \n", b[37 - 1]);
    printf("%s \n", b[38 - 1]);
    printf("%s \n", b[39 - 1]);
    printf("%s \n", b[40 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[10 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[10 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[11 - 1]);
    printf("%s \n", b[41 - 1]);
    printf("%s \n", b[42 - 1]);
    printf("%s \n", b[43 - 1]);
    printf("%s \n", b[44 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'D' && d != 'a' && d != 'b' && d != 'c' && d != 'd')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[11 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[11 - 1]);
    }
    printf("\n");

    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");

    for (int z = 0; z < 16; ++z)
    {
        printf("*");
    }
    printf("\n");

    printf("%s \n\n", a[12 - 1]);
    printf("%s \n", b[45 - 1]);
    printf("%s \n", b[46 - 1]);
    printf("%s \n", b[47 - 1]);
    printf("\nSaisissez votre reponse : ");
    scanf(" %c", &d);
    d = toupper(d);

    while (d != 'A' && d != 'B' && d != 'C' && d != 'a' && d != 'b' && d != 'c')
    {
        printf("Proposition non reconnue, veuillez reessayer");
        printf("\nSaisissez votre reponse : ");
        scanf(" %c", &d);
    }
    if (d == c[12 - 1])
    {
        printf("Correct !\n");
        y++;
    }
    else
    {
        printf("Faux ! La bonne reponse etait : %c\n", c[12 - 1]);
    }
    printf("\n");
    for (int y = 0; y < 16; ++y)
    {
        printf("*");
    }
    printf("\n");
    printf("Votre score est de %d/12", y + 100);
}