#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER
#define JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER

#include "../../../../__JniBaseClass.hpp"
#include "AbstractOwnableSynchronizer.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer_ConditionObject;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer : public __jni_impl::java::util::concurrent::locks::AbstractOwnableSynchronizer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jboolean release(jlong arg0);
		void acquire(jlong arg0);
		void acquireInterruptibly(jlong arg0);
		jboolean tryAcquireNanos(jlong arg0, jlong arg1);
		jboolean hasQueuedThreads();
		jboolean isQueued(__jni_impl::java::lang::Thread arg0);
		jint getQueueLength();
		QAndroidJniObject getQueuedThreads();
		jboolean hasWaiters(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		jint getWaitQueueLength(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		QAndroidJniObject getWaitingThreads(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		jboolean owns(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		void acquireShared(jlong arg0);
		void acquireSharedInterruptibly(jlong arg0);
		jboolean tryAcquireSharedNanos(jlong arg0, jlong arg1);
		jboolean releaseShared(jlong arg0);
		jboolean hasContended();
		QAndroidJniObject getFirstQueuedThread();
		jboolean hasQueuedPredecessors();
		QAndroidJniObject getExclusiveQueuedThreads();
		QAndroidJniObject getSharedQueuedThreads();
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "../../../lang/Thread.hpp"
#include "AbstractQueuedLongSynchronizer_ConditionObject.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void AbstractQueuedLongSynchronizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.AbstractQueuedLongSynchronizer",
			"(V)V");
	}
	
	// Methods
	jstring AbstractQueuedLongSynchronizer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean AbstractQueuedLongSynchronizer::release(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"release",
			"(J)Z",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer::acquire(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquire",
			"(J)V",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer::acquireInterruptibly(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquireInterruptibly",
			"(J)V",
			arg0
		);
	}
	jboolean AbstractQueuedLongSynchronizer::tryAcquireNanos(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquireNanos",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasQueuedThreads()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::isQueued(__jni_impl::java::lang::Thread arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isQueued",
			"(Ljava/lang/Thread;)Z",
			arg0.__jniObject().object()
		);
	}
	jint AbstractQueuedLongSynchronizer::getQueueLength()
	{
		return __thiz.callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getQueuedThreads()
	{
		return __thiz.callObjectMethod(
			"getQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasWaiters(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z",
			arg0.__jniObject().object()
		);
	}
	jint AbstractQueuedLongSynchronizer::getWaitQueueLength(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getWaitingThreads(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return __thiz.callObjectMethod(
			"getWaitingThreads",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedLongSynchronizer::owns(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"owns",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbstractQueuedLongSynchronizer::acquireShared(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquireShared",
			"(J)V",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer::acquireSharedInterruptibly(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquireSharedInterruptibly",
			"(J)V",
			arg0
		);
	}
	jboolean AbstractQueuedLongSynchronizer::tryAcquireSharedNanos(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquireSharedNanos",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AbstractQueuedLongSynchronizer::releaseShared(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"releaseShared",
			"(J)Z",
			arg0
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasContended()
	{
		return __thiz.callMethod<jboolean>(
			"hasContended",
			"()Z"
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getFirstQueuedThread()
	{
		return __thiz.callObjectMethod(
			"getFirstQueuedThread",
			"()Ljava/lang/Thread;"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasQueuedPredecessors()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedPredecessors",
			"()Z"
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getExclusiveQueuedThreads()
	{
		return __thiz.callObjectMethod(
			"getExclusiveQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getSharedQueuedThreads()
	{
		return __thiz.callObjectMethod(
			"getSharedQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer : public __jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer
	{
	public:
		AbstractQueuedLongSynchronizer(QAndroidJniObject obj) { __thiz = obj; }
		AbstractQueuedLongSynchronizer()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::locks

#endif // JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER

