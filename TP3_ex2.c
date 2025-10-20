#include <stdio.h>

int main() {
    float note, somme = 0;
    int i = 0;
    
    while (1) {
        printf("note %d : ", i + 1);
        scanf("%f", &note);
        
        if (note < 0) 
            break;
        
        somme += note;
        i++;
    }
    
    if (i > 0) {
        float moyenne = somme / i;
        printf("moyenne de ces %d notes : %.2f\n", i, moyenne);
    } else {
        printf("Aucune note valide saisie.\n");
    }

    return 0;
}
