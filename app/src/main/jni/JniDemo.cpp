#include <jni.h>
#include <string>


extern "C" JNIEXPORT jstring JNICALL Java_com_softgraden_jnidemo_JniDemo_getStringFromJni
  (JNIEnv* env, jclass ){
//return env-> NewStringUTF( "成功回调的内容");
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
  }
extern "C"
JNIEXPORT jstring JNICALL
Java_com_softgraden_jnidemo_JniDemo_getSSS(JNIEnv *env, jclass type) {

    std::string hello = "SSSSSSSSSSSSS";
    return env->NewStringUTF(hello.c_str());
}