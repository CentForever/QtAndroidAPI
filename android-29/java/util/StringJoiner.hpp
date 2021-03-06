#pragma once

#ifndef JAVA_UTIL_STRINGJOINER
#define JAVA_UTIL_STRINGJOINER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class StringJoiner : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		QAndroidJniObject add(jstring arg0);
		jint length();
		jstring toString();
		QAndroidJniObject merge(__jni_impl::java::util::StringJoiner arg0);
		QAndroidJniObject setEmptyValue(jstring arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void StringJoiner::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringJoiner",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void StringJoiner::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringJoiner",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	QAndroidJniObject StringJoiner::add(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;",
			arg0
		);
	}
	jint StringJoiner::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring StringJoiner::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject StringJoiner::merge(__jni_impl::java::util::StringJoiner arg0)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/util/StringJoiner;)Ljava/util/StringJoiner;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StringJoiner::setEmptyValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setEmptyValue",
			"(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class StringJoiner : public __jni_impl::java::util::StringJoiner
	{
	public:
		StringJoiner(QAndroidJniObject obj) { __thiz = obj; }
		StringJoiner(jstring arg0)
		{
			__constructor(
				arg0);
		}
		StringJoiner(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_STRINGJOINER

