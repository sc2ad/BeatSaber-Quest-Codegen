#pragma once
namespace {
#include "System/Security/zzzz__PermissionSet_def.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
//  Writing Method size for method: ::System::Security::PermissionSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22e5450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(::System::Security::Permissions::PermissionState)>(&::System::Security::PermissionSet::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22e553c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::PermissionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(::System::Security::IPermission)>(&::System::Security::PermissionSet::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22e4f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::IPermission>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(::System::Array, int32_t)>(&::System::Security::PermissionSet::CopyTo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x22e5dd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::PermissionSet),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.Demand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::Demand)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x22e5f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "Demand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.CasOnlyDemand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(int32_t)>(&::System::Security::PermissionSet::CasOnlyDemand)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22e4f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "CasOnlyDemand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e6528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.IsEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::IsEmpty)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x22e6178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.IsUnrestricted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::IsUnrestricted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e6518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "IsUnrestricted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22e654c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::PermissionSet),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.ToXml
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::ToXml)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x22e56d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::PermissionSet),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e6578;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::PermissionSet),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e659c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::PermissionSet),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22e65c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::PermissionSet),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(::bs_hook::Il2CppWrapperType)>(&::System::Security::PermissionSet::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22e65c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::PermissionSet::*)(::bs_hook::Il2CppWrapperType)>(&::System::Security::PermissionSet::Equals)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x22e5bc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::PermissionSet),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22e5d94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::PermissionSet),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Security::ISecurityEncodable
constexpr  ::System::Security::PermissionSet::operator ::System::Security::ISecurityEncodable() const noexcept {
return ::System::Security::ISecurityEncodable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::ICollection
constexpr  ::System::Security::PermissionSet::operator ::System::Collections::ICollection() const noexcept {
return ::System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::System::Security::PermissionSet::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr  ::System::Security::PermissionSet::operator ::System::Runtime::Serialization::IDeserializationCallback() const noexcept {
return ::System::Runtime::Serialization::IDeserializationCallback(::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Security::PermissionSet::__set_psUnrestricted(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<::ArrayW<::bs_hook::Il2CppWrapperType>, "psUnrestricted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get>(std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Security::PermissionSet::__get_psUnrestricted()  {
return ::cordl_internals::getStaticField<::ArrayW<::bs_hook::Il2CppWrapperType>, "psUnrestricted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get>();
}
constexpr void ::System::Security::PermissionSet::__set_state(::System::Security::Permissions::PermissionState value)  {
::cordl_internals::setInstanceField<::System::Security::Permissions::PermissionState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Permissions::PermissionState>(value));
}
constexpr ::System::Security::Permissions::PermissionState ::System::Security::PermissionSet::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Security::Permissions::PermissionState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::PermissionSet::__set_list(::System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::ArrayList>(value));
}
constexpr ::System::Collections::ArrayList ::System::Security::PermissionSet::__get_list() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::PermissionSet::__set__declsec(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Security::PermissionSet::__get__declsec() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::PermissionSet::__set__ignored(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> ::System::Security::PermissionSet::__get__ignored() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Security::PermissionSet::__set_action(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<::ArrayW<::bs_hook::Il2CppWrapperType>, "action", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get>(std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Security::PermissionSet::__get_action()  {
return ::cordl_internals::getStaticField<::ArrayW<::bs_hook::Il2CppWrapperType>, "action", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get>();
}
// Ctor Parameters []
 ::System::Security::PermissionSet::PermissionSet()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PermissionSet>())) {}
 void ::System::Security::PermissionSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "state", ty: "::System::Security::Permissions::PermissionState", modifiers: "", def_value: None }]
 ::System::Security::PermissionSet::PermissionSet(::System::Security::Permissions::PermissionState state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PermissionSet>(state))) {}
 void ::System::Security::PermissionSet::_ctor(::System::Security::Permissions::PermissionState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::PermissionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
// Ctor Parameters [CppParam { name: "perm", ty: "::System::Security::IPermission", modifiers: "", def_value: None }]
 ::System::Security::PermissionSet::PermissionSet(::System::Security::IPermission perm)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PermissionSet>(perm))) {}
 void ::System::Security::PermissionSet::_ctor(::System::Security::IPermission perm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::IPermission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, perm);
}
 void ::System::Security::PermissionSet::CopyTo(::System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 void ::System::Security::PermissionSet::Demand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "Demand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::PermissionSet::CasOnlyDemand(int32_t skip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "CasOnlyDemand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, skip);
}
 ::System::Collections::IEnumerator ::System::Security::PermissionSet::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Security::PermissionSet::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Security::PermissionSet::IsUnrestricted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "IsUnrestricted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Security::PermissionSet::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::SecurityElement ::System::Security::PermissionSet::ToXml()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "ToXml",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Security::PermissionSet::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Security::PermissionSet::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Security::PermissionSet::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::PermissionSet::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 bool ::System::Security::PermissionSet::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t ::System::Security::PermissionSet::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
