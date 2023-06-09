//Made by ciapak
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include<unistd.h>



char* temp0(char* nom_fichier){
    FILE *fichier=NULL;
    char c;
    fichier=fopen(nom_fichier,"r");
    char* line = malloc(sizeof(char)*500);
    fscanf(fichier,"%s",line);
    fclose(fichier);
    return line;
}

// /sys/class/thermal/thermal_zone0/temp
// /home/maxime/Bureau/perso/test
int main(){
    printf("%s","Temp zone0 : ");
    printf("%s",temp0("/sys/class/thermal/thermal_zone0/temp"));
    printf("\n");
    printf("%s","Temp zone1 : ");
    printf("%s",temp0("/sys/class/thermal/thermal_zone1/temp"));
    printf("\n");
    printf("%s","Temp zone2 : ");
    printf("%s",temp0("/sys/class/thermal/thermal_zone2/temp"));
    printf("\n");
    printf("%s","Temp zone3 : ");
    printf("%s",temp0("/sys/class/thermal/thermal_zone3/temp"));
    printf("\n");
    printf("%s","Temp zone4 : ");
    printf("%s",temp0("/sys/class/thermal/thermal_zone4/temp"));
    printf("\n");
    printf("%s","Temp zone5 : ");
    printf("%s",temp0("/sys/class/thermal/thermal_zone5/temp"));
    printf("\n");
    printf("%s","Temp zone6 : ");
    printf("%s",temp0("/sys/class/thermal/thermal_zone6/temp"));
    printf("\n");
    printf("%s","Temp zone7 : ");
    printf("%s",temp0("/sys/class/thermal/thermal_zone7/temp"));
    printf("\n");
    printf("%s","DONE");
    printf("\n");
    return 0;
}
