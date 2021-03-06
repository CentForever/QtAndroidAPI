#pragma once

#ifndef ANDROID_OS_HEALTH_HEALTHSTATS
#define ANDROID_OS_HEALTH_HEALTHSTATS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os::health
{
	class TimerStat;
}

namespace __jni_impl::android::os::health
{
	class HealthStats : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getTimerCount(jint arg0);
		jboolean hasTimer(jint arg0);
		QAndroidJniObject getTimer(jint arg0);
		jlong getTimerTime(jint arg0);
		jint getTimerKeyCount();
		jint getTimerKeyAt(jint arg0);
		jboolean hasMeasurement(jint arg0);
		jlong getMeasurement(jint arg0);
		jint getMeasurementKeyCount();
		jint getMeasurementKeyAt(jint arg0);
		jboolean hasStats(jint arg0);
		QAndroidJniObject getStats(jint arg0);
		jint getStatsKeyCount();
		jint getStatsKeyAt(jint arg0);
		jboolean hasTimers(jint arg0);
		QAndroidJniObject getTimers(jint arg0);
		jint getTimersKeyCount();
		jint getTimersKeyAt(jint arg0);
		jboolean hasMeasurements(jint arg0);
		QAndroidJniObject getMeasurements(jint arg0);
		jint getMeasurementsKeyCount();
		jint getMeasurementsKeyAt(jint arg0);
		jstring getDataType();
	};
} // namespace __jni_impl::android::os::health

#include "TimerStat.hpp"

namespace __jni_impl::android::os::health
{
	// Fields
	
	// Constructors
	void HealthStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.health.HealthStats",
			"(V)V");
	}
	
	// Methods
	jint HealthStats::getTimerCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getTimerCount",
			"(I)I",
			arg0
		);
	}
	jboolean HealthStats::hasTimer(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasTimer",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject HealthStats::getTimer(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTimer",
			"(I)Landroid/os/health/TimerStat;",
			arg0
		);
	}
	jlong HealthStats::getTimerTime(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getTimerTime",
			"(I)J",
			arg0
		);
	}
	jint HealthStats::getTimerKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getTimerKeyCount",
			"()I"
		);
	}
	jint HealthStats::getTimerKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getTimerKeyAt",
			"(I)I",
			arg0
		);
	}
	jboolean HealthStats::hasMeasurement(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMeasurement",
			"(I)Z",
			arg0
		);
	}
	jlong HealthStats::getMeasurement(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getMeasurement",
			"(I)J",
			arg0
		);
	}
	jint HealthStats::getMeasurementKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getMeasurementKeyCount",
			"()I"
		);
	}
	jint HealthStats::getMeasurementKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMeasurementKeyAt",
			"(I)I",
			arg0
		);
	}
	jboolean HealthStats::hasStats(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasStats",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject HealthStats::getStats(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStats",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	jint HealthStats::getStatsKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getStatsKeyCount",
			"()I"
		);
	}
	jint HealthStats::getStatsKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getStatsKeyAt",
			"(I)I",
			arg0
		);
	}
	jboolean HealthStats::hasTimers(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasTimers",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject HealthStats::getTimers(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTimers",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	jint HealthStats::getTimersKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getTimersKeyCount",
			"()I"
		);
	}
	jint HealthStats::getTimersKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getTimersKeyAt",
			"(I)I",
			arg0
		);
	}
	jboolean HealthStats::hasMeasurements(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMeasurements",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject HealthStats::getMeasurements(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMeasurements",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	jint HealthStats::getMeasurementsKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getMeasurementsKeyCount",
			"()I"
		);
	}
	jint HealthStats::getMeasurementsKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMeasurementsKeyAt",
			"(I)I",
			arg0
		);
	}
	jstring HealthStats::getDataType()
	{
		return __thiz.callObjectMethod(
			"getDataType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::os::health

namespace android::os::health
{
	class HealthStats : public __jni_impl::android::os::health::HealthStats
	{
	public:
		HealthStats(QAndroidJniObject obj) { __thiz = obj; }
		HealthStats()
		{
			__constructor();
		}
	};
} // namespace android::os::health

#endif // ANDROID_OS_HEALTH_HEALTHSTATS

