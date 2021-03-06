#pragma once

#ifndef ANDROID_OS_POWERMANAGER
#define ANDROID_OS_POWERMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class PowerManager_WakeLock;
}

namespace __jni_impl::android::os
{
	class PowerManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACQUIRE_CAUSES_WAKEUP();
		static jstring ACTION_DEVICE_IDLE_MODE_CHANGED();
		static jstring ACTION_POWER_SAVE_MODE_CHANGED();
		static jint FULL_WAKE_LOCK();
		static jint LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF();
		static jint LOCATION_MODE_FOREGROUND_ONLY();
		static jint LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF();
		static jint LOCATION_MODE_NO_CHANGE();
		static jint LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF();
		static jint ON_AFTER_RELEASE();
		static jint PARTIAL_WAKE_LOCK();
		static jint PROXIMITY_SCREEN_OFF_WAKE_LOCK();
		static jint RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY();
		static jint SCREEN_BRIGHT_WAKE_LOCK();
		static jint SCREEN_DIM_WAKE_LOCK();
		static jint THERMAL_STATUS_CRITICAL();
		static jint THERMAL_STATUS_EMERGENCY();
		static jint THERMAL_STATUS_LIGHT();
		static jint THERMAL_STATUS_MODERATE();
		static jint THERMAL_STATUS_NONE();
		static jint THERMAL_STATUS_SEVERE();
		static jint THERMAL_STATUS_SHUTDOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject newWakeLock(jint arg0, jstring arg1);
		jboolean isWakeLockLevelSupported(jint arg0);
		jboolean isScreenOn();
		jboolean isPowerSaveMode();
		jint getLocationPowerSaveMode();
		jboolean isDeviceIdleMode();
		jboolean isIgnoringBatteryOptimizations(jstring arg0);
		jboolean isSustainedPerformanceModeSupported();
		jint getCurrentThermalStatus();
		void addThermalStatusListener(__jni_impl::__JniBaseClass arg0);
		void addThermalStatusListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void removeThermalStatusListener(__jni_impl::__JniBaseClass arg0);
		void reboot(jstring arg0);
		jboolean isInteractive();
	};
} // namespace __jni_impl::android::os

#include "PowerManager_WakeLock.hpp"

namespace __jni_impl::android::os
{
	// Fields
	jint PowerManager::ACQUIRE_CAUSES_WAKEUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"ACQUIRE_CAUSES_WAKEUP"
		);
	}
	jstring PowerManager::ACTION_DEVICE_IDLE_MODE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_DEVICE_IDLE_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PowerManager::ACTION_POWER_SAVE_MODE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_POWER_SAVE_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PowerManager::FULL_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"FULL_WAKE_LOCK"
		);
	}
	jint PowerManager::LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::LOCATION_MODE_FOREGROUND_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_FOREGROUND_ONLY"
		);
	}
	jint PowerManager::LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::LOCATION_MODE_NO_CHANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_NO_CHANGE"
		);
	}
	jint PowerManager::LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::ON_AFTER_RELEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"ON_AFTER_RELEASE"
		);
	}
	jint PowerManager::PARTIAL_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"PARTIAL_WAKE_LOCK"
		);
	}
	jint PowerManager::PROXIMITY_SCREEN_OFF_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"PROXIMITY_SCREEN_OFF_WAKE_LOCK"
		);
	}
	jint PowerManager::RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY"
		);
	}
	jint PowerManager::SCREEN_BRIGHT_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_BRIGHT_WAKE_LOCK"
		);
	}
	jint PowerManager::SCREEN_DIM_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_DIM_WAKE_LOCK"
		);
	}
	jint PowerManager::THERMAL_STATUS_CRITICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_CRITICAL"
		);
	}
	jint PowerManager::THERMAL_STATUS_EMERGENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_EMERGENCY"
		);
	}
	jint PowerManager::THERMAL_STATUS_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_LIGHT"
		);
	}
	jint PowerManager::THERMAL_STATUS_MODERATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_MODERATE"
		);
	}
	jint PowerManager::THERMAL_STATUS_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_NONE"
		);
	}
	jint PowerManager::THERMAL_STATUS_SEVERE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_SEVERE"
		);
	}
	jint PowerManager::THERMAL_STATUS_SHUTDOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_SHUTDOWN"
		);
	}
	
	// Constructors
	void PowerManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.PowerManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PowerManager::newWakeLock(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"newWakeLock",
			"(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;",
			arg0,
			arg1
		);
	}
	jboolean PowerManager::isWakeLockLevelSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isWakeLockLevelSupported",
			"(I)Z",
			arg0
		);
	}
	jboolean PowerManager::isScreenOn()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenOn",
			"()Z"
		);
	}
	jboolean PowerManager::isPowerSaveMode()
	{
		return __thiz.callMethod<jboolean>(
			"isPowerSaveMode",
			"()Z"
		);
	}
	jint PowerManager::getLocationPowerSaveMode()
	{
		return __thiz.callMethod<jint>(
			"getLocationPowerSaveMode",
			"()I"
		);
	}
	jboolean PowerManager::isDeviceIdleMode()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceIdleMode",
			"()Z"
		);
	}
	jboolean PowerManager::isIgnoringBatteryOptimizations(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isIgnoringBatteryOptimizations",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PowerManager::isSustainedPerformanceModeSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isSustainedPerformanceModeSupported",
			"()Z"
		);
	}
	jint PowerManager::getCurrentThermalStatus()
	{
		return __thiz.callMethod<jint>(
			"getCurrentThermalStatus",
			"()I"
		);
	}
	void PowerManager::addThermalStatusListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addThermalStatusListener",
			"(Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void PowerManager::addThermalStatusListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"addThermalStatusListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PowerManager::removeThermalStatusListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeThermalStatusListener",
			"(Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void PowerManager::reboot(jstring arg0)
	{
		__thiz.callMethod<void>(
			"reboot",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean PowerManager::isInteractive()
	{
		return __thiz.callMethod<jboolean>(
			"isInteractive",
			"()Z"
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class PowerManager : public __jni_impl::android::os::PowerManager
	{
	public:
		PowerManager(QAndroidJniObject obj) { __thiz = obj; }
		PowerManager()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_POWERMANAGER

