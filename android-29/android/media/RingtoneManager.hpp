#pragma once

#ifndef ANDROID_MEDIA_RINGTONEMANAGER
#define ANDROID_MEDIA_RINGTONEMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::media
{
	class Ringtone;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}

namespace __jni_impl::android::media
{
	class RingtoneManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_RINGTONE_PICKER();
		static jstring EXTRA_RINGTONE_DEFAULT_URI();
		static jstring EXTRA_RINGTONE_EXISTING_URI();
		static jstring EXTRA_RINGTONE_INCLUDE_DRM();
		static jstring EXTRA_RINGTONE_PICKED_URI();
		static jstring EXTRA_RINGTONE_SHOW_DEFAULT();
		static jstring EXTRA_RINGTONE_SHOW_SILENT();
		static jstring EXTRA_RINGTONE_TITLE();
		static jstring EXTRA_RINGTONE_TYPE();
		static jint ID_COLUMN_INDEX();
		static jint TITLE_COLUMN_INDEX();
		static jint TYPE_ALARM();
		static jint TYPE_ALL();
		static jint TYPE_NOTIFICATION();
		static jint TYPE_RINGTONE();
		static jint URI_COLUMN_INDEX();
		
		// Constructors
		void __constructor(__jni_impl::android::app::Activity arg0);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		static jboolean isDefault(__jni_impl::android::net::Uri arg0);
		void setType(jint arg0);
		jint inferStreamType();
		void setStopPreviousRingtone(jboolean arg0);
		void stopPreviousRingtone();
		jboolean getStopPreviousRingtone();
		jboolean getIncludeDrm();
		void setIncludeDrm(jboolean arg0);
		QAndroidJniObject getCursor();
		static QAndroidJniObject getRingtone(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		QAndroidJniObject getRingtone(jint arg0);
		QAndroidJniObject getRingtoneUri(jint arg0);
		jint getRingtonePosition(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject getValidRingtoneUri(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject getActualDefaultRingtoneUri(__jni_impl::android::content::Context arg0, jint arg1);
		static void setActualDefaultRingtoneUri(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::net::Uri arg2);
		static jint getDefaultType(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject getDefaultUri(jint arg0);
		static QAndroidJniObject openDefaultRingtoneUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		static jboolean hasHapticChannels(__jni_impl::android::net::Uri arg0);
		jboolean hasHapticChannels(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "../app/Activity.hpp"
#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "Ringtone.hpp"
#include "../content/res/AssetFileDescriptor.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jstring RingtoneManager::ACTION_RINGTONE_PICKER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"ACTION_RINGTONE_PICKER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_DEFAULT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_DEFAULT_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_EXISTING_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_EXISTING_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_INCLUDE_DRM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_INCLUDE_DRM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_PICKED_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_PICKED_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_SHOW_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_SHOW_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_SHOW_SILENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_SHOW_SILENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint RingtoneManager::ID_COLUMN_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"ID_COLUMN_INDEX"
		);
	}
	jint RingtoneManager::TITLE_COLUMN_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TITLE_COLUMN_INDEX"
		);
	}
	jint RingtoneManager::TYPE_ALARM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_ALARM"
		);
	}
	jint RingtoneManager::TYPE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_ALL"
		);
	}
	jint RingtoneManager::TYPE_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_NOTIFICATION"
		);
	}
	jint RingtoneManager::TYPE_RINGTONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_RINGTONE"
		);
	}
	jint RingtoneManager::URI_COLUMN_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"URI_COLUMN_INDEX"
		);
	}
	
	// Constructors
	void RingtoneManager::__constructor(__jni_impl::android::app::Activity arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.RingtoneManager",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object());
	}
	void RingtoneManager::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.RingtoneManager",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean RingtoneManager::isDefault(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.RingtoneManager",
			"isDefault",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	void RingtoneManager::setType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	jint RingtoneManager::inferStreamType()
	{
		return __thiz.callMethod<jint>(
			"inferStreamType",
			"()I"
		);
	}
	void RingtoneManager::setStopPreviousRingtone(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStopPreviousRingtone",
			"(Z)V",
			arg0
		);
	}
	void RingtoneManager::stopPreviousRingtone()
	{
		__thiz.callMethod<void>(
			"stopPreviousRingtone",
			"()V"
		);
	}
	jboolean RingtoneManager::getStopPreviousRingtone()
	{
		return __thiz.callMethod<jboolean>(
			"getStopPreviousRingtone",
			"()Z"
		);
	}
	jboolean RingtoneManager::getIncludeDrm()
	{
		return __thiz.callMethod<jboolean>(
			"getIncludeDrm",
			"()Z"
		);
	}
	void RingtoneManager::setIncludeDrm(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIncludeDrm",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject RingtoneManager::getCursor()
	{
		return __thiz.callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	QAndroidJniObject RingtoneManager::getRingtone(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getRingtone",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/Ringtone;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RingtoneManager::getRingtone(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRingtone",
			"(I)Landroid/media/Ringtone;",
			arg0
		);
	}
	QAndroidJniObject RingtoneManager::getRingtoneUri(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRingtoneUri",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	jint RingtoneManager::getRingtonePosition(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"getRingtonePosition",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RingtoneManager::getValidRingtoneUri(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getValidRingtoneUri",
			"(Landroid/content/Context;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RingtoneManager::getActualDefaultRingtoneUri(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getActualDefaultRingtoneUri",
			"(Landroid/content/Context;I)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RingtoneManager::setActualDefaultRingtoneUri(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::net::Uri arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.media.RingtoneManager",
			"setActualDefaultRingtoneUri",
			"(Landroid/content/Context;ILandroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint RingtoneManager::getDefaultType(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.RingtoneManager",
			"getDefaultType",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RingtoneManager::getDefaultUri(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getDefaultUri",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject RingtoneManager::openDefaultRingtoneUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"openDefaultRingtoneUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean RingtoneManager::hasHapticChannels(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.RingtoneManager",
			"hasHapticChannels",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RingtoneManager::hasHapticChannels(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasHapticChannels",
			"(I)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class RingtoneManager : public __jni_impl::android::media::RingtoneManager
	{
	public:
		RingtoneManager(QAndroidJniObject obj) { __thiz = obj; }
		RingtoneManager(__jni_impl::android::app::Activity arg0)
		{
			__constructor(
				arg0);
		}
		RingtoneManager(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_RINGTONEMANAGER

