#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER
#define ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::view::accessibility
{
	class CaptioningManager_CaptionStyle;
}
namespace __jni_impl::android::view::accessibility
{
	class CaptioningManager_CaptioningChangeListener;
}

namespace __jni_impl::android::view::accessibility
{
	class CaptioningManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isEnabled();
		QAndroidJniObject getLocale();
		jfloat getFontScale();
		QAndroidJniObject getUserStyle();
		void addCaptioningChangeListener(__jni_impl::android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0);
		void removeCaptioningChangeListener(__jni_impl::android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0);
	};
} // namespace __jni_impl::android::view::accessibility

#include "../../content/Context.hpp"
#include "../../../java/util/Locale.hpp"
#include "CaptioningManager_CaptionStyle.hpp"
#include "CaptioningManager_CaptioningChangeListener.hpp"

namespace __jni_impl::android::view::accessibility
{
	// Fields
	
	// Constructors
	void CaptioningManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.CaptioningManager",
			"(V)V");
	}
	
	// Methods
	jboolean CaptioningManager::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	QAndroidJniObject CaptioningManager::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jfloat CaptioningManager::getFontScale()
	{
		return __thiz.callMethod<jfloat>(
			"getFontScale",
			"()F"
		);
	}
	QAndroidJniObject CaptioningManager::getUserStyle()
	{
		return __thiz.callObjectMethod(
			"getUserStyle",
			"()Landroid/view/accessibility/CaptioningManager$CaptionStyle;"
		);
	}
	void CaptioningManager::addCaptioningChangeListener(__jni_impl::android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0)
	{
		__thiz.callMethod<void>(
			"addCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void CaptioningManager::removeCaptioningChangeListener(__jni_impl::android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0)
	{
		__thiz.callMethod<void>(
			"removeCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class CaptioningManager : public __jni_impl::android::view::accessibility::CaptioningManager
	{
	public:
		CaptioningManager(QAndroidJniObject obj) { __thiz = obj; }
		CaptioningManager()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER

