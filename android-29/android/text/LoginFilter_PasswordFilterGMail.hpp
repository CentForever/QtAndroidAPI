#pragma once

#ifndef ANDROID_TEXT_LOGINFILTER_PASSWORDFILTERGMAIL
#define ANDROID_TEXT_LOGINFILTER_PASSWORDFILTERGMAIL

#include "../../__JniBaseClass.hpp"
#include "LoginFilter.hpp"


namespace __jni_impl::android::text
{
	class LoginFilter_PasswordFilterGMail : public __jni_impl::android::text::LoginFilter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jboolean arg0);
		
		// Methods
		jboolean isAllowed(jchar arg0);
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void LoginFilter_PasswordFilterGMail::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$PasswordFilterGMail",
			"()V");
	}
	void LoginFilter_PasswordFilterGMail::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$PasswordFilterGMail",
			"(Z)V",
			arg0);
	}
	
	// Methods
	jboolean LoginFilter_PasswordFilterGMail::isAllowed(jchar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class LoginFilter_PasswordFilterGMail : public __jni_impl::android::text::LoginFilter_PasswordFilterGMail
	{
	public:
		LoginFilter_PasswordFilterGMail(QAndroidJniObject obj) { __thiz = obj; }
		LoginFilter_PasswordFilterGMail()
		{
			__constructor();
		}
		LoginFilter_PasswordFilterGMail(jboolean arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_LOGINFILTER_PASSWORDFILTERGMAIL

