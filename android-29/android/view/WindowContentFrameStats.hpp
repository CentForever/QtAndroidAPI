#pragma once

#ifndef ANDROID_VIEW_WINDOWCONTENTFRAMESTATS
#define ANDROID_VIEW_WINDOWCONTENTFRAMESTATS

#include "FrameStats.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class WindowContentFrameStats : public __jni_impl::android::view::FrameStats
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jlong getFramePostedTimeNano(jint arg0);
		jlong getFrameReadyTimeNano(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject WindowContentFrameStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.WindowContentFrameStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void WindowContentFrameStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowContentFrameStats",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WindowContentFrameStats::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jlong WindowContentFrameStats::getFramePostedTimeNano(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getFramePostedTimeNano",
			"(I)J",
			arg0);
	}
	jlong WindowContentFrameStats::getFrameReadyTimeNano(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getFrameReadyTimeNano",
			"(I)J",
			arg0);
	}
	jint WindowContentFrameStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void WindowContentFrameStats::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class WindowContentFrameStats : public __jni_impl::android::view::WindowContentFrameStats
	{
	public:
		WindowContentFrameStats(QAndroidJniObject obj) { __thiz = obj; }
		WindowContentFrameStats()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_WINDOWCONTENTFRAMESTATS
