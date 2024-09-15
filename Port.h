 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H

#include "Common_Macros.h"
#include "Std_Types.h"
#include "PORT_Cfg.h"

/*******************************************************************************
 *                              Module Definitions                             *
 *******************************************************************************/
/* PORT Module Id */
#define PORT_MODULE_ID    (124U)

/* PORT Instance Id */
#define PORT_INSTANCE_ID  (0U)



#define PORT_VENDOR_ID    (1000U)

/*
 * Module Version 1.0.0
 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)



/*SID*/
#define PORT_INIT_SID 0x00
#define PORT_SET_PIN_DIRECTION_SID 0x01
#define PORT_REFRESH_PIN_DIRECTION_SID 0x02
#define PORT_GET_VERSION_INFO_SID 0x03
#define PORT_SET_PIN_MODE_SID 0x04


/*DEM*/

#define PORT_E_PARAM_PIN                0x0A
#define PORT_E_DIRECTION_UNCHANGEABLE   0x0B
#define PORT_E_PARAM_CONFIG             0x0C
#define PORT_E_PARAM_INVALID_MODE       0x0D
#define PORT_E_MODE_UNCHANGEABLE        0x0E
#define PORT_E_UNINIT                   0x0F
#define PORT_E_PARAM_POINTER            0x10


/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C

/*PORT & pin IDs*/
#define PORTA_ID 0
#define PORTB_ID 1
#define PORTC_ID 2
#define PORTD_ID 3
#define PORTE_ID 4
#define PORTF_ID 5

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7


/*PORT Pin MODES*/

#define PORT_PIN_MODE_ANALOG 11
#define PORT_PIN_MODE_0 0
#define PORT_PIN_MODE_1 1
#define PORT_PIN_MODE_2 2
#define PORT_PIN_MODE_3 3
#define PORT_PIN_MODE_4 4
#define PORT_PIN_MODE_5 5
#define PORT_PIN_MODE_6 6
#define PORT_PIN_MODE_7 7
#define PORT_PIN_MODE_8 8
#define PORT_PIN_MODE_9 9
#define PORT_PIN_MODE_14 14



#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)


#define PORT_DIR_CHANGABLE 1
#define PORT_DIR_UNCHANGABLE 0

#define PORT_MODE_CHANGABLE 1
#define PORT_MODE_UNCHANGABLE 0



/* AUTOSAR checking between Std Types and Dio Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* Dio Pre-Compile Configuration Header file */
#include "Dio_Cfg.h"

/* AUTOSAR Version checking between Dio_Cfg.h and Dio.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Dio_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Dio_Cfg.h and Dio.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Dio_Cfg.h does not match the expected version"
#endif



/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/



/*Description: Data type for the symbolic name of a port pin.*/
typedef uint8  Port_PinType;

/*Description: Different port pin modes..*/
typedef uint8 Port_PinModeType;

/* Description: Enum to hold PIN direction */
typedef enum
{
    PORT_PIN_IN,PORT_PIN_OUT
}Port_PinDirectionType;

/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    OFF,PULL_UP,PULL_DOWN
}Port_InternalResistor;

/* Description: Structure to configure each individual PIN:
 *	1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *	2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal resistor --> Disable, Pull up or Pull down
 */
typedef struct 
{

    uint8 port_num; 
    Port_PinType pin_num;
    Port_PinModeType pin_mode;
    Port_PinDirectionType direction;
    Port_InternalResistor resistor;


    uint8 initial_value;
    uint8 pin_direction_changable;
    uint8 pin_mode_changable;


}Port_ConfigChannel;



typedef struct Port_ConfigType
{
    Port_ConfigChannel Channels[PORT_CONFIGURED_CHANNELS];
} Port_ConfigType;


/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/************************************************************************************
* Service Name: Port_Init
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function Initializes the Port Driver module.
************************************************************************************/
void Port_Init(const Port_ConfigType* ConfigPtr);



/************************************************************************************
* Service Name: Port_SetPinDirection
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): Pin --> Port Pin ID number
*                  Direction -->Port Pin Direction
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Sets the port pin direction
* ************************************************************************************/

#if (PortSetPinDirectionApi == TRUE)
void Port_SetPinDirection(  Port_PinType Pin,
                            Port_PinDirectionType Direction);
#endif

/************************************************************************************
* Service Name: Port_RefreshPortDirection
* Sync/Async: Synchronous
* Reentrancy: non- reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Refresh port direction.
* ************************************************************************************/
void Port_RefreshPortDirection(void);


/************************************************************************************
* Service Name: Port_GetVersionInfo
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): versioninfo
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Return the version information of this module.
* ************************************************************************************/
#if (PORT_VERSION_INFO_API == STD_ON)
void Port_GetVersionInfo(Std_VersionInfoType* versioninfo);
#endif

/************************************************************************************
* Service Name: Port_SetPinMode
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): Pin --> Port Pin ID number
*                  Mode -->Port Pin Mode
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Sets the port pin mode.
* ************************************************************************************/
void Port_SetPinMode(Port_PinType Pin,
                     Port_PinModeType Mode);


extern Port_ConfigType Port_Configuration;
#endif /* PORT_H */
