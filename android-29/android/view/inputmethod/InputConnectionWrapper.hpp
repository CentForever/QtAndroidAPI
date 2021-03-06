#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTIONWRAPPER
#define ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTIONWRAPPER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedText;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedTextRequest;
}
namespace __jni_impl::android::view::inputmethod
{
	class CompletionInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class CorrectionInfo;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view::inputmethod
{
	class InputContentInfo;
}

namespace __jni_impl::android::view::inputmethod
{
	class InputConnectionWrapper : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jboolean arg1);
		
		// Methods
		void setTarget(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getHandler();
		jstring getTextBeforeCursor(jint arg0, jint arg1);
		jstring getTextAfterCursor(jint arg0, jint arg1);
		jstring getSelectedText(jint arg0);
		jint getCursorCapsMode(jint arg0);
		QAndroidJniObject getExtractedText(__jni_impl::android::view::inputmethod::ExtractedTextRequest arg0, jint arg1);
		jboolean deleteSurroundingText(jint arg0, jint arg1);
		jboolean deleteSurroundingTextInCodePoints(jint arg0, jint arg1);
		jboolean setComposingText(jstring arg0, jint arg1);
		jboolean setComposingRegion(jint arg0, jint arg1);
		jboolean finishComposingText();
		jboolean commitText(jstring arg0, jint arg1);
		jboolean commitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0);
		jboolean commitCorrection(__jni_impl::android::view::inputmethod::CorrectionInfo arg0);
		jboolean performEditorAction(jint arg0);
		jboolean performContextMenuAction(jint arg0);
		jboolean sendKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean clearMetaKeyStates(jint arg0);
		jboolean reportFullscreenMode(jboolean arg0);
		jboolean performPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
		jboolean requestCursorUpdates(jint arg0);
		void closeConnection();
		jboolean commitContent(__jni_impl::android::view::inputmethod::InputContentInfo arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		jboolean setSelection(jint arg0, jint arg1);
		jboolean beginBatchEdit();
		jboolean endBatchEdit();
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../os/Handler.hpp"
#include "ExtractedText.hpp"
#include "ExtractedTextRequest.hpp"
#include "CompletionInfo.hpp"
#include "CorrectionInfo.hpp"
#include "../KeyEvent.hpp"
#include "../../os/Bundle.hpp"
#include "InputContentInfo.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	
	// Constructors
	void InputConnectionWrapper::__constructor(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputConnectionWrapper",
			"(Landroid/view/inputmethod/InputConnection;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	void InputConnectionWrapper::setTarget(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Landroid/view/inputmethod/InputConnection;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject InputConnectionWrapper::getHandler()
	{
		return __thiz.callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	jstring InputConnectionWrapper::getTextBeforeCursor(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getTextBeforeCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring InputConnectionWrapper::getTextAfterCursor(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getTextAfterCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring InputConnectionWrapper::getSelectedText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSelectedText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jint InputConnectionWrapper::getCursorCapsMode(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getCursorCapsMode",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject InputConnectionWrapper::getExtractedText(__jni_impl::android::view::inputmethod::ExtractedTextRequest arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getExtractedText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean InputConnectionWrapper::deleteSurroundingText(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"deleteSurroundingText",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::deleteSurroundingTextInCodePoints(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"deleteSurroundingTextInCodePoints",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::setComposingText(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setComposingText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::setComposingRegion(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setComposingRegion",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::finishComposingText()
	{
		return __thiz.callMethod<jboolean>(
			"finishComposingText",
			"()Z"
		);
	}
	jboolean InputConnectionWrapper::commitText(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"commitText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::commitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"commitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean InputConnectionWrapper::commitCorrection(__jni_impl::android::view::inputmethod::CorrectionInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"commitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean InputConnectionWrapper::performEditorAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performEditorAction",
			"(I)Z",
			arg0
		);
	}
	jboolean InputConnectionWrapper::performContextMenuAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performContextMenuAction",
			"(I)Z",
			arg0
		);
	}
	jboolean InputConnectionWrapper::sendKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean InputConnectionWrapper::clearMetaKeyStates(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clearMetaKeyStates",
			"(I)Z",
			arg0
		);
	}
	jboolean InputConnectionWrapper::reportFullscreenMode(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"reportFullscreenMode",
			"(Z)Z",
			arg0
		);
	}
	jboolean InputConnectionWrapper::performPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean InputConnectionWrapper::requestCursorUpdates(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestCursorUpdates",
			"(I)Z",
			arg0
		);
	}
	void InputConnectionWrapper::closeConnection()
	{
		__thiz.callMethod<void>(
			"closeConnection",
			"()V"
		);
	}
	jboolean InputConnectionWrapper::commitContent(__jni_impl::android::view::inputmethod::InputContentInfo arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"commitContent",
			"(Landroid/view/inputmethod/InputContentInfo;ILandroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean InputConnectionWrapper::setSelection(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setSelection",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::beginBatchEdit()
	{
		return __thiz.callMethod<jboolean>(
			"beginBatchEdit",
			"()Z"
		);
	}
	jboolean InputConnectionWrapper::endBatchEdit()
	{
		return __thiz.callMethod<jboolean>(
			"endBatchEdit",
			"()Z"
		);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class InputConnectionWrapper : public __jni_impl::android::view::inputmethod::InputConnectionWrapper
	{
	public:
		InputConnectionWrapper(QAndroidJniObject obj) { __thiz = obj; }
		InputConnectionWrapper(__jni_impl::__JniBaseClass arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTIONWRAPPER

