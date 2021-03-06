#pragma once

#ifndef JAVAX_CRYPTO_AEADBADTAGEXCEPTION
#define JAVAX_CRYPTO_AEADBADTAGEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"
#include "BadPaddingException.hpp"


namespace __jni_impl::javax::crypto
{
	class AEADBadTagException : public __jni_impl::javax::crypto::BadPaddingException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::crypto


namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void AEADBadTagException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.AEADBadTagException",
			"()V");
	}
	void AEADBadTagException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.AEADBadTagException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class AEADBadTagException : public __jni_impl::javax::crypto::AEADBadTagException
	{
	public:
		AEADBadTagException(QAndroidJniObject obj) { __thiz = obj; }
		AEADBadTagException()
		{
			__constructor();
		}
		AEADBadTagException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_AEADBADTAGEXCEPTION

