#include <stdio.h>

void tampilkanPatokanKalori(char daftar[][200], int jumlah){
    printf("==Patokan Kalori==\n");
    for(int i = 0; i < jumlah; i++){
        printf("%s", daftar[i]);
    }
}

int main()
{

    printf("===Program Sederhana Penghitung Kalori===\n\n");

    char daftarMakananMinuman [6][200]={
        "Low-calorie = >=40 per 100 gram/porsi\n",
        "(sayuran mentah, air putih, teh tawar, minuman rendah gula)\n",
        "Medium-calorie = 40-150 per 100 gram/porsi\n",
        "(buah-buahan, susu rendah kalori, nasi di porsi sedikit, sup, yogurt)\n",
        "High-calorie = <=150 per 100 gram/porsi\n",
        "(gorengan, makanan cepat saji, minuman manis)\n\n"
    };

    int jumlahKaliMakanMinum;
    char makananMinuman[100];
    int kalori, porsi;
    int totalKalori = 0;

    tampilkanPatokanKalori(daftarMakananMinuman, 6);

    printf("Berapa Kali Makan: ");
    scanf("%d", &jumlahKaliMakanMinum);

    for(int i = 0; i < jumlahKaliMakanMinum; i++){
        printf("\nMakanan/Minuman ke-%d\n", i+1);

        printf("Makanan/Minuman:");
        scanf("%s", makananMinuman);

        printf("Kalori:");
        scanf("%d", &kalori);

        printf("Porsi:");
        scanf("%d", &porsi);

        totalKalori += kalori * porsi;
    }

    printf("\nTotal kalori kamu: %d\n", totalKalori);

    if(totalKalori < 2000){  
        printf("Waduhh, kalorinya kurang..");
    }else if((totalKalori > 2000) && (totalKalori < 2200)){
        printf("Nahh, ini baru pass..");
    }else if(totalKalori >= 2200){
        printf("WOi, kalori kamu kebanyakan!!");
    }
    
    return 0;
}
    