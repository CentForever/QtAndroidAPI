#pragma once

#ifndef ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO
#define ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ApplicationErrorReport_CrashInfo : public __JniBaseClass
	{
	public:
		// Fields
		jstring exceptionClassName();
		jstring exceptionMessage();
		jstring stackTrace();
		jstring throwClassName();
		jstring throwFileName();
		jint throwLineNumber();
		jstring throwMethodName();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jthrowable arg0);
		void __constructor();
		
		// Methods
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jstring ApplicationErrorReport_CrashInfo::exceptionClassName()
	{
		return __thiz.getObjectField(
			"exceptionClassName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::exceptionMessage()
	{
		return __thiz.getObjectField(
			"exceptionMessage",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::stackTrace()
	{
		return __thiz.getObjectField(
			"stackTrace",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::throwClassName()
	{
		return __thiz.getObjectField(
			"throwClassName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::throwFileName()
	{
		return __thiz.getObjectField(
			"throwFileName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationErrorReport_CrashInfo::throwLineNumber()
	{
		return __thiz.getField<jint>(
			"throwLineNumber"
		);
	}
	jstring ApplicationErrorReport_CrashInfo::throwMethodName()
	{
		return __thiz.getObjectField(
			"throwMethodName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ApplicationErrorReport_CrashInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$CrashInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void ApplicationErrorReport_CrashInfo::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$CrashInfo",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void ApplicationErrorReport_CrashInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$CrashInfo",
			"()V");
	}
	
	// Methods
	void ApplicationErrorReport_CrashInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ApplicationErrorReport_CrashInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ApplicationErrorReport_CrashInfo : public __jni_impl::android::app::ApplicationErrorReport_CrashInfo
	{
	public:
		ApplicationErrorReport_CrashInfo(QAndroidJniObject obj) { __thiz = obj; }
		ApplicationErrorReport_CrashInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		ApplicationErrorReport_CrashInfo(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		ApplicationErrorReport_CrashInfo()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO

