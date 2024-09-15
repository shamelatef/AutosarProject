 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - PORT Driver -- Post Build Configuration
 *
 * Author: Mohamed Tarek
 ******************************************************************************/
#include "Port.h"







/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)


/* AUTOSAR Version checking between PORT_PBcfg.c and PORT.h files*/
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between PORT_PBcfg.c and PORT.h files*/
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif



/*
    uint8 port_num;
    Port_PinType pin_num;
    Port_PinModeType pin_mode;
    Port_PinDirectionType direction;
    Port_InternalResistor resistor;


    uint8 initial_value;
    uint8 pin_direction_changable;
    uint8 pin_mode_changable;

*/
/* PB structure used with PORT_Init API */
Port_ConfigType Port_Configuration =

                                               {
                                              PORTA_ID,PIN0,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTA_ID,PIN1,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTA_ID,PIN2,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTA_ID,PIN3,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTA_ID,PIN4,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTA_ID,PIN5,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTA_ID,PIN6,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTA_ID,PIN7,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,


                                              PORTB_ID,PIN0,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTB_ID,PIN1,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTB_ID,PIN2,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTB_ID,PIN3,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTB_ID,PIN4,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTB_ID,PIN5,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTB_ID,PIN6,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTB_ID,PIN7,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,

                                              PORTC_ID,PIN4,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTC_ID,PIN5,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTC_ID,PIN6,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTC_ID,PIN7,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,


                                              PORTD_ID,PIN0,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTD_ID,PIN1,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTD_ID,PIN2,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTD_ID,PIN3,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTD_ID,PIN4,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTD_ID,PIN5,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTD_ID,PIN6,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTD_ID,PIN7,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,

                                              PORTE_ID,PIN0,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTE_ID,PIN1,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTE_ID,PIN2,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTE_ID,PIN3,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTE_ID,PIN4,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTE_ID,PIN5,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_HIGH, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,


                                              PORTF_ID,PIN0,PORT_PIN_MODE_0,PORT_PIN_OUT,PULL_UP,STD_LOW, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTF_ID,PIN1,PORT_PIN_MODE_0,PORT_PIN_OUT,OFF,STD_LOW, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTF_ID,PIN2,PORT_PIN_MODE_0,PORT_PIN_OUT,PULL_UP,STD_LOW, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTF_ID,PIN3,PORT_PIN_MODE_0,PORT_PIN_OUT,PULL_UP,STD_LOW, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE,
                                              PORTF_ID,PIN4,PORT_PIN_MODE_0,PORT_PIN_IN,PULL_UP,STD_LOW, PORT_DIR_CHANGABLE, PORT_MODE_CHANGABLE

                                            };



