/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_bw_bd_jni_SerialPort */

#ifndef _Included_com_bw_bd_jni_SerialPort
#define _Included_com_bw_bd_jni_SerialPort
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_bw_bd_jni_SerialPort
 * Method:    UARTRecvNative
 * Signature: (B[B[I)I
 */
JNIEXPORT jint JNICALL Java_com_bw_bd_jni_SerialPort_UARTRecvNative
  (JNIEnv *, jclass, jbyte, jbyteArray, jintArray);

/*
 * Class:     com_bw_bd_jni_SerialPort
 * Method:    BDRecvNative
 * Signature: (B[B[I)I
 */
JNIEXPORT jint JNICALL Java_com_bw_bd_jni_SerialPort_BDRecvNative
  (JNIEnv *, jclass, jbyte, jbyteArray, jintArray);

/*
 * Class:     com_bw_bd_jni_SerialPort
 * Method:    open
 * Signature: (Ljava/lang/String;II)Ljava/io/FileDescriptor;
 */
JNIEXPORT jobject JNICALL Java_com_bw_bd_jni_SerialPort_open
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_bw_bd_jni_SerialPort
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_bw_bd_jni_SerialPort_close
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif