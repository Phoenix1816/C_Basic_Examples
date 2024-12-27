#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10 //Dizinin boyutu

void shipDescriptions(const int a, const int b, const int s, const int p); //Gemi tanýmlamalarý ve miktarlarý
void showArray(const int*array, const int lenght);//2 boyutlu diziyi gösterecek.
void selection(int*array, const int); //Player gemilerini yerleþtiriyor
void selectionActive(int*, const int, int, int, int); //Player gemilerini yerleþtiriyor
void aiSelection(int*, const int);//Yapay zeka gemilerini yerleþtiriyor
void aiSelectionActive(int*, const int, int, int, int); //Yapay zeka gemilerinin yerleþtiriyor
void shoot_player(int *array1, int *array11, int *array2, int *array22, const int length);//Atýþlarýn iþlendiði komut
int shootControl(int*, const int*, const int length, const int sc);//Geminin patlayýp patlamadýðýný kontrol ediyor. Patlamýþsa 1 döndürüyor, patlamamýþsa 0

int main()
{
	srand(time (NULL)); //Rastgele sayý. (rand()%6)
	int o=0, length=0; //o = option(singleplayer or multiplayer)
	int ground1[LENGTH][LENGTH]={0}, ground2[LENGTH][LENGTH]={0};//ground1:1. Oyuncunun oyun tahtasý--ground2:2. Oyuncunun oyun tahtasý VEYA bilgisayarýn oyun tahtasý
	int ground1p[LENGTH][LENGTH]={0}, ground2p[LENGTH][LENGTH]={0};//Oyun baþladýðýnda(shoot fonksiyonu baþladýðýnda) seçilen yerleri gösterecek olan diziler. Bu diziler sadece göstermelik olacak.

	while(length < 5 || length > 10)
	{
		printf("Oyun alani buyuklugunu secin (min 5 max 10) : ");
		scanf("%d", &length);

		if(length < 5 && length > 10)
			printf("Lutfen min 5 max 10 bir deger girin : ");
	}

	printf("Bilgisayara Karsi = 1 |||| Coklu Oyuncu = 2 : ");
	scanf("%d", &o);

	if(o == 1)
	{
		printf("\n\n\nBILGISAYARA KARSI\n\n1-GEMILERINIZI YERLESTIRIN\n");
		aiSelection(ground1, length);
		selection(ground2, length);
	}
	else
	{
		printf("\n\n\nCOKLU OYUNCU\n\n----------------Player1 Gemi Yerlestir\n");
		selection(ground1, length);
		printf("\n\n\n\n\n\n--------------Player2 Gemi Yerlestir\n");
		selection(ground2, length);
	}

	shoot_player(ground1, ground1p, ground2, ground2p, length);

	return 0;
}

void shoot_player(int *array1, int *array11, int *array2, int *array22, const int length)
{
	int x=0, y=0, player=1, shooted1=45, shooted2=45;

	if(length > 8);
	else if(length > 5)
	{
		shooted1=18;
		shooted2=18;
	}
	else
	{
		shooted1=12;
		shooted2=12;
	}

	for(;;)
	{//FOR+
		if(player == 1)
		{
			printf("\nSira : Player1\n-----------\nPlayer2'nin tahtasi\n");
			showArray(array22, length);
		}
		else
		{
			printf("\nSira : Player2\n-----------\nPlayer1'in tahtasi\n");
			showArray(array11, length);
		}

		printf("\nPlayer%d , nereye atis yapmak istersiniz ? x,y : ", player);
		scanf("%d,%d", &x, &y);

		if(player == 1)
		{
			if(array2[y*length + x] != 0)
			{
				printf("\nGemi vuruldu. Gemi numarasi %d", array2[y*length + x]);
				array22[y*length + x] = array2[y*length + x];
				shooted1--;
				if(shootControl(array22,array2,length,array2[y*length + x]))
				{
					printf("\n\nGemi patladi!!!!!\n\n");
				}
				if(shooted1 == 0)
				{
					printf("PLAYER1 KAZANDI!!!");
					break;
				}
			}
			else
			{
				printf("\nKaravana (0)");
				array22[y*length + x] = 100;
			}
			printf("\nPlayer2'nin tahtasi");
			showArray(array22, length);
			printf("\n\n\n");
			player=2;
		}
		else
		{
			if(array1[y*length + x] != 0)
			{
				printf("\nGemi vuruldu. Gemi numarasi %d", array1[y*length + x]);
				array11[y*length + x] = array1[y*length + x];
				shooted2--;
				if(shootControl(array11,array1,length,array1[y*length + x]))
				{
					printf("\n\nGemi patladi!!!!!\n\n");
				}
				if(shooted2 == 0)
				{
					printf("PLAYER2 KAZANDI!!!");
					break;
				}
			}
			else
			{
				printf("\nKaravana (0)");
				array11[y*length + x] = 100;
			}
			printf("\nPlayer1'in tahtasi");
			showArray(array11, length);
			printf("\n\n\n");
			player=1;
		}
	}//FOR-
}

