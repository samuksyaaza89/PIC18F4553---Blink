#define _XTAL_FREQ 48000000UL
#include <xc.h>

#pragma config PLLDIV = 5, CPUDIV = OSC1_PLL2, USBDIV = 2
#pragma config FOSC = HSPLL_HS, FCMEN = OFF, IESO = OFF
#pragma config PWRT = OFF, BOR = OFF, VREGEN = OFF
#pragma config WDT = OFF
#pragma config MCLRE = ON, LVP = OFF, XINST = OFF
#pragma config CP0 = OFF, CP1 = OFF, CPB = OFF, CPD = OFF

void main(void) {
  // Utilização do registrador TRIS ( tristate )na porta D
  // - TRISDbits é struct de bits para a porta
  // - TRISD0 é o bit do struct a ser usado
  TRISDbits.TRISD0 = 0;

  while (1) {
    // Utilização do registrador LAT ( latch ) na porta D
    // - LATDbits é o struct de bits de cada porta
    // - LATD0 é o bit do struct a ser alterado
    LATDbits.LATD0 ^= 1;
    __delay_ms(500);
  }
}
