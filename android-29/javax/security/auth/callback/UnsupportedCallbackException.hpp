#pragma once

#ifndef JAVAX_SECURITY_AUTH_CALLBACK_UNSUPPORTEDCALLBACKEXCEPTION
#define JAVAX_SECURITY_AUTH_CALLBACK_UNSUPPORTEDCALLBACKEXCEPTION

#include "../../../../__JniBaseClass.hpp"
#include "../../../../java/lang/Exception.hpp"


namespace __jni_impl::javax::security::auth::callback
{
	class UnsupportedCallbackException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getCallback();
	};
} // namespace __jni_impl::javax::security::auth::callback


namespace __jni_impl::javax::security::auth::callback
{
	// Fields
	
	// Constructors
	void UnsupportedCallbackException::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.callback.UnsupportedCallbackException",
			"(Ljavax/security/auth/callback/Callback;)V",
			arg0.__jniObject().object());
	}
	void UnsupportedCallbackException::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.callback.UnsupportedCallbackException",
			"(Ljavax/security/auth/callback/Callback;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	QAndroidJniObject UnsupportedCallbackException::getCallback()
	{
		return __thiz.callObjectMethod(
			"getCallback",
			"()Ljavax/security/auth/callback/Callback;"
		);
	}
} // namespace __jni_impl::javax::security::auth::callback

namespace javax::security::auth::callback
{
	class UnsupportedCallbackException : public __jni_impl::javax::security::auth::callback::UnsupportedCallbackException
	{
	public:
		UnsupportedCallbackException(QAndroidJniObject obj) { __thiz = obj; }
		UnsupportedCallbackException(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		UnsupportedCallbackException(__jni_impl::__JniBaseClass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::security::auth::callback

#endif // JAVAX_SECURITY_AUTH_CALLBACK_UNSUPPORTEDCALLBACKEXCEPTION

