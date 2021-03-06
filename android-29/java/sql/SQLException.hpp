#pragma once

#ifndef JAVA_SQL_SQLEXCEPTION
#define JAVA_SQL_SQLEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicReferenceFieldUpdater;
}

namespace __jni_impl::java::sql
{
	class SQLException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0, jstring arg1, jthrowable arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject iterator();
		jstring getSQLState();
		QAndroidJniObject getNextException();
		void setNextException(__jni_impl::java::sql::SQLException arg0);
		jint getErrorCode();
	};
} // namespace __jni_impl::java::sql

#include "../util/concurrent/atomic/AtomicReferenceFieldUpdater.hpp"

namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void SQLException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void SQLException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void SQLException::__constructor(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2);
	}
	void SQLException::__constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void SQLException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2);
	}
	void SQLException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void SQLException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SQLException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"()V");
	}
	
	// Methods
	QAndroidJniObject SQLException::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jstring SQLException::getSQLState()
	{
		return __thiz.callObjectMethod(
			"getSQLState",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SQLException::getNextException()
	{
		return __thiz.callObjectMethod(
			"getNextException",
			"()Ljava/sql/SQLException;"
		);
	}
	void SQLException::setNextException(__jni_impl::java::sql::SQLException arg0)
	{
		__thiz.callMethod<void>(
			"setNextException",
			"(Ljava/sql/SQLException;)V",
			arg0.__jniObject().object()
		);
	}
	jint SQLException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class SQLException : public __jni_impl::java::sql::SQLException
	{
	public:
		SQLException(QAndroidJniObject obj) { __thiz = obj; }
		SQLException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SQLException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLException(jstring arg0, jstring arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLException()
		{
			__constructor();
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_SQLEXCEPTION

