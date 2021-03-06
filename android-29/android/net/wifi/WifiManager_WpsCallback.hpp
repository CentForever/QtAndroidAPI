#pragma once

#ifndef ANDROID_NET_WIFI_WIFIMANAGER_WPSCALLBACK
#define ANDROID_NET_WIFI_WIFIMANAGER_WPSCALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiManager_WpsCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onFailed(jint arg0);
		void onStarted(jstring arg0);
		void onSucceeded();
	};
} // namespace __jni_impl::android::net::wifi


namespace __jni_impl::android::net::wifi
{
	// Fields
	
	// Constructors
	void WifiManager_WpsCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiManager$WpsCallback",
			"()V");
	}
	
	// Methods
	void WifiManager_WpsCallback::onFailed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onFailed",
			"(I)V",
			arg0
		);
	}
	void WifiManager_WpsCallback::onStarted(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onStarted",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiManager_WpsCallback::onSucceeded()
	{
		__thiz.callMethod<void>(
			"onSucceeded",
			"()V"
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiManager_WpsCallback : public __jni_impl::android::net::wifi::WifiManager_WpsCallback
	{
	public:
		WifiManager_WpsCallback(QAndroidJniObject obj) { __thiz = obj; }
		WifiManager_WpsCallback()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFIMANAGER_WPSCALLBACK

