#pragma once

#ifndef ANDROID_TELEPHONY_CELLINFOCDMA
#define ANDROID_TELEPHONY_CELLINFOCDMA

#include "../../__JniBaseClass.hpp"
#include "CellInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::telephony
{
	class CellIdentityCdma;
}
namespace __jni_impl::android::telephony
{
	class CellSignalStrengthCdma;
}

namespace __jni_impl::android::telephony
{
	class CellInfoCdma : public __jni_impl::android::telephony::CellInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getCellIdentity();
		QAndroidJniObject getCellSignalStrength();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"
#include "CellIdentityCdma.hpp"
#include "CellSignalStrengthCdma.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellInfoCdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellInfoCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellInfoCdma::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellInfoCdma",
			"(V)V");
	}
	
	// Methods
	jboolean CellInfoCdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CellInfoCdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellInfoCdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CellInfoCdma::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CellInfoCdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject CellInfoCdma::getCellIdentity()
	{
		return __thiz.callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityCdma;"
		);
	}
	QAndroidJniObject CellInfoCdma::getCellSignalStrength()
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthCdma;"
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellInfoCdma : public __jni_impl::android::telephony::CellInfoCdma
	{
	public:
		CellInfoCdma(QAndroidJniObject obj) { __thiz = obj; }
		CellInfoCdma()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLINFOCDMA

