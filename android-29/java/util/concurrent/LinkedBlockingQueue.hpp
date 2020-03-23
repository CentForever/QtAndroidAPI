#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE
#define JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE

#include "../AbstractQueue.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class LinkedBlockingQueue : public __jni_impl::java::util::AbstractQueue
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0);
		
		// Methods
		jboolean remove(jobject arg0);
		void put(jobject arg0);
		QAndroidJniObject toString();
		void clear();
		jint size();
		QAndroidJniObject toArray(jobjectArray arg0);
		QAndroidJniObject toArray();
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		void forEach(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject poll();
		QAndroidJniObject peek();
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject take();
		jboolean offer(jobject arg0);
		jboolean offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jint remainingCapacity();
		jint drainTo(__jni_impl::__JniBaseClass arg0, jint arg1);
		jint drainTo(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::util::concurrent

#include "atomic/AtomicInteger.hpp"
#include "locks/ReentrantLock.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void LinkedBlockingQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.LinkedBlockingQueue",
			"()V");
	}
	void LinkedBlockingQueue::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.LinkedBlockingQueue",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void LinkedBlockingQueue::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.LinkedBlockingQueue",
			"(I)V",
			arg0);
	}
	
	// Methods
	jboolean LinkedBlockingQueue::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	void LinkedBlockingQueue::put(jobject arg0)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject LinkedBlockingQueue::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void LinkedBlockingQueue::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jint LinkedBlockingQueue::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject LinkedBlockingQueue::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject LinkedBlockingQueue::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedBlockingQueue::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean LinkedBlockingQueue::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkedBlockingQueue::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;");
	}
	void LinkedBlockingQueue::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LinkedBlockingQueue::poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject LinkedBlockingQueue::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedBlockingQueue::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;");
	}
	jboolean LinkedBlockingQueue::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean LinkedBlockingQueue::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean LinkedBlockingQueue::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LinkedBlockingQueue::take()
	{
		return __thiz.callObjectMethod(
			"take",
			"()Ljava/lang/Object;");
	}
	jboolean LinkedBlockingQueue::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean LinkedBlockingQueue::offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jint LinkedBlockingQueue::remainingCapacity()
	{
		return __thiz.callMethod<jint>(
			"remainingCapacity",
			"()I");
	}
	jint LinkedBlockingQueue::drainTo(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.__jniObject().object(),
			arg1);
	}
	jint LinkedBlockingQueue::drainTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class LinkedBlockingQueue : public __jni_impl::java::util::concurrent::LinkedBlockingQueue
	{
	public:
		LinkedBlockingQueue(QAndroidJniObject obj) { __thiz = obj; }
		LinkedBlockingQueue()
		{
			__constructor();
		}
		LinkedBlockingQueue(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		LinkedBlockingQueue(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE
