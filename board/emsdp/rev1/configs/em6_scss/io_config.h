
/* **** DO NOT EDIT - this file is generated by ARChitect2 ****
 *
 * Description: Header file declaring the compiler extensions for eia components 
 */

#ifndef _io_config_H_
#define _io_config_H_


#define DMAC_INT_BASE (20)
#define DMAC_ERR_BASE (DMAC_INT_BASE + DMAC_CHAN_CNT)
#define DMAC_CHAN_CNT (16)
#define DMAC_MEM_CHAN_CNT (16)
#define DMAC_AUX_CHAN_CNT (0)
#define IO_I2C_SLV0_PRESENT
#define IO_I2C_SLV0_FS (2)
#define IO_I2C_SLV0_DMA_TX (2)
#define IO_I2C_SLV0_DMA_RX (3)
#define IO_I2C_SLV0_INT_ERR (65)
#define IO_I2C_SLV0_INT_RX_AVAIL (66)
#define IO_I2C_SLV0_INT_TX_REQ (67)
#define IO_I2C_SLV0_INT_RD_REQ (68)
#define IO_I2C_SLV0_INT_STOP_DET (69)
#define IO_I2C_SLV0_INT_RESTART_DET (70)
#define IO_SPI_MST0_PRESENT
#define IO_SPI_MST0_FS (16)
#define IO_SPI_MST0_MAX_XFER_SIZE (16)
#define IO_SPI_MST0_DMA_TX (4)
#define IO_SPI_MST0_DMA_RX (5)
#define IO_SPI_MST0_INT_ERR (79)
#define IO_SPI_MST0_INT_RX_AVAIL (80)
#define IO_SPI_MST0_INT_TX_REQ (81)
#define IO_SPI_MST0_INT_IDLE (82)
#define IO_SPI_SLV0_PRESENT
#define IO_SPI_SLV0_FS (2)
#define IO_SPI_SLV0_MAX_XFER_SIZE (16)
#define IO_SPI_SLV0_DMA_TX (8)
#define IO_SPI_SLV0_DMA_RX (9)
#define IO_SPI_SLV0_INT_ERR (91)
#define IO_SPI_SLV0_INT_RX_AVAIL (92)
#define IO_SPI_SLV0_INT_TX_REQ (93)
#define IO_SPI_SLV0_INT_IDLE (94)
#define IO_I2C_MST0_PRESENT
#define IO_I2C_MST0_FS (16)
#define IO_I2C_MST0_DMA_TX (0)
#define IO_I2C_MST0_DMA_RX (1)
#define IO_I2C_MST0_INT_ERR (53)
#define IO_I2C_MST0_INT_RX_AVAIL (54)
#define IO_I2C_MST0_INT_TX_REQ (55)
#define IO_I2C_MST0_INT_STOP_DET (56)
#define IO_GPIO0_PRESENT
#define IO_GPIO0_INT_INTR_FLAG (17)
#define IO_GPIO0_DEBOUNCE (1)
#define IO_UART0_PRESENT
#define IO_UART0_FS (0)
#define IO_UART0_INTR (95)
#define IO_PWM0_PRESENT
#define IO_PWM0_COUNTER_WIDTH (16)
#define IO_PWM0_INT_NEW_NPERIODS (71)
#define IO_PWM0_INT_UPD_MISSED (72)
#define IO_PWM0_INT_TRG (73)
#define IO_PWM0_INT_FAULT (74)
#define IO_SPI_MST1_PRESENT
#define IO_SPI_MST1_FS (16)
#define IO_SPI_MST1_MAX_XFER_SIZE (16)
#define IO_SPI_MST1_DMA_TX (6)
#define IO_SPI_MST1_DMA_RX (7)
#define IO_SPI_MST1_INT_ERR (83)
#define IO_SPI_MST1_INT_RX_AVAIL (84)
#define IO_SPI_MST1_INT_TX_REQ (85)
#define IO_SPI_MST1_INT_IDLE (86)
#define IO_I2C_MST1_PRESENT
#define IO_I2C_MST1_FS (16)
#define IO_I2C_MST1_INT_ERR (57)
#define IO_I2C_MST1_INT_RX_AVAIL (58)
#define IO_I2C_MST1_INT_TX_REQ (59)
#define IO_I2C_MST1_INT_STOP_DET (60)
#define IO_GPIO1_PRESENT
#define IO_GPIO1_INT_INTR_FLAG (19)
#define IO_GPIO1_DEBOUNCE (1)
#define IO_UART1_PRESENT
#define IO_UART1_FS (0)
#define IO_UART1_INTR (96)
#define IO_PWM1_PRESENT
#define IO_PWM1_COUNTER_WIDTH (16)
#define IO_PWM1_INT_NEW_NPERIODS (75)
#define IO_PWM1_INT_UPD_MISSED (76)
#define IO_PWM1_INT_TRG (77)
#define IO_PWM1_INT_FAULT (78)
#define IO_SPI_MST2_PRESENT
#define IO_SPI_MST2_FS (16)
#define IO_SPI_MST2_MAX_XFER_SIZE (16)
#define IO_SPI_MST2_INT_ERR (87)
#define IO_SPI_MST2_INT_RX_AVAIL (88)
#define IO_SPI_MST2_INT_TX_REQ (89)
#define IO_SPI_MST2_INT_IDLE (90)
#define IO_I2C_MST2_PRESENT
#define IO_I2C_MST2_FS (16)
#define IO_I2C_MST2_INT_ERR (61)
#define IO_I2C_MST2_INT_RX_AVAIL (62)
#define IO_I2C_MST2_INT_TX_REQ (63)
#define IO_I2C_MST2_INT_STOP_DET (64)
#define IO_GPIO2_PRESENT
#define IO_GPIO2_INT_INTR_FLAG (52)
#define IO_GPIO2_DEBOUNCE (1)
#define IO_UART2_PRESENT
#define IO_UART2_FS (0)
#define IO_UART2_INTR (97)
#define IO_UART3_PRESENT
#define IO_UART3_FS (0)
#define IO_UART3_INTR (98)

#endif
