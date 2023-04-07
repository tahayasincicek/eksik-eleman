# eksik-eleman
Algoritmanın Amacı: 
Bu algoritmanın amacı, verilen bir tamsayı dizisinin her iki alt bölümünün birimlerinin toplamı eşit olacak şekilde bölünüp bölünemeyeceğini belirlemektir. Örneğin, bir kutu probleminde, bir kutuya özgü bir ağırlığa sahipken, çantaya konulacak ağırlık da verilir. Bu problemde, çantaya konulacak ağırlığın iki eşit parçaya bölünüp bölünemeyeceği kontrol edilir.


Algoritma Ne İçin Kullanılır: 
Bu içeriği, bir bölümü bölebilir olup olmadığını kontrol etmek için kullanılır. Bu tür bir sorun, birçok uygulama alanında ortaya çıkıyor. Örneğin, finansal kuruluşlar, belirli bir miktar para biriktirmek için para biriktirme hedeflerini karşılamak üzere nakit akışlarına bakabilir. Ayrıca veri madenciliği, makine öğrenmesi ve yapay zeka gibi alanlarda da bu tür bir sorunla karşılaşılabilir. Örneğin, bir veri kümesinin bölünebilir olup olmadığını kontrol etmek, veri kümesinin doğru şekilde öğrenilmesi ve analiz edilmesi için önemlidir. Ayrıca, bu dosyaları, tam sayıları bölme grupları gibi çeşitli problemlerde de kullanılabilir.
Benzer şekilde, verileri paralel olarak çalıştırması gereken yüksek çalıştırma maliyetlerini de bu şekilde kullanılabilir. Veriler iki eşit parçaya bölünerek ayrı ayrı işlenebilir, bu da işlem süreleri boyunca. Ayrıca, bu işlemi, bir işlemi bölmeleri ayırma hızının uygulanabileceği daha geniş bir alanda da kullanılabilir.


Algoritmanın Çalışma Şekl:  
Bu açıklamayı, dinamik programlama yaklaşımını kullanarak, verilen dizini iki eşit alt küme halinde bölünüp bölünemeyeceğini bulur.

İlk olarak, verilen dizin birimlerinin toplamını bulunur ve toplamın 2'ye tam olarak bölünebildiğinden emin olunur. Eğer 2’ye bölünemezse dizi toplamları eşit altkümelere bölünemez. Daha sonra, dinamik programlama ile alt kümelerin toplamlarının mümkün olup olmadığı kontrol edilir. Bu işlem, alt kümelerin toplamlarının hesaplanabileceği bir tablo hazırlanır. Bu tablo, bir satırdaki önceki alt kümelerin toplamlarını kullanarak, bir sonraki alt kümelerin toplamlarını hesaplar. Bu hesaplama, alt kümelerin toplamlarının hedef toplama eşit olup olmadığı kontrol edilerek yapılır.

Eğer hedef toplam, verilen dizin birimlerinin toplamının yarısı ise ve alt kümelerin toplamları eşit ise, bu durumdaki fonksiyon 1 değerini yöneten ve dizinin iki eşit alt kümelerde bölünebileceği açıklanabilir. Aksi takdirde, fonksiyon 0 değerini yöneten ve dizin iki eşit alt küme halinde bölünemeyeceği anlaşır
