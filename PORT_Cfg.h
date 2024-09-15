/*
 * PORT_Cfg.h
 *
 *  Created on: Aug 17, 2024
 *      Author: Radwan
 */

#ifndef PORT_CFG_H_
#define PORT_CFG_H_


/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                (STD_OFF)

#define PortSetPinDirectionApi   TRUE

#define PORT_CONFIGURED_CHANNELS 39





#endif /* PORT_CFG_H_ */
