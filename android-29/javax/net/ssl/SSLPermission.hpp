#pragma once

#ifndef JAVAX_NET_SSL_SSLPERMISSION
#define JAVAX_NET_SSL_SSLPERMISSION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/BasicPermission.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLPermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SSLPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLPermission : public __jni_impl::javax::net::ssl::SSLPermission
	{
	public:
		SSLPermission(QAndroidJniObject obj) { __thiz = obj; }
		SSLPermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SSLPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLPERMISSION

