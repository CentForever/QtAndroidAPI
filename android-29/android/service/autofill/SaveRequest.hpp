#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_SAVEREQUEST
#define ANDROID_SERVICE_AUTOFILL_SAVEREQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::service::autofill
{
	class SaveRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getFillContexts();
		QAndroidJniObject getDatasetIds();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getClientState();
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject SaveRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.SaveRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void SaveRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.SaveRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SaveRequest::getFillContexts()
	{
		return __thiz.callObjectMethod(
			"getFillContexts",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SaveRequest::getDatasetIds()
	{
		return __thiz.callObjectMethod(
			"getDatasetIds",
			"()Ljava/util/List;"
		);
	}
	jint SaveRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SaveRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SaveRequest::getClientState()
	{
		return __thiz.callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class SaveRequest : public __jni_impl::android::service::autofill::SaveRequest
	{
	public:
		SaveRequest(QAndroidJniObject obj) { __thiz = obj; }
		SaveRequest()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_SAVEREQUEST

