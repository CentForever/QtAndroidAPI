#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS_INSERT
#define ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS_INSERT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_Intents_Insert : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION();
		static jstring COMPANY();
		static jstring DATA();
		static jstring EMAIL();
		static jstring EMAIL_ISPRIMARY();
		static jstring EMAIL_TYPE();
		static jstring EXTRA_ACCOUNT();
		static jstring EXTRA_DATA_SET();
		static jstring FULL_MODE();
		static jstring IM_HANDLE();
		static jstring IM_ISPRIMARY();
		static jstring IM_PROTOCOL();
		static jstring JOB_TITLE();
		static jstring NAME();
		static jstring NOTES();
		static jstring PHONE();
		static jstring PHONETIC_NAME();
		static jstring PHONE_ISPRIMARY();
		static jstring PHONE_TYPE();
		static jstring POSTAL();
		static jstring POSTAL_ISPRIMARY();
		static jstring POSTAL_TYPE();
		static jstring SECONDARY_EMAIL();
		static jstring SECONDARY_EMAIL_TYPE();
		static jstring SECONDARY_PHONE();
		static jstring SECONDARY_PHONE_TYPE();
		static jstring TERTIARY_EMAIL();
		static jstring TERTIARY_EMAIL_TYPE();
		static jstring TERTIARY_PHONE();
		static jstring TERTIARY_PHONE_TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_Intents_Insert::ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::COMPANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"COMPANY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EMAIL_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EMAIL_ISPRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EMAIL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EXTRA_ACCOUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EXTRA_ACCOUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::EXTRA_DATA_SET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"EXTRA_DATA_SET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::FULL_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"FULL_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::IM_HANDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"IM_HANDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::IM_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"IM_ISPRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::IM_PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"IM_PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::JOB_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"JOB_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::NOTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"NOTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::PHONETIC_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"PHONETIC_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::PHONE_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"PHONE_ISPRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"PHONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::POSTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"POSTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::POSTAL_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"POSTAL_ISPRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::POSTAL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"POSTAL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::SECONDARY_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"SECONDARY_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::SECONDARY_EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"SECONDARY_EMAIL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::SECONDARY_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"SECONDARY_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::SECONDARY_PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"SECONDARY_PHONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::TERTIARY_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"TERTIARY_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::TERTIARY_EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"TERTIARY_EMAIL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::TERTIARY_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"TERTIARY_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents_Insert::TERTIARY_PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents$Insert",
			"TERTIARY_PHONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_Intents_Insert::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Intents$Insert",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Intents_Insert : public __jni_impl::android::provider::ContactsContract_Intents_Insert
	{
	public:
		ContactsContract_Intents_Insert(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Intents_Insert()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS_INSERT

