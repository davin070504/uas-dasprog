#include<iostream>
using namespace std;

int main(){

   int pilihan, jml_barang, harga, total, bayar, diskon;
   string item;

   cout << "================================================================================" << endl;
   cout << "                                     TOKO PIPIK                                 " << endl;
   cout << "                           JL.NYALINDUNG-KP.PANCURAN TUJUH                      " << endl;
   cout << "================================================================================" << endl;
   cout << "================================================================================" << endl;
   cout << "                                    DAFTAR BELANJA                              " << endl << endl;

   cout << " 1. DJARUM SUPER 16      : RP. 18,500  " << "  11. SAMPOERNA KRETEK        : RP. 11,500 " << endl;
   cout << " 2. U MILD 16            : RP. 20,500  " << "  12. SURYA PRO               : RP. 19,500 " << endl;
   cout << " 3. MARLBORO MERAH       : RP. 28,000  " << "  13. MARLBORO FILTER BLACK   : RP. 27,000 " << endl;
   cout << " 4. MARLBORO MENTHOL     : RP. 25,500  " << "  14. SAMPOERNA MILD 16       : RP. 24,000 " << endl;
   cout << " 5. MAGNUM               : RP. 21,000  " << "  15. DUNHILL                 : RP. 30,700 " << endl;
   cout << " 6. LA LIGHT             : RP. 25,000  " << "  16. GUDANG GARAM FILTER     : RP. 20,000 " << endl;
   cout << " 7. DJI SAM SOE          : RP. 19,000  " << "  17. ENVIO KRETEK 12S        : RP.  9,400 " << endl;
   cout << " 8. ESSE CHANGE 20S      : RP. 31,500  " << "  18. ESSE MILD 20S           : RP. 29,000 " << endl;
   cout << " 9. CLAS MILD 16S        : RP. 21,500  " << "  19. DUNHILL FINE CUT 16S    : RP. 26,400 " << endl;
   cout << " 10.DJARUM COKLAT 12S    : RP. 20,000  " << "  20. DJARUM BLACK 16S        : RP. 26,500 " << endl;
   cout << "          =====================================================================          " << endl << endl;

   cout << " 21. MARGARIN BLEBAND    : RP.  9,000  " << "  31. MARGARIN BLUEBAND SACHET : RP.  6,500 " << endl;
   cout << " 22. MINYAK GORENG/KG    : RP. 12,000  " << "  32. BERAS                    : RP. 11,477 " << endl;
   cout << " 23. GULA PASIR          : RP. 14,662  " << "  33. GULA MERAH               : RP.  4,200 " << endl;
   cout << " 24. TEPUNG BERAS 250GR  : RP.  2,200  " << "  34. TEPUNG BERAS 500GR       : RP.  4,300 " << endl;
   cout << " 25. BAWANG MERAH/KG     : RP. 33,488  " << "  35. BAWANG PUTIH             : RP. 39,627 " << endl;
   cout << " 26. TELUR AYAM/KG       : RP. 20,046  " << "  36. BERAS KETAN HITAM        : RP.  6,500 " << endl;
   cout << " 27. BERAS KETAN PUTIH/KG: RP.  9,000  " << "  37. PERMEN KACA MATA         : RP. 12,000 " << endl;
   cout << " 28. SOSIS               : RP. 19,000  " << "  38. MIE INDOMIE/DUS          : RP. 102,000" << endl;
   cout << " 29. MIE SEDAP/DUS       : RP. 108,500 " << "  39. OREO                     : RP. 10,500 " << endl;
   cout << " 30. MENTHOS MINT        : RP.  3,700  " << "  40. SELESAI" << endl;
   cout << "          =====================================================================          " << endl << endl;

   do{
      cout << "MASUKKAN NO PILIHAN : ";
      cin >> pilihan;

      switch(pilihan){
        case 1 :
            item = "DJARUM SUPER 16";
            harga = 18500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 2 :
            item = "U MILD 16";
            harga = 20500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 3 :
            item = "MARLBORO MERAH";
            harga = 28000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 4 :
            item = "MARLBORO MENTHOL";
            harga = 25500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 5 :
            item = "MAGNUM";
            harga = 21000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 6 :
            item = "LA LIGHT";
            harga = 25000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 7 :
            item = "DJI SAM SOE";
            harga = 19000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 8 :
            item = "ESSE CHANGE 20S";
            harga = 31500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 9 :
            item = "CLAS MILD 16S";
            harga = 21500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 10 :
            item = "DJARUM COKLAT 12S";
            harga = 20000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 11 :
            item = "SAMPOERNA KRETEK";
            harga = 11500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 12 :
            item = "SURYA PRO";
            harga = 19500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 13 :
            item = "MARLBORO FILTER BLACK";
            harga = 27000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 14 :
            item = "SAMPOERNA MILD 16";
            harga = 24000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 15 :
            item = "DUNHILL";
            harga = 30700;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 16 :
            item = "GUDANG GARAM FILTER";
            harga = 20000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 17 :
            item = "ENVIO KRETEK 12S";
            harga = 9400;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 18 :
            item = "ESSE MILD 20S";
            harga = 29000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 19 :
            item = "DUNHILL FINE CUT 16S";
            harga = 26400;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 20 :
            item = "DJARUM BLACK 16S";
            harga = 26500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 21 :
            item = "MARGARIN BLEBAND";
            harga = 9000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 22 :
            item = "MINYAK GORENG/KG";
            harga = 12000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 23 :
            item = "GULA PASIR";
            harga = 14662;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 24 :
            item = "TEPUNG BERAS 250GR";
            harga = 2200;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 25 :
            item = "BAWANG MERAH/KG";
            harga = 33488;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 26 :
            item = "TELUR AYAM/KG";
            harga = 20046;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 27 :
            item = "TELUR AYAM/KG";
            harga = 20046;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 28 :
            item = "SOSIS";
            harga = 19000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 29 :
            item = "MIE SEDAP/DUS";
            harga = 108500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 30 :
            item = "MENTHOS MINT";
            harga = 3700;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 31 :
            item = "MARGARIN BLUEBAND SACHET";
            harga = 6500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 32 :
            item = "BERAS";
            harga = 11477;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 33 :
            item = "GULA MERAH";
            harga = 4200;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 34 :
            item = "TEPUNG BERAS 500GR";
            harga = 4300;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 35 :
            item = "BAWANG PUTIH";
            harga = 39627;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 36 :
            item = "BERAS KETAN HITAM";
            harga = 6500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 37 :
            item = "PERMEN KACA MATA";
            harga = 12000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 38 :
            item = "MIE INDOMIE/DUS";
            harga = 102000;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 39 :
            item = "OREO";
            harga = 10500;
            cout << "jumlah barang : ";
            cin >> jml_barang;
            total += harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            break;
        case 40 :
            cout << endl << endl;
            cout << "================================================================================" << endl;
            cout << "jumlah bayar : " << total << endl;

           if(total >= 200000){
               diskon = 0.06 * total;
           } else if(total >= 100000){
               diskon = 0.04 * total;
           } else if(total <= 50000){
               diskon = 0.02 * total;
           } else {
               diskon = 0;
           }
           cout << "Diskon      : " << diskon << endl;
           cout << "Total Bayar : " << total - diskon << endl;
           cout << "Bayar       : ";
           cin >> bayar;
           cout << "kembali     : " << (bayar - (total-diskon)) << endl << endl;
           break;
        default :
            cout << "Pilihan anda salah!" << endl << endl;
            break;
        }
     }while(pilihan != 40);
     cout << "Terima Kasih! " << endl;

}
