#ifndef _GLOBAL_H
#define _GLOBAL_H
HardwareSerial g_device_GpsSerial(1);  // gps  recive data by uart
TinyGPSPlus    g_device_Gps;           // decode gps fields
char           g_UrlMap_start[]="http://www.google.com/maps/place/";
char           g_UrlMap[60]="/0";

unsigned int   g_dev_gpsTryCount=0;
unsigned int   g_dev_gps_iCountFill = 0;
bool           g_dev_gpsLookFor = true;
unsigned long  g_dev_gpsIntervalRead = GPS_INTERVALREAD;
unsigned long  g_dev_gpsIntervalBefore = 0;

bool           g_dev_gpsIsConnected = false;
bool           g_dev_gpsIsReadAltitude = false;
bool           g_dev_gpsIsReadLocation = false;
bool           g_dev_gpsIsReadTime = false;
bool           g_dev_gpsIsReadDate = false;
bool           g_dev_gpsIsReadAll = false;

char           g_DL_GpsAltitud [LEN_DL_GPSALTITUDE] = "\0";
char           g_DL_GpsLatiLong [LEN_DL_GPSLATILONG] = "\0"; 
char           g_DL_GpsDateTime[LEN_DL_GPSDATETIME] = "\0";
char           g_DL_GpsSatellites[LEN_DL_GPSSATELLITES] = "\0";
#endif