int shootControl(int *array, const int *array1, const int length, const int sc)
{
	int i=0, j=0, buyukluk=1;

	if(sc < 20)
		buyukluk=4;
	else if(sc < 40)
		buyukluk=2;

	for(i=0; i < length; i++)
	{
		for(j=0; j < length; j++)
		{
			if(array[i*length + j] == sc)
				buyukluk--;
			if(buyukluk == 0)
				break;
		}
		if(buyukluk==0)
			break;
	}

	if(buyukluk == 0)//Bu iþlem tüm gemileri açmak için kullanýlýyor. 5 boyutlu bir geminin 4 parçasý zarar görürse batmýþtýr
	{
		for(i=0; i < length; i++)
		{
			for(j=0; j < length; j++)
			{
				if(array1[i*length + j] == sc)
					array[i*length + j] = sc;
			}
		}
		return 1;//Gemi Patlamýþ
	}

	return 0;//Gemi patlamamýþ
}

void aiSelection(int *array, const int length)
{
	int a5=5, b3=7, s3=3, p1=5;//Ship types

	if(length > 8);
	else if(length > 5)
	{
		a5=2;
		b3=2;
		s3=2;
		p1=2;
	}
	else
	{
		a5=1;
		b3=2;
		s3=1;
		p1=2;
	}

	//aiSelectionActive(array, length, a5, 5, 1);//Bunlarý da koyarsa sýkýþýyor
	aiSelectionActive(array, length, b3, 3, 2);
	aiSelectionActive(array, length, s3, 3, 3);
	aiSelectionActive(array, length, p1, 1, 4);
	showArray(array, length);
}

