#include <stdio.h>


int bolme(int dizi[], int n) // Sorunun çözümü için fonksiyon oluþturulur. "n" dizinin boyutunu temsil eder
{
    int toplam = 0; //  Deðiþkenler tanýmlanýr
    int i,j;

    // Dizinin toplamý hesaplanýr
    for (i = 0; i < n; i++)
        toplam += dizi[i];

    // Toplam tek sayý ise ikiye bölünemez bu yüzden 0 döndürülür
    if (toplam % 2 != 0)
        return 0;

    // Ýkinci alt kümenin toplamý, dizinin toplamýnýn yarýsýna eþit olmalýdýr
    int altkumetop = toplam / 2;

    // "dp[i][j]" : i. elemana kadar olan alt küme elemanlarýndan toplamý "j" olan alt kümelerin olup olmadýðýný tutar
    int dp[n+1][altkumetop+1];

    // Boþ alt kümeler, her zaman "0" toplama eþittir
    for (i = 0; i <= n; i++)
        dp[i][0] = 1;

    // Boþ alt küme olmadan alt küme toplamý "0" olamaz
    for (i = 1; i <= altkumetop; i++)
        dp[0][i] = 0;

    //Dinamik programlama tablosu kullanýlarak kümenin toplamý altkümeToplamý hedef deðerine eþit olan bir altkümesi olup olmadýðýný kontrol edilir
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= altkumetop; j++) {
            if (j < dizi[i-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-dizi[i-1]];
        }
    }

    // Ýkinci alt kümenin toplamý, dizinin toplamýnýn yarýsýna eþit olmalýdýr
    if (dp[n][altkumetop] == 1)
        return 1;
   
    else
        return 0;
}

int main()
{
    int n,i,s; //Deðiþkenler atanýr 
    
	printf("Dizinin boyutunu giriniz: "); //Kullanýcýdan dizinin boyutunu girmesi istenir
    scanf("%d", &n);

    if (n <= 0) { // Eðer kullanýcý pozitif olmayan tam sayý girerse uyarýlýr 
        printf("\n\n");
        printf("Lutfen pozitif tam sayi girin!!!\n\n"); 
} 
else{

    int dizi[n]; // Dizi deðiþkeni atanýr 

    printf("Dizinin elemanlarini giriniz: "); //Kullanýcýdan dizinin elemanlarýný girmesi istenir

    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
       
    }
    int i; // "i" deðiþkeni for döngüsünde kullanýldýðý için tekrar atanýr
    
     if (dizi[i] <= 0) { // Eðer kullanýcý pozitif olmayan tam sayý girerse uyarýlýr
            printf("\n\n");
            printf("Lutfen pozitif tam sayi girin!!! \n\n");}
    else{ // Eðer doðru sayý girerse iþlem devam eder
	
    
    if (bolme(dizi,n) == 1) // oluþturulan fonksiyon çaðýrýlýr 
        
		printf("Dizi toplamlari esit iki altkumeye bolunebilir \n\n"); // Eðer dizi toplamlarý eþit iki altkümeye bölünebiliyorsa bu yazý ekrana yazdýrýlýr
   
    else
        printf("Dizi toplamlari esit iki altkumeye bolunemez \n\n");// Eðer dizi toplamlarý eþit iki altkümeye bölünemiyorsa bu yazý ekrana yazdýrýlýr
    }
    }
	
	printf("ISIM: TAHA YASIN\n");
	printf("SOYISIM: CICEK\n");
	printf("OGRENCI NO: 1220505012\n");
    printf("PROGRAMIN YAPTIGI ISLEM: Diziyi toplamlarý esit iki altkumeye bolunup bolunemeyecegini bulmak ");
	
	return 0;
}
