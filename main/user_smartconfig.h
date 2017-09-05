#ifndef __USER_SMARTCONFIG_H__
#define __USER_SMARTCONFIG_H__

#ifdef __cplusplus
extern "C" {
#endif


#define LINKED_BIT      (BIT0)
#define CONNECTED_BIT   (BIT1)


void user_wifi_sta_init(void);
void user_smartconfig_init(void);


#ifdef __cplusplus
}
#endif

#endif /*#ifndef __USER_SMARTCONFIG_H__*/