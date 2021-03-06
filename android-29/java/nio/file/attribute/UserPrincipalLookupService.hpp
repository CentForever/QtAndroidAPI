#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALLOOKUPSERVICE
#define JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALLOOKUPSERVICE

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::java::nio::file::attribute
{
	class UserPrincipalLookupService : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject lookupPrincipalByName(jstring arg0);
		QAndroidJniObject lookupPrincipalByGroupName(jstring arg0);
	};
} // namespace __jni_impl::java::nio::file::attribute


namespace __jni_impl::java::nio::file::attribute
{
	// Fields
	
	// Constructors
	void UserPrincipalLookupService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.UserPrincipalLookupService",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;",
			arg0
		);
	}
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByGroupName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByGroupName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;",
			arg0
		);
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class UserPrincipalLookupService : public __jni_impl::java::nio::file::attribute::UserPrincipalLookupService
	{
	public:
		UserPrincipalLookupService(QAndroidJniObject obj) { __thiz = obj; }
		UserPrincipalLookupService()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALLOOKUPSERVICE

