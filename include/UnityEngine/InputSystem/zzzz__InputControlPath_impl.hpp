#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__InputControlPath_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions::None{0};
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions::OmitDevice{2};
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions::UseShortNames{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType::____UnityEngine__InputSystem__InputControlPath__PathComponentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType::Name{0};
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType::DisplayName{1};
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType::Usage{2};
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType::Layout{3};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d6818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c._get_usages_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::*)(::UnityEngine::InputSystem::Utilities::Substring)>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::_get_usages_b__7_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d6820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>::get(),
                            "<get_usages>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::__set___9(::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>::get>(std::forward<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>(value));
}
 ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>::get>();
}
 void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::__set___9__7_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>::get>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>>(value));
}
 ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::__get___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>())) {}
 void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c::_get_usages_b__7_0(::UnityEngine::InputSystem::Utilities::Substring x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c>::get(),
                            "<get_usages>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.get_layout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d6434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.get_usages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_usages)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x28d643c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_usages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d6574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.get_displayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_displayName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d6580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.get_isWildcard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_isWildcard)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28d511c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_isWildcard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.get_isDoubleWildcard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_isDoubleWildcard)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28d658c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_isDoubleWildcard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.ToHumanReadableString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::*)(::StringW, ::StringW, ByRef<::StringW>, ByRef<::StringW>, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x28d46e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "ToHumanReadableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.ToHumanReadableString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::Utilities::Substring)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28d65f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "ToHumanReadableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.Matches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::*)(::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::Matches)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x28d5dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "Matches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent.ComparePathElementToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::Substring, ::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::ComparePathElementToString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x28d6654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "ComparePathElementToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Layout", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Usages", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent(::UnityEngine::InputSystem::Utilities::Substring m_Layout, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> m_Usages, ::UnityEngine::InputSystem::Utilities::Substring m_Name, ::UnityEngine::InputSystem::Utilities::Substring m_DisplayName) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Layout = m_Layout;
