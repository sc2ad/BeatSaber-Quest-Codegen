#pragma once
#include "System/zzzz__OperatingSystem_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/zzzz__PlatformID_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: System::OperatingSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::OperatingSystem::*)(System::PlatformID, System::Version)>(&System::OperatingSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2462f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::PlatformID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Version>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::OperatingSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::OperatingSystem::*)(System::PlatformID, System::Version, ::StringW)>(&System::OperatingSystem::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2462f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::PlatformID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Version>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::OperatingSystem.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::OperatingSystem::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::OperatingSystem::GetObjectData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24630bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::OperatingSystem.get_Platform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::PlatformID (System::OperatingSystem::*)()>(&System::OperatingSystem::get_Platform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24630f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            "get_Platform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::OperatingSystem.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::OperatingSystem::*)()>(&System::OperatingSystem::Clone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2463100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::OperatingSystem.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::OperatingSystem::*)()>(&System::OperatingSystem::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x246317c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::OperatingSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::OperatingSystem.get_VersionString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::OperatingSystem::*)()>(&System::OperatingSystem::get_VersionString)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2463180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            "get_VersionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::OperatingSystem::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ICloneable
constexpr  System::OperatingSystem::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::OperatingSystem::__set__version(System::Version value)  {
::cordl_internals::setInstanceField<System::Version, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Version>(value));
}
constexpr System::Version System::OperatingSystem::__get__version() const {
return ::cordl_internals::getInstanceField<System::Version, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::OperatingSystem::__set__platform(System::PlatformID value)  {
::cordl_internals::setInstanceField<System::PlatformID, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::PlatformID>(value));
}
constexpr System::PlatformID System::OperatingSystem::__get__platform() const {
return ::cordl_internals::getInstanceField<System::PlatformID, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::OperatingSystem::__set__servicePack(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::OperatingSystem::__get__servicePack() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::OperatingSystem::__set__versionString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::OperatingSystem::__get__versionString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "platform", ty: "System::PlatformID", modifiers: "", def_value: None }, CppParam { name: "version", ty: "System::Version", modifiers: "", def_value: None }]
 System::OperatingSystem::OperatingSystem(System::PlatformID platform, System::Version version)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OperatingSystem>(platform, version))) {}
 void System::OperatingSystem::_ctor(System::PlatformID platform, System::Version version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::PlatformID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Version>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, platform, version);
}
// Ctor Parameters [CppParam { name: "platform", ty: "System::PlatformID", modifiers: "", def_value: None }, CppParam { name: "version", ty: "System::Version", modifiers: "", def_value: None }, CppParam { name: "servicePack", ty: "::StringW", modifiers: "", def_value: None }]
 System::OperatingSystem::OperatingSystem(System::PlatformID platform, System::Version version, ::StringW servicePack)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OperatingSystem>(platform, version, servicePack))) {}
 void System::OperatingSystem::_ctor(System::PlatformID platform, System::Version version, ::StringW servicePack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::PlatformID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Version>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, platform, version, servicePack);
}
 void System::OperatingSystem::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 System::PlatformID System::OperatingSystem::get_Platform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            "get_Platform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::PlatformID, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::OperatingSystem::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::OperatingSystem::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::OperatingSystem::get_VersionString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::OperatingSystem>::get(),
                            "get_VersionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
