#pragma once

#ifndef ANDROID_TEXT_STYLE_DRAWABLEMARGINSPAN
#define ANDROID_TEXT_STYLE_DRAWABLEMARGINSPAN

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::text
{
	class Layout;
}
namespace __jni_impl::android::graphics
{
	class Paint_FontMetricsInt;
}

namespace __jni_impl::android::text::style
{
	class DrawableMarginSpan : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0);
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1);
		
		// Methods
		jint getLeadingMargin(jboolean arg0);
		void drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11);
		void chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint_FontMetricsInt arg5);
	};
} // namespace __jni_impl::android::text::style

#include "../../graphics/drawable/Drawable.hpp"
#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../Layout.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void DrawableMarginSpan::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.DrawableMarginSpan",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void DrawableMarginSpan::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.DrawableMarginSpan",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jint DrawableMarginSpan::getLeadingMargin(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	void DrawableMarginSpan::drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11)
	{
		__thiz.callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11.__jniObject().object()
		);
	}
	void DrawableMarginSpan::chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint_FontMetricsInt arg5)
	{
		__thiz.callMethod<void>(
			"chooseHeight",
			"(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class DrawableMarginSpan : public __jni_impl::android::text::style::DrawableMarginSpan
	{
	public:
		DrawableMarginSpan(QAndroidJniObject obj) { __thiz = obj; }
		DrawableMarginSpan(__jni_impl::android::graphics::drawable::Drawable arg0)
		{
			__constructor(
				arg0);
		}
		DrawableMarginSpan(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_DRAWABLEMARGINSPAN

