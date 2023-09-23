#pragma once
#include "System/IO/zzzz__FileSystemInfo_impl.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/IO/zzzz__SearchTarget_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: System::IO::DirectoryInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)(::StringW)>(&System::IO::DirectoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x239a090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::DirectoryInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)(::StringW, ::StringW, ::StringW, bool)>(&System::IO::DirectoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x239a844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::DirectoryInfo.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)(::StringW, ::StringW, ::StringW, bool)>(&System::IO::DirectoryInfo::Init)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x239b2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::DirectoryInfo.GetDirectories
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::IO::DirectoryInfo> (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::GetDirectories)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x239b57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            "GetDirectories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::DirectoryInfo.GetDirectories
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::IO::DirectoryInfo> (System::IO::DirectoryInfo::*)(::StringW, System::IO::EnumerationOptions)>(&System::IO::DirectoryInfo::GetDirectories)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x239b624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            "GetDirectories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::DirectoryInfo.InternalEnumerateInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::IO::FileSystemInfo> (*)(::StringW, ::StringW, System::IO::SearchTarget, System::IO::EnumerationOptions)>(&System::IO::DirectoryInfo::InternalEnumerateInfos)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x239b6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            "InternalEnumerateInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SearchTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::DirectoryInfo.Delete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::Delete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x239b884;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::DirectoryInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::DirectoryInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::IO::DirectoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x239b954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }]
 System::IO::DirectoryInfo::DirectoryInfo(::StringW path)  : System::IO::FileSystemInfo(THROW_UNLESS(::il2cpp_utils::New<DirectoryInfo>(path))) {}
 void System::IO::DirectoryInfo::_ctor(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path);
}
// Ctor Parameters [CppParam { name: "originalPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fullPath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isNormalized", ty: "bool", modifiers: "", def_value: Some("false") }]
 System::IO::DirectoryInfo::DirectoryInfo(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized)  : System::IO::FileSystemInfo(THROW_UNLESS(::il2cpp_utils::New<DirectoryInfo>(originalPath, fullPath, fileName, isNormalized))) {}
/// @param fullPath: ::StringW (default: csnull)
/// @param fileName: ::StringW (default: csnull)
/// @param isNormalized: bool (default: false)
 void System::IO::DirectoryInfo::_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, originalPath, fullPath, fileName, isNormalized);
}
/// @param fullPath: ::StringW (default: csnull)
/// @param fileName: ::StringW (default: csnull)
/// @param isNormalized: bool (default: false)
 void System::IO::DirectoryInfo::Init(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, originalPath, fullPath, fileName, isNormalized);
}
 ::ArrayW<System::IO::DirectoryInfo> System::IO::DirectoryInfo::GetDirectories()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            "GetDirectories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::IO::DirectoryInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::IO::DirectoryInfo> System::IO::DirectoryInfo::GetDirectories(::StringW searchPattern, System::IO::EnumerationOptions enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            "GetDirectories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::IO::DirectoryInfo>, false>(const_cast<void*>(instance), ___internal_method, searchPattern, enumerationOptions);
}
 System::Collections::Generic::IEnumerable_1<System::IO::FileSystemInfo> System::IO::DirectoryInfo::InternalEnumerateInfos(::StringW path, ::StringW searchPattern, System::IO::SearchTarget searchTarget, System::IO::EnumerationOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            "InternalEnumerateInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SearchTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<System::IO::FileSystemInfo>, false>(nullptr, ___internal_method, path, searchPattern, searchTarget, options);
}
 void System::IO::DirectoryInfo::Delete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::IO::DirectoryInfo::DirectoryInfo(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  : System::IO::FileSystemInfo(THROW_UNLESS(::il2cpp_utils::New<DirectoryInfo>(info, context))) {}
 void System::IO::DirectoryInfo::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DirectoryInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
