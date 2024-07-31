#include <windows.h>
#define handle GetStdHandle(STD_OUTPUT_HANDLE)
#include <stdio.h>
#include <conio.h>

//=======================================================================
//                          PROTOTYPE                                   =
//=======================================================================

void gotoxy(int x, int y);
void setcolor(int text, int background);
void bingkai_awal();
void bingkai_judul();
void bingkai_menu();
void layar();
void layar2();
void hps_menu();
void clear(char a[],int x,int y);

//========================================================================
//                                   ARRAY WARNA                         =
//========================================================================
enum color{
   HITAM,
   BIRU_GELAP,
   HIJAU_GELAP,
   PINK_GELAP,
   MERAH_GELAP,
   UNGU_GELAP,
   KUNING_GELAP,
   PUTIH_GELAP,
   ABU_ABU,
   BIRU,
   HIJAU,
   CYAN,
   MERAH,
   UNGU,
   KUNING,
   PUTIH};

//============================================================================
//                                 WARNA & POSISI                            =
//============================================================================

void gotoxy(int x, int y)
{
    COORD posisi = {x, y};
    SetConsoleCursorPosition(handle, posisi);
}
void setcolor(int text, int background)
{
    SetConsoleTextAttribute(handle, background * 16 + text);
}

//===================================================================
//                           BINGKAI                                =
//===================================================================

void cetak()
{
    gotoxy(5,10);printf("%c",255);
}
void bingkai_awal(){
   setcolor(9,0);
	for(int a=1;a<=116;a++){
      gotoxy(a+1,1);printf("%c",219);Sleep(5);
      gotoxy(a+1,39);printf("%c",219);
   }
   for(int b=1;b<=38;b++){
      gotoxy(2,b+1);printf("%c",219);Sleep(5);
      gotoxy(3,b+1);printf("%c",219);
      gotoxy(116,b+1);printf("%c",219);
      gotoxy(117,b+1);printf("%c",219);
   }
}
void main()
{
    //cetak();
    bingkai_awal();
    getch();
}