#include <stdio.h>
int main()
{
	int menu, nasi=5000, chiken_fire=40000, french_fries=15000, chiken_original=35000, burger_beef=30000,
    burger_max=55000, Air_mineral=5000, milo=15000, lemon_tea=8000, chiken_wings=30000, jumlah_pesanan,total,pajak,total_akhir;
    printf("\n");
    printf("============================Selamat datang di BUBUM============================= \n\n");
    printf("                              -----=====-----\n\n");
    printf("                                PAKET MAKANAN \t\t\n\n");
    printf("                          -----=============-----\t\t\n");
    printf("\n");
    printf("\n---------------------------\n");
    printf("====Paket 1====           |\n");
	printf("nasi            1 (posi)  |\n");
	printf("chiken fire     3 (potong)|\n");
	printf("french fries    1 (pcs)   |\n");
	printf("lemon tea       1 (gelas) |\n");
	printf("---------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>");
	printf("\n---------------------------\n");
    printf("====Paket 2====           |\n");
	printf("nasi            1 (posi)  |\n");
	printf("chiken original 3 (potong)|\n");
	printf("french fries    1 (pcs)   |\n");
	printf("Air mineral     1 (botol) |\n");
	printf("---------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>");
	printf("\n---------------------------\n");
    printf("====Paket 3====           |\n");
	printf("burger beef     1 (posi)  |\n");
	printf("chiken fire     3 (potong)|\n");
	printf("french fries    1 (pcs)   |\n");
	printf("milo            1 (gelas) |\n");
	printf("---------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>");
	printf("\n---------------------------\n");
	printf("====Paket 4====           |\n");
	printf("burger max      1 (posi)  |\n");
	printf("chiken fire     3 (potong)|\n");
	printf("french fries    1 (pcs)   |\n");
	printf("milo            1 (gelas) |\n");
	printf("---------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>");
	printf("\n---------------------------\n");
    printf("====Paket 5====           |\n");
	printf("burger max      1 (posi)  |\n");
	printf("chiken original 3 (potong)|\n");
	printf("french fries    1 (pcs)   |\n");
	printf("milo            1 (gelas) |\n");
	printf("---------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>");
	printf("\n---------------------------\n");
    printf("====Paket 6====           |\n");
	printf("burger beef     1 (posi)  |\n");
	printf("french fries    1 (pcs)   |\n");
	printf("milo            1 (gelas) |\n");
	printf("---------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>");
	printf("\n====================\n");
    printf("Silakan pilih paket menu yang ada :\n");
	printf("paket =");
    scanf("%d",&menu);
    printf("Banyaknya pesanan :");
    scanf("%d",&jumlah_pesanan);
    printf("\n");

    switch (menu){
           case 1 :
                printf("Paket 1 \n");
                printf("Nasi :%d",nasi);
                printf("\nChiken Fire  :%d",chiken_fire);
                printf("\nFrench Fries  :%d",french_fries);
                printf("\nLemon Tea :%d",lemon_tea);
                printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
                total=(nasi+chiken_fire+french_fries+lemon_tea)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\nTotal, paket 1 * %d :%d",jumlah_pesanan,total);
                printf("\nPajak 10 persen : %d",pajak);
                printf("\nJadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;
            case 2 :
                printf("Paket 2 \n");
                printf("Nasi :%d",nasi);
                printf("\nChiken Original :%d",chiken_original);
                printf("\nFrench Fries :%d",french_fries);
                printf("\nAir Mineral :%d",Air_mineral);
                printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
                total=(nasi+chiken_original+french_fries+Air_mineral)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\nTotal, paket 2 * %d :%d",jumlah_pesanan,total);
                printf("\nPajak 10 persen : %d",pajak);
                printf("\nJadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;
            case 3 :
                printf("Paket 3 \n");
                printf("Burger Beef :%d",burger_beef);
                printf("\nChiken Fire  :%d",chiken_fire);
                printf("\nFrench Fries :%d",french_fries);
                printf("\nMilo :%d",milo);
                printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
                total=(burger_beef+chiken_fire+french_fries+milo)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\nTotal, paket 3 * %d :%d",jumlah_pesanan,total);
                printf("\nPajak 10 persen : %d",pajak);
                printf("\nJadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;
            case 4 :
                printf("Paket 4 \n");
                printf("Burger Max :%d",burger_max);
                printf("\nChiken Fire  :%d",chiken_fire);
                printf("\nFrench Fries :%d",french_fries);
                printf("\nMilo :%d",milo);
                printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
                total=(burger_max+chiken_fire+french_fries+milo)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\nTotal, paket 4 * %d :%d",jumlah_pesanan,total);
                printf("\nPajak 10 persen : %d",pajak);
                printf("\nJadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;
            case 5 :
                printf("Paket 5 \n");
                printf("Burger Max :%d",burger_max);
                printf("\nChiken Original  :%d",chiken_original);
                printf("\nFrench Fries :%d",french_fries);
                printf("\nMilo :%d",milo);
                printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
                total=(burger_max+chiken_original+french_fries+milo)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\nTotal, paket 5 * %d :%d",jumlah_pesanan,total);
                printf("\nPajak 10 persen : %d",pajak);
                printf("\nJadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;
            case 6 :
                printf("Paket 6 \n");
                printf("Burger Beef :%d",burger_beef);
                printf("\nFrench Fries :%d",french_fries);
                printf("\nMilo :%d",milo);
                printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
                total=(burger_beef+french_fries+milo)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\nTotal, paket 6 * %d :%d",jumlah_pesanan,total);
                printf("\nPajak 10 persen : %d",pajak);
                printf("\nJadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;
           default:

                   printf("Maaf, Paket yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
                   }
           system("pause");
           return 0;
}
