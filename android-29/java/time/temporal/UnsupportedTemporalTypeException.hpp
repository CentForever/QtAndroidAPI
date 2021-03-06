#pragma once

#ifndef JAVA_TIME_TEMPORAL_UNSUPPORTEDTEMPORALTYPEEXCEPTION
#define JAVA_TIME_TEMPORAL_UNSUPPORTEDTEMPORALTYPEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../DateTimeException.hpp"


namespace __jni_impl::java::time::temporal
{
	class UnsupportedTemporalTypeException : public __jni_impl::java::time::DateTimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::time::temporal


namespace __jni_impl::java::time::temporal
{
	// Fields
	
	// Constructors
	void UnsupportedTemporalTypeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void UnsupportedTemporalTypeException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::time::temporal

namespace java::time::temporal
{
	class UnsupportedTemporalTypeException : public __jni_impl::java::time::temporal::UnsupportedTemporalTypeException
	{
	public:
		UnsupportedTemporalTypeException(QAndroidJniObject obj) { __thiz = obj; }
		UnsupportedTemporalTypeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		UnsupportedTemporalTypeException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::time::temporal

#endif // JAVA_TIME_TEMPORAL_UNSUPPORTEDTEMPORALTYPEEXCEPTION