this->m_Usages = m_Usages;
this->m_Name = m_Name;
this->m_DisplayName = m_DisplayName;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::__set_m_Layout(::UnityEngine::InputSystem::Utilities::Substring value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::Substring, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::Utilities::Substring>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::Substring ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::__get_m_Layout() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::Substring, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::__set_m_Usages(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>, 0x10>(this->__instance, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::__get_m_Usages() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::__set_m_Name(::UnityEngine::InputSystem::Utilities::Substring value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::Substring, 0x30>(this->__instance, std::forward<::UnityEngine::InputSystem::Utilities::Substring>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::Substring ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::Substring, 0x30>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::__set_m_DisplayName(::UnityEngine::InputSystem::Utilities::Substring value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::Substring, 0x40>(this->__instance, std::forward<::UnityEngine::InputSystem::Utilities::Substring>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::Substring ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::__get_m_DisplayName() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::Substring, 0x40>(this->__instance);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_layout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::StringW> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_usages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_usages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_isWildcard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_isWildcard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::get_isDoubleWildcard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "get_isDoubleWildcard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::ToHumanReadableString(::StringW parentLayoutName, ::StringW parentControlPath, ByRef<::StringW> referencedLayoutName, ByRef<::StringW> controlPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "ToHumanReadableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, parentLayoutName, parentControlPath, referencedLayoutName, controlPath, options);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::ToHumanReadableString(::UnityEngine::InputSystem::Utilities::Substring substring)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "ToHumanReadableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, substring);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::Matches(::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "Matches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, control);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent::ComparePathElementToString(::UnityEngine::InputSystem::Utilities::Substring pathElement, ::StringW element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>::get(),
                            "ComparePathElementToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pathElement, element);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser.get_isAtEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::get_isAtEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28d5868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>::get(),
                            "get_isAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x28d4430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser.MoveToNextComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::MoveToNextComponent)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x28d446c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>::get(),
                            "MoveToNextComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser.ParseComponentPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::Substring (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::*)(char16_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::ParseComponentPart)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x28d6844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>::get(),
                            "ParseComponentPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftIndexInPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightIndexInPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "current", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::____UnityEngine__InputSystem__InputControlPath__PathParser(::StringW path, int32_t length, int32_t leftIndexInPath, int32_t rightIndexInPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent current) noexcept : ::bs_hook::ValueTypeWrapper() {this->path = path;
this->length = length;
this->leftIndexInPath = leftIndexInPath;
this->rightIndexInPath = rightIndexInPath;
this->current = current;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__set_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__get_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__set_leftIndexInPath(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__get_leftIndexInPath() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__set_rightIndexInPath(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__get_rightIndexInPath() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__set_current(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent, 0x18>(this->__instance, std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>(value));
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::__get_current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent, 0x18>(this->__instance);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::get_isAtEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>::get(),
                            "get_isAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::_ctor(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::MoveToNextComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>::get(),
                            "MoveToNextComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::Substring ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser::ParseComponentPart(char16_t terminator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>::get(),
                            "ParseComponentPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::Substring, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, terminator);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d69ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c._TryGetDeviceUsages_b__9_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::*)(::UnityEngine::InputSystem::Utilities::Substring)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::_TryGetDeviceUsages_b__9_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d69b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c>::get(),
                            "<TryGetDeviceUsages>b__9_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::__set___9(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c>::get>(std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c>(value));
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::__get___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c>::get>();
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::__set___9__9_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c>::get>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>>(value));
}
 ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::__get___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c>::get>();
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::____UnityEngine__InputSystem__InputControlPath____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__InputControlPath____c>())) {}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c::_TryGetDeviceUsages_b__9_0(::UnityEngine::InputSystem::Utilities::Substring x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c>::get(),
                            "<TryGetDeviceUsages>b__9_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::*)(int32_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28d6400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28d69d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x28d69dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28d6b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28d6b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28d6b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28d6bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28d6c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__set___2__current(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>(value));
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__set___3__path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__get___3__path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__set__parser_5__2(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>(value));
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::__get__parser_5__2() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::____UnityEngine__InputSystem__InputControlPath___Parse_d__33(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__InputControlPath___Parse_d__33>(__1__state))) {}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.CleanSlashes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::CleanSlashes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d3eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "CleanSlashes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.Combine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputControl, ::StringW)>(&::UnityEngine::InputSystem::InputControlPath::Combine)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x28cfb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "Combine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.ToHumanReadableString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions, ::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::InputControlPath::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28d3ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "ToHumanReadableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.ToHumanReadableString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions, ::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::InputControlPath::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x28d3f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "ToHumanReadableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryGetDeviceUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::TryGetDeviceUsages)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x28d4e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryGetDeviceUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryGetDeviceLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::TryGetDeviceLayout)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x28d4fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryGetDeviceLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryGetControlLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::TryGetControlLayout)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x28d5180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryGetControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.FindControlLayoutRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>, ::StringW)>(&::UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x28d53bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "FindControlLayoutRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.FindControlLayoutRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>, ::UnityEngine::InputSystem::Layouts::InputControlLayout)>(&::UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x28d552c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "FindControlLayoutRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.ControlLayoutMatchesPathComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>)>(&::UnityEngine::InputSystem::InputControlPath::ControlLayoutMatchesPathComponent)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x28d56c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "ControlLayoutMatchesPathComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.StringMatches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::Substring, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputControlPath::StringMatches)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x28d587c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "StringMatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl (*)(::UnityEngine::InputSystem::InputControl, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindControl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28cd434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryFindControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputControl> (*)(::UnityEngine::InputSystem::InputControl, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindControls)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x28d5a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryFindControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputControl, ::StringW, ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>>, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindControls)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28d5bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryFindControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindChild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl (*)(::UnityEngine::InputSystem::InputControl, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindChild)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28cff5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryFindChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.Matches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::InputControlPath::Matches)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x28d4334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "Matches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchesPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::InputControlPath::MatchesPrefix)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x28d5cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "MatchesPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchesRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>, ::UnityEngine::InputSystem::InputControl, bool)>(&::UnityEngine::InputSystem::InputControlPath::MatchesRecursive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28d5c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "MatchesRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchPathComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<int32_t>, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::MatchPathComponent)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x28d607c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "MatchPathComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.PathComponentCanYieldMultipleMatches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::PathComponentCanYieldMultipleMatches)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28d62cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "PathComponentCanYieldMultipleMatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent> (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::Parse)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x28d6388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::UnityEngine::InputSystem::InputControlPath::CleanSlashes(::StringW pathComponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "CleanSlashes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, pathComponent);
}
 ::StringW ::UnityEngine::InputSystem::InputControlPath::Combine(::UnityEngine::InputSystem::InputControl parent, ::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "Combine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, parent, path);
}
/// @param options: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions (default: 0)
/// @param control: ::UnityEngine::InputSystem::InputControl (default: csnull)
 ::StringW ::UnityEngine::InputSystem::InputControlPath::ToHumanReadableString(::StringW path, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "ToHumanReadableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path, options, control);
}
/// @param options: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions (default: 0)
/// @param control: ::UnityEngine::InputSystem::InputControl (default: csnull)
 ::StringW ::UnityEngine::InputSystem::InputControlPath::ToHumanReadableString(::StringW path, ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "ToHumanReadableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path, deviceLayoutName, controlPath, options, control);
}
 ::ArrayW<::StringW> ::UnityEngine::InputSystem::InputControlPath::TryGetDeviceUsages(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryGetDeviceUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, path);
}
 ::StringW ::UnityEngine::InputSystem::InputControlPath::TryGetDeviceLayout(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryGetDeviceLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
 ::StringW ::UnityEngine::InputSystem::InputControlPath::TryGetControlLayout(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryGetControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
 ::StringW ::UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser> parser, ::StringW layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "FindControlLayoutRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, parser, layoutName);
}
 ::StringW ::UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser> parser, ::UnityEngine::InputSystem::Layouts::InputControlLayout layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "FindControlLayoutRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, parser, layout);
}
 bool ::UnityEngine::InputSystem::InputControlPath::ControlLayoutMatchesPathComponent(ByRef<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItem, ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser> parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "ControlLayoutMatchesPathComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controlItem, parser);
}
 bool ::UnityEngine::InputSystem::InputControlPath::StringMatches(::UnityEngine::InputSystem::Utilities::Substring str, ::UnityEngine::InputSystem::Utilities::InternedString matchTo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "StringMatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, matchTo);
}
/// @param indexInPath: int32_t (default: 0)
 ::UnityEngine::InputSystem::InputControl ::UnityEngine::InputSystem::InputControlPath::TryFindControl(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryFindControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl, false>(nullptr, ___internal_method, control, path, indexInPath);
}
/// @param indexInPath: int32_t (default: 0)
 ::ArrayW<::UnityEngine::InputSystem::InputControl> ::UnityEngine::InputSystem::InputControlPath::TryFindControls(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryFindControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputControl>, false>(nullptr, ___internal_method, control, path, indexInPath);
}
/// @param indexInPath: int32_t (default: 0)
 int32_t ::UnityEngine::InputSystem::InputControlPath::TryFindControls(::UnityEngine::InputSystem::InputControl control, ::StringW path, ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>> matches, int32_t indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryFindControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, control, path, matches, indexInPath);
}
/// @param indexInPath: int32_t (default: 0)
template<typename TControl>
 TControl ::UnityEngine::InputSystem::InputControlPath::TryFindControl(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                        "TryFindControl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control, path, indexInPath);
}
template<typename TControl>
 int32_t ::UnityEngine::InputSystem::InputControlPath::TryFindControls(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                        "TryFindControls",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, control, path, indexInPath, matches);
}
/// @param indexInPath: int32_t (default: 0)
 ::UnityEngine::InputSystem::InputControl ::UnityEngine::InputSystem::InputControlPath::TryFindChild(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "TryFindChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl, false>(nullptr, ___internal_method, control, path, indexInPath);
}
/// @param indexInPath: int32_t (default: 0)
template<typename TControl>
 TControl ::UnityEngine::InputSystem::InputControlPath::TryFindChild(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                        "TryFindChild",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control, path, indexInPath);
}
 bool ::UnityEngine::InputSystem::InputControlPath::Matches(::StringW expected, ::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "Matches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expected, control);
}
 bool ::UnityEngine::InputSystem::InputControlPath::MatchesPrefix(::StringW expected, ::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "MatchesPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expected, control);
}
/// @param prefixOnly: bool (default: false)
 bool ::UnityEngine::InputSystem::InputControlPath::MatchesRecursive(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser> parser, ::UnityEngine::InputSystem::InputControl currentControl, bool prefixOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "MatchesRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, parser, currentControl, prefixOnly);
}
template<typename TControl>
 TControl ::UnityEngine::InputSystem::InputControlPath::MatchControlsRecursive(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                        "MatchControlsRecursive",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control, path, indexInPath, matches, matchMultiple);
}
template<typename TControl>
 TControl ::UnityEngine::InputSystem::InputControlPath::MatchByUsageAtDeviceRootRecursive(::UnityEngine::InputSystem::InputDevice device, ::StringW path, int32_t indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                        "MatchByUsageAtDeviceRootRecursive",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, device, path, indexInPath, matches, matchMultiple);
}
template<typename TControl>
 TControl ::UnityEngine::InputSystem::InputControlPath::MatchChildrenRecursive(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                        "MatchChildrenRecursive",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control, path, indexInPath, matches, matchMultiple);
}
/// @param startIndexInComponent: int32_t (default: 0)
 bool ::UnityEngine::InputSystem::InputControlPath::MatchPathComponent(::StringW component, ::StringW path, ByRef<int32_t> indexInPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType componentType, int32_t startIndexInComponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "MatchPathComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, component, path, indexInPath, componentType, startIndexInComponent);
}
 bool ::UnityEngine::InputSystem::InputControlPath::PathComponentCanYieldMultipleMatches(::StringW path, int32_t indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "PathComponentCanYieldMultipleMatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path, indexInPath);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent> ::UnityEngine::InputSystem::InputControlPath::Parse(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>, false>(nullptr, ___internal_method, path);
}
} // end anonymous namespace
