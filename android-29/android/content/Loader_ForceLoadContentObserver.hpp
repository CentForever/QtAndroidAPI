#pragma once

#ifndef ANDROID_CONTENT_LOADER_FORCELOADCONTENTOBSERVER
#define ANDROID_CONTENT_LOADER_FORCELOADCONTENTOBSERVER

#include "../../__JniBaseClass.hpp"
#include "../database/ContentObserver.hpp"

namespace __jni_impl::android::content
{
	class Loader;
}

namespace __jni_impl::android::content
{
	class Loader_ForceLoadContentObserver : public __jni_impl::android::database::ContentObserver
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Loader arg0);
		
		// Methods
		void onChange(jboolean arg0);
		jboolean deliverSelfNotifications();
	};
} // namespace __jni_impl::android::content

#include "Loader.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void Loader_ForceLoadContentObserver::__constructor(__jni_impl::android::content::Loader arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Loader$ForceLoadContentObserver",
			"(Landroid/content/Loader;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void Loader_ForceLoadContentObserver::onChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
	jboolean Loader_ForceLoadContentObserver::deliverSelfNotifications()
	{
		return __thiz.callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class Loader_ForceLoadContentObserver : public __jni_impl::android::content::Loader_ForceLoadContentObserver
	{
	public:
		Loader_ForceLoadContentObserver(QAndroidJniObject obj) { __thiz = obj; }
		Loader_ForceLoadContentObserver(__jni_impl::android::content::Loader arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_LOADER_FORCELOADCONTENTOBSERVER

