#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h> // Стандартная библиотека DFPlayer'а.

#define HH 9
#define RC 10
#define FT 11
#define SN 12
#define NL 49 // Это нулевой пин для того, чтобы не использовать ненужные барабаны при игре.

void DL (int DP1, int DP2,int DP3, int gridPause)
{
    int drumP = 50; // "Нужня для того, чтобы не горели моторы барабанщика"

    digitalWrite(DP1, HIGH); // Мотор на барабане находится во включенном состоянии при значении HIGH
    digitalWrite(DP2, HIGH);
    digitalWrite(DP3, HIGH);

    delay(drumP);

    digitalWrite(DP1, LOW); // Мотор на барабане находится в выключенном состоянии при значении LOW
    digitalWrite(DP2, LOW);
    digitalWrite(DP3, LOW);

    delay(gridPause); // Этим значением задаётся BPM песни, но надо учитывать так же паузу 'drumP'
}

void werock() // Queen - We Will Rock You
{
    int gridPWR4 = 	690;
    int gridPWR8 = gridPWR4/2;
    for(int i = 1; i <= 22; i ++)
    {
        //1 доля//
        DL(FT, NL, NL, gridPWR8);
        //2 доля//
        DL(FT, NL, NL, gridPWR8);
        //3 доля//
        DL(SN, FT, NL, gridPWR8);
        //4 доля//
        DL(NL, NL, NL, gridPWR8);
    }
}

