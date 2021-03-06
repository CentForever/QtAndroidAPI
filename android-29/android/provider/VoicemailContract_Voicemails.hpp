#pragma once

#ifndef ANDROID_PROVIDER_VOICEMAILCONTRACT_VOICEMAILS
#define ANDROID_PROVIDER_VOICEMAILCONTRACT_VOICEMAILS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class VoicemailContract_Voicemails : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ARCHIVED();
		static jstring BACKED_UP();
		static QAndroidJniObject CONTENT_URI();
		static jstring DATE();
		static jstring DELETED();
		static jstring DIRTY();
		static jint DIRTY_RETAIN();
		static jstring DIR_TYPE();
		static jstring DURATION();
		static jstring HAS_CONTENT();
		static jstring IS_OMTP_VOICEMAIL();
		static jstring IS_READ();
		static jstring ITEM_TYPE();
		static jstring LAST_MODIFIED();
		static jstring MIME_TYPE();
		static jstring NEW();
		static jstring NUMBER();
		static jstring PHONE_ACCOUNT_COMPONENT_NAME();
		static jstring PHONE_ACCOUNT_ID();
		static jstring RESTORED();
		static jstring SOURCE_DATA();
		static jstring SOURCE_PACKAGE();
		static jstring TRANSCRIPTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject buildSourceUri(jstring arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring VoicemailContract_Voicemails::ARCHIVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"ARCHIVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::BACKED_UP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"BACKED_UP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject VoicemailContract_Voicemails::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring VoicemailContract_Voicemails::DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::DELETED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DELETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::DIRTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DIRTY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint VoicemailContract_Voicemails::DIRTY_RETAIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Voicemails",
			"DIRTY_RETAIN"
		);
	}
	jstring VoicemailContract_Voicemails::DIR_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DIR_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::HAS_CONTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"HAS_CONTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::IS_OMTP_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"IS_OMTP_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::IS_READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"IS_READ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::LAST_MODIFIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"LAST_MODIFIED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"MIME_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::NEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"NEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::PHONE_ACCOUNT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::RESTORED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"RESTORED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::SOURCE_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"SOURCE_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::SOURCE_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"SOURCE_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Voicemails::TRANSCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"TRANSCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void VoicemailContract_Voicemails::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.VoicemailContract$Voicemails",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject VoicemailContract_Voicemails::buildSourceUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.VoicemailContract$Voicemails",
			"buildSourceUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class VoicemailContract_Voicemails : public __jni_impl::android::provider::VoicemailContract_Voicemails
	{
	public:
		VoicemailContract_Voicemails(QAndroidJniObject obj) { __thiz = obj; }
		VoicemailContract_Voicemails()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_VOICEMAILCONTRACT_VOICEMAILS

