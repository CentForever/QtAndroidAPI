#pragma once

#ifndef ANDROID_VIEW_DISPLAY_MODE
#define ANDROID_VIEW_DISPLAY_MODE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class Display_Mode : public __JniBaseClass
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
		jint getPhysicalWidth();
		jint getModeId();
		jint getPhysicalHeight();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jfloat getRefreshRate();
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject Display_Mode::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.Display$Mode",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Display_Mode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.Display$Mode",
			"(V)V");
	}
	
	// Methods
	jboolean Display_Mode::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Display_Mode::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Display_Mode::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Display_Mode::getPhysicalWidth()
	{
		return __thiz.callMethod<jint>(
			"getPhysicalWidth",
			"()I"
		);
	}
	jint Display_Mode::getModeId()
	{
		return __thiz.callMethod<jint>(
			"getModeId",
			"()I"
		);
	}
	jint Display_Mode::getPhysicalHeight()
	{
		return __thiz.callMethod<jint>(
			"getPhysicalHeight",
			"()I"
		);
	}
	jint Display_Mode::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Display_Mode::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jfloat Display_Mode::getRefreshRate()
	{
		return __thiz.callMethod<jfloat>(
			"getRefreshRate",
			"()F"
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class Display_Mode : public __jni_impl::android::view::Display_Mode
	{
	public:
		Display_Mode(QAndroidJniObject obj) { __thiz = obj; }
		Display_Mode()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_DISPLAY_MODE

