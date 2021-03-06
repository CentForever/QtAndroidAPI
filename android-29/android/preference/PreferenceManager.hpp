#pragma once

#ifndef ANDROID_PREFERENCE_PREFERENCEMANAGER
#define ANDROID_PREFERENCE_PREFERENCEMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::preference
{
	class Preference;
}
namespace __jni_impl::android::preference
{
	class PreferenceScreen;
}

namespace __jni_impl::android::preference
{
	class PreferenceManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring KEY_HAS_SET_DEFAULT_VALUES();
		static jstring METADATA_KEY_PREFERENCES();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getSharedPreferences();
		QAndroidJniObject findPreference(jstring arg0);
		void setPreferenceDataStore(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getPreferenceDataStore();
		QAndroidJniObject createPreferenceScreen(__jni_impl::android::content::Context arg0);
		jstring getSharedPreferencesName();
		void setSharedPreferencesName(jstring arg0);
		jint getSharedPreferencesMode();
		void setSharedPreferencesMode(jint arg0);
		void setStorageDefault();
		void setStorageDeviceProtected();
		jboolean isStorageDefault();
		jboolean isStorageDeviceProtected();
		static QAndroidJniObject getDefaultSharedPreferences(__jni_impl::android::content::Context arg0);
		static jstring getDefaultSharedPreferencesName(__jni_impl::android::content::Context arg0);
		static void setDefaultValues(__jni_impl::android::content::Context arg0, jint arg1, jboolean arg2);
		static void setDefaultValues(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jint arg3, jboolean arg4);
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "Preference.hpp"
#include "PreferenceScreen.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	jstring PreferenceManager::KEY_HAS_SET_DEFAULT_VALUES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceManager",
			"KEY_HAS_SET_DEFAULT_VALUES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PreferenceManager::METADATA_KEY_PREFERENCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceManager",
			"METADATA_KEY_PREFERENCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void PreferenceManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PreferenceManager::getSharedPreferences()
	{
		return __thiz.callObjectMethod(
			"getSharedPreferences",
			"()Landroid/content/SharedPreferences;"
		);
	}
	QAndroidJniObject PreferenceManager::findPreference(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0
		);
	}
	void PreferenceManager::setPreferenceDataStore(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreferenceDataStore",
			"(Landroid/preference/PreferenceDataStore;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PreferenceManager::getPreferenceDataStore()
	{
		return __thiz.callObjectMethod(
			"getPreferenceDataStore",
			"()Landroid/preference/PreferenceDataStore;"
		);
	}
	QAndroidJniObject PreferenceManager::createPreferenceScreen(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"createPreferenceScreen",
			"(Landroid/content/Context;)Landroid/preference/PreferenceScreen;",
			arg0.__jniObject().object()
		);
	}
	jstring PreferenceManager::getSharedPreferencesName()
	{
		return __thiz.callObjectMethod(
			"getSharedPreferencesName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PreferenceManager::setSharedPreferencesName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSharedPreferencesName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jint PreferenceManager::getSharedPreferencesMode()
	{
		return __thiz.callMethod<jint>(
			"getSharedPreferencesMode",
			"()I"
		);
	}
	void PreferenceManager::setSharedPreferencesMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSharedPreferencesMode",
			"(I)V",
			arg0
		);
	}
	void PreferenceManager::setStorageDefault()
	{
		__thiz.callMethod<void>(
			"setStorageDefault",
			"()V"
		);
	}
	void PreferenceManager::setStorageDeviceProtected()
	{
		__thiz.callMethod<void>(
			"setStorageDeviceProtected",
			"()V"
		);
	}
	jboolean PreferenceManager::isStorageDefault()
	{
		return __thiz.callMethod<jboolean>(
			"isStorageDefault",
			"()Z"
		);
	}
	jboolean PreferenceManager::isStorageDeviceProtected()
	{
		return __thiz.callMethod<jboolean>(
			"isStorageDeviceProtected",
			"()Z"
		);
	}
	QAndroidJniObject PreferenceManager::getDefaultSharedPreferences(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferences",
			"(Landroid/content/Context;)Landroid/content/SharedPreferences;",
			arg0.__jniObject().object()
		);
	}
	jstring PreferenceManager::getDefaultSharedPreferencesName(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferencesName",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void PreferenceManager::setDefaultValues(__jni_impl::android::content::Context arg0, jint arg1, jboolean arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.preference.PreferenceManager",
			"setDefaultValues",
			"(Landroid/content/Context;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void PreferenceManager::setDefaultValues(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jint arg3, jboolean arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.preference.PreferenceManager",
			"setDefaultValues",
			"(Landroid/content/Context;Ljava/lang/String;IIZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class PreferenceManager : public __jni_impl::android::preference::PreferenceManager
	{
	public:
		PreferenceManager(QAndroidJniObject obj) { __thiz = obj; }
		PreferenceManager()
		{
			__constructor();
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_PREFERENCEMANAGER

