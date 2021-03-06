#pragma once

#ifndef JAVA_IO_FILEPERMISSION
#define JAVA_IO_FILEPERMISSION

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"

namespace __jni_impl::java::nio::file
{
	class FileSystem;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::security
{
	class PermissionCollection;
}

namespace __jni_impl::java::io
{
	class FilePermission : public __jni_impl::java::security::Permission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		jstring getActions();
		QAndroidJniObject newPermissionCollection();
	};
} // namespace __jni_impl::java::io

#include "../nio/file/FileSystem.hpp"
#include "ObjectInputStream.hpp"
#include "ObjectOutputStream.hpp"
#include "../security/Permission.hpp"
#include "../security/PermissionCollection.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void FilePermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FilePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean FilePermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint FilePermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean FilePermission::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring FilePermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject FilePermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class FilePermission : public __jni_impl::java::io::FilePermission
	{
	public:
		FilePermission(QAndroidJniObject obj) { __thiz = obj; }
		FilePermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILEPERMISSION

