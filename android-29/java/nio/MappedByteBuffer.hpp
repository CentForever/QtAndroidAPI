#pragma once

#ifndef JAVA_NIO_MAPPEDBYTEBUFFER
#define JAVA_NIO_MAPPEDBYTEBUFFER

#include "../../__JniBaseClass.hpp"
#include "Buffer.hpp"
#include "ByteBuffer.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio
{
	class Buffer;
}

namespace __jni_impl::java::nio
{
	class MappedByteBuffer : public __jni_impl::java::nio::ByteBuffer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clear();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject load();
		QAndroidJniObject mark();
		QAndroidJniObject reset();
		QAndroidJniObject flip();
		QAndroidJniObject rewind();
		jboolean isLoaded();
		QAndroidJniObject force(jint arg0, jint arg1);
		QAndroidJniObject force();
	};
} // namespace __jni_impl::java::nio

#include "../io/FileDescriptor.hpp"
#include "ByteBuffer.hpp"
#include "Buffer.hpp"

namespace __jni_impl::java::nio
{
	// Fields
	
	// Constructors
	void MappedByteBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.MappedByteBuffer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MappedByteBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	QAndroidJniObject MappedByteBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	QAndroidJniObject MappedByteBuffer::load()
	{
		return __thiz.callObjectMethod(
			"load",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	jboolean MappedByteBuffer::isLoaded()
	{
		return __thiz.callMethod<jboolean>(
			"isLoaded",
			"()Z"
		);
	}
	QAndroidJniObject MappedByteBuffer::force(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"force",
			"(II)Ljava/nio/MappedByteBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MappedByteBuffer::force()
	{
		return __thiz.callObjectMethod(
			"force",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class MappedByteBuffer : public __jni_impl::java::nio::MappedByteBuffer
	{
	public:
		MappedByteBuffer(QAndroidJniObject obj) { __thiz = obj; }
		MappedByteBuffer()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_MAPPEDBYTEBUFFER

