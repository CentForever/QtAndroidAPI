#pragma once

#ifndef ANDROID_HARDWARE_CAMERA
#define ANDROID_HARDWARE_CAMERA

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class Camera_Parameters;
}
namespace __jni_impl::android::hardware
{
	class Camera_CameraInfo;
}
namespace __jni_impl::android::graphics
{
	class SurfaceTexture;
}

namespace __jni_impl::android::hardware
{
	class Camera : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_NEW_PICTURE();
		static jstring ACTION_NEW_VIDEO();
		static jint CAMERA_ERROR_EVICTED();
		static jint CAMERA_ERROR_SERVER_DIED();
		static jint CAMERA_ERROR_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		void lock();
		static QAndroidJniObject open(jint arg0);
		static QAndroidJniObject open();
		QAndroidJniObject getParameters();
		void release();
		void unlock();
		void setParameters(__jni_impl::android::hardware::Camera_Parameters arg0);
		static jint getNumberOfCameras();
		static void getCameraInfo(jint arg0, __jni_impl::android::hardware::Camera_CameraInfo arg1);
		void reconnect();
		void setPreviewDisplay(__jni_impl::__JniBaseClass arg0);
		void setPreviewTexture(__jni_impl::android::graphics::SurfaceTexture arg0);
		void startPreview();
		void stopPreview();
		void setPreviewCallback(__jni_impl::__JniBaseClass arg0);
		void setOneShotPreviewCallback(__jni_impl::__JniBaseClass arg0);
		void setPreviewCallbackWithBuffer(__jni_impl::__JniBaseClass arg0);
		void addCallbackBuffer(jbyteArray arg0);
		void autoFocus(__jni_impl::__JniBaseClass arg0);
		void cancelAutoFocus();
		void setAutoFocusMoveCallback(__jni_impl::__JniBaseClass arg0);
		void takePicture(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void takePicture(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		void startSmoothZoom(jint arg0);
		void stopSmoothZoom();
		void setDisplayOrientation(jint arg0);
		jboolean enableShutterSound(jboolean arg0);
		void setZoomChangeListener(__jni_impl::__JniBaseClass arg0);
		void setFaceDetectionListener(__jni_impl::__JniBaseClass arg0);
		void startFaceDetection();
		void stopFaceDetection();
		void setErrorCallback(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::hardware

#include "Camera_Parameters.hpp"
#include "Camera_CameraInfo.hpp"
#include "../graphics/SurfaceTexture.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	jstring Camera::ACTION_NEW_PICTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera",
			"ACTION_NEW_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera::ACTION_NEW_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera",
			"ACTION_NEW_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Camera::CAMERA_ERROR_EVICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_EVICTED"
		);
	}
	jint Camera::CAMERA_ERROR_SERVER_DIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_SERVER_DIED"
		);
	}
	jint Camera::CAMERA_ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	void Camera::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.Camera",
			"(V)V");
	}
	
	// Methods
	void Camera::lock()
	{
		__thiz.callMethod<void>(
			"lock",
			"()V"
		);
	}
	QAndroidJniObject Camera::open(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.hardware.Camera",
			"open",
			"(I)Landroid/hardware/Camera;",
			arg0
		);
	}
	QAndroidJniObject Camera::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.hardware.Camera",
			"open",
			"()Landroid/hardware/Camera;"
		);
	}
	QAndroidJniObject Camera::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Landroid/hardware/Camera$Parameters;"
		);
	}
	void Camera::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void Camera::unlock()
	{
		__thiz.callMethod<void>(
			"unlock",
			"()V"
		);
	}
	void Camera::setParameters(__jni_impl::android::hardware::Camera_Parameters arg0)
	{
		__thiz.callMethod<void>(
			"setParameters",
			"(Landroid/hardware/Camera$Parameters;)V",
			arg0.__jniObject().object()
		);
	}
	jint Camera::getNumberOfCameras()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.hardware.Camera",
			"getNumberOfCameras",
			"()I"
		);
	}
	void Camera::getCameraInfo(jint arg0, __jni_impl::android::hardware::Camera_CameraInfo arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.hardware.Camera",
			"getCameraInfo",
			"(ILandroid/hardware/Camera$CameraInfo;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Camera::reconnect()
	{
		__thiz.callMethod<void>(
			"reconnect",
			"()V"
		);
	}
	void Camera::setPreviewDisplay(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewDisplay",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setPreviewTexture(__jni_impl::android::graphics::SurfaceTexture arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewTexture",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::startPreview()
	{
		__thiz.callMethod<void>(
			"startPreview",
			"()V"
		);
	}
	void Camera::stopPreview()
	{
		__thiz.callMethod<void>(
			"stopPreview",
			"()V"
		);
	}
	void Camera::setPreviewCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setOneShotPreviewCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOneShotPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setPreviewCallbackWithBuffer(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewCallbackWithBuffer",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::addCallbackBuffer(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"addCallbackBuffer",
			"([B)V",
			arg0
		);
	}
	void Camera::autoFocus(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"autoFocus",
			"(Landroid/hardware/Camera$AutoFocusCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::cancelAutoFocus()
	{
		__thiz.callMethod<void>(
			"cancelAutoFocus",
			"()V"
		);
	}
	void Camera::setAutoFocusMoveCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAutoFocusMoveCallback",
			"(Landroid/hardware/Camera$AutoFocusMoveCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::takePicture(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"takePicture",
			"(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Camera::takePicture(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"takePicture",
			"(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void Camera::startSmoothZoom(jint arg0)
	{
		__thiz.callMethod<void>(
			"startSmoothZoom",
			"(I)V",
			arg0
		);
	}
	void Camera::stopSmoothZoom()
	{
		__thiz.callMethod<void>(
			"stopSmoothZoom",
			"()V"
		);
	}
	void Camera::setDisplayOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayOrientation",
			"(I)V",
			arg0
		);
	}
	jboolean Camera::enableShutterSound(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"enableShutterSound",
			"(Z)Z",
			arg0
		);
	}
	void Camera::setZoomChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setZoomChangeListener",
			"(Landroid/hardware/Camera$OnZoomChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setFaceDetectionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFaceDetectionListener",
			"(Landroid/hardware/Camera$FaceDetectionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::startFaceDetection()
	{
		__thiz.callMethod<void>(
			"startFaceDetection",
			"()V"
		);
	}
	void Camera::stopFaceDetection()
	{
		__thiz.callMethod<void>(
			"stopFaceDetection",
			"()V"
		);
	}
	void Camera::setErrorCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorCallback",
			"(Landroid/hardware/Camera$ErrorCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class Camera : public __jni_impl::android::hardware::Camera
	{
	public:
		Camera(QAndroidJniObject obj) { __thiz = obj; }
		Camera()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_CAMERA