void aiSelectionActive(int *array, const int length, int amount, int sl, int sc)
{

	srand(time (NULL));
	int x=0, y=0;//Cordinates
	int c=0, cnt=1, d=0;//counter, controller, direction

	for(;amount > 0; amount--)
	{

		cnt=1;

		printf("\n%d kod numarali gemiyi konumlandir (%d adet) x,y : ",sc, amount);
		while(cnt)
		{
			x = (rand()%length);
			y = (rand()%length);

			if(x < length && x >= 0 && y < length && y >= 0 && array[y*length + x] == 0)
				cnt = 0;
			else
				printf("\nKORDINAT GECERSIZ! Lutfen tekrar kordinat girin x,y : ");
		}

		cnt=1;
		printf("\nDuzlem secin (asagi 0, saga 1, asagi capraz sag 2, asagi capraz sol 3) : ");
		while(cnt)
		{
			d = (rand()%4);
			printf("%d\n", d);
			cnt=0;

			//0:V -- 1:H -- 2:U -- 3:d
			switch(d)
			{
				case 0:
					for(c=0; c < sl; c++)
						if(array[(y+c)*length + x] != 0 || (y+c) > length || (y+c) < 0)
						{
							printf("\nDUZLEM GECERSIZ! Tekrar deneyin : ");
							cnt=1;
							break;
						}

					if(cnt == 0)
						for(c=0; c < sl; c++)
							array[(y+c)*length + x] = sc;
				break;

				case 1:
					for(c=0; c < sl; c++)
						if(array[y*length + (x+c)] != 0 || (x+c) > length || (x+c) < 0)
						{
							printf("\nDUZLEM GECERSIZ! Tekrar deneyin : ");
							cnt=1;
							break;
						}

					if(cnt == 0)
						for(c=0; c < sl; c++)
							array[y*length + (x+c)] = sc;
				break;

				case 2:
					for(c=0; c < sl; c++)
						if(array[(y+c)*length + (x+c)] != 0 || (x+c) > length || (x+c) < 0 || (y+c) > length || (y+c) < 0)
						{
							printf("\nDUZLEM GECERSIZ! Tekrar deneyin : ");
							cnt=1;
							break;
						}

					if(cnt == 0)
						for(c=0; c < sl; c++)
							array[(y+c)*length + (x+c)] = sc;
				break;

				case 3:
					for(c=0; c < sl; c++)
						if(array[(y+c)*length + (x-c)] != 0 || (x-c) > length || (x-c) < 0 || (y+c) > length || (y+c) < 0)
						{
							printf("\nDUZLEM GECERSIZ! Tekrar deneyin : ");
							cnt=1;
							break;
						}

					if(cnt == 0)
						for(c=0; c < sl; c++)
							array[(y+c)*length + (x-c)] = sc;
				break;

				default:
					printf("\nDUZLEM GECERSIZ! Tekrar deneyin : ");
			}
		}
	}
}

void selection(int *array, const int length)
{
	int a5=3, b3=7, s3=3, p1=5;//Ship types

	if(length > 8);
	else if(length > 5)
	{
		a5=2;
		b3=2;
		s3=2;
		p1=2;
	}
	else
	{
		a5=1;
		b3=1;
		s3=1;
		p1=1;
	}

	shipDescriptions(a5,b3,s3,p1);
	selectionActive(array, length, a5, 5, 11);
	a5=0;

	shipDescriptions(a5,b3,s3,p1);
	selectionActive(array, length, b3, 3, 21);
	b3=0;

	shipDescriptions(a5,b3,s3,p1);
	selectionActive(array, length, s3, 3, 31);
	s3=0;

	shipDescriptions(a5,b3,s3,p1);
	selectionActive(array, length, p1, 1, 41);
	p1=0;

	showArray(array, length);
}

