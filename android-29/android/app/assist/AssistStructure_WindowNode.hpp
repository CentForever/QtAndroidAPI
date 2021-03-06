#pragma once

#ifndef ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE
#define ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app::assist
{
	class AssistStructure_ViewNode;
}

namespace __jni_impl::android::app::assist
{
	class AssistStructure_WindowNode : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getTitle();
		jint getTop();
		jint getLeft();
		QAndroidJniObject getRootViewNode();
		jint getDisplayId();
		jint getWidth();
		jint getHeight();
	};
} // namespace __jni_impl::android::app::assist

#include "AssistStructure_ViewNode.hpp"

namespace __jni_impl::android::app::assist
{
	// Fields
	
	// Constructors
	void AssistStructure_WindowNode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.assist.AssistStructure$WindowNode",
			"(V)V");
	}
	
	// Methods
	jstring AssistStructure_WindowNode::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AssistStructure_WindowNode::getTop()
	{
		return __thiz.callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getLeft()
	{
		return __thiz.callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	QAndroidJniObject AssistStructure_WindowNode::getRootViewNode()
	{
		return __thiz.callObjectMethod(
			"getRootViewNode",
			"()Landroid/app/assist/AssistStructure$ViewNode;"
		);
	}
	jint AssistStructure_WindowNode::getDisplayId()
	{
		return __thiz.callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
} // namespace __jni_impl::android::app::assist

namespace android::app::assist
{
	class AssistStructure_WindowNode : public __jni_impl::android::app::assist::AssistStructure_WindowNode
	{
	public:
		AssistStructure_WindowNode(QAndroidJniObject obj) { __thiz = obj; }
		AssistStructure_WindowNode()
		{
			__constructor();
		}
	};
} // namespace android::app::assist

#endif // ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE

