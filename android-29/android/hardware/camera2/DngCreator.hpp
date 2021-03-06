#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_DNGCREATOR
#define ANDROID_HARDWARE_CAMERA2_DNGCREATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CameraCharacteristics;
}
namespace __jni_impl::android::hardware::camera2
{
	class CaptureResult;
}
namespace __jni_impl::android::location
{
	class Location;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::android::util
{
	class Size;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::media
{
	class Image;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::android::hardware::camera2
{
	class DngCreator : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAX_THUMBNAIL_DIMENSION();
		
		// Constructors
		void __constructor(__jni_impl::android::hardware::camera2::CameraCharacteristics arg0, __jni_impl::android::hardware::camera2::CaptureResult arg1);
		
		// Methods
		void close();
		QAndroidJniObject setLocation(__jni_impl::android::location::Location arg0);
		QAndroidJniObject setDescription(jstring arg0);
		void writeInputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::android::util::Size arg1, __jni_impl::java::io::InputStream arg2, jlong arg3);
		void writeImage(__jni_impl::java::io::OutputStream arg0, __jni_impl::android::media::Image arg1);
		QAndroidJniObject setOrientation(jint arg0);
		QAndroidJniObject setThumbnail(__jni_impl::android::media::Image arg0);
		QAndroidJniObject setThumbnail(__jni_impl::android::graphics::Bitmap arg0);
		void writeByteBuffer(__jni_impl::java::io::OutputStream arg0, __jni_impl::android::util::Size arg1, __jni_impl::java::nio::ByteBuffer arg2, jlong arg3);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "CameraCharacteristics.hpp"
#include "CaptureResult.hpp"
#include "../../location/Location.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "../../util/Size.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../media/Image.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	jint DngCreator::MAX_THUMBNAIL_DIMENSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.DngCreator",
			"MAX_THUMBNAIL_DIMENSION"
		);
	}
	
	// Constructors
	void DngCreator::__constructor(__jni_impl::android::hardware::camera2::CameraCharacteristics arg0, __jni_impl::android::hardware::camera2::CaptureResult arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.DngCreator",
			"(Landroid/hardware/camera2/CameraCharacteristics;Landroid/hardware/camera2/CaptureResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void DngCreator::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject DngCreator::setLocation(__jni_impl::android::location::Location arg0)
	{
		return __thiz.callObjectMethod(
			"setLocation",
			"(Landroid/location/Location;)Landroid/hardware/camera2/DngCreator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DngCreator::setDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/hardware/camera2/DngCreator;",
			arg0
		);
	}
	void DngCreator::writeInputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::android::util::Size arg1, __jni_impl::java::io::InputStream arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"writeInputStream",
			"(Ljava/io/OutputStream;Landroid/util/Size;Ljava/io/InputStream;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DngCreator::writeImage(__jni_impl::java::io::OutputStream arg0, __jni_impl::android::media::Image arg1)
	{
		__thiz.callMethod<void>(
			"writeImage",
			"(Ljava/io/OutputStream;Landroid/media/Image;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DngCreator::setOrientation(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setOrientation",
			"(I)Landroid/hardware/camera2/DngCreator;",
			arg0
		);
	}
	QAndroidJniObject DngCreator::setThumbnail(__jni_impl::android::media::Image arg0)
	{
		return __thiz.callObjectMethod(
			"setThumbnail",
			"(Landroid/media/Image;)Landroid/hardware/camera2/DngCreator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DngCreator::setThumbnail(__jni_impl::android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"setThumbnail",
			"(Landroid/graphics/Bitmap;)Landroid/hardware/camera2/DngCreator;",
			arg0.__jniObject().object()
		);
	}
	void DngCreator::writeByteBuffer(__jni_impl::java::io::OutputStream arg0, __jni_impl::android::util::Size arg1, __jni_impl::java::nio::ByteBuffer arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"writeByteBuffer",
			"(Ljava/io/OutputStream;Landroid/util/Size;Ljava/nio/ByteBuffer;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class DngCreator : public __jni_impl::android::hardware::camera2::DngCreator
	{
	public:
		DngCreator(QAndroidJniObject obj) { __thiz = obj; }
		DngCreator(__jni_impl::android::hardware::camera2::CameraCharacteristics arg0, __jni_impl::android::hardware::camera2::CaptureResult arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_DNGCREATOR

