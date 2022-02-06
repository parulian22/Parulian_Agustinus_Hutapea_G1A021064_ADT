#include <iostream>
using namespace std;

struct {
	float alas;
	float tinggi;
	float sisi;
	float luas;
	float keliling;
}segitiga;


void luassegitiga(){
    segitiga.luas=0.5*(segitiga.alas*segitiga.tinggi);
    printf("luas segitiga anda adalah: %f \n",segitiga.luas);
}

void kelilingsegitiga (){
	segitiga.keliling=(segitiga.sisi*3);
	printf("keliling segitiga anda adalah ; %f \n",segitiga.keliling);
	
}

int main(){
    printf("enjoy my program*\n");
    printf("menghitung luas segitiga*\n");
    printf("menghitung keliling segitiga*\n");
    printf("By Parulian Agustinus Hutapea*\n");
    printf("NPM : G1A021064*\n");
    printf("masukan alas segitiga =");scanf("%f", &segitiga.alas);
    printf("masukan tinggi segitiga =");scanf("%f", &segitiga.tinggi);
    printf("masukan sisi segitiga =");scanf("%f", &segitiga.sisi);
    luassegitiga();
    kelilingsegitiga();
    printf("\n");
return 0;

}
