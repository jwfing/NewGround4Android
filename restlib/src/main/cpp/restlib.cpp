#include <jni.h>
#include <string>
#include "object.h"

extern "C" JNIEXPORT jstring JNICALL
Java_org_jwfing_restlib_NativeLib_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = taptap::tds::Object::getServerTime();
    return env->NewStringUTF(hello.c_str());
}