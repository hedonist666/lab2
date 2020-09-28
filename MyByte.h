#pragma once
#include <iostream>

struct Bin {
    unsigned data : 8; // data1 & (1 << n) 
    // (1 << n) 000...1..00, причем единица изначально равна 000..001
    //                ^
    //                |
    //                n
    // 0b1001101010 & 000..1..000
    void Show();
};

struct Hex {
    unsigned data : 8; 
    void Show();
}; // в байте ()

struct Oct {
    unsigned data : 8;
    void Show();
};

struct MyByte {
    union {
        Bin b;
        Hex x;
        Oct o;
    } data; // data -- одновременно и Bin и Hex и Oct
    MyByte(unsigned char);
    void ShowHex();
    void ShowBin();
    void ShowOct();
    void changeDigitBin(int, bool);
    void changeDigitHex(int, unsigned char);
    void changeDigitOct(int, unsigned char);
    unsigned char getDigitBin(int);
    unsigned char getDigitHex(int);
    unsigned char getDigitOct(int);
    //заполняющие пустые байты в конце могут быть, чтобы выравнять размер
};

