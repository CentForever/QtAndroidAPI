#pragma once

#ifndef JAVA_TIME_CHRONO_THAIBUDDHISTDATE
#define JAVA_TIME_CHRONO_THAIBUDDHISTDATE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class LocalDate;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::time::chrono
{
	class ThaiBuddhistChronology;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time
{
	class Clock;
}
namespace __jni_impl::java::time::chrono
{
	class ThaiBuddhistEra;
}
namespace __jni_impl::java::time
{
	class LocalTime;
}

namespace __jni_impl::java::time::chrono
{
	class ThaiBuddhistDate : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getChronology();
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject until(__jni_impl::__JniBaseClass arg0);
		jlong until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		jint lengthOfMonth();
		static QAndroidJniObject now();
		static QAndroidJniObject now(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
		QAndroidJniObject getEra();
		QAndroidJniObject atTime(__jni_impl::java::time::LocalTime arg0);
		jlong toEpochDay();
	};
} // namespace __jni_impl::java::time::chrono

#include "../LocalDate.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../temporal/ValueRange.hpp"
#include "ThaiBuddhistChronology.hpp"
#include "../ZoneId.hpp"
#include "../Clock.hpp"
#include "ThaiBuddhistEra.hpp"
#include "../LocalTime.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	
	// Constructors
	void ThaiBuddhistDate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.ThaiBuddhistDate",
			"(V)V");
	}
	
	// Methods
	jboolean ThaiBuddhistDate::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ThaiBuddhistDate::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ThaiBuddhistDate::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong ThaiBuddhistDate::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"of",
			"(III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ThaiBuddhistDate::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::getChronology()
	{
		return __thiz.callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/ThaiBuddhistChronology;"
		);
	}
	QAndroidJniObject ThaiBuddhistDate::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::until(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.__jniObject().object()
		);
	}
	jlong ThaiBuddhistDate::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint ThaiBuddhistDate::lengthOfMonth()
	{
		return __thiz.callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	QAndroidJniObject ThaiBuddhistDate::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"()Ljava/time/chrono/ThaiBuddhistDate;"
		);
	}
	QAndroidJniObject ThaiBuddhistDate::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThaiBuddhistDate::getEra()
	{
		return __thiz.callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	QAndroidJniObject ThaiBuddhistDate::atTime(__jni_impl::java::time::LocalTime arg0)
	{
		return __thiz.callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	jlong ThaiBuddhistDate::toEpochDay()
	{
		return __thiz.callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class ThaiBuddhistDate : public __jni_impl::java::time::chrono::ThaiBuddhistDate
	{
	public:
		ThaiBuddhistDate(QAndroidJniObject obj) { __thiz = obj; }
		ThaiBuddhistDate()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

#endif // JAVA_TIME_CHRONO_THAIBUDDHISTDATE

