#pragma once

#ifndef ANDROID_PRINT_PRINTJOBINFO_BUILDER
#define ANDROID_PRINT_PRINTJOBINFO_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintJobInfo;
}
namespace __jni_impl::android::print
{
	class PrintAttributes;
}

namespace __jni_impl::android::print
{
	class PrintJobInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::print::PrintJobInfo arg0);
		
		// Methods
		QAndroidJniObject build();
		void setCopies(jint arg0);
		void setPages(jarray arg0);
		void putAdvancedOption(jstring arg0, jint arg1);
		void putAdvancedOption(jstring arg0, jstring arg1);
		void setAttributes(__jni_impl::android::print::PrintAttributes arg0);
	};
} // namespace __jni_impl::android::print

#include "PrintJobInfo.hpp"
#include "PrintAttributes.hpp"

namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrintJobInfo_Builder::__constructor(__jni_impl::android::print::PrintJobInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintJobInfo$Builder",
			"(Landroid/print/PrintJobInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject PrintJobInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	void PrintJobInfo_Builder::setCopies(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCopies",
			"(I)V",
			arg0
		);
	}
	void PrintJobInfo_Builder::setPages(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setPages",
			"([Landroid/print/PageRange;)V",
			arg0
		);
	}
	void PrintJobInfo_Builder::putAdvancedOption(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void PrintJobInfo_Builder::putAdvancedOption(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PrintJobInfo_Builder::setAttributes(__jni_impl::android::print::PrintAttributes arg0)
	{
		__thiz.callMethod<void>(
			"setAttributes",
			"(Landroid/print/PrintAttributes;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintJobInfo_Builder : public __jni_impl::android::print::PrintJobInfo_Builder
	{
	public:
		PrintJobInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PrintJobInfo_Builder(__jni_impl::android::print::PrintJobInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTJOBINFO_BUILDER

