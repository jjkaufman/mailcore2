#include "com_libmailcore_IMAPIdentityOperation.h"

#include "MCBaseTypes.h"
#include "JavaHandle.h"
#include "TypesUtils.h"
#include "MCIMAPIdentityOperation.h"

using namespace mailcore;

#define nativeType IMAPIdentityOperation
#define javaType nativeType

JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPIdentityOperation_serverIdentity
  (JNIEnv * env, jobject obj)
{
    return MC_JAVA_BRIDGE_GET(serverIdentity);
}

MC_JAVA_BRIDGE
