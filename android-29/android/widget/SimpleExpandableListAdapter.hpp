#pragma once

#ifndef ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER
#define ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER

#include "../../__JniBaseClass.hpp"
#include "BaseExpandableListAdapter.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::widget
{
	class SimpleExpandableListAdapter : public __jni_impl::android::widget::BaseExpandableListAdapter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, __jni_impl::__JniBaseClass arg6, jint arg7, jint arg8, jarray arg9, jintArray arg10);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, __jni_impl::__JniBaseClass arg6, jint arg7, jarray arg8, jintArray arg9);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4, __jni_impl::__JniBaseClass arg5, jint arg6, jarray arg7, jintArray arg8);
		
		// Methods
		jint getGroupCount();
		jobject getChild(jint arg0, jint arg1);
		jint getChildrenCount(jint arg0);
		jlong getChildId(jint arg0, jint arg1);
		jboolean hasStableIds();
		QAndroidJniObject getGroupView(jint arg0, jboolean arg1, __jni_impl::android::view::View arg2, __jni_impl::android::view::ViewGroup arg3);
		QAndroidJniObject getChildView(jint arg0, jint arg1, jboolean arg2, __jni_impl::android::view::View arg3, __jni_impl::android::view::ViewGroup arg4);
		jboolean isChildSelectable(jint arg0, jint arg1);
		QAndroidJniObject newGroupView(jboolean arg0, __jni_impl::android::view::ViewGroup arg1);
		QAndroidJniObject newChildView(jboolean arg0, __jni_impl::android::view::ViewGroup arg1);
		jobject getGroup(jint arg0);
		jlong getGroupId(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void SimpleExpandableListAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, __jni_impl::__JniBaseClass arg6, jint arg7, jint arg8, jarray arg9, jintArray arg10)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleExpandableListAdapter",
			"(Landroid/content/Context;Ljava/util/List;II[Ljava/lang/String;[ILjava/util/List;II[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8,
			arg9,
			arg10);
	}
	void SimpleExpandableListAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, __jni_impl::__JniBaseClass arg6, jint arg7, jarray arg8, jintArray arg9)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleExpandableListAdapter",
			"(Landroid/content/Context;Ljava/util/List;II[Ljava/lang/String;[ILjava/util/List;I[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8,
			arg9);
	}
	void SimpleExpandableListAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4, __jni_impl::__JniBaseClass arg5, jint arg6, jarray arg7, jintArray arg8)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleExpandableListAdapter",
			"(Landroid/content/Context;Ljava/util/List;I[Ljava/lang/String;[ILjava/util/List;I[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6,
			arg7,
			arg8);
	}
	
	// Methods
	jint SimpleExpandableListAdapter::getGroupCount()
	{
		return __thiz.callMethod<jint>(
			"getGroupCount",
			"()I"
		);
	}
	jobject SimpleExpandableListAdapter::getChild(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(II)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint SimpleExpandableListAdapter::getChildrenCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getChildrenCount",
			"(I)I",
			arg0
		);
	}
	jlong SimpleExpandableListAdapter::getChildId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jlong>(
			"getChildId",
			"(II)J",
			arg0,
			arg1
		);
	}
	jboolean SimpleExpandableListAdapter::hasStableIds()
	{
		return __thiz.callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	QAndroidJniObject SimpleExpandableListAdapter::getGroupView(jint arg0, jboolean arg1, __jni_impl::android::view::View arg2, __jni_impl::android::view::ViewGroup arg3)
	{
		return __thiz.callObjectMethod(
			"getGroupView",
			"(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleExpandableListAdapter::getChildView(jint arg0, jint arg1, jboolean arg2, __jni_impl::android::view::View arg3, __jni_impl::android::view::ViewGroup arg4)
	{
		return __thiz.callObjectMethod(
			"getChildView",
			"(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jboolean SimpleExpandableListAdapter::isChildSelectable(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isChildSelectable",
			"(II)Z",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SimpleExpandableListAdapter::newGroupView(jboolean arg0, __jni_impl::android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"newGroupView",
			"(ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleExpandableListAdapter::newChildView(jboolean arg0, __jni_impl::android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"newChildView",
			"(ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jobject SimpleExpandableListAdapter::getGroup(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong SimpleExpandableListAdapter::getGroupId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getGroupId",
			"(I)J",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class SimpleExpandableListAdapter : public __jni_impl::android::widget::SimpleExpandableListAdapter
	{
	public:
		SimpleExpandableListAdapter(QAndroidJniObject obj) { __thiz = obj; }
		SimpleExpandableListAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, __jni_impl::__JniBaseClass arg6, jint arg7, jint arg8, jarray arg9, jintArray arg10)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9,
				arg10);
		}
		SimpleExpandableListAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, __jni_impl::__JniBaseClass arg6, jint arg7, jarray arg8, jintArray arg9)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9);
		}
		SimpleExpandableListAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4, __jni_impl::__JniBaseClass arg5, jint arg6, jarray arg7, jintArray arg8)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER

