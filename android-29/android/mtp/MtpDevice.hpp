#pragma once

#ifndef ANDROID_MTP_MTPDEVICE
#define ANDROID_MTP_MTPDEVICE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::usb
{
	class UsbDevice;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbDeviceConnection;
}
namespace __jni_impl::android::mtp
{
	class MtpDeviceInfo;
}
namespace __jni_impl::android::mtp
{
	class MtpStorageInfo;
}
namespace __jni_impl::android::mtp
{
	class MtpObjectInfo;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::mtp
{
	class MtpEvent;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}

namespace __jni_impl::android::mtp
{
	class MtpDevice : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::hardware::usb::UsbDevice arg0);
		
		// Methods
		jstring toString();
		jlong getParent(jint arg0);
		void close();
		jboolean open(__jni_impl::android::hardware::usb::UsbDeviceConnection arg0);
		jbyteArray getObject(jint arg0, jint arg1);
		QAndroidJniObject getDeviceInfo();
		jlong getStorageId(jint arg0);
		jintArray getStorageIds();
		jintArray getObjectHandles(jint arg0, jint arg1, jint arg2);
		jlong getPartialObject(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3);
		jlong getPartialObject64(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3);
		QAndroidJniObject getStorageInfo(jint arg0);
		QAndroidJniObject getObjectInfo(jint arg0);
		jboolean deleteObject(jint arg0);
		jboolean importFile(jint arg0, jstring arg1);
		jboolean importFile(jint arg0, __jni_impl::android::os::ParcelFileDescriptor arg1);
		jboolean sendObject(jint arg0, jlong arg1, __jni_impl::android::os::ParcelFileDescriptor arg2);
		QAndroidJniObject sendObjectInfo(__jni_impl::android::mtp::MtpObjectInfo arg0);
		QAndroidJniObject readEvent(__jni_impl::android::os::CancellationSignal arg0);
		jbyteArray getThumbnail(jint arg0);
		jstring getDeviceName();
		jint getDeviceId();
	};
} // namespace __jni_impl::android::mtp

#include "../hardware/usb/UsbDevice.hpp"
#include "../hardware/usb/UsbDeviceConnection.hpp"
#include "MtpDeviceInfo.hpp"
#include "MtpStorageInfo.hpp"
#include "MtpObjectInfo.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "MtpEvent.hpp"
#include "../os/CancellationSignal.hpp"

namespace __jni_impl::android::mtp
{
	// Fields
	
	// Constructors
	void MtpDevice::__constructor(__jni_impl::android::hardware::usb::UsbDevice arg0)
	{
		__thiz = QAndroidJniObject(
			"android.mtp.MtpDevice",
			"(Landroid/hardware/usb/UsbDevice;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring MtpDevice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong MtpDevice::getParent(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getParent",
			"(I)J",
			arg0
		);
	}
	void MtpDevice::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean MtpDevice::open(__jni_impl::android::hardware::usb::UsbDeviceConnection arg0)
	{
		return __thiz.callMethod<jboolean>(
			"open",
			"(Landroid/hardware/usb/UsbDeviceConnection;)Z",
			arg0.__jniObject().object()
		);
	}
	jbyteArray MtpDevice::getObject(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(II)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	QAndroidJniObject MtpDevice::getDeviceInfo()
	{
		return __thiz.callObjectMethod(
			"getDeviceInfo",
			"()Landroid/mtp/MtpDeviceInfo;"
		);
	}
	jlong MtpDevice::getStorageId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getStorageId",
			"(I)J",
			arg0
		);
	}
	jintArray MtpDevice::getStorageIds()
	{
		return __thiz.callObjectMethod(
			"getStorageIds",
			"()[I"
		).object<jintArray>();
	}
	jintArray MtpDevice::getObjectHandles(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"getObjectHandles",
			"(III)[I",
			arg0,
			arg1,
			arg2
		).object<jintArray>();
	}
	jlong MtpDevice::getPartialObject(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3)
	{
		return __thiz.callMethod<jlong>(
			"getPartialObject",
			"(IJJ[B)J",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jlong MtpDevice::getPartialObject64(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3)
	{
		return __thiz.callMethod<jlong>(
			"getPartialObject64",
			"(IJJ[B)J",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject MtpDevice::getStorageInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStorageInfo",
			"(I)Landroid/mtp/MtpStorageInfo;",
			arg0
		);
	}
	QAndroidJniObject MtpDevice::getObjectInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getObjectInfo",
			"(I)Landroid/mtp/MtpObjectInfo;",
			arg0
		);
	}
	jboolean MtpDevice::deleteObject(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteObject",
			"(I)Z",
			arg0
		);
	}
	jboolean MtpDevice::importFile(jint arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"importFile",
			"(ILjava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean MtpDevice::importFile(jint arg0, __jni_impl::android::os::ParcelFileDescriptor arg1)
	{
		return __thiz.callMethod<jboolean>(
			"importFile",
			"(ILandroid/os/ParcelFileDescriptor;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean MtpDevice::sendObject(jint arg0, jlong arg1, __jni_impl::android::os::ParcelFileDescriptor arg2)
	{
		return __thiz.callMethod<jboolean>(
			"sendObject",
			"(IJLandroid/os/ParcelFileDescriptor;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MtpDevice::sendObjectInfo(__jni_impl::android::mtp::MtpObjectInfo arg0)
	{
		return __thiz.callObjectMethod(
			"sendObjectInfo",
			"(Landroid/mtp/MtpObjectInfo;)Landroid/mtp/MtpObjectInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MtpDevice::readEvent(__jni_impl::android::os::CancellationSignal arg0)
	{
		return __thiz.callObjectMethod(
			"readEvent",
			"(Landroid/os/CancellationSignal;)Landroid/mtp/MtpEvent;",
			arg0.__jniObject().object()
		);
	}
	jbyteArray MtpDevice::getThumbnail(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getThumbnail",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jstring MtpDevice::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MtpDevice::getDeviceId()
	{
		return __thiz.callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
} // namespace __jni_impl::android::mtp

namespace android::mtp
{
	class MtpDevice : public __jni_impl::android::mtp::MtpDevice
	{
	public:
		MtpDevice(QAndroidJniObject obj) { __thiz = obj; }
		MtpDevice(__jni_impl::android::hardware::usb::UsbDevice arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::mtp

#endif // ANDROID_MTP_MTPDEVICE

