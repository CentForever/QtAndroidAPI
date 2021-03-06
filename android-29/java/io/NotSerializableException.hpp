#pragma once

#ifndef JAVA_IO_NOTSERIALIZABLEEXCEPTION
#define JAVA_IO_NOTSERIALIZABLEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "IOException.hpp"
#include "ObjectStreamException.hpp"


namespace __jni_impl::java::io
{
	class NotSerializableException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void NotSerializableException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.NotSerializableException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void NotSerializableException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.NotSerializableException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class NotSerializableException : public __jni_impl::java::io::NotSerializableException
	{
	public:
		NotSerializableException(QAndroidJniObject obj) { __thiz = obj; }
		NotSerializableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		NotSerializableException()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_NOTSERIALIZABLEEXCEPTION

