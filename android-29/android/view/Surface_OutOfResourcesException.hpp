#pragma once

#ifndef ANDROID_VIEW_SURFACE_OUTOFRESOURCESEXCEPTION
#define ANDROID_VIEW_SURFACE_OUTOFRESOURCESEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::view
{
	class Surface_OutOfResourcesException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void Surface_OutOfResourcesException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.Surface$OutOfResourcesException",
			"()V");
	}
	void Surface_OutOfResourcesException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.Surface$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class Surface_OutOfResourcesException : public __jni_impl::android::view::Surface_OutOfResourcesException
	{
	public:
		Surface_OutOfResourcesException(QAndroidJniObject obj) { __thiz = obj; }
		Surface_OutOfResourcesException()
		{
			__constructor();
		}
		Surface_OutOfResourcesException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_SURFACE_OUTOFRESOURCESEXCEPTION

