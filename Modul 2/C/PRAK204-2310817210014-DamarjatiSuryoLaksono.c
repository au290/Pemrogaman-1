#include <stdio.h>

int main() {
    float pi = 3.14159265358979323846 ;
    double jari, tinggi ;
    scanf("%lf %lf", &jari , &tinggi);
    float volume = pi*jari*jari*tinggi ;
    float luas = 2*pi*jari*(jari+tinggi);
    float keliling = 2*pi*jari;
    printf("Volume   = %.2f\n", volume );
    printf("Luas     = %.2f\n", luas );
    printf("Keliling = %.2f\n", keliling );
return 0;
}