void nothing() // Metallica - Nothing Else Matter
{
    int gridPN4 = 870; //4 доли
    int gridPN8 = gridPN4/2;//8 долей
    int gridPN16 = gridPN4/4;//16 долей
    for(int i = 1; i <= 21; i ++)
    {
        //1 доля//
        DL(NL, NL, NL, gridPN8);
        //2 доля//
        DL(NL, NL, NL, gridPN8);
        //3 доля//
        DL(NL, NL, NL, gridPN8);
        //4 доля//
        DL(NL, NL, NL, gridPN8);
        //5 доля//
        DL(NL, NL, NL, gridPN8);
        //6 доля//
        DL(NL, NL, NL, gridPN8);
    }
    for(int i = 1; i <= 3; i ++)
    {
        //25-31 такт (начало)
        //1 доля//
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        //
        //
        //1 доля//
        DL(HH, FT, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, FT, NL, gridPN8);
        //
    }
    //25-30 такт (конец)
    //31-32 такт (начало)
    for(int i = 0; i <= 2; i ++)
    {
        //1 доля//
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
    }
    //31-32 такт (конец)
    //33 такт (начало)
    //1 доля//
    DL(FT, HH, NL, gridPN16);
    //2 доля//
    DL(FT, NL, NL, gridPN16);
    //3 доля//
    DL(HH, NL, NL, gridPN16);
    //4 доля//
    DL(FT, NL, NL, gridPN16);
    //5 доля//
    DL(HH, SN, NL, gridPN16);
    //6 доля//
    DL(HH, SN, NL, gridPN16);
    //7 доля//
    DL(HH, NL, NL, gridPN16);
    //8 доля//
    DL(FT, NL, NL, gridPN16);
    //9 доля//
    DL(FT, NL, NL, gridPN16);
    //33 такт (конец)
    //34-39 такт (начало)
    for(int i = 0; i <= 3; i ++)
    {
        //
        //1 доля//
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        //
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, SN, NL, gridPN8);
        //6 доля//
        DL(HH, SN, NL, gridPN8);
    }
    //34-39 такт (конец)
    //40 такт (начало)
    DL(FT, HH, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //40 такт (конец)
    //41 такт (начало)
    DL(FT, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, SN, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //41 такт (конец)
    //42 такт (начало)
    //1 доля//
    DL(FT, HH, NL, gridPN16);
    //2 доля//
    DL(FT, NL, NL, gridPN16);
    //3 доля//
    DL(HH, NL, NL, gridPN16);
    //4 доля//
    DL(FT, NL, NL, gridPN16);
    //5 доля//
    DL(HH, SN, NL, gridPN16);
    //6 доля//
    DL(HH, SN, NL, gridPN16);
    //7 доля//
    DL(HH, NL, NL, gridPN16);
    //8 доля//
    DL(FT, NL, NL, gridPN16);
    //9 доля//
    DL(FT, NL, NL, gridPN16);
    //42 такт (конец)
    //43-48 такт (начало)
    for(int i = 0; i <= 3; i ++)
    {
        //1 доля//
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        ///////////////////////////
        //1 доля//
        DL(HH, FT, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(FT, HH, NL, gridPN8);
    }
    //43-48 такт (конец)
    //49 такт (начало)
    //1 доля//
    DL(FT, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //49 такт (конец)
    //50 такт (начало)
    //1 доля//
    DL(FT, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //50 такт (конец)
    //51 такт (начало)
    //1 доля//
    DL(FT, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(FT, HH, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //51 такт (конец)
    //52-55 такт (начало)
    for(int i = 0; i <= 2; i ++)
    {
        //1 доля//
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(FT, HH, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(FT, RC, NL, gridPN8);
        //5 доля//
        DL(FT, HH, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        ///////////////////////////
        //1 доля//
        DL(RC, FT, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, RC, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(FT, HH, NL, gridPN8);
    }
    //52-55 такт (конец)
    //56 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, RC, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //56 такт (конец)
    //57 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(SN, HH, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(SN, FT, NL, gridPN8);
    //7 доля//
    DL(SN, RC, NL, gridPN8);
    //8 доля//
    DL(SN, NL, NL, gridPN8);
    //57 такт (конец)
    //58 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(SN, NL, NL, gridPN8);
    //3 доля//
    DL(SN, NL, NL, gridPN8);
    //4 доля//
    DL(SN, NL, NL, gridPN8);
    //5 доля//
    DL(FT, NL, NL, gridPN8);
    //6 доля//
    DL(SN, NL, NL, gridPN8);
    //7 доля//
    DL(SN, NL, NL, gridPN8);
    //8 доля//
    DL(SN, NL, NL, gridPN8);
    //9 доля//
    DL(SN, NL, NL, gridPN8);
    //10 доля//
    DL(SN, NL, NL, gridPN8);
    //58 такт (конец)
    //59-65 такт (начало)
    for(int i = 0; i <= 3; i ++)
    {
        //1 доля//
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(FT, HH, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        ///////////////////////////
        //1 доля//
        DL(HH, FT, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(FT, HH, NL, gridPN8);
    }
    //59-65 такт (конец)
    //66 такт (начало)
    //1 доля//
    DL(FT, RC, NL, gridPN8);
    //2 доля//
    DL(FT, HH, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //66 такт (конец)
    //67 такт (начало)
    //1 доля//
    DL(HH, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //67 такт (конец)
    //68-71 (начало)
    for(int i = 0; i <= 2; i ++)
    {
        //1 доля//
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(FT, HH, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(FT, RC, NL, gridPN8);
        //5 доля//
        DL(FT, HH, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        ///////////////////////////
        //1 доля//
        DL(RC, FT, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, RC, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(FT, HH, NL, gridPN8);
    }
    //68-71 (конец)
    //72 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, RC, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //72 такт (конец)
    //73 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(SN, HH, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(SN, FT, NL, gridPN8);
    //7 доля//
    DL(SN, RC, NL, gridPN8);
    //8 доля//
    DL(SN, NL, NL, gridPN8);
    //73 такт (конец)
    //74 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(SN, NL, NL, gridPN8);
    //3 доля//
    DL(SN, NL, NL, gridPN8);
    //4 доля//
    DL(SN, NL, NL, gridPN8);
    //5 доля//
    DL(FT, NL, NL, gridPN8);
    //6 доля//
    DL(SN, NL, NL, gridPN8);
    //7 доля//
    DL(SN, NL, NL, gridPN8);
    //8 доля//
    DL(SN, NL, NL, gridPN8);
    //9 доля//
    DL(SN, NL, NL, gridPN8);
    //10 доля//
    DL(SN, NL, NL, gridPN8);
    //74 такт (конец)
    //75 такт (начало)
    //1 доля//
    DL(FT, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //75 такт (конец)
    //76 такт (начало)
    //1 доля//
    DL(HH, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //76 такт (конец)
    //77 такт (начало)
    //1 доля//
    DL(FT, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //77 такт (конец)
    //78 такт (начало)
    //1 доля//
    DL(HH, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //78 такт (конец)
    //79 такт (начало)
    //1 доля//
    DL(FT, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //79 такт (конец)
    //80 такт (начало)
    //1 доля//
    DL(HH, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //80 такт (конец)
    //81 такт (начало)
    //1 доля//
    DL(FT, RC, NL, gridPN16);
    //2 доля//
    DL(HH, NL, NL, gridPN16);
    //3 доля//
    DL(HH, NL, NL, gridPN16);
    //4 доля//
    DL(HH, SN, NL, gridPN16);
    //5 доля//
    DL(FT, NL, NL, gridPN16);
    //6 доля//
    DL(HH, FT, NL, gridPN16);
    //7 доля//
    DL(HH, NL, NL, gridPN16);
    //8 доля//
    DL(HH, FT, NL, gridPN16);
    //9 доля//
    DL(HH, FT, NL, gridPN16);
    //81 такт (конец)
    //82 такт (начало)
    //1 доля//
    DL(FT, RC, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(FT, NL, NL, gridPN8);
    //6 доля//
    DL(HH, FT, NL, gridPN8);
    //7 доля//
    DL(HH, NL, NL, gridPN8);
    //8 доля//
    DL(HH, FT, NL, gridPN8);
    //82 такт (конец)
    //83 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //83 такт (конец)
    //84 такт (начало)
    //1 доля//
    DL(HH, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(FT, NL, NL, gridPN8);
    //6 доля//
    DL(SN, NL, NL, gridPN8);
    //84 такт (конец)
    //85 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //85 такт (конец)
    //86 такт (начало)
    //1 доля//
    DL(HH, RC, NL, gridPN16);
    //2 доля//
    DL(HH, NL, NL, gridPN16);
    //3 доля//
    DL(HH, NL, NL, gridPN16);
    //4 доля//
    DL(HH, SN, NL, gridPN16);
    //5 доля//
    DL(HH, NL, NL, gridPN16);
    //6 доля//
    DL(HH, FT, NL, gridPN16);
    //7 доля//
    DL(HH, NL, NL, gridPN16);
    //8 доля//
    DL(SN, NL, NL, gridPN16);
    //9 доля//
    DL(HH, NL, NL, gridPN16);
    //86 такт (конец)
    //87 такт (начало)
    //1 доля//
    DL(HH, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(FT, HH, NL, gridPN8);
    //87 такт (конец)
    //88 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //88 такт (конец)
    //89 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, SN, NL, gridPN8);
    //89 такт (конец)
    //90 такт (начало)
    //1 доля//
    DL(HH, SN, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(SN, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN16);
    //5 доля//
    DL(SN, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //7 доля//
    DL(FT, NL, NL, gridPN16);
    //8 доля//
    DL(FT, NL, NL, gridPN16);
    //9 доля//
    DL(FT, NL, NL, gridPN16);
    //10 доля//
    DL(FT, NL, NL, gridPN16);
    //90 такт (конец)
    //91-96 такт (начало)
    for(int i = 0; i < 3; i ++)
    {
        //1 доля//
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        //
        //
        //1 доля//
        DL(HH, FT, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        //
    }
    //91-96 такт (конец)
    //97 такт (начало)
    //1 доля//
    DL(HH, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, FT, NL, gridPN8);
    //97 такт (конец)
    //98 такт (начало)
    //1 доля//
    DL(HH, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, SN, NL, gridPN8);
    //6 доля//
    DL(HH, SN, NL, gridPN8);
    //98 такт (конец)
    //99 такт (начало)
    DL(HH, NL, NL, gridPN16);
    //2 доля//
    DL(SN, NL, NL, gridPN16);
    //3 доля//
    DL(FT, NL, NL, gridPN16);
    //4 доля//
    DL(HH, NL, NL, gridPN16);
    //5 доля//
    DL(FT, NL, NL, gridPN16);
    //6 доля//
    DL(HH, NL, NL, gridPN16);
    //7 доля//
    DL(FT, NL, NL, gridPN16);
    //8 доля//
    DL(FT, NL, NL, gridPN16);
    //9 доля//
    DL(FT, NL, NL, gridPN16);
    //10 доля//
    DL(FT, NL, NL, gridPN16);
    //11 доля//
    DL(FT, NL, NL, gridPN16);
    //12 доля//
    DL(FT, NL, NL, gridPN16);
    //99 такт (конец)
    //100-106 такт (начало)
    for(int i = 0; i < 3; i ++)
    {
        //1 доля//
        DL(FT, RC, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        //
        //
        //1 доля//
        DL(HH, FT, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, SN, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        //
    }
    //100-106 такт (конец)
    //107 такт (начало)
    //1 доля//
    DL(HH, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //107 такт (конец)
    //108 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(FT, RC, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //108 такт (конец)
    //109 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, FT, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, FT, NL, gridPN8);
    //5 доля//
    DL(HH, FT, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //109 такт
    //110-112 такт (начало)
    for(int i = 0; i < 2; i ++)
    {
        //1 доля//
        DL(RC, FT, NL, gridPN8);
        //2 доля//
        DL(HH, FT, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(HH, FT, NL, gridPN8);
        //5 доля//
        DL(HH, FT, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
        //
        //1 доля//
        DL(RC, FT, NL, gridPN8);
        //2 доля//
        DL(HH, NL, NL, gridPN8);
        //3 доля//
        DL(HH, NL, NL, gridPN8);
        //4 доля//
        DL(FT, RC, NL, gridPN8);
        //5 доля//
        DL(HH, NL, NL, gridPN8);
        //6 доля//
        DL(HH, NL, NL, gridPN8);
    }
    //109-112 такт (конец)
    //113 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(FT, RC, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //113 такт (конец)
    //114 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, FT, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, FT, NL, gridPN8);
    //5 доля//
    DL(HH, FT, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //114 такт (конец)
    //115 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(FT, RC, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //115 такт (конец)
    //116 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, FT, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, FT, NL, gridPN8);
    //5 доля//
    DL(HH, FT, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //116 такт (конец)
    //117 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN4);
    //2 доля//
    DL(HH, FT, NL, gridPN4);
    //3 доля//
    DL(HH, NL, NL, gridPN4);
    //117 такт (конец)
    //118 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, FT, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(SN, NL, NL, gridPN8);
    //5 доля//
    DL(SN, NL, NL, gridPN8);
    //6 доля//
    DL(SN, NL, NL, gridPN8);
    //118 такт (конец)
    //119 такт (начало)
    DL(FT, SN, NL, gridPN16);
    //2 доля//
    DL(FT, SN, NL, gridPN16);
    //3 доля//
    DL(FT, SN, NL, gridPN16);
    //4 доля//
    DL(FT, SN, NL, gridPN16);
    //5 доля//
    DL(FT, SN, NL, gridPN16);
    //6 доля//
    DL(FT, SN, NL, gridPN16);
    //7 доля//
    DL(FT, SN, NL, gridPN16);
    //8 доля//
    DL(FT, SN, NL, gridPN16);
    //9 доля//
    DL(FT, SN, NL, gridPN16);
    //10 доля//
    DL(FT, SN, NL, gridPN16);
    //11 доля//
    DL(FT, SN, NL, gridPN16);
    //12 доля//
    DL(FT, SN, NL, gridPN16);
    //119 такт (конец)
    //120 такт (начало)
    //1 доля//
    DL(HH, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(HH, SN, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //120 такт (конец)
    //121 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(SN, HH, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(SN, FT, NL, gridPN8);
    //7 доля//
    DL(SN, RC, NL, gridPN8);
    //8 доля//
    DL(SN, NL, NL, gridPN8);
    //121 такт (конец)
    //122 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(SN, RC, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(SN, HH, NL, gridPN8);
    //122 такт (конец)
    //123 такт (начало)
    //1 доля//
    DL(SN, HH, NL, gridPN16);
    //2 доля//
    DL(HH, NL, NL, gridPN16);
    //3 доля//
    DL(FT, NL, NL, gridPN16);
    //4 доля//
    DL(SN, HH, NL, gridPN16);
    //5 доля//
    DL(SN, HH, NL, gridPN16);
    //6 доля//
    DL(HH, NL, NL, gridPN16);
    //7 доля//
    DL(SN, NL, NL, gridPN16);
    //8 доля//
    DL(FT, NL, NL, gridPN16);
    //9 такт//
    DL(FT, NL, NL, gridPN16);
    //123 такт (конец)
    //124 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(SN, RC, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(SN, HH, NL, gridPN8);
    //124 такт (конец)
    //125 такт (начало)
    //1 доля//
    DL(SN, FT, NL, gridPN8);
    //2 доля//
    DL(FT, NL, NL, gridPN8);
    //3 доля//
    DL(SN, NL, NL, gridPN8);
    //4 доля//
    DL(SN, HH, NL, gridPN8);
    //5 доля//
    DL(SN, NL, NL, gridPN8);
    //6 доля//
    DL(FT, NL, NL, gridPN8);
    //7 доля//
    DL(SN, NL, NL, gridPN8);
    //8 доля//
    DL(FT, NL, NL, gridPN8);
    //125 такт (конец)
    //126 такт (начало)
    //1 доля//
    DL(RC, FT, NL, gridPN8);
    //2 доля//
    DL(HH, NL, NL, gridPN8);
    //3 доля//
    DL(HH, NL, NL, gridPN8);
    //4 доля//
    DL(FT, RC, NL, gridPN8);
    //5 доля//
    DL(HH, NL, NL, gridPN8);
    //6 доля//
    DL(HH, NL, NL, gridPN8);
    //126 такт (конец)
}

void seven() // The White Stripes - Seven Nation Army
{
    int gridPS4 = 435;
    int gridPS8 = gridPS4/2;
    for(int i = 0; i <= 4; i ++)
    {
        //1-4 такт (начало)
        //1 доля//
        DL(NL, NL, NL, gridPS4);
        //2 доля//
        DL(NL, NL, NL, gridPS4);
        //3 доля//
        DL(NL, NL, NL, gridPS4);
        //4 доля//
        DL(NL, NL, NL, gridPS4);
        //1-4 такт (конец)
    }
    for(int i = 1; i <= 7; i ++)
    {
        //5-11 такт (начало)
        //1 доля//
        DL(FT, NL, NL, gridPS4);
        //2 доля//
        DL(FT, NL, NL, gridPS4);
        //3 доля//
        DL(FT, NL, NL, gridPS4);
        //4 доля//
        DL(FT, NL, NL, gridPS4);
        //5-11 такт (конец)
    }
    //12 такт (начало)
    //1 доля//
    DL(FT, NL, NL, gridPS4);
    //2 доля//
    DL(FT, NL, NL, gridPS4);
    //3 доля//
    DL(FT, NL, NL, gridPS4);
    //4 доля//
    DL(FT, NL, NL, gridPS4);
    //12 такт (конец)
    //13-20 такт (начало)
    for(int i = 1; i <=8; i ++)
    {
        //1 доля//
        DL(FT, NL, NL, gridPS4);
        //2 доля//
        DL(SN, NL, NL, gridPS4);
        //3 доля//
        DL(FT, NL, NL, gridPS4);
        //4 доля//
        DL(SN, NL, NL, gridPS4);
    }
    for(int i = 1; i <=2; i ++)
    {
        //21-22
        //1 доля//
        DL(SN, NL, NL, gridPS8);
        //2 доля//
        DL(FT, NL, NL, gridPS8);
        //3 доля//
        DL(SN, NL, NL, gridPS8);
        //4 доля//
        DL(FT, NL, NL, gridPS8);
        //5 доля//
        DL(SN, NL, NL, gridPS8);
        //6 доля//
        DL(FT, NL, NL, gridPS8);
        //7 доля//
        DL(SN, NL, NL, gridPS8);
        //8 доля//
        DL(FT, NL, NL, gridPS8);
    }
    //21-22 такт (конец)
    for (int i = 1; i <= 2; i ++)
    {
        //23-30 такт (начало)
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS4);
        //////////////////////////////
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS4);
        //////////////////////////////
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS8);
        //5 доля//
        DL(RC, FT, NL, gridPS8);
        /////////////////////////////
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS8);
    }
    //23-30 такт (конец)
    //31-32 такт (начало)
    for(int i = 1; i <=2; i ++)
    {
        //1 доля//
        DL(SN, NL, NL, gridPS8);
        //2 доля//
        DL(FT, NL, NL, gridPS8);
        //3 доля//
        DL(SN, NL, NL, gridPS8);
        //4 доля//
        DL(FT, NL, NL, gridPS8);
        //5 доля//
        DL(SN, NL, NL, gridPS8);
        //6 доля//
        DL(FT, NL, NL, gridPS8);
        //7 доля//
        DL(SN, NL, NL, gridPS8);
        //8 доля//
        DL(FT, NL, NL, gridPS8);
    }
    //32-33 такт (конец)
    //33-46 такт (начало)
    for(int i = 1; i <= 3; i ++)
    {
        //1 доля//
        DL(FT, NL, NL, gridPS4);
        //2 доля//
        DL(FT, NL, NL, gridPS4);
        //3 доля//
        DL(FT, NL, NL, gridPS4);
        //4 доля//
        DL(FT, NL, NL, gridPS4);
    }
    ///////////////////////////////
    //1 доля//
    DL(FT, NL, NL, gridPS4);
    //2 доля//
    DL(FT, NL, NL, gridPS4);
    //3 доля//
    DL(FT, NL, NL, gridPS4);
    //4 доля//
    DL(FT, NL, NL, gridPS4);
    for(int i = 1; i <=8; i ++)
    {
        DL(FT, NL, NL, gridPS4);
        //2 доля//
        DL(SN, NL, NL, gridPS4);
        //3 доля//
        DL(FT, NL, NL, gridPS4);
        //4 доля//
        DL(SN, NL, NL, gridPS4);
    }
    for(int i = 1; i <=2; i ++)
    {
        //1 доля//
        DL(SN, NL, NL, gridPS8);
        //2 доля//
        DL(FT, NL, NL, gridPS8);
        //3 доля//
        DL(SN, NL, NL, gridPS8);
        //4 доля//
        DL(FT, NL, NL, gridPS8);
        //5 доля//
        DL(SN, NL, NL, gridPS8);
        //6 доля//
        DL(FT, NL, NL, gridPS8);
        //7 доля//
        DL(SN, NL, NL, gridPS8);
        //8 доля//
        DL(FT, NL, NL, gridPS8);
    }
    //33-46 такт (конец)
    //47-62 такт (начало)
    for (int i = 1; i <= 4; i ++)
    {
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS4);
        //////////////////////////////
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS4);
        //////////////////////////////
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS8);
        //5 доля//
        DL(RC, FT, NL, gridPS8);
        /////////////////////////////
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS4);
    }
    //47-62 такт (конец)
    //63-64 такт (начало)
    for(int i = 1; i <=2; i ++)
    {
        //1 доля//
        DL(SN, NL, NL, gridPS8);
        //2 доля//
        DL(FT, NL, NL, gridPS8);
        //3 доля//
        DL(SN, NL, NL, gridPS8);
        //4 доля//
        DL(FT, NL, NL, gridPS8);
        //5 доля//
        DL(SN, NL, NL, gridPS8);
        //6 доля//
        DL(FT, NL, NL, gridPS8);
        //7 доля//
        DL(SN, NL, NL, gridPS8);
        //8 доля//
        DL(FT, NL, NL, gridPS8);
    }
    //63-64 такт (конец)
    //65-82 такт (начало)
    for(int i = 1; i <= 7; i ++)
    {
        //1 доля//
        DL(FT, NL, NL, gridPS4);
        //2 доля//
        DL(FT, NL, NL, gridPS4);
        //3 доля//
        DL(FT, NL, NL, gridPS4);
        //4 доля//
        DL(FT, NL, NL, gridPS4);
    }
    //1 доля//
    DL(FT, NL, NL, gridPS4);
    //2 доля//
    DL(FT, NL, NL, gridPS4);
    //3 доля//
    DL(FT, NL, NL, gridPS4);
    //4 доля//
    DL(FT, NL, NL, gridPS4);
    for(int i = 1; i <=8; i ++)
    {
        DL(FT, NL, NL, gridPS4);
        //2 доля//
        DL(SN, NL, NL, gridPS4);
        //3 доля//
        DL(FT, NL, NL, gridPS4);
        //4 доля//
        DL(SN, NL, NL, gridPS4);
    }
    for(int i = 1; i <=2; i ++)
    {
        //1 доля//
        DL(SN, NL, NL, gridPS8);
        //2 доля//
        DL(FT, NL, NL, gridPS8);
        //3 доля//
        DL(SN, NL, NL, gridPS8);
        //4 доля//
        DL(FT, NL, NL, gridPS8);
        //5 доля//
        DL(SN, NL, NL, gridPS8);
        //6 доля//
        DL(FT, NL, NL, gridPS8);
        //7 доля//
        DL(SN, NL, NL, gridPS8);
        //8 доля//
        DL(FT, NL, NL, gridPS8);
    }
    //65-82 такт (конец)
    //83-90 такт (начало)
    for (int i = 1; i <= 2; i ++)
    {
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS4);
        //////////////////////////////
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS4);
        //////////////////////////////
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS8);
        //5 доля//
        DL(RC, FT, NL, gridPS8);
        /////////////////////////////
        //1 доля//
        DL(FT, RC, NL, gridPS4);
        //2 доля//
        DL(RC, SN, NL, gridPS4);
        //3 доля//
        DL(FT, RC, NL, gridPS4);
        //4 доля//
        DL(RC, SN, NL, gridPS4);
    }
    //83-90 такт (конец)
    //91-92 такт (начало)
    for(int i = 1; i <=2; i ++)
    {
        //1 доля//
        DL(SN, NL, NL, gridPS8);
        //2 доля//
        DL(FT, NL, NL, gridPS8);
        //3 доля//
        DL(SN, NL, NL, gridPS8);
        //4 доля//
        DL(FT, NL, NL, gridPS8);
        //5 доля//
        DL(SN, NL, NL, gridPS8);
        //6 доля//
        DL(FT, NL, NL, gridPS8);
        //7 доля//
        DL(SN, NL, NL, gridPS8);
        //8 доля//
        DL(FT, NL, NL, gridPS8);
    }
    //91-92 такт (конец)
    //93 такт (начало)
    //1 доля//
    DL(RC, RC, FT, gridPS4);
    //2 доля//
    DL(NL, NL, NL, gridPS4);
    //3 доля//
    DL(NL, NL, NL, gridPS4);
    //4 доля//
    DL(NL, NL, NL, gridPS4);
    //93 такт (конец)
    //94 такт (начало)
    //1 доля//
    DL(NL, NL, NL, gridPS4);
    //2 доля//
    DL(NL, NL, NL, gridPS4);
    //3 доля//
    DL(NL, NL, NL, gridPS4);
    //4 доля//
    DL(NL, NL, NL, gridPS4);
    //94 такт (конец)
}

void MegadetHLooking() // Megadeth - Lookin Down The Cross
{
    //121 bpm
    int gridML41 = 445;
    int gridML81 = gridML41/2;
    //122 bpm
    int gridML42 = 440;
    int gridML82 = gridML42/2;
    //123 bpm
    int gridML43 = 435;
    int gridML323 = gridML43/8;
    //125 bpm
    int gridML44 = 430;
    int gridML84 = gridML44/2;
    int gridML164 = gridML44/4;
    //127 bmp
    int gridML46 = 425;
    int gridML86 = gridML46/2;
    int gridML166 = gridML46/4;
    //130 bpм
    int gridML45 = 308;
    int gridML165 = gridML45/2;
    //1-8 (начало)
    for(int i = 1; i <= 8; i ++)
    {
        //1 доля//
        DL(NL, NL, NL, gridML41);
        //2 доля//
        DL(NL, NL, NL, gridML41);
        //3 доля//
        DL(NL, NL, NL, gridML41);
        //4 доля//
        DL(NL, NL, NL, gridML41);
    }
    //1-8 (конец)
    //9-24 (начало)
    for(int i = 1; i <= 16; i ++)
    {
        //1 доля//
        DL(RC, NL, NL, gridML81);
        //2 доля//
        DL(FT, NL, NL, gridML81);
        //3 доля//
        DL(NL, NL, NL, gridML81);
        //4 доля//
        DL(FT, NL, NL, gridML81);
        //5 доля//
        DL(NL, NL, NL, gridML81);
        //6 доля//
        DL(FT, NL, NL, gridML81);
        //7 доля//
        DL(NL, NL, NL, gridML81);
        //8 доля//
        DL(FT, NL, NL, gridML81);
    }
    //9-24 (конец)
    //25-32(начало)
    for(int i = 1; i <= 8; i ++)
    {
        //1 доля//
        DL(RC, SN, NL, gridML81);
        //2 доля//
        DL(FT, NL, NL, gridML81);
        //3 доля//
        DL(NL, NL, NL, gridML81);
        //4 доля//
        DL(FT, NL, NL, gridML81);
        //5 доля//
        DL(NL, NL, NL, gridML81);
        //6 доля//
        DL(FT, NL, NL, gridML81);
        //7 доля//
        DL(NL, NL, NL, gridML81);
        //8 доля//
        DL(FT, NL, NL, gridML81);
    }
    //25-32 (конец)
    //33-38 (начало)
    for(int i = 1; i <= 3; i ++)
    {
        //1 доля//
        DL(RC, SN, NL, gridML82);
        //2 доля//
        DL(FT, NL, NL, gridML82);
        //3 доля//
        DL(NL, NL, NL, gridML82);
        //4 доля//
        DL(FT, NL, NL, gridML82);
        //5 доля//
        DL(NL, NL, NL, gridML82);
        //6 доля//
        DL(FT, NL, NL, gridML82);
        //7 доля//
        DL(NL, NL, NL, gridML82);
        //8 доля//
        DL(FT, NL, NL, gridML82);
        ///////////////////////
        //1 доля//
        DL(RC, SN, FT, gridML82);
        //2 доля//
        DL(FT, NL, NL, gridML82);
        //3 доля//
        DL(NL, NL, NL, gridML82);
        //4 доля//
        DL(FT, NL, NL, gridML82);
        //5 доля//
        DL(NL, NL, NL, gridML82);
        //6 доля//
        DL(FT, NL, NL, gridML82);
        //7 доля//
        DL(NL, NL, NL, gridML82);
        //8 доля//
        DL(FT, NL, NL, gridML82);
    }
    //33-38 (конец)
    //39 (начало)
    //1 доля//
    DL(NL, NL, NL, gridML42);
    //2 доля//
    DL(NL, NL, NL, gridML42);
    //3 доля//
    DL(NL, NL, NL, gridML42);
    //4 доля//
    DL(NL, NL, NL, gridML42);
    //39 (конец)
    //40 (начало)
    //1 доля//
    DL(RC, SN, NL, gridML82);
    //2 доля//
    DL(FT, NL, NL, gridML82);
    //3 доля//
    DL(NL, NL, NL, gridML82);
    //4 доля//
    DL(FT, NL, NL, gridML82);
    //5 доля//
    DL(NL, NL, NL, gridML82);
    //6 доля//
    DL(FT, NL, NL, gridML82);
    //7 доля//
    DL(NL, NL, NL, gridML82);
    //8 доля//
    DL(FT, NL, NL, gridML82);
    //40 (конец)
    //41 (начало)
    //1 доля//
    DL(RC, SN, FT, gridML42);
    //2 доля//
    DL(HH, NL, NL, gridML42);
    //3 доля//
    DL(RC, SN, FT, gridML42);
    //4 доля//
    DL(RC, SN, FT, gridML42);
    //41 (конец)
    //42 (начало)
    //1 доля//
    DL(NL, NL, NL, gridML43);
    //2 доля//
    DL(NL, NL, NL, gridML43);
    //3 доля//
    DL(NL, NL, NL, gridML43);
    //4 доля//
    DL(NL, NL, NL, gridML43);
    //42 (конец)
    //43 (начало)
    //1 доля//
    DL(SN, FT, NL, gridML323);
    //2 доля//
    DL(SN, FT, NL, gridML323);
    //3 доля//
    DL(SN, FT, NL, gridML323);
    //4 доля//
    DL(SN, FT, NL, gridML323);
    //5 доля//
    DL(SN, FT, NL, gridML323);
    //6 доля//
    DL(SN, FT, NL, gridML323);
    //7 доля//
    DL(SN, FT, NL, gridML323);
    //8 доля//
    DL(SN, FT, NL, gridML323);
    //9 доля//
    DL(SN, FT, NL, gridML323);
    //10 доля//
    DL(SN, FT, NL, gridML323);
    //11 доля//
    DL(SN, FT, NL, gridML323);
    //12 доля//
    DL(SN, FT, NL, gridML323);
    //13 доля//
    DL(SN, FT, NL, gridML323);
    //14 доля//
    DL(SN, FT, NL, gridML323);
    //15 доля//
    DL(SN, FT, NL, gridML323);
    //16 доля//
    DL(SN, FT, NL, gridML323);
    //17 доля//
    DL(SN, FT, NL, gridML323);
    //18 доля//
    DL(SN, FT, NL, gridML323);
    //19 доля//
    DL(SN, FT, NL, gridML323);
    //20 доля//
    DL(SN, FT, NL, gridML323);
    //21 доля//
    DL(SN, FT, NL, gridML323);
    //22 доля//
    DL(SN, FT, NL, gridML323);
    //23 доля//
    DL(SN, FT, NL, gridML323);
    //24 доля//
    DL(SN, FT, NL, gridML323);
    //25 доля//
    DL(SN, FT, NL, gridML323);
    //26 доля//
    DL(SN, FT, NL, gridML323);
    //27 доля//
    DL(SN, FT, NL, gridML323);
    //28 доля//
    DL(SN, FT, NL, gridML323);
    //29 доля//
    DL(SN, FT, NL, gridML323);
    //30 доля//
    DL(SN, FT, NL, gridML323);
    //31 доля//
    DL(SN, FT, NL, gridML323);
    //32 доля//
    DL(SN, FT, NL, gridML323);
    //43 (конец)
    //44 (начало)
    //1 доля//
    DL(RC, FT, NL, gridML43);
    //2 доля//
    DL(NL, NL, NL, gridML43);
    //3 доля//
    DL(NL, NL, NL, gridML43);
    //4 доля//
    DL(NL, NL, NL, gridML43);
    //44 (конец)
    //45 (начало)
    //1 доля//
    DL(NL, NL, NL, gridML43);
    //2 доля//
    DL(NL, NL, NL, gridML43);
    //3 доля//
    DL(NL, NL, NL, gridML43);
    //4 доля//
    DL(NL, NL, NL, gridML43);
    //45 (конец)
    //46-47 (начало)
    //1 доля//
    DL(RC, FT, NL, gridML84);
    //2 доля//
    DL(NL, NL, NL, gridML84);
    //3 доля//
    DL(SN, HH, NL, gridML84);
    //4 доля//
    DL(NL, NL, NL, gridML84);
    //5 доля//
    DL(FT, HH, NL, gridML84);
    //6 доля//
    DL(NL, NL, NL, gridML84);
    //7 доля//
    DL(SN, HH, NL, gridML84);
    //8 доля//
    DL(FT, RC, NL, gridML84);
    /////////////////////////
    //1 доля//
    DL(HH, FT, NL, gridML84);
    //2 доля//
    DL(HH, NL, NL, gridML84);
    //3 доля//
    DL(SN, HH, NL, gridML84);
    //4 доля//
    DL(HH, NL, NL, gridML84);
    //5 доля//
    DL(HH, FT, NL, gridML84);
    //6 доля//
    DL(HH, NL, NL, gridML84);
    //7 доля//
    DL(SN, HH, NL, gridML84);
    //8 доля//
    DL(SN, NL, NL, gridML84);
    //46-47 (конец)
    //48-49 (начало)
    //1 доля//
    DL(RC, FT, NL, gridML84);
    //2 доля//
    DL(NL, NL, NL, gridML84);
    //3 доля//
    DL(SN, HH, NL, gridML84);
    //4 доля//
    DL(NL, NL, NL, gridML84);
    //5 доля//
    DL(FT, HH, NL, gridML84);
    //6 доля//
    DL(NL, NL, NL, gridML84);
    //7 доля//
    DL(SN, HH, NL, gridML84);
    //8 доля//
    DL(FT, RC, NL, gridML84);
    /////////////////////////
    //1 доля//
    DL(HH, FT, NL, gridML84);
    //2 доля//
    DL(HH, NL, NL, gridML84);
    //3 доля//
    DL(SN, HH, NL, gridML84);
    //4 доля//
    DL(HH, NL, NL, gridML84);
    //5 доля//
    DL(HH, FT, NL, gridML84);
    //6 доля//
    DL(HH, NL, NL, gridML84);
    //7 доля//
    DL(SN, HH, NL, gridML84);
    //8 доля//
    DL(FT, NL, NL, gridML84);
    //48-49 (конец)
    //50-51 (начало)
    //1 доля//
    DL(RC, FT, NL, gridML84);
    //2 доля//
    DL(NL, NL, NL, gridML84);
    //3 доля//
    DL(SN, HH, NL, gridML84);
    //4 доля//
    DL(NL, NL, NL, gridML84);
    //5 доля//
    DL(FT, HH, NL, gridML84);
    //6 доля//
    DL(NL, NL, NL, gridML84);
    //7 доля//
    DL(SN, HH, NL, gridML84);
    //8 доля//
    DL(FT, RC, NL, gridML84);
    /////////////////////////
    //1 доля//
    DL(HH, FT, NL, gridML84);
    //2 доля//
    DL(HH, NL, NL, gridML84);
    //3 доля//
    DL(SN, HH, NL, gridML84);
    //4 доля//
    DL(HH, NL, NL, gridML84);
    //5 доля//
    DL(HH, FT, NL, gridML84);
    //6 доля//
    DL(HH, NL, NL, gridML84);
    //7 доля//
    DL(SN, HH, NL, gridML84);
    //8 доля//
    DL(SN, NL, NL, gridML84);
    //50-51 (конец)
    //52-53 (начало)
    //1 доля//
    DL(RC, FT, NL, gridML84);
    //2 доля//
    DL(NL, NL, NL, gridML84);
    //3 доля//
    DL(SN, HH, NL, gridML84);
    //4 доля//
    DL(NL, NL, NL, gridML84);
    //5 доля//
    DL(FT, HH, NL, gridML84);
    //6 доля//
    DL(NL, NL, NL, gridML84);
    //7 доля//
    DL(SN, HH, NL, gridML84);
    //8 доля//
    DL(FT, RC, NL, gridML84);
    /////////////////////////
    //1 доля//
    DL(HH, FT, NL, gridML84);
    //2 доля//
    DL(HH, NL, NL, gridML84);
    //3 доля//
    DL(SN, HH, NL, gridML84);
    //4 доля//
    DL(HH, NL, NL, gridML84);
    //5 доля//
    DL(HH, FT, NL, gridML84);
    //6 доля//
    DL(HH, NL, NL, gridML84);
    //7 доля//
    DL(SN, HH, NL, gridML84);
    //8 доля//
    DL(SN, NL, NL, gridML84);
    //52-53 (конец)
    //54-57 (начало)
    for(int i = 1; i <= 4; i ++)
    {
        //1 доля//
        DL(RC, FT, NL, gridML164);
        //2 доля//
        DL(HH, FT, NL, gridML164);
        //3 доля//
        DL(FT, NL, NL, gridML164);
        //4 доля//
        DL(SN, HH, NL, gridML164);
        //5 доля//
        DL(RC, SN, NL, gridML164);;
        //6 доля//
        DL(NL, NL, NL, gridML164);
        //7 доля//
        DL(NL, NL, NL, gridML164);
        //8 доля//
        DL(RC, FT, NL, gridML164);
        //9 доля//
        DL(HH, FT, NL, gridML164);
        //10 доля//
        DL(FT, NL, NL, gridML164);
        //11 доля//
        DL(SN, HH, NL, gridML164);
        //12 доля//
        DL(RC, SN, NL, gridML164);;
        //13 доля//
        DL(HH, FT, NL, gridML164);
        //14 доля//
        DL(NL, NL, NL, gridML164);
        //15 доля//
        DL(NL, NL, NL, gridML164);
        //16 доля//
        DL(NL, NL, NL, gridML164);
    }
    //54-57 (конец)
    //58-60 (начало)
    for(int i = 1; i <= 3; i ++)
    {
        //1 доля//
        DL(RC, FT, NL, gridML84);
        //2 доля//
        DL(FT, NL, NL, gridML84);
        //3 доля//
        DL(SN, HH, NL, gridML84);
        //4 доля//
        DL(HH, NL, NL, gridML84);
        //5 доля//
        DL(HH, FT, NL, gridML84);
        //6 доля//
        DL(HH, NL, NL, gridML84);
        //7 доля//
        DL(SN, HH, NL, gridML84);
        //8 доля//
        DL(SN, HH, RC, gridML84);;
    }
    //58-60 (конец)
    //61-64 (начало)
    for(int i = 1; i <= 4; i ++)
    {
        //1 доля//
        DL(HH, FT, NL, gridML164);
        //2 доля//
        DL(NL, NL, NL, gridML164);
        //3 доля//
        DL(HH, NL, NL, gridML164);
        //4 доля//
        DL(FT, NL, NL, gridML164);
        //5 доля//
        DL(HH, SN, NL, gridML164);
        //6 доля//
        DL(NL, NL, NL, gridML164);
        //7 доля//
        DL(HH, FT, NL, gridML164);
        //8 доля//
        DL(FT, NL, NL, gridML164);
        //9 доля//
        DL(HH, FT, NL, gridML164);
        //10 доля//
        DL(NL, NL, NL, gridML164);
        //11 доля//
        DL(HH, NL, NL, gridML164);
        //12 доля//
        DL(FT, NL, NL, gridML164);
        //13 доля//
        DL(HH, SN, NL, gridML164);
        //14 доля//
        DL(NL, NL, NL, gridML164);
        //15 доля//
        DL(RC, FT, NL, gridML164);
        //16 доля//
        DL(NL, NL, NL, gridML164);
    }
    //1 доля//
    DL(RC, FT, NL, gridML164);
    //2 доля//
    DL(NL, NL, NL, gridML164);
    //3 доля//
    DL(FT, NL, NL, gridML164);
    //4 доля//
    DL(SN, HH, NL, gridML164);
    //5 доля//
    DL(HH, SN, NL, gridML164);
    //6 доля//
    DL(SN, HH, NL, gridML164);
    //7 доля//
    DL(NL, NL, NL, gridML164);
    //8 доля//
    DL(RC, FT, NL, gridML164);
    //9 доля//
    DL(HH, FT, NL, gridML164);
    //10 доля//
    DL(FT, NL, NL, gridML164);
    //11 доля//
    DL(SN, HH, NL, gridML164);
    //12 доля//
    DL(RC, SN, NL, gridML164);;
    //13 доля//
    DL(HH, FT, NL, gridML164);
    //14 доля//
    DL(NL, NL, NL, gridML164);
    //15 доля//
    DL(NL, NL, NL, gridML164);
    //16 доля//
    DL(NL, NL, NL, gridML164);
    //61-64 (конец)
    //65(начало)
    //1 доля//
    DL(RC, FT, NL, gridML164);
    //2 доля//
    DL(NL, NL, NL, gridML164);
    //3 доля//
    DL(FT, NL, NL, gridML164);
    //4 доля//
    DL(SN, HH, NL, gridML164);
    //5 доля//
    DL(HH, SN, NL, gridML164);
    //6 доля//
    DL(SN, NL, NL, gridML164);
    //7 доля//
    DL(NL, NL, NL, gridML164);
    //8 доля//
    DL(RC, FT, NL, gridML164);
    //9 доля//
    DL(HH, FT, NL, gridML164);
    //10 доля//
    DL(SN, HH, NL, gridML164);
    //11 доля//
    DL(SN, HH, NL, gridML164);
    //12 доля//
    DL(SN, NL, NL, gridML164);
    //13 доля//
    DL(HH, FT, NL, gridML164);
    //14 доля//
    DL(NL, NL, NL, gridML164);
    //15 доля//
    DL(NL, NL, NL, gridML164);
    //16 доля//
    DL(NL, NL, NL, gridML164);
    //65(конец)
    //66(конец)
    //1 доля//
    DL(NL, NL, NL, gridML164);
    //2 доля//
    DL(NL, NL, NL, gridML164);
    //3 доля//
    DL(NL, NL, NL, gridML164);
    //4 доля//
    DL(NL, NL, NL, gridML164);
    //5 доля//
    DL(NL, NL, NL, gridML164);
    //6 доля//
    DL(NL, NL, NL, gridML164);
    //7 доля//
    DL(NL, NL, NL, gridML164);
    //8 доля//
    DL(NL, NL, NL, gridML164);
    //9 доля//
    DL(FT, RC, NL, gridML164);
    //10 доля//
    DL(NL, NL, NL, gridML164);
    //11 доля//
    DL(SN, HH, NL, gridML164);
    //12 доля//
    DL(NL, NL, NL, gridML164);
    //13 доля//
    DL(HH, FT, NL, gridML164);
    //14 доля//
    DL(NL, NL, NL, gridML164);
    //15 доля//
    DL(HH, SN, NL, gridML164);
    //16 доля//
    DL(RC, FT, NL, gridML164);
    //66(конец)
    //67(начало)
    //1 доля//
    DL(HH, FT, NL, gridML164);
    //2 доля//
    DL(HH, NL, NL, gridML164);
    //3 доля//
    DL(HH, SN, NL, gridML164);
    //4 доля//
    DL(HH, NL, NL, gridML164);
    //5 доля//
    DL(HH, FT, NL, gridML164);
    //6 доля//
    DL(HH, NL, NL, gridML164);
    //7 доля//
    DL(HH, SN, NL, gridML164);
    //8 доля//
    DL(SN, NL, NL, gridML164);
    //9 доля//
    DL(SN, NL, NL, gridML164);
    //10 доля//
    DL(NL, NL, NL, gridML164);
    //11 доля//
    DL(NL, NL, NL, gridML164);
    //12 доля//
    DL(NL, NL, NL, gridML164);
    //13 доля//
    DL(NL, NL, NL, gridML164);
    //14 доля//
    DL(NL, NL, NL, gridML164);
    //15 доля//
    DL(NL, NL, NL, gridML164);
    //16 доля//
    DL(NL, NL, NL, gridML164);
    //67(конец)
    //68(начало)
    //1 доля//
    DL(RC, FT, NL, gridML164);
    //2 доля//
    DL(FT, NL, NL, gridML164);
    //3 доля//
    DL(SN, NL, NL, gridML164);
    //4 доля//
    DL(FT, NL, NL, gridML164);
    //5 доля//
    DL(HH, SN, NL, gridML164);
    //6 доля//
    DL(NL, NL, NL, gridML164);
    //7 доля//
    DL(HH, FT, NL, gridML164);
    //8 доля//
    DL(HH, FT, NL, gridML164);
    //9 доля//
    DL(HH, SN, NL, gridML164);
    //10 доля//
    DL(RC, FT, NL, gridML164);
    //11 доля//
    DL(NL, NL, NL, gridML164);
    //12 доля//
    DL(NL, NL, NL, gridML164);
    //13 доля//
    DL(NL, NL, NL, gridML164);
    //14 доля//
    DL(NL, NL, NL, gridML164);
    //15 доля//
    DL(NL, NL, NL, gridML164);
    //16 доля//
    DL(NL, NL, NL, gridML164);
    //68(конец)
    //69(начало)
    //1 доля//
    DL(HH, FT, NL, gridML84);
    //2 доля//
    DL(HH, NL, NL, gridML84);
    //3 доля//
    DL(HH, SN, NL, gridML84);
    //4 доля//
    DL(HH, NL, NL, gridML84);
    //5 доля//
    DL(HH, FT, NL, gridML84);
    //6 доля//
    DL(HH, NL, NL, gridML84);
    //7 доля//
    DL(HH, SN, NL, gridML84);
    //8 доля//
    DL(HH, NL, NL, gridML84);
    //69(конец)
    //70(начало)
    DL(RC, FT, NL, gridML164);
    //2 доля//
    DL(NL, NL, NL, gridML164);
    //3 доля//
    DL(HH, SN, NL, gridML164);
    //4 доля//
    DL(FT, NL, NL, gridML164);
    //5 доля//
    DL(FT, NL, NL, gridML164);
    //6 доля//
    DL(HH, SN, NL, gridML164);
    //7 доля//
    DL(FT, NL, NL, gridML164);
    //8 доля//
    DL(FT, NL, NL, gridML164);
    //9 доля//
    DL(HH, SN, NL, gridML164);
    //10 доля//
    DL(RC, FT, NL, gridML164);
    //11 доля//
    DL(NL, NL, NL, gridML164);
    //12 доля//
    DL(NL, NL, NL, gridML164);
    //13 доля//
    DL(NL, NL, NL, gridML164);
    //14 доля//
    DL(NL, NL, NL, gridML164);
    //15 доля//
    DL(NL, NL, NL, gridML164);
    //16 доля//
    DL(NL, NL, NL, gridML164);
    //70(конец)
    //71(начало)
    DL(HH, FT, NL, gridML164);
    //2 доля//
    DL(NL, NL, NL, gridML164);
    //3 доля//
    DL(HH, NL, NL, gridML164);
    //4 доля//
    DL(NL, NL, NL, gridML164);
    //5 доля//
    DL(HH, SN, NL, gridML164);
    //6 доля//
    DL(NL, NL, NL, gridML164);
    //7 доля//
    DL(HH, FT, NL, gridML164);
    //8 доля//
    DL(HH, SN, NL, gridML164);
    //9 доля//
    DL(SN, HH, RC, gridML164);
    //10 доля//
    DL(SN, HH, RC, gridML164);
    //11 доля//
    DL(SN, HH, RC, gridML164);
    //12 доля//
    DL(SN, HH, RC, gridML164);
    //13 доля//
    DL(SN, HH, RC, gridML164);
    //14 доля//
    DL(SN, HH, RC, gridML164);
    //15 доля//
    DL(SN, HH, RC, gridML164);
    //16 доля//
    DL(SN, HH, RC, gridML164);
    //71(конец)
    //72-79(начало)
    for (int i = 1; i <= 8; i ++)
    {
        //1 доля//
        DL(FT, RC, SN, gridML165);
        //2 доля//
        DL(FT, NL, NL, gridML165);
        //3 доля//
        DL(FT, NL, NL, gridML165);
        //4 доля//
        DL(FT, NL, NL, gridML165);
        //5 доля//
        DL(FT, SN, NL, gridML165);
        //6 доля//
        DL(FT, RC, NL, gridML165);
        //7 доля//
        DL(FT, NL, NL, gridML165);
        //8 доля//
        DL(FT, NL, NL, gridML165);
        //9 доля//
        DL(FT, SN, RC, gridML165);
        //10 доля//
        DL(FT, NL, NL, gridML165);
        //11 доля//
        DL(FT, NL, NL, gridML165);
        //12 доля//
        DL(FT, SN, NL, gridML165);
        //13 доля//
        DL(FT, RC, NL, gridML165);
        //14 доля//
        DL(FT, NL, NL, gridML165);
        //15 доля//
        DL(FT, NL, NL, gridML165);
        //16 доля//
        DL(FT, NL, NL, gridML165);
    }
    //72-79(конец)
    //80(начало)
    //1 доля//
    DL(FT, RC, SN, gridML86);
    //2 доля//
    DL(FT, NL, NL, gridML86);
    //3 доля//
    DL(NL, NL, NL, gridML86);
    //4 доля//
    DL(SN, NL, NL, gridML86);
    //5 доля//
    DL(FT, SN, NL, gridML86);
    //6 доля//
    DL(FT, RC, NL, gridML86);
    //7 доля//
    DL(NL, NL, NL, gridML86);
    //8 доля//
    DL(SN, NL, NL, gridML86);
    //80(конец)
    //81(начало)
    //1 доля//
    DL(FT, RC, SN, gridML166);
    //2 доля//
    DL(FT, NL, NL, gridML166);
    //3 доля//
    DL(NL, NL, NL, gridML166);
    //4 доля//
    DL(SN, NL, NL, gridML166);
    //5 доля//
    DL(SN, NL, NL, gridML166);
    //6 доля//
    DL(SN, NL, NL, gridML166);
    //7 доля//
    DL(FT, NL, NL, gridML166);
    //8 доля//
    DL(SN, NL, NL, gridML166);
    //9 доля//
    DL(FT, NL, SN, gridML166);
    //10 доля//
    DL(SN, NL, NL, gridML166);
    //11 доля//
    DL(FT, NL, NL, gridML166);
    //12 доля//
    DL(SN, NL, NL, gridML166);
    //13 доля//
    DL(FT, NL, NL, gridML166);
    //14 доля//
    DL(SN, NL, NL, gridML166);
    //15 доля//
    DL(FT, NL, NL, gridML166);
    //16 доля//
    DL(SN, NL, NL, gridML166);
    //81(конец)
    //82(начало)
    //1 доля//
    DL(FT, RC, SN, gridML86);
    //2 доля//
    DL(FT, NL, NL, gridML86);
    //3 доля//
    DL(NL, NL, NL, gridML86);
    //4 доля//
    DL(SN, NL, NL, gridML86);
    //5 доля//
    DL(FT, SN, NL, gridML86);
    //6 доля//
    DL(FT, RC, NL, gridML86);
    //7 доля//
    DL(NL, NL, NL, gridML86);
    //8 доля//
    DL(SN, NL, NL, gridML86);
    //82(конец)
    //83(начало)
    //1 доля//
    DL(FT, RC, SN, gridML166);
    //2 доля//
    DL(FT, NL, NL, gridML166);
    //3 доля//
    DL(NL, NL, NL, gridML166);
    //4 доля//
    DL(SN, NL, NL, gridML166);
    //5 доля//
    DL(SN, NL, NL, gridML166);
    //6 доля//
    DL(SN, NL, NL, gridML166);
    //7 доля//
    DL(FT, NL, NL, gridML166);
    //8 доля//
    DL(SN, NL, NL, gridML166);
    //9 доля//
    DL(FT, NL, SN, gridML166);
    //10 доля//
    DL(SN, NL, NL, gridML166);
    //11 доля//
    DL(FT, NL, NL, gridML166);
    //12 доля//
    DL(SN, NL, NL, gridML166);
    //13 доля//
    DL(FT, NL, NL, gridML166);
    //14 доля//
    DL(SN, NL, NL, gridML166);
    //15 доля//
    DL(FT, NL, NL, gridML166);
    //16 доля//
    DL(SN, NL, NL, gridML166);
    //83(конец)
    //
    for (int i = 1; i <= 15; i ++)
    {
        //1 доля//
        DL(FT, NL, SN, gridML165);
        //2 доля//
        DL(FT, NL, NL, gridML165);
        //3 доля//
        DL(FT, NL, NL, gridML165);
        //4 доля//
        DL(FT, NL, NL, gridML165);
        //5 доля//
        DL(FT, NL, NL, gridML165);
        //6 доля//
        DL(FT, NL, NL, gridML165);
        //7 доля//
        DL(FT, NL, NL, gridML165);
        //8 доля//
        DL(FT, SN, NL, gridML165);
        //9 доля//
        DL(FT, NL, RC, gridML165);
        //10 доля//
        DL(FT, NL, NL, gridML165);
        //11 доля//
        DL(FT, NL, NL, gridML165);
        //12 доля//
        DL(FT, NL, NL, gridML165);
        //13 доля//
        DL(FT, NL, NL, gridML165);
        //14 доля//
        DL(FT, NL, NL, gridML165);
        //15 доля//
        DL(FT, SN, NL, gridML165);
        //16 доля//
        DL(FT, NL, NL, gridML165);
    }
    //1 доля//
    DL(FT, SN, SN, gridML165);
    //2 доля//
    DL(FT, SN, SN, gridML165);
    //3 доля//
    DL(FT, SN, SN, gridML165);
    //4 доля//
    DL(FT, SN, SN, gridML165);
    //5 доля//
    DL(FT, SN, SN, gridML165);
    //6 доля//
    DL(FT, SN, SN, gridML165);
    //7 доля//
    DL(FT, SN, SN, gridML165);
    //8 доля//
    DL(FT, SN, SN, gridML165);
    //9 доля//
    DL(FT, SN, SN, gridML165);
    //10 доля//
    DL(FT, SN, SN, gridML165);
    //11 доля//
    DL(FT, SN, SN, gridML165);
    //12 доля//
    DL(FT, SN, SN, gridML165);
    //13 доля//
    DL(FT, SN, SN, gridML165);
    //14 доля//
    DL(FT, SN, SN, gridML165);
    //15 доля//
    DL(FT, SN, SN, gridML165);
    //16 доля//
    DL(FT, SN, SN, gridML165);


}

void setup()
{
    pinMode(HH, OUTPUT);
    pinMode(SN, OUTPUT);
    pinMode(FT, OUTPUT);
    pinMode(RC, OUTPUT);

    digitalWrite(HH, LOW);
    digitalWrite(SN, LOW);
    digitalWrite(FT, LOW);
    digitalWrite(RC, LOW);
    Serial.begin (9600);
    delay(500);
    mp3_set_serial (Serial);    //set Serial for DFPlayer-mini mp3 module
    delay(500);
    mp3_set_volume (60);
}

void loop()
{
    //Megadeth - Looking Down The Cross
    mp3_play (3);
    MegadetHLooking();
    //Seven Nation Army - Seven Stripes
    mp3_play (2);
    seven();
    //We will rock you
    mp3_play (4);
    werock();
    //Metallica - NEM
    mp3_play (1);
    nothing();
}
