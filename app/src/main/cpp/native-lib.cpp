#include <jni.h>
#include <string>
#include "native-lib.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_keti_astrastereos_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "This is Orbbec Astra Stereo S Driver from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_keti_astrastereos_MainActivity_astra_1initialize(JNIEnv *env, jobject instance) {

    // TODO
    return 1;

}extern "C"
JNIEXPORT jint JNICALL
Java_com_keti_astrastereos_MainActivity_sum(JNIEnv *env, jobject instance, jint a,
                                                     jint b) {

    // TODO
    return a + b;
}