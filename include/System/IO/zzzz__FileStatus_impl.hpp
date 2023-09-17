#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
//  Writing Method size for method: ::System::IO::FileStatus.get_InitiallyDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::FileStatus::*)()>(&::System::IO::FileStatus::get_InitiallyDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239e4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "get_InitiallyDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.set_InitiallyDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileStatus::*)(bool)>(&::System::IO::FileStatus::set_InitiallyDirectory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x239e4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "set_InitiallyDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::IO::FileStatus>, bool)>(&::System::IO::FileStatus::Initialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x239e4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::FileStatus>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::IsReadOnly)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x239e508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileStatus::GetAttributes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x239e6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetExists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileStatus::GetExists)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x239e79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "GetExists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetLastWriteTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::GetLastWriteTime)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x239e974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "GetLastWriteTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.UnixTimeToDateTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (::System::IO::FileStatus::*)(int64_t, int64_t)>(&::System::IO::FileStatus::UnixTimeToDateTimeOffset)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x239ea10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "UnixTimeToDateTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::GetLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x239eac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "GetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileStatus::Refresh)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x239e7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.EnsureStatInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::EnsureStatInitialized)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x239e5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "EnsureStatInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_fileStatus", ty: "::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fileStatusInitialized", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_InitiallyDirectory_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isDirectory", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_exists", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileStatus::FileStatus(::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus _fileStatus, int32_t _fileStatusInitialized, bool _InitiallyDirectory_k__BackingField, bool _isDirectory, bool _exists) noexcept : ::bs_hook::ValueTypeWrapper() {this->_fileStatus = _fileStatus;
this->_fileStatusInitialized = _fileStatusInitialized;
this->_InitiallyDirectory_k__BackingField = _InitiallyDirectory_k__BackingField;
this->_isDirectory = _isDirectory;
this->_exists = _exists;
}
constexpr void ::System::IO::FileStatus::__set__fileStatus(::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus, 0x0>(this->__instance, std::forward<::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus ::System::IO::FileStatus::__get__fileStatus() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus, 0x0>(this->__instance);
}
constexpr void ::System::IO::FileStatus::__set__fileStatusInitialized(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::IO::FileStatus::__get__fileStatusInitialized() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->__instance);
}
constexpr void ::System::IO::FileStatus::__set__InitiallyDirectory_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::IO::FileStatus::__get__InitiallyDirectory_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this->__instance);
}
constexpr void ::System::IO::FileStatus::__set__isDirectory(bool value)  {
::cordl_internals::setInstanceField<bool, 0x75>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::IO::FileStatus::__get__isDirectory() const {
return ::cordl_internals::getInstanceField<bool, 0x75>(this->__instance);
}
constexpr void ::System::IO::FileStatus::__set__exists(bool value)  {
::cordl_internals::setInstanceField<bool, 0x76>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::IO::FileStatus::__get__exists() const {
return ::cordl_internals::getInstanceField<bool, 0x76>(this->__instance);
}
 bool ::System::IO::FileStatus::get_InitiallyDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "get_InitiallyDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::IO::FileStatus::set_InitiallyDirectory(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "set_InitiallyDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::System::IO::FileStatus::Initialize(ByRef<::System::IO::FileStatus> status, bool isDirectory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::FileStatus>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, status, isDirectory);
}
/// @param continueOnError: bool (default: false)
 bool ::System::IO::FileStatus::IsReadOnly(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path, continueOnError);
}
 ::System::IO::FileAttributes ::System::IO::FileStatus::GetAttributes(::System::ReadOnlySpan_1<char16_t> path, ::System::ReadOnlySpan_1<char16_t> fileName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path, fileName);
}
 bool ::System::IO::FileStatus::GetExists(::System::ReadOnlySpan_1<char16_t> path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "GetExists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path);
}
/// @param continueOnError: bool (default: false)
 ::System::DateTimeOffset ::System::IO::FileStatus::GetLastWriteTime(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "GetLastWriteTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path, continueOnError);
}
 ::System::DateTimeOffset ::System::IO::FileStatus::UnixTimeToDateTimeOffset(int64_t seconds, int64_t nanoseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "UnixTimeToDateTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, seconds, nanoseconds);
}
/// @param continueOnError: bool (default: false)
 int64_t ::System::IO::FileStatus::GetLength(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "GetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path, continueOnError);
}
 void ::System::IO::FileStatus::Refresh(::System::ReadOnlySpan_1<char16_t> path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path);
}
/// @param continueOnError: bool (default: false)
 void ::System::IO::FileStatus::EnsureStatInitialized(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStatus>::get(),
                            "EnsureStatInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path, continueOnError);
}
} // end anonymous namespace
