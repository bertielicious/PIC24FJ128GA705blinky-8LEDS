/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 20 September 2022, 19:08
 */


#include <xc.h>

#include "pic24type.h"

#include "configurationBits.h"
#include "configOsc.h"
#include "configPorts.h"
#include <stdint.h>
int16_t main(void) 
{
   
    configOsc();
    configPorts();
    uint16_t i = 0;
    while(1)
    {
       
       
        LATBbits.LATB4 = LOW;
        LATCbits.LATC3 = HIGH;
        LATCbits.LATC4 = HIGH;
        LATCbits.LATC5 = HIGH;
        LATAbits.LATA0 = HIGH;
        LATAbits.LATA1 = HIGH;
        LATBbits.LATB0 = HIGH;
        LATBbits.LATB1 = HIGH;
     //  for (i = 0; i < 0xffff; i++);
       
      
      __delay_ms(100);
       
        LATBbits.LATB4 = HIGH;
        LATCbits.LATC3 = LOW;
        LATCbits.LATC4 = HIGH;
        LATCbits.LATC5 = HIGH;
        LATAbits.LATA0 = HIGH;
        LATAbits.LATA1 = HIGH;
        LATBbits.LATB0 = HIGH;
        LATBbits.LATB1 = HIGH;
       //for (i = 0; i < 0xffff; i++);
        
        __delay_ms(100);
       
        LATBbits.LATB4 = HIGH;
        LATCbits.LATC3 = HIGH;
        LATCbits.LATC4 = LOW;
        LATCbits.LATC5 = HIGH;
        LATAbits.LATA0 = HIGH;
        LATAbits.LATA1 = HIGH;
        LATBbits.LATB0 = HIGH;
        LATBbits.LATB1 = HIGH;
       //for (i = 0; i < 0xffff; i++);
       
        __delay_ms(100);
       
        LATBbits.LATB4 = HIGH;
        LATCbits.LATC3 = HIGH;
        LATCbits.LATC4 = HIGH;
        LATCbits.LATC5 = LOW;
        LATAbits.LATA0 = HIGH;
        LATAbits.LATA1 = HIGH;
        LATBbits.LATB0 = HIGH;
        LATBbits.LATB1 = HIGH;
       //for (i = 0; i < 0xffff; i++);
         __delay_ms(100);
         
         
         LATBbits.LATB4 = HIGH;
        LATCbits.LATC3 = HIGH;
        LATCbits.LATC4 = HIGH;
        LATCbits.LATC5 = HIGH;
        LATAbits.LATA0 = LOW;
        LATAbits.LATA1 = HIGH;
        LATBbits.LATB0 = HIGH;
        LATBbits.LATB1 = HIGH;
          __delay_ms(100);
          
        LATBbits.LATB4 = HIGH;
        LATCbits.LATC3 = HIGH;
        LATCbits.LATC4 = HIGH;
        LATCbits.LATC5 = HIGH;
        LATAbits.LATA0 = HIGH;
        LATAbits.LATA1 = LOW;
        LATBbits.LATB0 = HIGH;
        LATBbits.LATB1 = HIGH;
          __delay_ms(100);
          
       LATBbits.LATB4 = HIGH;
        LATCbits.LATC3 = HIGH;
        LATCbits.LATC4 = HIGH;
        LATCbits.LATC5 = HIGH;
        LATAbits.LATA0 = HIGH;
        LATAbits.LATA1 = HIGH;
        LATBbits.LATB0 = LOW;
        LATBbits.LATB1 = HIGH;
          __delay_ms(100);
          
      LATBbits.LATB4 = HIGH;
        LATCbits.LATC3 = HIGH;
        LATCbits.LATC4 = HIGH;
        LATCbits.LATC5 = HIGH;
        LATAbits.LATA0 = HIGH;
        LATAbits.LATA1 = HIGH;
        LATBbits.LATB0 = HIGH;
        LATBbits.LATB1 = LOW;
          __delay_ms(100);
       
    }
    return 0;
}
