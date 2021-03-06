#pragma once

#ifndef ANDROID_NET_WIFI_HOTSPOT2_CONFIGPARSER
#define ANDROID_NET_WIFI_HOTSPOT2_CONFIGPARSER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}

namespace __jni_impl::android::net::wifi::hotspot2
{
	class ConfigParser : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject parsePasspointConfig(jstring arg0, jbyteArray arg1);
	};
} // namespace __jni_impl::android::net::wifi::hotspot2

#include "PasspointConfiguration.hpp"

namespace __jni_impl::android::net::wifi::hotspot2
{
	// Fields
	
	// Constructors
	void ConfigParser::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.ConfigParser",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ConfigParser::parsePasspointConfig(jstring arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.hotspot2.ConfigParser",
			"parsePasspointConfig",
			"(Ljava/lang/String;[B)Landroid/net/wifi/hotspot2/PasspointConfiguration;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::hotspot2

namespace android::net::wifi::hotspot2
{
	class ConfigParser : public __jni_impl::android::net::wifi::hotspot2::ConfigParser
	{
	public:
		ConfigParser(QAndroidJniObject obj) { __thiz = obj; }
		ConfigParser()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::hotspot2

#endif // ANDROID_NET_WIFI_HOTSPOT2_CONFIGPARSER

