/*
    ROUND ROBIN  WITHOUT INTERRUPTS
    AUTHORS: Busra Oguzoglu
             Samil Iraz
             Gulnihal Muslu
*/



#include "mbed.h"

#define sh 0.5
#define lo 1
#define interv 0.2
#define letterInterval 3

DigitalOut myled(LED1);
DigitalOut test(LED2);

Serial pc(USBTX, USBRX);

char buff[256];
char c;
int counter,size;

bool isWriting;

short q[256*9][2];

short qLed[256*9];
double qTime[256*9];

int qSize;
int qIt;

bool newString;

int main() {
    
    myled = 0;
    counter = 0;
    isWriting = false;

    while(1) {
        
        if( pc.readable() ){
            c = pc.getc();
            
            if ( c=='\r' ){
                
                buff[counter] = '\0';
                
                pc.printf("Buffer : %s\n",buff);
                
                if ( isWriting == true ){
                    pc.printf("ABORTED PREVIOUS STRING!\n");    
                }
                
                isWriting = true;
                test = 1;
                
                qSize = 0;
                qIt = 0;
                
                for ( int i=0 ; i<counter ; i++ ){   
                    
                    if ( buff[i] == 'a' || buff[i] == 'A' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                    }
                    if ( buff[i] == 'b' || buff[i] == 'B' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'c' || buff[i] == 'C' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'd' || buff[i] == 'D' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'e' || buff[i] == 'E' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'f' || buff[i] == 'F' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'g' || buff[i] == 'G' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'h' || buff[i] == 'H' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'i' || buff[i] == 'I' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'j' || buff[i] == 'J' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'k' || buff[i] == 'K' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'l' || buff[i] == 'L' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'm' || buff[i] == 'M' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'n' || buff[i] == 'N' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'o' || buff[i] == 'O' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'p' || buff[i] == 'P' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'q' || buff[i] == 'Q' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'r' || buff[i] == 'R' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                    }
                    if ( buff[i] == 's' || buff[i] == 'S' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 't' || buff[i] == 'T' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                    }
                    if ( buff[i] == 'u' || buff[i] == 'U' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                    }
                    if ( buff[i] == 'v' || buff[i] == 'V' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'w' || buff[i] == 'W' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'x' || buff[i] == 'X' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'y' || buff[i] == 'Y' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    if ( buff[i] == 'z' || buff[i] == 'Z' ){
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=lo;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        qLed[qSize]=1;
                        qTime[qSize++]=sh;
                        qLed[qSize]=0;
                        qTime[qSize++]=interv;
                        
                    }
                    
                    qLed[qSize] = 0;
                    qTime[qSize++] = letterInterval; 
                    
                }
                
                //pc.printf("Q size : %d\n",qSize);
                
                counter = 0;
                
            }
            else {
                buff[counter++] = c;
                pc.printf("Character read : '%c'\n",c);
            }
        }
        
        if ( qIt < qSize ){ // q is not empty
        
            myled = qLed[qIt];
            wait( qTime[qIt] );
            
            //pc.printf("Qiterator : %d ---> %d %lf \n",qIt,qLed[qIt],qTime[qIt]);
            
            qIt++;
        
        }
        
        if ( qIt == qSize && isWriting ){
            pc.printf("END OF STRING !\n");
            test = 0;
            myled = 0;
            isWriting = false;    
        }
        
        
    }

}
