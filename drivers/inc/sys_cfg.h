#ifndef SYS_CFG_H__
#define SYS_CFG_H__

//#define SYS_CFG_USE_TWI0
//#define SYS_CFG_USE_TWI1
#define SYS_CFG_USE_SPI0
//#define SYS_CFG_USE_SPI1

#define SYS_CFG_GPIO_PIN0_INTERNAL_PULLUP
#define SYS_CFG_GPIO_PIN1_INTERNAL_PULLUP
#define SYS_CFG_GPIO_PIN2_INTERNAL_PULLUP
#define SYS_CFG_GPIO_PIN3_INTERNAL_PULLUP
#define SYS_CFG_GPIO_PIN4_INTERNAL_PULLUP
#define SYS_CFG_GPIO_PIN5_INTERNAL_PULLUP
#define SYS_CFG_GPIO_PIN6_INTERNAL_PULLUP
#define SYS_CFG_GPIO_PIN7_INTERNAL_PULLUP


#if defined(SYS_CFG_USE_SPI0) || defined(SYS_CFG_USE_TWI0)
/**@brief The IRQ priority for instance 0.
 */
#define SYS_CFG_SERIAL_0_IRQ_PRIORITY 0
#endif

#if defined(SYS_CFG_USE_SPI1) || defined(SYS_CFG_USE_TWI1)
/**@brief The IRQ priority for instance 1.
 */
#define SYS_CFG_SERIAL_1_IRQ_PRIORITY 0
#endif

#endif // SYS_CFG_H__
