#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: System::IO::FileSystemInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x239b278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileSystemInfo (*)(::StringW, ::StringW, ByRef<System::IO::FileStatus>)>(&System::IO::FileSystemInfo::Create)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x239fab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::FileStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)(ByRef<System::IO::FileStatus>)>(&System::IO::FileSystemInfo::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x239fb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::FileStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileAttributes (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_Attributes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x239e230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_ExistsCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_ExistsCore)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x239fc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_ExistsCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_LastWriteTimeCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTimeOffset (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_LastWriteTimeCore)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x239fca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_LastWriteTimeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_LengthCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_LengthCore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x239e300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_LengthCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::Refresh)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x239fd0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.ThrowNotFound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::FileSystemInfo::ThrowNotFound)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x239fa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "ThrowNotFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_NormalizedPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_NormalizedPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239fd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_NormalizedPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::IO::FileSystemInfo::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x239b958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::IO::FileSystemInfo::GetObjectData)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x239fd7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileSystemInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_FullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_FullName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239fec4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileSystemInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239fecc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileSystemInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_Exists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_Exists)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x239fed4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileSystemInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.Delete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::Delete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileSystemInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_LastWriteTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_LastWriteTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x239ff5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_LastWriteTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.get_LastWriteTimeUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_LastWriteTimeUtc)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x239ff94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_LastWriteTimeUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::FileSystemInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::ToString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x239ffbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::FileSystemInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::IO::FileSystemInfo::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileSystemInfo::__set__fileStatus(System::IO::FileStatus value)  {
::cordl_internals::setInstanceField<System::IO::FileStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::FileStatus>(value));
}
constexpr System::IO::FileStatus System::IO::FileSystemInfo::__get__fileStatus() const {
return ::cordl_internals::getInstanceField<System::IO::FileStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileSystemInfo::__set_FullPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::IO::FileSystemInfo::__get_FullPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileSystemInfo::__set_OriginalPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::IO::FileSystemInfo::__get_OriginalPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::FileSystemInfo::__set__name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::IO::FileSystemInfo::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::IO::FileSystemInfo::FileSystemInfo()  : System::MarshalByRefObject(THROW_UNLESS(::il2cpp_utils::New<FileSystemInfo>())) {}
 void System::IO::FileSystemInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::FileSystemInfo System::IO::FileSystemInfo::Create(::StringW fullPath, ::StringW fileName, ByRef<System::IO::FileStatus> fileStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::FileStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::FileSystemInfo, false>(nullptr, ___internal_method, fullPath, fileName, fileStatus);
}
 void System::IO::FileSystemInfo::Init(ByRef<System::IO::FileStatus> fileStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::FileStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fileStatus);
}
 System::IO::FileAttributes System::IO::FileSystemInfo::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::FileAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::FileSystemInfo::get_ExistsCore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_ExistsCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTimeOffset System::IO::FileSystemInfo::get_LastWriteTimeCore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_LastWriteTimeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTimeOffset, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::IO::FileSystemInfo::get_LengthCore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_LengthCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileSystemInfo::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileSystemInfo::ThrowNotFound(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "ThrowNotFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path);
}
 ::StringW System::IO::FileSystemInfo::get_NormalizedPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_NormalizedPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::IO::FileSystemInfo::FileSystemInfo(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  : System::MarshalByRefObject(THROW_UNLESS(::il2cpp_utils::New<FileSystemInfo>(info, context))) {}
 void System::IO::FileSystemInfo::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::IO::FileSystemInfo::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::StringW System::IO::FileSystemInfo::get_FullName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_FullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::IO::FileSystemInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::FileSystemInfo::get_Exists()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_Exists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::FileSystemInfo::Delete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime System::IO::FileSystemInfo::get_LastWriteTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_LastWriteTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime System::IO::FileSystemInfo::get_LastWriteTimeUtc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "get_LastWriteTimeUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::IO::FileSystemInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::FileSystemInfo>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