void selectionActive(int *array, const int length, int amount, int sl, int sc)//Array: Dizi -- Length: Dizinin uzunluðu -- amount: geminin sayýsý -- s1: geminin büyüklüðü -- sc: geminin sýrasý
{
	int x=0, y=0;//Cordinates
	char d=0;//Direction
	int c=0, cnt=1;//counter, controller

	for(;amount > 0; amount--)
	{//FOR+
		cnt=1;
		showArray(array, length);
		printf("\n%d kod numarali gemiyi konumlandir (%d adet) x,y : ", (sc/10), amount);
		while(cnt)
		{
			scanf("%d,%d", &x, &y);
			if(x < length && x >= 0 && y < length && y >= 0 && array[y*length + x] == 0)
				cnt = 0;
			else
				printf("\nKORDINAT GECERSIZ! Lutfen tekrar kordinat girin x,y : ");
		}

		cnt=1;
		printf("\nLutfen duzlem secin (YenidenKordinatGirmekIcin r)\n-----ASAGIYA a \n-----SAGA    y \n-----ASAGI SAGA CAPRAZ s \n-----ASAGI SOLA CAPRAZ l\n-----:");
		while(cnt)
		{//WHILE+
			d = getch();
			printf("%c\n", d);
			cnt=0;

			if(d=='r')
			{
				amount++;//döngü dönecek, gemi sayýsý koymuþ sayýlacaðýz fakat bu yeniden kordinat girmemiz için. Yani daha gemiyi koymadýk. Bu nedenden gemi eksilmesin diye miktarýný arttýrdýk.
				sc--;//Ýþlem iptal olmasýna raðmen ileride arttýralacaðý için eksiltiyoruz. Yani bir nevi iþlemleri geri almamýz lazým çünkü iþlem iptal edildi.
				break;//While döngüsünden çýk

			}

			switch(d)
			{//SWITCH+
				case 'a':
					for(c=0; c < sl; c++)
						if(array[(y+c)*length + x] != 0 || (y+c) > length || (y+c) < 0)
						{
							printf("\nDUZLEM GECERSIZ! Tekrar deneyin (YenidenKordinatGirmekIcin r): ");
							cnt=1;
							break;
						}

					if(cnt == 0)
						for(c=0; c < sl; c++)
							array[(y+c)*length + x] = sc;
				break;

				case 'y':
					for(c=0; c < sl; c++)
						if(array[y*length + (x+c)] != 0 || (x+c) > length || (x+c) < 0)
						{
							printf("\nDUZLEM GECERSIZ! Tekrar deneyin (YenidenKordinatGirmekIcin r): ");
							cnt=1;
							break;
						}

					if(cnt == 0)
						for(c=0; c < sl; c++)
							array[y*length + (x+c)] = sc;
				break;

				case 's':
					for(c=0; c < sl; c++)
						if(array[(y+c)*length + (x+c)] != 0 || (x+c) > length || (x+c) < 0 || (y+c) > length || (y+c) < 0)
						{
							printf("\nDUZLEM GECERSIZ! Tekrar deneyin (YenidenKordinatGirmekIcin r): ");
							cnt=1;
							break;
						}

					if(cnt == 0)
						for(c=0; c < sl; c++)
							array[(y+c)*length + (x+c)] = sc;
				break;

				case 'l':
					for(c=0; c < sl; c++)
						if(array[(y+c)*length + (x-c)] != 0 || (x-c) > length || (x-c) < 0 || (y+c) > length || (y+c) < 0)
						{
							printf("\nDUZLEM GECERSIZ! Tekrar deneyin (YenidenKordinatGirmekIcin r): ");
							cnt=1;
							break;
						}

					if(cnt == 0)
						for(c=0; c < sl; c++)
							array[(y+c)*length + (x-c)] = sc;
				break;

				default:
					printf("\nDUZLEM GECERSIZ! Tekrar deneyin (YenidenKordinatGirmekIcin r): ");
			}//SWITCH-
		}//WHILE-
		sc++;
	}//FOR-
}

void showArray(const int *array, const int length)//2 boyutlu, tüm dizileri yazdýrmak için bu fonksiyon kullanýlabilir.
{
	int i=0, j=0;
	printf("\n");
	printf("()");

	while(i++ < length)//Saðdan sola kordinat yazýmý
		printf("%d ",i-1);
	for(i=0; i < length; i++)
	{
		printf("\n%d ", i);
		for(j=0; j < length; j++)
		{
			if(array[i*length + j] == 0)
				printf("* ");
			else if(array[i*length + j] == 100)
				printf("0 ");
			else if(array[i*length + j] >= 11 && array[i*length + j] <= 19)
				printf("1 ");
			else if(array[i*length + j] >= 21 && array[i*length + j] <= 29)
				printf("2 ");
			else if(array[i*length + j] >= 31 && array[i*length + j] <= 39)
				printf("3 ");
			else //if(array[i*length + j] >= 41 && array[i*length + j] <= 49) // array[i*length + j] = array[i][j];
				printf("4 ");
		}
	}
}

void shipDescriptions(const int a, const int b, const int s, const int p)
{
	printf("%14s%11s%6s\n", "Gemi Tipleri", "Boyut", "Adet");
	printf("%3s%3s%7d\n", "1-Aircraft Carrier", "5", a);
	printf("%3s%9s%7d\n", "2-Battleship",       "3", b);
	printf("%3s%10s%7d\n","3-Submarine",        "3", s);
	printf("%3s%8s%7d\n", "4-Patrol Boat",      "1", p);
}
