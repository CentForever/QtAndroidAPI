#pragma once

#ifndef ANDROID_TRANSITION_TRANSITION
#define ANDROID_TRANSITION_TRANSITION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::animation
{
	class Animator;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::transition
{
	class TransitionValues;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::transition
{
	class Transition_EpicenterCallback;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::transition
{
	class PathMotion;
}
namespace __jni_impl::android::transition
{
	class TransitionPropagation;
}

namespace __jni_impl::android::transition
{
	class Transition : public __JniBaseClass
	{
	public:
		// Fields
		static jint MATCH_ID();
		static jint MATCH_INSTANCE();
		static jint MATCH_ITEM_ID();
		static jint MATCH_NAME();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jstring getName();
		jstring toString();
		QAndroidJniObject clone();
		jlong getDuration();
		QAndroidJniObject setDuration(jlong arg0);
		QAndroidJniObject setStartDelay(jlong arg0);
		jlong getStartDelay();
		QAndroidJniObject setInterpolator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getInterpolator();
		jarray getTransitionProperties();
		QAndroidJniObject createAnimator(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, __jni_impl::android::transition::TransitionValues arg2);
		void setMatchOrder(jintArray arg0);
		void captureStartValues(__jni_impl::android::transition::TransitionValues arg0);
		void captureEndValues(__jni_impl::android::transition::TransitionValues arg0);
		QAndroidJniObject addTarget(jstring arg0);
		QAndroidJniObject addTarget(__jni_impl::android::view::View arg0);
		QAndroidJniObject addTarget(jclass arg0);
		QAndroidJniObject addTarget(jint arg0);
		QAndroidJniObject removeTarget(__jni_impl::android::view::View arg0);
		QAndroidJniObject removeTarget(jclass arg0);
		QAndroidJniObject removeTarget(jstring arg0);
		QAndroidJniObject removeTarget(jint arg0);
		QAndroidJniObject excludeTarget(jstring arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jint arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jclass arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(__jni_impl::android::view::View arg0, jboolean arg1);
		QAndroidJniObject excludeChildren(jclass arg0, jboolean arg1);
		QAndroidJniObject excludeChildren(jint arg0, jboolean arg1);
		QAndroidJniObject excludeChildren(__jni_impl::android::view::View arg0, jboolean arg1);
		QAndroidJniObject getTargetIds();
		QAndroidJniObject getTargets();
		QAndroidJniObject getTargetNames();
		QAndroidJniObject getTargetTypes();
		QAndroidJniObject getTransitionValues(__jni_impl::android::view::View arg0, jboolean arg1);
		jboolean isTransitionRequired(__jni_impl::android::transition::TransitionValues arg0, __jni_impl::android::transition::TransitionValues arg1);
		QAndroidJniObject addListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject removeListener(__jni_impl::__JniBaseClass arg0);
		void setEpicenterCallback(__jni_impl::android::transition::Transition_EpicenterCallback arg0);
		QAndroidJniObject getEpicenterCallback();
		QAndroidJniObject getEpicenter();
		void setPathMotion(__jni_impl::android::transition::PathMotion arg0);
		QAndroidJniObject getPathMotion();
		void setPropagation(__jni_impl::android::transition::TransitionPropagation arg0);
		QAndroidJniObject getPropagation();
		jboolean canRemoveViews();
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"
#include "../animation/Animator.hpp"
#include "../view/ViewGroup.hpp"
#include "TransitionValues.hpp"
#include "../view/View.hpp"
#include "Transition_EpicenterCallback.hpp"
#include "../graphics/Rect.hpp"
#include "PathMotion.hpp"
#include "TransitionPropagation.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	jint Transition::MATCH_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_ID"
		);
	}
	jint Transition::MATCH_INSTANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_INSTANCE"
		);
	}
	jint Transition::MATCH_ITEM_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_ITEM_ID"
		);
	}
	jint Transition::MATCH_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_NAME"
		);
	}
	
	// Constructors
	void Transition::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.Transition",
			"()V");
	}
	void Transition::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Transition",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring Transition::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Transition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Transition::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/transition/Transition;"
		);
	}
	jlong Transition::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	QAndroidJniObject Transition::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::setStartDelay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setStartDelay",
			"(J)Landroid/transition/Transition;",
			arg0
		);
	}
	jlong Transition::getStartDelay()
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	QAndroidJniObject Transition::setInterpolator(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/transition/Transition;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transition::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jarray Transition::getTransitionProperties()
	{
		return __thiz.callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Transition::createAnimator(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, __jni_impl::android::transition::TransitionValues arg2)
	{
		return __thiz.callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Transition::setMatchOrder(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setMatchOrder",
			"([I)V",
			arg0
		);
	}
	void Transition::captureStartValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	void Transition::captureEndValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transition::addTarget(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Ljava/lang/String;)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::addTarget(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transition::addTarget(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::addTarget(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::removeTarget(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transition::removeTarget(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::removeTarget(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::removeTarget(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::excludeTarget(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/String;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transition::excludeTarget(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transition::excludeTarget(jclass arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transition::excludeTarget(__jni_impl::android::view::View arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Transition::excludeChildren(jclass arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeChildren",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transition::excludeChildren(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeChildren",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transition::excludeChildren(__jni_impl::android::view::View arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeChildren",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Transition::getTargetIds()
	{
		return __thiz.callObjectMethod(
			"getTargetIds",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Transition::getTargets()
	{
		return __thiz.callObjectMethod(
			"getTargets",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Transition::getTargetNames()
	{
		return __thiz.callObjectMethod(
			"getTargetNames",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Transition::getTargetTypes()
	{
		return __thiz.callObjectMethod(
			"getTargetTypes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Transition::getTransitionValues(__jni_impl::android::view::View arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getTransitionValues",
			"(Landroid/view/View;Z)Landroid/transition/TransitionValues;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Transition::isTransitionRequired(__jni_impl::android::transition::TransitionValues arg0, __jni_impl::android::transition::TransitionValues arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isTransitionRequired",
			"(Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Transition::addListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transition::removeListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"removeListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.__jniObject().object()
		);
	}
	void Transition::setEpicenterCallback(__jni_impl::android::transition::Transition_EpicenterCallback arg0)
	{
		__thiz.callMethod<void>(
			"setEpicenterCallback",
			"(Landroid/transition/Transition$EpicenterCallback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transition::getEpicenterCallback()
	{
		return __thiz.callObjectMethod(
			"getEpicenterCallback",
			"()Landroid/transition/Transition$EpicenterCallback;"
		);
	}
	QAndroidJniObject Transition::getEpicenter()
	{
		return __thiz.callObjectMethod(
			"getEpicenter",
			"()Landroid/graphics/Rect;"
		);
	}
	void Transition::setPathMotion(__jni_impl::android::transition::PathMotion arg0)
	{
		__thiz.callMethod<void>(
			"setPathMotion",
			"(Landroid/transition/PathMotion;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transition::getPathMotion()
	{
		return __thiz.callObjectMethod(
			"getPathMotion",
			"()Landroid/transition/PathMotion;"
		);
	}
	void Transition::setPropagation(__jni_impl::android::transition::TransitionPropagation arg0)
	{
		__thiz.callMethod<void>(
			"setPropagation",
			"(Landroid/transition/TransitionPropagation;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transition::getPropagation()
	{
		return __thiz.callObjectMethod(
			"getPropagation",
			"()Landroid/transition/TransitionPropagation;"
		);
	}
	jboolean Transition::canRemoveViews()
	{
		return __thiz.callMethod<jboolean>(
			"canRemoveViews",
			"()Z"
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class Transition : public __jni_impl::android::transition::Transition
	{
	public:
		Transition(QAndroidJniObject obj) { __thiz = obj; }
		Transition()
		{
			__constructor();
		}
		Transition(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_TRANSITION

