#pragma once
#include "System/IO/zzzz__Directory_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/IO/zzzz__SearchOption_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/IO/zzzz__SearchTarget_def.hpp"
#include "System/Security/AccessControl/zzzz__DirectorySecurity_def.hpp"
//  Writing Method size for method: System::IO::Directory.GetParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::DirectoryInfo (*)(::StringW)>(&System::IO::Directory::GetParent)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2399f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.CreateDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::DirectoryInfo (*)(::StringW)>(&System::IO::Directory::CreateDirectory)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x239a114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "CreateDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.Exists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::IO::Directory::Exists)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x239a88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "Exists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.GetFiles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x239aa28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.GetFiles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW)>(&System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x239ab38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.GetFiles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, System::IO::SearchOption)>(&System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x239abd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SearchOption>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.GetFiles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, System::IO::EnumerationOptions)>(&System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x239aad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.InternalEnumeratePaths
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (*)(::StringW, ::StringW, System::IO::SearchTarget, System::IO::EnumerationOptions)>(&System::IO::Directory::InternalEnumeratePaths)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x239ad88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "InternalEnumeratePaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SearchTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.EnumerateDirectories
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (*)(::StringW, ::StringW, System::IO::SearchOption)>(&System::IO::Directory::EnumerateDirectories)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x239af54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "EnumerateDirectories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SearchOption>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.EnumerateDirectories
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (*)(::StringW, ::StringW, System::IO::EnumerationOptions)>(&System::IO::Directory::EnumerateDirectories)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x239afcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "EnumerateDirectories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.EnumerateFileSystemEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (*)(::StringW)>(&System::IO::Directory::EnumerateFileSystemEntries)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x239afd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "EnumerateFileSystemEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.EnumerateFileSystemEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (*)(::StringW, ::StringW, System::IO::EnumerationOptions)>(&System::IO::Directory::EnumerateFileSystemEntries)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x239b084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "EnumerateFileSystemEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.InternalGetDirectoryRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Directory::InternalGetDirectoryRoot)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x239b090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "InternalGetDirectoryRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.GetCurrentDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::IO::Directory::GetCurrentDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239b148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetCurrentDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.GetLogicalDrives
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&System::IO::Directory::GetLogicalDrives)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239b150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetLogicalDrives",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.GetAccessControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::AccessControl::DirectorySecurity (*)(::StringW, System::Security::AccessControl::AccessControlSections)>(&System::IO::Directory::GetAccessControl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x239b160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetAccessControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.GetAccessControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::AccessControl::DirectorySecurity (*)(::StringW)>(&System::IO::Directory::GetAccessControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239b1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetAccessControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Directory.InsecureGetCurrentDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::IO::Directory::InsecureGetCurrentDirectory)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x239b1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "InsecureGetCurrentDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::IO::DirectoryInfo System::IO::Directory::GetParent(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::DirectoryInfo, false>(nullptr, ___internal_method, path);
}
 System::IO::DirectoryInfo System::IO::Directory::CreateDirectory(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "CreateDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::DirectoryInfo, false>(nullptr, ___internal_method, path);
}
 bool System::IO::Directory::Exists(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "Exists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path);
}
 ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, path);
}
 ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW path, ::StringW searchPattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, path, searchPattern);
}
 ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW path, ::StringW searchPattern, System::IO::SearchOption searchOption)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SearchOption>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, path, searchPattern, searchOption);
}
 ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW path, ::StringW searchPattern, System::IO::EnumerationOptions enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
 System::Collections::Generic::IEnumerable_1<::StringW> System::IO::Directory::InternalEnumeratePaths(::StringW path, ::StringW searchPattern, System::IO::SearchTarget searchTarget, System::IO::EnumerationOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "InternalEnumeratePaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SearchTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(nullptr, ___internal_method, path, searchPattern, searchTarget, options);
}
 System::Collections::Generic::IEnumerable_1<::StringW> System::IO::Directory::EnumerateDirectories(::StringW path, ::StringW searchPattern, System::IO::SearchOption searchOption)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "EnumerateDirectories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SearchOption>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(nullptr, ___internal_method, path, searchPattern, searchOption);
}
 System::Collections::Generic::IEnumerable_1<::StringW> System::IO::Directory::EnumerateDirectories(::StringW path, ::StringW searchPattern, System::IO::EnumerationOptions enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "EnumerateDirectories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
 System::Collections::Generic::IEnumerable_1<::StringW> System::IO::Directory::EnumerateFileSystemEntries(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "EnumerateFileSystemEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(nullptr, ___internal_method, path);
}
 System::Collections::Generic::IEnumerable_1<::StringW> System::IO::Directory::EnumerateFileSystemEntries(::StringW path, ::StringW searchPattern, System::IO::EnumerationOptions enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "EnumerateFileSystemEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
 ::StringW System::IO::Directory::InternalGetDirectoryRoot(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "InternalGetDirectoryRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
 ::StringW System::IO::Directory::GetCurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetCurrentDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::ArrayW<::StringW> System::IO::Directory::GetLogicalDrives()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetLogicalDrives",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method);
}
 System::Security::AccessControl::DirectorySecurity System::IO::Directory::GetAccessControl(::StringW path, System::Security::AccessControl::AccessControlSections includeSections)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetAccessControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::AccessControl::DirectorySecurity, false>(nullptr, ___internal_method, path, includeSections);
}
 System::Security::AccessControl::DirectorySecurity System::IO::Directory::GetAccessControl(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "GetAccessControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::AccessControl::DirectorySecurity, false>(nullptr, ___internal_method, path);
}
 ::StringW System::IO::Directory::InsecureGetCurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Directory>::get(),
                            "InsecureGetCurrentDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
