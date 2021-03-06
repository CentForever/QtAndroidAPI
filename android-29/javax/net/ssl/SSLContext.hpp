#pragma once

#ifndef JAVAX_NET_SSL_SSLCONTEXT
#define JAVAX_NET_SSL_SSLCONTEXT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLContextSpi;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLServerSocketFactory;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLEngine;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLParameters;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLSocketFactory;
}

namespace __jni_impl::javax::net::ssl
{
	class SSLContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		void init(jarray arg0, jarray arg1, __jni_impl::java::security::SecureRandom arg2);
		jstring getProtocol();
		QAndroidJniObject getProvider();
		static void setDefault(__jni_impl::javax::net::ssl::SSLContext arg0);
		QAndroidJniObject getServerSocketFactory();
		QAndroidJniObject createSSLEngine();
		QAndroidJniObject createSSLEngine(jstring arg0, jint arg1);
		QAndroidJniObject getServerSessionContext();
		QAndroidJniObject getClientSessionContext();
		QAndroidJniObject getDefaultSSLParameters();
		QAndroidJniObject getSupportedSSLParameters();
		QAndroidJniObject getSocketFactory();
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/security/Provider.hpp"
#include "SSLContextSpi.hpp"
#include "../../../java/security/SecureRandom.hpp"
#include "SSLServerSocketFactory.hpp"
#include "SSLEngine.hpp"
#include "SSLParameters.hpp"
#include "SSLSocketFactory.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLContext",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SSLContext::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getDefault",
			"()Ljavax/net/ssl/SSLContext;"
		);
	}
	QAndroidJniObject SSLContext::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/SSLContext;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SSLContext::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SSLContext::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0
		);
	}
	void SSLContext::init(jarray arg0, jarray arg1, __jni_impl::java::security::SecureRandom arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jstring SSLContext::getProtocol()
	{
		return __thiz.callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SSLContext::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void SSLContext::setDefault(__jni_impl::javax::net::ssl::SSLContext arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"javax.net.ssl.SSLContext",
			"setDefault",
			"(Ljavax/net/ssl/SSLContext;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SSLContext::getServerSocketFactory()
	{
		return __thiz.callObjectMethod(
			"getServerSocketFactory",
			"()Ljavax/net/ssl/SSLServerSocketFactory;"
		);
	}
	QAndroidJniObject SSLContext::createSSLEngine()
	{
		return __thiz.callObjectMethod(
			"createSSLEngine",
			"()Ljavax/net/ssl/SSLEngine;"
		);
	}
	QAndroidJniObject SSLContext::createSSLEngine(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createSSLEngine",
			"(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SSLContext::getServerSessionContext()
	{
		return __thiz.callObjectMethod(
			"getServerSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	QAndroidJniObject SSLContext::getClientSessionContext()
	{
		return __thiz.callObjectMethod(
			"getClientSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	QAndroidJniObject SSLContext::getDefaultSSLParameters()
	{
		return __thiz.callObjectMethod(
			"getDefaultSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	QAndroidJniObject SSLContext::getSupportedSSLParameters()
	{
		return __thiz.callObjectMethod(
			"getSupportedSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	QAndroidJniObject SSLContext::getSocketFactory()
	{
		return __thiz.callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLContext : public __jni_impl::javax::net::ssl::SSLContext
	{
	public:
		SSLContext(QAndroidJniObject obj) { __thiz = obj; }
		SSLContext()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLCONTEXT

