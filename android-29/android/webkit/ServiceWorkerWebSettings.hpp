#pragma once

#ifndef ANDROID_WEBKIT_SERVICEWORKERWEBSETTINGS
#define ANDROID_WEBKIT_SERVICEWORKERWEBSETTINGS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class ServiceWorkerWebSettings : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void setCacheMode(jint arg0);
		void setBlockNetworkLoads(jboolean arg0);
		jboolean getBlockNetworkLoads();
		jint getCacheMode();
		void setAllowContentAccess(jboolean arg0);
		jboolean getAllowContentAccess();
		void setAllowFileAccess(jboolean arg0);
		jboolean getAllowFileAccess();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void ServiceWorkerWebSettings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ServiceWorkerWebSettings",
			"()V");
	}
	
	// Methods
	void ServiceWorkerWebSettings::setCacheMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCacheMode",
			"(I)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setBlockNetworkLoads(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBlockNetworkLoads",
			"(Z)V",
			arg0
		);
	}
	jboolean ServiceWorkerWebSettings::getBlockNetworkLoads()
	{
		return __thiz.callMethod<jboolean>(
			"getBlockNetworkLoads",
			"()Z"
		);
	}
	jint ServiceWorkerWebSettings::getCacheMode()
	{
		return __thiz.callMethod<jint>(
			"getCacheMode",
			"()I"
		);
	}
	void ServiceWorkerWebSettings::setAllowContentAccess(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowContentAccess",
			"(Z)V",
			arg0
		);
	}
	jboolean ServiceWorkerWebSettings::getAllowContentAccess()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowContentAccess",
			"()Z"
		);
	}
	void ServiceWorkerWebSettings::setAllowFileAccess(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowFileAccess",
			"(Z)V",
			arg0
		);
	}
	jboolean ServiceWorkerWebSettings::getAllowFileAccess()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowFileAccess",
			"()Z"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class ServiceWorkerWebSettings : public __jni_impl::android::webkit::ServiceWorkerWebSettings
	{
	public:
		ServiceWorkerWebSettings(QAndroidJniObject obj) { __thiz = obj; }
		ServiceWorkerWebSettings()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_SERVICEWORKERWEBSETTINGS

