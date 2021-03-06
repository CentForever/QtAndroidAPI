#pragma once

#ifndef JAVA_LANG_RUNTIMEEXCEPTION
#define JAVA_LANG_RUNTIMEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"


namespace __jni_impl::java::lang
{
	class RuntimeException : public __jni_impl::java::lang::Exception
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
	void RuntimeException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void RuntimeException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void RuntimeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void RuntimeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class RuntimeException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		RuntimeException(QAndroidJniObject obj) { __thiz = obj; }
		RuntimeException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		RuntimeException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RuntimeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		RuntimeException()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_RUNTIMEEXCEPTION

