
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
#define IO_I2C_SLV0_FS (16)
#define IO_I2C_SLV0_INT_ERR (50)
#define IO_I2C_SLV0_INT_RX_AVAIL (51)
#define IO_I2C_SLV0_INT_TX_REQ (52)
#define IO_I2C_SLV0_INT_RD_REQ (53)
#define IO_I2C_SLV0_INT_STOP_DET (54)
#define IO_I2C_SLV0_INT_RESTART_DET (55)
#define IO_SPI_MST0_PRESENT
#define IO_SPI_MST0_FS (16)
#define IO_SPI_MST0_MAX_XFER_SIZE (16)
#define IO_SPI_MST0_DMA_TX (3)
#define IO_SPI_MST0_DMA_RX (4)
#define IO_SPI_MST0_INT_ERR (63)
#define IO_SPI_MST0_INT_RX_AVAIL (64)
#define IO_SPI_MST0_INT_TX_REQ (65)
#define IO_SPI_MST0_INT_IDLE (66)
#define IO_SPI_SLV0_PRESENT
#define IO_SPI_SLV0_FS (16)
#define IO_SPI_SLV0_MAX_XFER_SIZE (16)
#define IO_SPI_SLV0_DMA_TX (7)
#define IO_SPI_SLV0_DMA_RX (8)
#define IO_SPI_SLV0_INT_ERR (75)
#define IO_SPI_SLV0_INT_RX_AVAIL (76)
#define IO_SPI_SLV0_INT_TX_REQ (77)
#define IO_SPI_SLV0_INT_IDLE (78)
#define IO_I2C_MST0_PRESENT
#define IO_I2C_MST0_FS (16)
#define IO_I2C_MST0_INT_ERR (38)
#define IO_I2C_MST0_INT_RX_AVAIL (39)
#define IO_I2C_MST0_INT_TX_REQ (40)
#define IO_I2C_MST0_INT_STOP_DET (41)
#define IO_GPIO0_PRESENT
#define IO_GPIO0_INT_INTR_FLAG (17)
#define IO_GPIO0_DEBOUNCE (1)
#define IO_UART0_PRESENT
#define IO_UART0_FS (16)
#define IO_UART0_INTR (79)
#define IO_I2S_TX_MST0_PRESENT
#define IO_I2S_TX_MST0_FS (8)
#define IO_I2S_TX_MST0_FW (16)
#define IO_I2S_TX_MST0_INT_TX_REQ (58)
#define IO_I2S_TX_MST0_INT_ERR (59)
#define IO_I2S_TX_MST0_DMA (1)
#define IO_I2S_RX_MST0_PRESENT
#define IO_I2S_RX_MST0_FS (8)
#define IO_I2S_RX_MST0_FW (16)
#define IO_I2S_RX_MST0_INT_RX_AVAIL (56)
#define IO_I2S_RX_MST0_INT_ERR (57)
#define IO_I2S_RX_MST0_DMA (0)
#define IO_PDM_RX0_PRESENT
#define IO_PDM_RX0_CH (1)
#define IO_PDM_RX0_FS (16)
#define IO_PDM_RX0_NS (4)
#define IO_PDM_RX0_DS (2)
#define IO_PDM_RX0_INT_RX_AVAIL (60)
#define IO_PDM_RX0_INT_ERR (61)
#define IO_PDM_RX0_INT_CLP (62)
#define IO_PDM_RX0_DMA (2)
#define IO_SPI_MST1_PRESENT
#define IO_SPI_MST1_FS (16)
#define IO_SPI_MST1_MAX_XFER_SIZE (16)
#define IO_SPI_MST1_DMA_TX (5)
#define IO_SPI_MST1_DMA_RX (6)
#define IO_SPI_MST1_INT_ERR (67)
#define IO_SPI_MST1_INT_RX_AVAIL (68)
#define IO_SPI_MST1_INT_TX_REQ (69)
#define IO_SPI_MST1_INT_IDLE (70)
#define IO_I2C_MST1_PRESENT
#define IO_I2C_MST1_FS (16)
#define IO_I2C_MST1_INT_ERR (42)
#define IO_I2C_MST1_INT_RX_AVAIL (43)
#define IO_I2C_MST1_INT_TX_REQ (44)
#define IO_I2C_MST1_INT_STOP_DET (45)
#define IO_GPIO1_PRESENT
#define IO_GPIO1_INT_INTR_FLAG (19)
#define IO_GPIO1_DEBOUNCE (1)
#define IO_UART1_PRESENT
#define IO_UART1_FS (16)
#define IO_UART1_INTR (80)
#define IO_SPI_MST2_PRESENT
#define IO_SPI_MST2_FS (16)
#define IO_SPI_MST2_MAX_XFER_SIZE (16)
#define IO_SPI_MST2_INT_ERR (71)
#define IO_SPI_MST2_INT_RX_AVAIL (72)
#define IO_SPI_MST2_INT_TX_REQ (73)
#define IO_SPI_MST2_INT_IDLE (74)
#define IO_I2C_MST2_PRESENT
#define IO_I2C_MST2_FS (16)
#define IO_I2C_MST2_INT_ERR (46)
#define IO_I2C_MST2_INT_RX_AVAIL (47)
#define IO_I2C_MST2_INT_TX_REQ (48)
#define IO_I2C_MST2_INT_STOP_DET (49)
#define IO_GPIO2_PRESENT
#define IO_GPIO2_INT_INTR_FLAG (37)
#define IO_GPIO2_DEBOUNCE (1)
#define IO_UART2_PRESENT
#define IO_UART2_FS (16)
#define IO_UART2_INTR (81)
#define IO_UART3_PRESENT
#define IO_UART3_FS (16)
#define IO_UART3_INTR (82)

#endif
