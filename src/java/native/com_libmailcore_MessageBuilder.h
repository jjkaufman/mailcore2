/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_libmailcore_MessageBuilder */

#ifndef _Included_com_libmailcore_MessageBuilder
#define _Included_com_libmailcore_MessageBuilder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    setHTMLBody
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MessageBuilder_setHTMLBody
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    htmlBody
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_MessageBuilder_htmlBody
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    setTextBody
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MessageBuilder_setTextBody
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    textBody
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_MessageBuilder_textBody
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    setAttachments
 * Signature: (Ljava/util/List;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MessageBuilder_setAttachments
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    attachments
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_MessageBuilder_attachments
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    addAttachment
 * Signature: (Lcom/libmailcore/Attachment;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MessageBuilder_addAttachment
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    setRelatedAttachments
 * Signature: (Ljava/util/List;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MessageBuilder_setRelatedAttachments
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    relatedAttachments
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_MessageBuilder_relatedAttachments
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    addRelatedAttachment
 * Signature: (Lcom/libmailcore/Attachment;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MessageBuilder_addRelatedAttachment
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    setBoundaryPrefix
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MessageBuilder_setBoundaryPrefix
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    boundaryPrefix
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_MessageBuilder_boundaryPrefix
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    data
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_libmailcore_MessageBuilder_data
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    dataForEncryption
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_libmailcore_MessageBuilder_dataForEncryption
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    htmlRendering
 * Signature: (Lcom/libmailcore/HTMLRendererTemplateCallback;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_MessageBuilder_htmlRendering
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    htmlBodyRendering
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_MessageBuilder_htmlBodyRendering
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    plainTextRendering
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_MessageBuilder_plainTextRendering
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    plainTextBodyRendering
 * Signature: (Z)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_MessageBuilder_plainTextBodyRendering
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    openPGPSignedMessageDataWithSignatureData
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_libmailcore_MessageBuilder_openPGPSignedMessageDataWithSignatureData
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    openPGPEncryptedMessageDataWithEncryptedData
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_libmailcore_MessageBuilder_openPGPEncryptedMessageDataWithEncryptedData
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_libmailcore_MessageBuilder
 * Method:    setupNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MessageBuilder_setupNative
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
