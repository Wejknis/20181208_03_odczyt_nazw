#include <stdio.h>

int main(int liczba_slow, char* tablica_slow[]) {

    int i;

    for (i = 0; i < liczba_slow; ++i){
        printf("parametr %i: %s\n", i, tablica_slow[i]);
    }

    return 0;
}