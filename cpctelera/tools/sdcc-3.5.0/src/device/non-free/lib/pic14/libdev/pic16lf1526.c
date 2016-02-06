/*
 * This definitions of the PIC16LF1526 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2016.
 *
 * This file is generated automatically by the cinc2h.pl, 2016-01-17 15:35:52 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic16lf1526.h>

//==============================================================================

__at(0x0000) __sfr INDF0;

__at(0x0001) __sfr INDF1;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR0;

__at(0x0004) __sfr FSR0L;

__at(0x0005) __sfr FSR0H;

__at(0x0006) __sfr FSR1;

__at(0x0006) __sfr FSR1L;

__at(0x0007) __sfr FSR1H;

__at(0x0008) __sfr BSR;
__at(0x0008) volatile __BSRbits_t BSRbits;

__at(0x0009) __sfr WREG;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PORTA;
__at(0x000C) volatile __PORTAbits_t PORTAbits;

__at(0x000D) __sfr PORTB;
__at(0x000D) volatile __PORTBbits_t PORTBbits;

__at(0x000E) __sfr PORTC;
__at(0x000E) volatile __PORTCbits_t PORTCbits;

__at(0x000F) __sfr PORTD;
__at(0x000F) volatile __PORTDbits_t PORTDbits;

__at(0x0010) __sfr PORTE;
__at(0x0010) volatile __PORTEbits_t PORTEbits;

__at(0x0011) __sfr PIR1;
__at(0x0011) volatile __PIR1bits_t PIR1bits;

__at(0x0012) __sfr PIR2;
__at(0x0012) volatile __PIR2bits_t PIR2bits;

__at(0x0013) __sfr PIR3;
__at(0x0013) volatile __PIR3bits_t PIR3bits;

__at(0x0014) __sfr PIR4;
__at(0x0014) volatile __PIR4bits_t PIR4bits;

__at(0x0015) __sfr TMR0;

__at(0x0016) __sfr TMR1;

__at(0x0016) __sfr TMR1L;

__at(0x0017) __sfr TMR1H;

__at(0x0018) __sfr T1CON;
__at(0x0018) volatile __T1CONbits_t T1CONbits;

__at(0x0019) __sfr T1GCON;
__at(0x0019) volatile __T1GCONbits_t T1GCONbits;

__at(0x001A) __sfr TMR2;

__at(0x001B) __sfr PR2;

__at(0x001C) __sfr T2CON;
__at(0x001C) volatile __T2CONbits_t T2CONbits;

__at(0x008C) __sfr TRISA;
__at(0x008C) volatile __TRISAbits_t TRISAbits;

__at(0x008D) __sfr TRISB;
__at(0x008D) volatile __TRISBbits_t TRISBbits;

__at(0x008E) __sfr TRISC;
__at(0x008E) volatile __TRISCbits_t TRISCbits;

__at(0x008F) __sfr TRISD;
__at(0x008F) volatile __TRISDbits_t TRISDbits;

__at(0x0090) __sfr TRISE;
__at(0x0090) volatile __TRISEbits_t TRISEbits;

__at(0x0091) __sfr PIE1;
__at(0x0091) volatile __PIE1bits_t PIE1bits;

__at(0x0092) __sfr PIE2;
__at(0x0092) volatile __PIE2bits_t PIE2bits;

__at(0x0093) __sfr PIE3;
__at(0x0093) volatile __PIE3bits_t PIE3bits;

__at(0x0094) __sfr PIE4;
__at(0x0094) volatile __PIE4bits_t PIE4bits;

__at(0x0095) __sfr OPTION_REG;
__at(0x0095) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x0096) __sfr PCON;
__at(0x0096) volatile __PCONbits_t PCONbits;

__at(0x0097) __sfr WDTCON;
__at(0x0097) volatile __WDTCONbits_t WDTCONbits;

__at(0x0099) __sfr OSCCON;
__at(0x0099) volatile __OSCCONbits_t OSCCONbits;

__at(0x009A) __sfr OSCSTAT;
__at(0x009A) volatile __OSCSTATbits_t OSCSTATbits;

__at(0x009B) __sfr ADRES;

__at(0x009B) __sfr ADRESL;

__at(0x009C) __sfr ADRESH;

__at(0x009D) __sfr ADCON0;
__at(0x009D) volatile __ADCON0bits_t ADCON0bits;

__at(0x009E) __sfr ADCON1;
__at(0x009E) volatile __ADCON1bits_t ADCON1bits;

__at(0x010C) __sfr LATA;
__at(0x010C) volatile __LATAbits_t LATAbits;

__at(0x010D) __sfr LATB;
__at(0x010D) volatile __LATBbits_t LATBbits;

__at(0x010E) __sfr LATC;
__at(0x010E) volatile __LATCbits_t LATCbits;

__at(0x010F) __sfr LATD;
__at(0x010F) volatile __LATDbits_t LATDbits;

__at(0x0110) __sfr LATE;
__at(0x0110) volatile __LATEbits_t LATEbits;

__at(0x0116) __sfr BORCON;
__at(0x0116) volatile __BORCONbits_t BORCONbits;

__at(0x0117) __sfr FVRCON;
__at(0x0117) volatile __FVRCONbits_t FVRCONbits;

__at(0x011D) __sfr APFCON;
__at(0x011D) volatile __APFCONbits_t APFCONbits;

__at(0x018C) __sfr ANSELA;
__at(0x018C) volatile __ANSELAbits_t ANSELAbits;

__at(0x018D) __sfr ANSELB;
__at(0x018D) volatile __ANSELBbits_t ANSELBbits;

__at(0x018F) __sfr ANSELD;
__at(0x018F) volatile __ANSELDbits_t ANSELDbits;

__at(0x0190) __sfr ANSELE;
__at(0x0190) volatile __ANSELEbits_t ANSELEbits;

__at(0x0191) __sfr PMADR;

__at(0x0191) __sfr PMADRL;

__at(0x0192) __sfr PMADRH;

__at(0x0193) __sfr PMDAT;

__at(0x0193) __sfr PMDATL;

__at(0x0194) __sfr PMDATH;

__at(0x0195) __sfr PMCON1;
__at(0x0195) volatile __PMCON1bits_t PMCON1bits;

__at(0x0196) __sfr PMCON2;

__at(0x0199) __sfr RC1REG;

__at(0x0199) __sfr RCREG;

__at(0x0199) __sfr RCREG1;

__at(0x019A) __sfr TX1REG;

__at(0x019A) __sfr TXREG;

__at(0x019A) __sfr TXREG1;

__at(0x019B) __sfr SP1BRG;

__at(0x019B) __sfr SP1BRGL;

__at(0x019B) __sfr SPBRG;

__at(0x019B) __sfr SPBRGL;

__at(0x019B) __sfr SPBRGL1;

__at(0x019C) __sfr SP1BRGH;

__at(0x019C) __sfr SPBRGH;

__at(0x019C) __sfr SPBRGH1;

__at(0x019D) __sfr RC1STA;
__at(0x019D) volatile __RC1STAbits_t RC1STAbits;

__at(0x019D) __sfr RCSTA;
__at(0x019D) volatile __RCSTAbits_t RCSTAbits;

__at(0x019D) __sfr RCSTA1;
__at(0x019D) volatile __RCSTA1bits_t RCSTA1bits;

__at(0x019E) __sfr TX1STA;
__at(0x019E) volatile __TX1STAbits_t TX1STAbits;

__at(0x019E) __sfr TXSTA;
__at(0x019E) volatile __TXSTAbits_t TXSTAbits;

__at(0x019E) __sfr TXSTA1;
__at(0x019E) volatile __TXSTA1bits_t TXSTA1bits;

__at(0x019F) __sfr BAUD1CON;
__at(0x019F) volatile __BAUD1CONbits_t BAUD1CONbits;

__at(0x019F) __sfr BAUDCON;
__at(0x019F) volatile __BAUDCONbits_t BAUDCONbits;

__at(0x019F) __sfr BAUDCON1;
__at(0x019F) volatile __BAUDCON1bits_t BAUDCON1bits;

__at(0x020D) __sfr WPUB;
__at(0x020D) volatile __WPUBbits_t WPUBbits;

__at(0x020F) __sfr WPUD;
__at(0x020F) volatile __WPUDbits_t WPUDbits;

__at(0x0210) __sfr WPUE;
__at(0x0210) volatile __WPUEbits_t WPUEbits;

__at(0x0211) __sfr SSP1BUF;

__at(0x0211) __sfr SSPBUF;

__at(0x0212) __sfr SSP1ADD;

__at(0x0212) __sfr SSPADD;

__at(0x0213) __sfr SSP1MSK;

__at(0x0213) __sfr SSPMSK;

__at(0x0214) __sfr SSP1STAT;
__at(0x0214) volatile __SSP1STATbits_t SSP1STATbits;

__at(0x0214) __sfr SSPSTAT;
__at(0x0214) volatile __SSPSTATbits_t SSPSTATbits;

__at(0x0215) __sfr SSP1CON1;
__at(0x0215) volatile __SSP1CON1bits_t SSP1CON1bits;

__at(0x0215) __sfr SSPCON;
__at(0x0215) volatile __SSPCONbits_t SSPCONbits;

__at(0x0215) __sfr SSPCON1;
__at(0x0215) volatile __SSPCON1bits_t SSPCON1bits;

__at(0x0216) __sfr SSP1CON2;
__at(0x0216) volatile __SSP1CON2bits_t SSP1CON2bits;

__at(0x0216) __sfr SSPCON2;
__at(0x0216) volatile __SSPCON2bits_t SSPCON2bits;

__at(0x0217) __sfr SSP1CON3;
__at(0x0217) volatile __SSP1CON3bits_t SSP1CON3bits;

__at(0x0217) __sfr SSPCON3;
__at(0x0217) volatile __SSPCON3bits_t SSPCON3bits;

__at(0x0219) __sfr SSP2BUF;

__at(0x021A) __sfr SSP2ADD;

__at(0x021B) __sfr SSP2MSK;

__at(0x021C) __sfr SSP2STAT;
__at(0x021C) volatile __SSP2STATbits_t SSP2STATbits;

__at(0x021D) __sfr SSP2CON1;
__at(0x021D) volatile __SSP2CON1bits_t SSP2CON1bits;

__at(0x021E) __sfr SSP2CON2;
__at(0x021E) volatile __SSP2CON2bits_t SSP2CON2bits;

__at(0x021F) __sfr SSP2CON3;
__at(0x021F) volatile __SSP2CON3bits_t SSP2CON3bits;

__at(0x028C) __sfr PORTF;
__at(0x028C) volatile __PORTFbits_t PORTFbits;

__at(0x028D) __sfr PORTG;
__at(0x028D) volatile __PORTGbits_t PORTGbits;

__at(0x0291) __sfr CCPR1;

__at(0x0291) __sfr CCPR1L;

__at(0x0292) __sfr CCPR1H;

__at(0x0293) __sfr CCP1CON;
__at(0x0293) volatile __CCP1CONbits_t CCP1CONbits;

__at(0x0298) __sfr CCPR2;

__at(0x0298) __sfr CCPR2L;

__at(0x0299) __sfr CCPR2H;

__at(0x029A) __sfr CCP2CON;
__at(0x029A) volatile __CCP2CONbits_t CCP2CONbits;

__at(0x029D) __sfr CCPTMRS0;
__at(0x029D) volatile __CCPTMRS0bits_t CCPTMRS0bits;

__at(0x029E) __sfr CCPTMRS1;
__at(0x029E) volatile __CCPTMRS1bits_t CCPTMRS1bits;

__at(0x029F) __sfr CCPTMRS2;
__at(0x029F) volatile __CCPTMRS2bits_t CCPTMRS2bits;

__at(0x030C) __sfr TRISF;
__at(0x030C) volatile __TRISFbits_t TRISFbits;

__at(0x030D) __sfr TRISG;
__at(0x030D) volatile __TRISGbits_t TRISGbits;

__at(0x0311) __sfr CCPR3;

__at(0x0311) __sfr CCPR3L;

__at(0x0312) __sfr CCPR3H;

__at(0x0313) __sfr CCP3CON;
__at(0x0313) volatile __CCP3CONbits_t CCP3CONbits;

__at(0x0318) __sfr CCPR4;

__at(0x0318) __sfr CCPR4L;

__at(0x0319) __sfr CCPR4H;

__at(0x031A) __sfr CCP4CON;
__at(0x031A) volatile __CCP4CONbits_t CCP4CONbits;

__at(0x031C) __sfr CCPR5;

__at(0x031C) __sfr CCPR5L;

__at(0x031D) __sfr CCPR5H;

__at(0x031E) __sfr CCP5CON;
__at(0x031E) volatile __CCP5CONbits_t CCP5CONbits;

__at(0x038C) __sfr LATF;
__at(0x038C) volatile __LATFbits_t LATFbits;

__at(0x038D) __sfr LATG;
__at(0x038D) volatile __LATGbits_t LATGbits;

__at(0x0394) __sfr IOCBP;
__at(0x0394) volatile __IOCBPbits_t IOCBPbits;

__at(0x0395) __sfr IOCBN;
__at(0x0395) volatile __IOCBNbits_t IOCBNbits;

__at(0x0396) __sfr IOCBF;
__at(0x0396) volatile __IOCBFbits_t IOCBFbits;

__at(0x040C) __sfr ANSELF;
__at(0x040C) volatile __ANSELFbits_t ANSELFbits;

__at(0x040D) __sfr ANSELG;
__at(0x040D) volatile __ANSELGbits_t ANSELGbits;

__at(0x0411) __sfr TMR3;

__at(0x0411) __sfr TMR3L;

__at(0x0412) __sfr TMR3H;

__at(0x0413) __sfr T3CON;
__at(0x0413) volatile __T3CONbits_t T3CONbits;

__at(0x0414) __sfr T3GCON;
__at(0x0414) volatile __T3GCONbits_t T3GCONbits;

__at(0x0415) __sfr TMR4;

__at(0x0416) __sfr PR4;

__at(0x0417) __sfr T4CON;
__at(0x0417) volatile __T4CONbits_t T4CONbits;

__at(0x0418) __sfr TMR5;

__at(0x0418) __sfr TMR5L;

__at(0x0419) __sfr TMR5H;

__at(0x041A) __sfr T5CON;
__at(0x041A) volatile __T5CONbits_t T5CONbits;

__at(0x041B) __sfr T5GCON;
__at(0x041B) volatile __T5GCONbits_t T5GCONbits;

__at(0x041C) __sfr TMR6;

__at(0x041D) __sfr PR6;

__at(0x041E) __sfr T6CON;
__at(0x041E) volatile __T6CONbits_t T6CONbits;

__at(0x048D) __sfr WPUG;
__at(0x048D) volatile __WPUGbits_t WPUGbits;

__at(0x0491) __sfr RC2REG;

__at(0x0491) __sfr RCREG2;

__at(0x0492) __sfr TX2REG;

__at(0x0492) __sfr TXREG2;

__at(0x0493) __sfr SP2BRG;

__at(0x0493) __sfr SP2BRGL;

__at(0x0493) __sfr SPBRGL2;

__at(0x0494) __sfr SP2BRGH;

__at(0x0494) __sfr SPBRGH2;

__at(0x0495) __sfr RC2STA;
__at(0x0495) volatile __RC2STAbits_t RC2STAbits;

__at(0x0495) __sfr RCSTA2;
__at(0x0495) volatile __RCSTA2bits_t RCSTA2bits;

__at(0x0496) __sfr TX2STA;
__at(0x0496) volatile __TX2STAbits_t TX2STAbits;

__at(0x0496) __sfr TXSTA2;
__at(0x0496) volatile __TXSTA2bits_t TXSTA2bits;

__at(0x0497) __sfr BAUD2CON;
__at(0x0497) volatile __BAUD2CONbits_t BAUD2CONbits;

__at(0x0497) __sfr BAUDCON2;
__at(0x0497) volatile __BAUDCON2bits_t BAUDCON2bits;

__at(0x0595) __sfr TMR8;

__at(0x0596) __sfr PR8;

__at(0x0597) __sfr T8CON;
__at(0x0597) volatile __T8CONbits_t T8CONbits;

__at(0x059C) __sfr TMR10;

__at(0x059D) __sfr PR10;

__at(0x059E) __sfr T10CON;
__at(0x059E) volatile __T10CONbits_t T10CONbits;

__at(0x0611) __sfr CCPR6;

__at(0x0611) __sfr CCPR6L;

__at(0x0612) __sfr CCPR6H;

__at(0x0613) __sfr CCP6CON;
__at(0x0613) volatile __CCP6CONbits_t CCP6CONbits;

__at(0x0614) __sfr CCPR7;

__at(0x0614) __sfr CCPR7L;

__at(0x0615) __sfr CCPR7H;

__at(0x0616) __sfr CCP7CON;
__at(0x0616) volatile __CCP7CONbits_t CCP7CONbits;

__at(0x0617) __sfr CCPR8;

__at(0x0617) __sfr CCPR8L;

__at(0x0618) __sfr CCPR8H;

__at(0x0619) __sfr CCP8CON;
__at(0x0619) volatile __CCP8CONbits_t CCP8CONbits;

__at(0x061A) __sfr CCPR9;

__at(0x061A) __sfr CCPR9L;

__at(0x061B) __sfr CCPR9H;

__at(0x061C) __sfr CCP9CON;
__at(0x061C) volatile __CCP9CONbits_t CCP9CONbits;

__at(0x061D) __sfr CCPR10;

__at(0x061D) __sfr CCPR10L;

__at(0x061E) __sfr CCPR10H;

__at(0x061F) __sfr CCP10CON;
__at(0x061F) volatile __CCP10CONbits_t CCP10CONbits;

__at(0x0FE4) __sfr STATUS_SHAD;
__at(0x0FE4) volatile __STATUS_SHADbits_t STATUS_SHADbits;

__at(0x0FE5) __sfr WREG_SHAD;

__at(0x0FE6) __sfr BSR_SHAD;

__at(0x0FE7) __sfr PCLATH_SHAD;

__at(0x0FE8) __sfr FSR0L_SHAD;

__at(0x0FE9) __sfr FSR0H_SHAD;

__at(0x0FEA) __sfr FSR1L_SHAD;

__at(0x0FEB) __sfr FSR1H_SHAD;

__at(0x0FED) __sfr STKPTR;

__at(0x0FEE) __sfr TOSL;

__at(0x0FEF) __sfr TOSH;
