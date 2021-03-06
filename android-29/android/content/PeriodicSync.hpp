#pragma once

#ifndef ANDROID_CONTENT_PERIODICSYNC
#define ANDROID_CONTENT_PERIODICSYNC

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accounts
{
	class Account;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class PeriodicSync : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		QAndroidJniObject account();
		jstring authority();
		QAndroidJniObject extras();
		jlong period();
		
		// Constructors
		void __constructor(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, jlong arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "../accounts/Account.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject PeriodicSync::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.PeriodicSync",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject PeriodicSync::account()
	{
		return __thiz.getObjectField(
			"account",
			"Landroid/accounts/Account;"
		);
	}
	jstring PeriodicSync::authority()
	{
		return __thiz.getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PeriodicSync::extras()
	{
		return __thiz.getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	jlong PeriodicSync::period()
	{
		return __thiz.getField<jlong>(
			"period"
		);
	}
	
	// Constructors
	void PeriodicSync::__constructor(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.PeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	
	// Methods
	jboolean PeriodicSync::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PeriodicSync::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PeriodicSync::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PeriodicSync::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class PeriodicSync : public __jni_impl::android::content::PeriodicSync
	{
	public:
		PeriodicSync(QAndroidJniObject obj) { __thiz = obj; }
		PeriodicSync(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, jlong arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_PERIODICSYNC

