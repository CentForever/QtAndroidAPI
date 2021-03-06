#pragma once

#ifndef ANDROID_WEBKIT_RENDERPROCESSGONEDETAIL
#define ANDROID_WEBKIT_RENDERPROCESSGONEDETAIL

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class RenderProcessGoneDetail : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint rendererPriorityAtExit();
		jboolean didCrash();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void RenderProcessGoneDetail::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.RenderProcessGoneDetail",
			"()V");
	}
	
	// Methods
	jint RenderProcessGoneDetail::rendererPriorityAtExit()
	{
		return __thiz.callMethod<jint>(
			"rendererPriorityAtExit",
			"()I"
		);
	}
	jboolean RenderProcessGoneDetail::didCrash()
	{
		return __thiz.callMethod<jboolean>(
			"didCrash",
			"()Z"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class RenderProcessGoneDetail : public __jni_impl::android::webkit::RenderProcessGoneDetail
	{
	public:
		RenderProcessGoneDetail(QAndroidJniObject obj) { __thiz = obj; }
		RenderProcessGoneDetail()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_RENDERPROCESSGONEDETAIL

