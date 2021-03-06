#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_SETTINGS
#define ANDROID_PROVIDER_CONTACTS_SETTINGS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}

namespace __jni_impl::android::provider
{
	class Contacts_Settings : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring SYNC_EVERYTHING();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getSetting(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2);
		static void setSetting(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Contacts_Settings::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Settings",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_Settings::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Settings",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Settings::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Settings",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Settings::SYNC_EVERYTHING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Settings",
			"SYNC_EVERYTHING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Contacts_Settings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Settings",
			"(V)V");
	}
	
	// Methods
	jstring Contacts_Settings::getSetting(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$Settings",
			"getSetting",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	void Contacts_Settings::setSetting(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Contacts$Settings",
			"setSetting",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_Settings : public __jni_impl::android::provider::Contacts_Settings
	{
	public:
		Contacts_Settings(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_Settings()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_SETTINGS

