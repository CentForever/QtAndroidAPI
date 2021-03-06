#pragma once

#ifndef ANDROID_UTIL_JSONWRITER
#define ANDROID_UTIL_JSONWRITER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class Writer;
}
namespace __jni_impl::java::lang
{
	class Number;
}

namespace __jni_impl::android::util
{
	class JsonWriter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::Writer arg0);
		
		// Methods
		QAndroidJniObject name(jstring arg0);
		QAndroidJniObject value(jboolean arg0);
		QAndroidJniObject value(jdouble arg0);
		QAndroidJniObject value(jlong arg0);
		QAndroidJniObject value(jstring arg0);
		QAndroidJniObject value(__jni_impl::java::lang::Number arg0);
		void flush();
		void close();
		void setLenient(jboolean arg0);
		jboolean isLenient();
		void setIndent(jstring arg0);
		QAndroidJniObject beginArray();
		QAndroidJniObject endArray();
		QAndroidJniObject beginObject();
		QAndroidJniObject endObject();
		QAndroidJniObject nullValue();
	};
} // namespace __jni_impl::android::util

#include "../../java/io/Writer.hpp"
#include "../../java/lang/Number.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void JsonWriter::__constructor(__jni_impl::java::io::Writer arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.JsonWriter",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject JsonWriter::name(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"name",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Z)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(D)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(J)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(__jni_impl::java::lang::Number arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Ljava/lang/Number;)Landroid/util/JsonWriter;",
			arg0.__jniObject().object()
		);
	}
	void JsonWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void JsonWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void JsonWriter::setLenient(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	jboolean JsonWriter::isLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	void JsonWriter::setIndent(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setIndent",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::beginArray()
	{
		return __thiz.callObjectMethod(
			"beginArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	QAndroidJniObject JsonWriter::endArray()
	{
		return __thiz.callObjectMethod(
			"endArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	QAndroidJniObject JsonWriter::beginObject()
	{
		return __thiz.callObjectMethod(
			"beginObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	QAndroidJniObject JsonWriter::endObject()
	{
		return __thiz.callObjectMethod(
			"endObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	QAndroidJniObject JsonWriter::nullValue()
	{
		return __thiz.callObjectMethod(
			"nullValue",
			"()Landroid/util/JsonWriter;"
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class JsonWriter : public __jni_impl::android::util::JsonWriter
	{
	public:
		JsonWriter(QAndroidJniObject obj) { __thiz = obj; }
		JsonWriter(__jni_impl::java::io::Writer arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_JSONWRITER

