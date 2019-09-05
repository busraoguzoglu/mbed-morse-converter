/*
    ROUND ROBIN  WITH INTERRUPTS
    AUTHORS: Busra Oguzoglu
             Samil Iraz
             Gulnihal Muslu
*/


#include "mbed.h"

#define sh 0.3
#define lo 1
#define interv 0.15

DigitalOut myled(LED1);
DigitalOut test(LED2);

Serial pc(USBTX, USBRX);

char buff[256];
char readBuffer[256];
char c;
int counter,size;

volatile bool newString;

void characterReceived(){

    c = pc.getc();
    
    if ( c=='\r' || c=='\n' ){
        newString = true;
        pc.printf("enter pressed\n");
    }
    
    readBuffer[counter++] = c;
    pc.printf("\n Buff[ %d ] : '%c'\n",counter-1,c);

    //myled = 1 - myled;
}

int main() {

    pc.attach( &characterReceived );
    myled = 1;
    counter = 0;
  
  
  /*  
    // hard coded string testing
    readBuffer[0] = 'H';
    readBuffer[1] = 'e';
    readBuffer[2] = 'l';
    readBuffer[3] = 'l';
    readBuffer[4] = 'o';
    counter = 6;
    newString = true;
    // testing
*/
    while(1) {

        //pc.printf("newstring %d\n",newString);

        if ( newString ){
            
            newString = false;
            readBuffer[counter-1] = '\0';    

            test = 1; // writing led (led2)
            
            size = counter-1;
            counter = 0;
            for ( int i=0 ; i<=size ; i++ )
                buff[i] = readBuffer[i];

            pc.printf("\nBuff : '%s'   Size : %d\n",buff,size);

            for ( int i=0 ; i<size ; i++ ){

                if ( newString == true ){
                    pc.printf("ABORTED !\n");
                    break;
                } 

                if ( buff[i] == 'a' || buff[i] == 'A' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                }
                if ( buff[i] == 'b' || buff[i] == 'B' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'c' || buff[i] == 'C' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'd' || buff[i] == 'D' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'e' || buff[i] == 'E' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'f' || buff[i] == 'F' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'g' || buff[i] == 'G' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'h' || buff[i] == 'H' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'i' || buff[i] == 'I' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'j' || buff[i] == 'J' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'k' || buff[i] == 'K' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'l' || buff[i] == 'L' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'm' || buff[i] == 'M' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'n' || buff[i] == 'N' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'o' || buff[i] == 'O' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'p' || buff[i] == 'P' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'q' || buff[i] == 'Q' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'r' || buff[i] == 'R' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                }
                if ( buff[i] == 's' || buff[i] == 'S' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 't' || buff[i] == 'T' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                }
                if ( buff[i] == 'u' || buff[i] == 'U' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                }
                if ( buff[i] == 'v' || buff[i] == 'V' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'w' || buff[i] == 'W' ){
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'x' || buff[i] == 'X' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'y' || buff[i] == 'Y' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);

                }
                if ( buff[i] == 'z' || buff[i] == 'Z' ){
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(lo);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);
                    myled=1;
                    wait(sh);
                    myled=0;
                    wait(interv);

                }


                wait(1);


            }


            test = 0;     
            pc.printf("END OF STRING\n");

        }    
        
        
    }

}
