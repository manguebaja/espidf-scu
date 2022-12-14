#ifndef CAN_DEFS_H_
#define CAN_DEFS_H_

// IDs

#define THROTTLE_MID    0x00
#define THROTTLE_RUN    0x01
#define THROTTLE_CHOKE  0x02

#define SYNC_ID         0x001       // message for bus sync
#define THROTTLE_ID     0x100       // 1by = throttle state (0x00, 0x01 or 0x02)
#define FLAGS_ID        0x101       // 1by
#define IMU_ACC_ID      0x200       // 8by = accelerometer data (3D) + timestamp
#define IMU_DPS_ID      0x201       // 8by = gyroscope data (3D) + timestamp 
#define SPEED_ID        0x300       // 4by = speed + timestamp
#define RPM_ID          0x304       // 4by = rpm + timestamp
#define TEMPERATURE_ID  0x400       // 4by = engine temp. + timestamp
#define CVT_ID          0x401       // 4by = cvt temp. + timestamp
#define SOC_ID          0x302       // 4by = state of charge + timestamp
#define VOLT_ID         0x502       // 4by = voltage + timestamp
#define FUEL_ID         0x500       // 3by = fuel level + timestamp
#define LAT_ID          0x600       // 1by
#define LNG_ID          0x700       // 1by

// DEV DEFINITIONS

#define MSG_QUEUE_LEN 5


#include "mcp2515_can.h"


mcp2515_can CAN(CAN_CS);




#endif