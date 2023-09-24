#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability(::StringW path, ::StringW value) noexcept : ::bs_hook::ValueTypeWrapper() {this->path = path;
this->value = value;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability::__set_value(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability::__get_value() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson.FromMatcher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson (*)(UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::FromMatcher)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x297655c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson>::get(),
                            "FromMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson.ToMatcher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::ToMatcher)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x29768f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson>::get(),
                            "ToMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interfaces", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "deviceClass", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "deviceClasses", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "manufacturers", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "products", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "versions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "capabilities", ty: "::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson(::StringW interface, ::ArrayW<::StringW> interfaces, ::StringW deviceClass, ::ArrayW<::StringW> deviceClasses, ::StringW manufacturer, ::ArrayW<::StringW> manufacturers, ::StringW product, ::ArrayW<::StringW> products, ::StringW version, ::ArrayW<::StringW> versions, ::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability> capabilities) noexcept : ::bs_hook::ValueTypeWrapper() {this->interface = interface;
this->interfaces = interfaces;
this->deviceClass = deviceClass;
this->deviceClasses = deviceClasses;
this->manufacturer = manufacturer;
this->manufacturers = manufacturers;
this->product = product;
this->products = products;
this->version = version;
this->versions = versions;
this->capabilities = capabilities;
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_interface(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_interface() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_interfaces(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x8>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_interfaces() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_deviceClass(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_deviceClass() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_deviceClasses(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_deviceClasses() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_manufacturer(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_manufacturer() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_manufacturers(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x28>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_manufacturers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_product(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_product() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_products(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x38>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_products() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_versions(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x48>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_versions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x48>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__set_capabilities(::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability>, 0x50>(this->__instance, std::forward<::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability>>(value));
}
constexpr ::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::__get_capabilities() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson__Capability>, 0x50>(this->__instance);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::FromMatcher(UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson>::get(),
                            "FromMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson, false>(nullptr, ___internal_method, matcher);
}
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson::ToMatcher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson>::get(),
                            "ToMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::*)(int32_t)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2976bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2976c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2976c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_Object___get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType> (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_Object___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2976dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2976de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2976e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4.System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String,System_Object___GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>> (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String,System_Object___GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2976e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2976f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>
constexpr  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>
constexpr  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>() const noexcept {
return System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__set___2__current(System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__get___2__current() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__set___4__this(UnityEngine::InputSystem::Layouts::InputDeviceMatcher value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(value));
}
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__set___3____4__this(UnityEngine::InputSystem::Layouts::InputDeviceMatcher value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(value));
}
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__get___3____4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__set__count_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__get__count_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__set__i_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::New_ctor(int32_t __1__state)  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4 o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>(__1__state))};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_Object___get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String,System_Object___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher___get_patterns_d__4>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2976f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c._With_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::*)(char16_t)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::_With_b__11_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2976f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>::get(),
                            "<With>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::__set___9(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>::get>(std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>(value));
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>::get>();
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::__set___9__11_0(System::Func_2<char16_t,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<char16_t,bool>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>::get>(std::forward<System::Func_2<char16_t,bool>>(value));
}
 System::Func_2<char16_t,bool> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::__get___9__11_0()  {
return ::cordl_internals::getStaticField<System::Func_2<char16_t,bool>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>::get>();
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::New_ctor()  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>())};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c::_With_b__11_0(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher____c>::get(),
                            "<With>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ch);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_empty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2974890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.get_patterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>> (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_patterns)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29748a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "get_patterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithInterface)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x297490c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithDeviceClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithDeviceClass)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2974b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithDeviceClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithManufacturer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2974c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithManufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithProduct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithProduct)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2974c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithProduct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithVersion)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2974cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.With
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(UnityEngine::InputSystem::Utilities::InternedString, ::bs_hook::Il2CppWrapperType, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::With)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2974984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "With",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.MatchPercentage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchPercentage)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x296f2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "MatchPercentage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.MatchSingleProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType, ::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSingleProperty)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2974d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "MatchSingleProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.GetNumPropertiesIn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetNumPropertiesIn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2974e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "GetNumPropertiesIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.FromDeviceDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceMatcher (*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::FromDeviceDescription)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2974f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "FromDeviceDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::ToString)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2974ffc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2975194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x29752ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Layouts::InputDeviceMatcher, UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Equality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29706cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Layouts::InputDeviceMatcher, UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2975364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29753d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>
constexpr  UnityEngine::InputSystem::Layouts::InputDeviceMatcher::operator System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() const {
return System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Patterns", ty: "::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher::InputDeviceMatcher(::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>> m_Patterns) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Patterns = m_Patterns;
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__set_m_Patterns(::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>>, 0x0>(this->__instance, std::forward<::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr ::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>> UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__get_m_Patterns() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,::bs_hook::Il2CppWrapperType>>, 0x0>(this->__instance);
}
 void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__set_kInterfaceKey(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kInterfaceKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__get_kInterfaceKey()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kInterfaceKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
 void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__set_kDeviceClassKey(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kDeviceClassKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__get_kDeviceClassKey()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kDeviceClassKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
 void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__set_kManufacturerKey(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kManufacturerKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__get_kManufacturerKey()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kManufacturerKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
 void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__set_kProductKey(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kProductKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__get_kProductKey()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kProductKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
 void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__set_kVersionKey(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kVersionKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::__get_kVersionKey()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::InternedString, "kVersionKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>> UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_patterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "get_patterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param supportRegex: bool (default: true)
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithInterface(::StringW pattern, bool supportRegex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, pattern, supportRegex);
}
/// @param supportRegex: bool (default: true)
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithDeviceClass(::StringW pattern, bool supportRegex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithDeviceClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, pattern, supportRegex);
}
/// @param supportRegex: bool (default: true)
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturer(::StringW pattern, bool supportRegex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithManufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, pattern, supportRegex);
}
/// @param supportRegex: bool (default: true)
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithProduct(::StringW pattern, bool supportRegex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithProduct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, pattern, supportRegex);
}
/// @param supportRegex: bool (default: true)
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithVersion(::StringW pattern, bool supportRegex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "WithVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, pattern, supportRegex);
}
template<typename TValue>
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithCapability(::StringW path, TValue value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                        "WithCapability",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path, value);
}
/// @param supportRegex: bool (default: true)
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::With(UnityEngine::InputSystem::Utilities::InternedString key, ::bs_hook::Il2CppWrapperType value, bool supportRegex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "With",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value, supportRegex);
}
 float_t UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchPercentage(UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "MatchPercentage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, deviceDescription);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSingleProperty(::bs_hook::Il2CppWrapperType pattern, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "MatchSingleProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, value);
}
 int32_t UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetNumPropertiesIn(UnityEngine::InputSystem::Layouts::InputDeviceDescription description)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "GetNumPropertiesIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, description);
}
 UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::FromDeviceDescription(UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "FromDeviceDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(nullptr, ___internal_method, deviceDescription);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceMatcher::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals(UnityEngine::InputSystem::Layouts::InputDeviceMatcher other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Equality(UnityEngine::InputSystem::Layouts::InputDeviceMatcher left, UnityEngine::InputSystem::Layouts::InputDeviceMatcher right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Inequality(UnityEngine::InputSystem::Layouts::InputDeviceMatcher left, UnityEngine::InputSystem::Layouts::InputDeviceMatcher right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 int32_t UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
