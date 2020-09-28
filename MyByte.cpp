#include "MyByte.h"

void Bin::Show() {
    std::cout << "0b";
    for (int i = 0; i < 8; ++i) {
        std::cout << (data & (1 << (7 - i)) ? 1 : 0);
    } 
}

void Hex::Show() {
    std::cout << "0x";
    auto data1 = (data & 0xf0) >> 4;
    auto data2 = data & 0x0f;
    switch (data1) {
        case 10:
            std::cout << 'a';
            break;
        case 11:
            std::cout << 'b';
            break;
        case 12:
            std::cout << 'c';
            break;
        case 13:
            std::cout << 'd';
            break;
        case 14:
            std::cout << 'e';
            break;
        case 15:
            std::cout << 'f';
            break;
        default:
            std::cout << data1;
    }    
    switch (data2) {
        case 10:
            std::cout << 'a';
            break;
        case 11:
            std::cout << 'b';
            break;
        case 12:
            std::cout << 'c';
            break;
        case 13:
            std::cout << 'd';
            break;
        case 14:
            std::cout << 'e';
            break;
        case 15:
            std::cout << 'f';
            break;
        default:
            std::cout << data1;
    }    
}

void Oct::Show() {
    std::cout << "0";
    std::cout << ((data & 0700) >> 6);
    std::cout << ((data & 0070) >> 3);
    std::cout << ((data & 0007));
}

MyByte::MyByte(unsigned char a) {
    data.x = {a};
}

void MyByte::ShowHex() {
   data.x.Show(); 
}
void MyByte::ShowBin() {
   data.b.Show();
}
void MyByte::ShowOct() {
   data.o.Show();
}

void MyByte::changeDigitBin(int idx, bool val) {
    if (idx < 0 || idx > 8) throw "index out of range";
    if (val) data.b.data |= (val << idx);
    else data.b.data &= (val << idx);
}

void MyByte::changeDigitHex(int idx, unsigned char val) {
    if (idx < 0 || idx > 2) throw "index out of range";
    if (idx == 1) {
        data.x.data &= 0xf0;
        data.x.data |= val & 0xf;
    }
    else {
        data.x.data &= 0x0f;
        data.x.data |= (val & 0xf) << 4;
    }
}

void MyByte::changeDigitOct(int idx, unsigned char val) {
    if (idx < 0 || idx > 3) throw "index out of range";
    if (idx == 1) {
        data.o.data &= 0770;
        data.o.data |= (val & 07);
    }
    else if (idx == 2) {
        data.o.data &= 0707;
        data.o.data |= (val & 07) << 3;
    }
    else {
        data.o.data &= 0077;
        data.o.data |= (val & 07) << 6;
    }
}

unsigned char MyByte::getDigitBin(int idx) {
    if (idx < 0 || idx > 8) throw "index out of range";
    --idx;
    return data.b.data & (1 << idx);
}

unsigned char MyByte::getDigitHex(int idx) {
    if (idx < 0 || idx > 2) throw "index out of range";
    --idx;
    return data.x.data & (0xf << (idx * 4));
}

unsigned char MyByte::getDigitOct(int idx) {
    if (idx < 0 || idx > 3) throw "index out of range";
    --idx;
    return data.o.data & (07 << (idx * 3));
}
