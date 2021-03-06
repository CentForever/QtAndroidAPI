#pragma once

#ifndef JAVA_LANG_EXCEPTION
#define JAVA_LANG_EXCEPTION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Exception : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void Exception::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void Exception::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void Exception::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Exception::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Exception : public __jni_impl::java::lang::Exception
	{
	public:
		Exception(QAndroidJniObject obj) { __thiz = obj; }
		Exception(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		Exception(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Exception(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Exception()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_EXCEPTION

