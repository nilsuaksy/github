#include <stdio.h>

int main() {
    char name[20];
    int secim;

    printf("Aksoy Ayakabı Mağazasına hoşgeldiniz!\n");
    printf("Lütfen bizimle adınızı paylaşabilir misiniz?");
    scanf("%s", name);

    printf("Merhaba %s! \n", name);
    for (;;) {
        printf("Kadın ayakkabıları için 1'e tıklayın\n");
        printf("Erkek ayakkabıları için 2'ye tıklayın");
        scanf("%d", &secim);

        if (secim == 1) {
            printf("*Kadın ayakkabıları menüsü* \n Çizmeler için C \n Botlar İçin B \n Klasik Ayakkabılar için D harfine basınız.");

            char tur;
            scanf(" %c", &tur);

            if (tur == 'C' || tur == 'c' || tur == 'B' || tur == 'b' || tur == 'D' || tur == 'd') {
                printf("Lütfen ayak numaranızı seçiniz (35,36,37,38,39,40,41): ");
                int ayakno;
                scanf("%d", &ayakno);

                if (ayakno == 35 || ayakno == 36 || ayakno == 37 || ayakno == 38 || ayakno == 39 || ayakno == 40 || ayakno == 41) {
                    if (tur == 'C' || tur == 'c') {
                        printf("Sayın %s Hanım, kadın bölümünde çizme reyonundan, ayak numarası %d olan ayakkabı seçiminiz kaydedilmiştir. Doğru ise 7’ye, yanlış ise 8’e basınız.", name, ayakno);
                    } else if (tur == 'B' || tur == 'b') {
                        printf("Sayın %s Hanım, kadın bölümünde bot reyonundan, ayak numarası %d olan ayakkabı seçiminiz kaydedilmiştir. Doğru ise 7’ye, yanlış ise 8’e basınız.", name, ayakno);
                    } else if (tur == 'D' || tur == 'd') {
                        printf("Sayın %s Hanım, kadın bölümünde klasik reyonundan, ayak numarası %d olan ayakkabı seçiminiz kaydedilmiştir. Doğru ise 7’ye, yanlış ise 8’e basınız.", name, ayakno);
                    } else {
                        printf("Geçersiz.");
                        return 0;
                    }

                    int sonuc;
                    scanf("%d", &sonuc);

                    if (sonuc == 7) {
                        printf("Hayırlı olsun Sayın %s hanım! İyi günler dileriz.\n", name);
                    } else if (sonuc == 8) {
                        printf("Başa dönülecek\n");
                    } else {
                        printf("Geçersiz seçim. Program sonlandırılıyor.\n");
                    }
                } else {
                    printf("Geçersiz ayak numarası. Başa dönülecek.\n");
                }
            } else {
                printf("Geçersiz.");
                return 0;
            }
        } else if (secim == 2) {
            printf("Erkek ayakkabıları menüsüne yönlendiriliyorsunuz... \n Çizmeler için C \n Botlar İçin B \n Klasik Ayakkabılar için D harfine basınız.");

            char tur2;
            scanf(" %c", &tur2);

            if (tur2 == 'C' || tur2 == 'c' || tur2 == 'B' || tur2 == 'b' || tur2 == 'D' || tur2 == 'd') {
                printf("Lütfen ayak numaranızı seçiniz (39,40,41,42,43,44,45,46): ");
                int ayakno2;
                scanf("%d", &ayakno2);

                if (ayakno2 == 39 || ayakno2 == 40 || ayakno2 == 41 || ayakno2 == 42 || ayakno2 == 43 || ayakno2 == 44 || ayakno2 == 45 || ayakno2 == 46 ) {
                    if (tur2 == 'C' || tur2 == 'c') {
                        printf("Sayın %s Bey, erkek bölümünde çizme reyonundan, ayak numarası %d olan ayakkabı seçiminiz kaydedilmiştir. Doğru ise 7’ye, yanlış ise 8’e basınız.", name, ayakno2);
                    } else if (tur2 == 'B' || tur2 == 'b') {
                        printf("Sayın %s Bey, erkek bölümünde bot reyonundan, ayak numarası %d olan ayakkabı seçiminiz kaydedilmiştir. Doğru ise 7’ye, yanlış ise 8’e basınız.", name, ayakno2);
                    } else if (tur2 == 'D' || tur2 == 'd') {
                        printf("Sayın %s Bey, erkek bölümünde klasik reyonundan, ayak numarası %d olan ayakkabı seçiminiz kaydedilmiştir. Doğru ise 7’ye, yanlış ise 8’e basınız.", name, ayakno2);
                    } else {
                        printf("Geçersiz.");
                        return 0;
                    }

                    int sonuc2;
                    scanf("%d", &sonuc2);

                    if (sonuc2 == 7) {
                        printf("Hayırlı olsun Sayın %s bey! İyi günler dileriz.\n", name);
                    } else if (sonuc2 == 8) {
                        printf("Başa dönülecek\n");
                    } else {
                        printf("Geçersiz seçim. Program sonlandırılıyor.\n");
                    }
                } else {
                    printf("Geçersiz ayak numarası. Başa dönülecek.\n");
                }
            } else {
                printf("Geçersiz.");
                return 0;
            }
        } else {
            printf("Geçersiz seçim.");
        }
}
    return 0;
}
