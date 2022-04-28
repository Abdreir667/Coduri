#include <iostream>
#include <string.h>
using namespace std;

class telephone
{
public:
    telephone(char *number, int volume);
    int dial(char *outgoing_number);
protected:
    char phone_number[32];
    int volume;
};
telephone::telephone(char *number, int volume)
{
    strcpy(telephone::phone_number, number);
    telephone::volume=volume;
}
int telephone::dial(char *outgoing_number)
{
    cout<<"Use a rotary or touch-tone phone to call: "<<outgoing_number;
    cout<<"Volume: "<<volume<<endl;
    return(1);
}
class touch_tone: public telephone
{
public:
    touch_tone(char *number, int volume) : telephone(number,volume) {};
    int dial(char *outgoing_number);
};
int touch_tone::dial(char *outgoing_number)
{
    cout<<" Beep beep beep with touch tone: "<<outgoing_number;
    cout<<" Volume: "<<volume<<endl;
    return(1);
}
class rotary:public telephone
{
public:
    rotary(char *number, int volume) :telephone(number,volume) {};
    int dial(char *outgoing_number);
};
int rotary::dial(char *outgoing_number)
{
    cout<<"Click Click Click with rotary: "<<outgoing_number;
    cout<<"Volume: "<<volume<<endl;
    return(1);
}
void main(void)
{
    touch_tone office("363-1111",5);
    rotary home("555-1234",2);
    telephone *cellular = new telephone("111-2222",3);
    home.dial("222-3333");
    office.dial("333-4444");
    cellular->dial("123-4567");
    cellular = &office;
    cellular->dial("890-1234");
}
