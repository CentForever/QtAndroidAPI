#pragma once

#ifndef JAVA_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION
#define JAVA_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "CertificateException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertificateEncodingException : public __jni_impl::java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertificateEncodingException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void CertificateEncodingException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void CertificateEncodingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void CertificateEncodingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateEncodingException : public __jni_impl::java::security::cert::CertificateEncodingException
	{
	public:
		CertificateEncodingException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateEncodingException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CertificateEncodingException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CertificateEncodingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CertificateEncodingException()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION

