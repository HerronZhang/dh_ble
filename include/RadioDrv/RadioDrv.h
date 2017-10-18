/**
 * @file				RadioDrv.h
 * @brief			RadioDrv.c 的头文件
 * @author			fengxun
 * @date			2017年10月18日
 *   作    者: 		fengxun
*/
#ifndef __RADIODRV_H__
#define __RADIODRV_H__

#define SHORT_READ_START			(1<<0) 
#define SHORT_END_DISABLE			(1<<2)
#define SHORT_DISABLED_TXEN			(1<<3)
#define SHORT_ADDRESS_RSSISTART		(1<<4)
#define SHORT_END_START				(1<<5)
#define SHORT_ADDRESS_BCSTART		(1<<6)
#define SHORT_DISABLED_RSSISTOP		(1<<8)

#define INTEN_READY					(1<<0)
#define INTEN_ADDRESS				(1<<1)
#define INTEN_PAYLOAD				(1<<2)
#define INTEN_END					(1<<3)
#define INTEN_DISABLED				(1<<4)
#define INTEN_DEVMATCH				(1<<5)
#define INTEN_DEVMISS				(1<<6)
#define INTEN_RSSIEND				(1<<7)
#define INTEN_BCMATCH				(1<<10)

#define INTCLR_READY					(1<<0)
#define INTCLR_ADDRESS				(1<<1)
#define INTCLR_PAYLOAD				(1<<2)
#define INTCLR_END					(1<<3)
#define INTCLR_DISABLED				(1<<4)
#define INTCLR_DEVMATCH				(1<<5)
#define INTCLR_DEVMISS				(1<<6)
#define INTCLR_RSSIEND				(1<<7)
#define INTCLR_BCMATCH				(1<<10)

#define CRCSTATUS_ERR				0
#define CRCSTATUS_OK				1

#define TXPOWER_POS4				0x04
#define TXPOWER_0					0x00
#define TXPOWER_NEG4				0xFC
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __RADIODRV_H__ */