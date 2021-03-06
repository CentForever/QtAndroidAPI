#pragma once

#ifndef ANDROID_VIEW_DRAGEVENT
#define ANDROID_VIEW_DRAGEVENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ClipDescription;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class ClipData;
}

namespace __jni_impl::android::view
{
	class DragEvent : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACTION_DRAG_ENDED();
		static jint ACTION_DRAG_ENTERED();
		static jint ACTION_DRAG_EXITED();
		static jint ACTION_DRAG_LOCATION();
		static jint ACTION_DRAG_STARTED();
		static jint ACTION_DROP();
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jboolean getResult();
		QAndroidJniObject getClipDescription();
		jobject getLocalState();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getClipData();
		jint getAction();
		jfloat getX();
		jfloat getY();
	};
} // namespace __jni_impl::android::view

#include "../content/ClipDescription.hpp"
#include "../os/Parcel.hpp"
#include "../content/ClipData.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jint DragEvent::ACTION_DRAG_ENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENDED"
		);
	}
	jint DragEvent::ACTION_DRAG_ENTERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENTERED"
		);
	}
	jint DragEvent::ACTION_DRAG_EXITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_EXITED"
		);
	}
	jint DragEvent::ACTION_DRAG_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_LOCATION"
		);
	}
	jint DragEvent::ACTION_DRAG_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_STARTED"
		);
	}
	jint DragEvent::ACTION_DROP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DROP"
		);
	}
	QAndroidJniObject DragEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.DragEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void DragEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.DragEvent",
			"(V)V");
	}
	
	// Methods
	jstring DragEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DragEvent::getResult()
	{
		return __thiz.callMethod<jboolean>(
			"getResult",
			"()Z"
		);
	}
	QAndroidJniObject DragEvent::getClipDescription()
	{
		return __thiz.callObjectMethod(
			"getClipDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	jobject DragEvent::getLocalState()
	{
		return __thiz.callObjectMethod(
			"getLocalState",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint DragEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DragEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DragEvent::getClipData()
	{
		return __thiz.callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	jint DragEvent::getAction()
	{
		return __thiz.callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	jfloat DragEvent::getX()
	{
		return __thiz.callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat DragEvent::getY()
	{
		return __thiz.callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class DragEvent : public __jni_impl::android::view::DragEvent
	{
	public:
		DragEvent(QAndroidJniObject obj) { __thiz = obj; }
		DragEvent()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_DRAGEVENT

