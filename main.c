#include <stdio.h>


int bolme(int dizi[], int n) // Sorunun ��z�m� i�in fonksiyon olu�turulur. "n" dizinin boyutunu temsil eder
{
    int toplam = 0; //  De�i�kenler tan�mlan�r
    int i,j;

    // Dizinin toplam� hesaplan�r
    for (i = 0; i < n; i++)
        toplam += dizi[i];

    // Toplam tek say� ise ikiye b�l�nemez bu y�zden 0 d�nd�r�l�r
    if (toplam % 2 != 0)
        return 0;

    // �kinci alt k�menin toplam�, dizinin toplam�n�n yar�s�na e�it olmal�d�r
    int altkumetop = toplam / 2;

    // "dp[i][j]" : i. elemana kadar olan alt k�me elemanlar�ndan toplam� "j" olan alt k�melerin olup olmad���n� tutar
    int dp[n+1][altkumetop+1];

    // Bo� alt k�meler, her zaman "0" toplama e�ittir
    for (i = 0; i <= n; i++)
        dp[i][0] = 1;

    // Bo� alt k�me olmadan alt k�me toplam� "0" olamaz
    for (i = 1; i <= altkumetop; i++)
        dp[0][i] = 0;

    //Dinamik programlama tablosu kullan�larak k�menin toplam� altk�meToplam� hedef de�erine e�it olan bir altk�mesi olup olmad���n� kontrol edilir
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= altkumetop; j++) {
            if (j < dizi[i-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-dizi[i-1]];
        }
    }

    // �kinci alt k�menin toplam�, dizinin toplam�n�n yar�s�na e�it olmal�d�r
    if (dp[n][altkumetop] == 1)
        return 1;
   
    else
        return 0;
}

int main()
{
    int n,i,s; //De�i�kenler atan�r 
    
	printf("Dizinin boyutunu giriniz: "); //Kullan�c�dan dizinin boyutunu girmesi istenir
    scanf("%d", &n);

    if (n <= 0) { // E�er kullan�c� pozitif olmayan tam say� girerse uyar�l�r 
        printf("\n\n");
        printf("Lutfen pozitif tam sayi girin!!!\n\n"); 
} 
else{

    int dizi[n]; // Dizi de�i�keni atan�r 

    printf("Dizinin elemanlarini giriniz: "); //Kullan�c�dan dizinin elemanlar�n� girmesi istenir

    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
       
    }
    int i; // "i" de�i�keni for d�ng�s�nde kullan�ld��� i�in tekrar atan�r
    
     if (dizi[i] <= 0) { // E�er kullan�c� pozitif olmayan tam say� girerse uyar�l�r
            printf("\n\n");
            printf("Lutfen pozitif tam sayi girin!!! \n\n");}
    else{ // E�er do�ru say� girerse i�lem devam eder
	
    
    if (bolme(dizi,n) == 1) // olu�turulan fonksiyon �a��r�l�r 
        
		printf("Dizi toplamlari esit iki altkumeye bolunebilir \n\n"); // E�er dizi toplamlar� e�it iki altk�meye b�l�nebiliyorsa bu yaz� ekrana yazd�r�l�r
   
    else
        printf("Dizi toplamlari esit iki altkumeye bolunemez \n\n");// E�er dizi toplamlar� e�it iki altk�meye b�l�nemiyorsa bu yaz� ekrana yazd�r�l�r
    }
    }
	
	printf("ISIM: TAHA YASIN\n");
	printf("SOYISIM: CICEK\n");
	printf("OGRENCI NO: 1220505012\n");
    printf("PROGRAMIN YAPTIGI ISLEM: Diziyi toplamlar� esit iki altkumeye bolunup bolunemeyecegini bulmak ");
	
	return 0;
}
