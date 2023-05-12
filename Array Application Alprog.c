#include <stdio.h>

int main()
{
    // inisialisasi array list jualan
    char jualan[3][1000][1000] = {
        {"1. Streaming" , "2. Music"},
        {"1.1 Netflix", "1.2 Hotstar"},
        {"2.1 Spotify", "2.2 Joox"}
    };
    
    // inisialisasi array stock jualan
    int stok[3][2] = {
        {10, 20},
        {30, 20},
        {20, 15}
    };
    
    // inisialisasi array list aplikasi
    char aplikasi[2][1000][1000] = {
        {"Netflix", "Hotstar"},
        {"Spotify", "Joox"}
    };
    
    // inisialisasi array harga jualan
    int harga[3][2] = {
        {0,0},
        {30000, 25000},
        {20000, 10000}
    };
    
    // menampilkan isi array matrix 2 dimensi list jualan
    printf("List Jualan Toko Thufail: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%s \t", jualan[i][j]);
        }
        printf("\n");
    }
    
    // menampilkan isi array matrix 2 dimensi list jualan dan stok jualan
    printf("\nList Jualan dan Stok Toko Thufail: \n");
    printf("%-15s%-15s%s\n", "Aplikasi", "Stok", "Harga");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%-15s%-15d%d\n", aplikasi[i][j], stok[i+1][j], harga[i+1][j]);
        }
    }
    
    // melakukan transaksi pembelian 1 Netflix dan 1 Spotify
    int total_harga = harga[1][0] + harga[2][0]; // harga Netflix dan Spotify
    stok[1][0]--; // mengurangi stok Netflix
    stok[2][0]--; // mengurangi stok Spotify
    
    // menampilkan total harga pembelian
    printf("\nThufail ingin membeli 1 Netflix dan 1 Spotify\n");
    printf("Total harga pembelian 1 Netflix dan 1 Spotify adalah: %d\n", total_harga);
    
    // menampilkan isi array matrix 2 dimensi list jualan dan stok jualan setelah transaksi
    printf("\nList Jualan dan Stok Toko Thufail setelah transaksi: \n");
    printf("%-15s%-15s\n", "Aplikasi", "Stok");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%-15s%-15d\n", aplikasi[i][j], stok[i+1][j]);
        }
    }
    
    return 0;
}
