/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mosaic_daemon_LightroomProcessMonitor */

#ifndef _Included_com_mosaic_daemon_LightroomProcessMonitor
#define _Included_com_mosaic_daemon_LightroomProcessMonitor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mosaic_daemon_LightroomProcessMonitor
 * Method:    nativeMonitorProcess
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mosaic_daemon_LightroomProcessMonitor_nativeMonitorProcess
  (JNIEnv *, jobject);

/*
 * Class:     com_mosaic_daemon_LightroomProcessMonitor
 * Method:    nativeProcessIsRunning
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_mosaic_daemon_LightroomProcessMonitor_nativeProcessIsRunning
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
