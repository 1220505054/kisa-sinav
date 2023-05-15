#include <stdio.h>

int binarySearch(int dizi[], int a, int b, int x)
{
	
	//dongu kullanarak 
    while (a <= b) {
    	
        int m = a + (b - a) / 2;

        // dizinin ortasindaki elemanin indeksi hesaplanir
        if (dizi[m] == x)
            return m;

        // aranan eleman ortadaki elemandan büyükse, sol yarisi yok sayilir ve arama islemi sag yarisinda devam eder
        if (dizi[m] < x)
            a = m + 1;

        // aranan eleman ortadaki elemandan küçükse, sag yarisi yok sayilir ve arama islemi sol yarisinda devam eder.
        else
            b = m - 1;
    }


    return -1;
}

int main()
{
	//dizi tanimlanir
    int dizi[] = { 4,8,3,84,47,76,9,24,68 };
    
    int n = sizeof(dizi) / sizeof(dizi[0]);
    //aranan degerimiz belirlenir
    int x = 8;
    
    int sonuc = binarySearch(dizi, 0, n - 1, x);
    
    
    if(sonuc == -1){
    	//eleman dizide bulunmazsa mesaj ekrana yazdirilir
        printf("Dizi içinde eleman bulunamadý");
    }
    else{
   	//Eger aranan eleman dizide bulunursa, fonksiyon geri döndürdügü indeks degeri ekrana yazdirilir
        printf("Eleman dizinin %d. indeksinde bulundu", sonuc);
    }
    return 0;
}

