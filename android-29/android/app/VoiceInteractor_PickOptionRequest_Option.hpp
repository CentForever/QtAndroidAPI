#pragma once

#ifndef ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_OPTION
#define ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_OPTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class VoiceInteractor_PickOptionRequest_Option : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		
		// Methods
		jint getIndex();
		void setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject getLabel();
		QAndroidJniObject getExtras();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint countSynonyms();
		QAndroidJniObject addSynonym(jstring arg0);
		QAndroidJniObject getSynonymAt(jint arg0);
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject VoiceInteractor_PickOptionRequest_Option::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.VoiceInteractor$PickOptionRequest$Option",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void VoiceInteractor_PickOptionRequest_Option::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$PickOptionRequest$Option",
			"(Ljava/lang/CharSequence;I)V",
			arg0,
			arg1);
	}
	
	// Methods
	jint VoiceInteractor_PickOptionRequest_Option::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	void VoiceInteractor_PickOptionRequest_Option::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject VoiceInteractor_PickOptionRequest_Option::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject VoiceInteractor_PickOptionRequest_Option::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	jint VoiceInteractor_PickOptionRequest_Option::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void VoiceInteractor_PickOptionRequest_Option::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint VoiceInteractor_PickOptionRequest_Option::countSynonyms()
	{
		return __thiz.callMethod<jint>(
			"countSynonyms",
			"()I");
	}
	QAndroidJniObject VoiceInteractor_PickOptionRequest_Option::addSynonym(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addSynonym",
			"(Ljava/lang/CharSequence;)Landroid/app/VoiceInteractor$PickOptionRequest$Option;",
			arg0);
	}
	QAndroidJniObject VoiceInteractor_PickOptionRequest_Option::getSynonymAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSynonymAt",
			"(I)Ljava/lang/CharSequence;",
			arg0);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class VoiceInteractor_PickOptionRequest_Option : public __jni_impl::android::app::VoiceInteractor_PickOptionRequest_Option
	{
	public:
		VoiceInteractor_PickOptionRequest_Option(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractor_PickOptionRequest_Option(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_OPTION
