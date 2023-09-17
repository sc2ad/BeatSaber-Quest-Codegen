#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result  ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result::AllSatisfied{0};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result  ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result::MissingRequired{1};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result  ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result::MissingOptional{2};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match.get_control
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_control)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28c9834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match.get_device
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_device)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28c9880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match.get_requirementIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_requirementIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c9898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_requirementIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match.get_requirement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_requirement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28c98a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_requirement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match.get_isOptional
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_isOptional)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28c98d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_isOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_RequirementIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Requirements", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match(int32_t m_RequirementIndex, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_Requirements, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> m_Controls) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_RequirementIndex = m_RequirementIndex;
this->m_Requirements = m_Requirements;
this->m_Controls = m_Controls;
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::__set_m_RequirementIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::__get_m_RequirementIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::__set_m_Requirements(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, 0x8>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::__get_m_Requirements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::__set_m_Controls(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>, 0x10>(this->__instance, std::forward<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>>(value));
}
constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::__get_m_Controls() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>, 0x10>(this->__instance);
}
 ::UnityEngine::InputSystem::InputControl ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_control()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::InputDevice ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_device()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_requirementIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_requirementIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_requirement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_requirement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match::get_isOptional()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>::get(),
                            "get_isOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28c98f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c9920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28c992c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28c99b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28c9a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>
constexpr  ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>() const {
return ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::operator ::System::Collections::IEnumerator() const {
return ::System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Requirements", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator(int32_t m_Index, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_Requirements, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> m_Controls) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Index = m_Index;
this->m_Requirements = m_Requirements;
this->m_Controls = m_Controls;
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::__set_m_Index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::__get_m_Index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::__set_m_Requirements(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, 0x8>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::__get_m_Requirements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::__set_m_Controls(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>, 0x10>(this->__instance, std::forward<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>>(value));
}
constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::__get_m_Controls() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>, 0x10>(this->__instance);
}
 bool ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult.get_score
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_score)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c9558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_score",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult.get_isSuccessfulMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_isSuccessfulMatch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c9560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_isSuccessfulMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult.get_hasMissingRequiredDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_hasMissingRequiredDevices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c9570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_hasMissingRequiredDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult.get_hasMissingOptionalDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_hasMissingOptionalDevices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c9580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_hasMissingOptionalDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult.get_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_devices)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x28c9590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::*)(int32_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28c96cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28c9750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28c97c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28c97c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>() const {
return ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::operator ::System::Collections::IEnumerable() const {
return ::System::Collections::IEnumerable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Result", ty: "::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Score", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Devices", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Requirements", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::____UnityEngine__InputSystem__InputControlScheme__MatchResult(::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result m_Result, float_t m_Score, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice> m_Devices, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> m_Controls, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_Requirements) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Result = m_Result;
this->m_Score = m_Score;
this->m_Devices = m_Devices;
this->m_Controls = m_Controls;
this->m_Requirements = m_Requirements;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__set_m_Result(::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result, 0x0>(this->__instance, std::forward<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result>(value));
}
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__get_m_Result() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Result, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__set_m_Score(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__get_m_Score() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__set_m_Devices(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice>, 0x8>(this->__instance, std::forward<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__get_m_Devices() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice>, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__set_m_Controls(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>, 0x28>(this->__instance, std::forward<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>>(value));
}
constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__get_m_Controls() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__set_m_Requirements(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, 0x48>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::__get_m_Requirements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, 0x48>(this->__instance);
}
 float_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_score()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_score",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_isSuccessfulMatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_isSuccessfulMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_hasMissingRequiredDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_hasMissingRequiredDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_hasMissingOptionalDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_hasMissingOptionalDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_devices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags::None{0};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags::Optional{1};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags::Or{2};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.get_controlPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::get_controlPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c9a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "get_controlPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.set_controlPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::set_controlPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c9a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "set_controlPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.get_isOptional
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::get_isOptional)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c98e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "get_isOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.set_isOptional
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)(bool)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::set_isOptional)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c9a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "set_isOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.get_isAND
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::get_isAND)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28c9a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "get_isAND",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.set_isAND
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)(bool)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::set_isAND)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c9a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "set_isAND",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.get_isOR
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::get_isOR)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c9a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "get_isOR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.set_isOR
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)(bool)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::set_isOR)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c9a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "set_isOR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28c9aa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28c9b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)(::bs_hook::Il2CppWrapperType)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x28c9bd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::GetHashCode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x28c9c4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28c9cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28c9d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::operator ::System::IEquatable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>() const {
return ::System::IEquatable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_ControlPath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Flags", ty: "::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement(::StringW m_ControlPath, ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags m_Flags) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_ControlPath = m_ControlPath;
this->m_Flags = m_Flags;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::__set_m_ControlPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::__get_m_ControlPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::__set_m_Flags(::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags, 0x8>(this->__instance, std::forward<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags>(value));
}
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags, 0x8>(this->__instance);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::get_controlPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "get_controlPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::set_controlPath(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "set_controlPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::get_isOptional()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "get_isOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::set_isOptional(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "set_isOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::get_isAND()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "get_isAND",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::set_isAND(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "set_isAND",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::get_isOR()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "get_isOR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::set_isOR(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "set_isOR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::Equals(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::op_Equality(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement left, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement::op_Inequality(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement left, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson.ToDeviceEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement (::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::ToDeviceEntry)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c9e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson>::get(),
                            "ToDeviceEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson.From
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson (*)(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement)>(&::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::From)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28c9f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "devicePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOR", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson(::StringW devicePath, bool isOptional, bool isOR) noexcept : ::bs_hook::ValueTypeWrapper() {this->devicePath = devicePath;
this->isOptional = isOptional;
this->isOR = isOR;
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::__set_devicePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::__get_devicePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::__set_isOptional(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::__get_isOptional() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::__set_isOR(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::__get_isOR() const {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->__instance);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::ToDeviceEntry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson>::get(),
                            "ToDeviceEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson::From(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement requirement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson, false>(nullptr, ___internal_method, requirement);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson.ToScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlScheme (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::ToScheme)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x28c9d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>::get(),
                            "ToScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson (*)(::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::ToJson)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x28c9eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> (*)(::ArrayW<::UnityEngine::InputSystem::InputControlScheme>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::ToJson)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x28c9fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson.ToSchemes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputControlScheme> (*)(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::ToSchemes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x28ca0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>::get(),
                            "ToSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bindingGroup", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "devices", ty: "::ArrayW<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::____UnityEngine__InputSystem__InputControlScheme__SchemeJson(::StringW name, ::StringW bindingGroup, ::ArrayW<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson> devices) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->bindingGroup = bindingGroup;
this->devices = devices;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::__set_bindingGroup(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::__get_bindingGroup() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::__set_devices(::ArrayW<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson>, 0x10>(this->__instance, std::forward<::ArrayW<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::__get_devices() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson>, 0x10>(this->__instance);
}
 ::UnityEngine::InputSystem::InputControlScheme ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::ToScheme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>::get(),
                            "ToScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::ToJson(::UnityEngine::InputSystem::InputControlScheme scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson, false>(nullptr, ___internal_method, scheme);
}
 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::ToJson(::ArrayW<::UnityEngine::InputSystem::InputControlScheme> schemes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>, false>(nullptr, ___internal_method, schemes);
}
 ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson::ToSchemes(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> schemes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>::get(),
                            "ToSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputControlScheme>, false>(nullptr, ___internal_method, schemes);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c6324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.get_bindingGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::get_bindingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c632c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "get_bindingGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.set_bindingGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControlScheme::*)(::StringW)>(&::UnityEngine::InputSystem::InputControlScheme::set_bindingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c6334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "set_bindingGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.get_deviceRequirements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::get_deviceRequirements)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28c633c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "get_deviceRequirements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControlScheme::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, ::StringW)>(&::UnityEngine::InputSystem::InputControlScheme::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x28c639c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.SetNameAndBindingGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControlScheme::*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputControlScheme::SetNameAndBindingGroup)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28c6490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "SetNameAndBindingGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.SupportsDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControlScheme::*)(::UnityEngine::InputSystem::InputDevice)>(&::UnityEngine::InputSystem::InputControlScheme::SupportsDevice)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28c6548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "SupportsDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControlScheme::*)(::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::InputControlScheme::Equals)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x28c661c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControlScheme::*)(::bs_hook::Il2CppWrapperType)>(&::UnityEngine::InputSystem::InputControlScheme::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28c6758;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::InputControlScheme),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c67e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::InputControlScheme),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::ToString)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x28c6868;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::InputControlScheme),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControlScheme, ::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::InputControlScheme::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28c69ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControlScheme, ::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::InputControlScheme::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28c6a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>
constexpr  ::UnityEngine::InputSystem::InputControlScheme::operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>() const {
return ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_BindingGroup", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_DeviceRequirements", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::InputControlScheme::InputControlScheme(::StringW m_Name, ::StringW m_BindingGroup, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_DeviceRequirements) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Name = m_Name;
this->m_BindingGroup = m_BindingGroup;
this->m_DeviceRequirements = m_DeviceRequirements;
}
constexpr void ::UnityEngine::InputSystem::InputControlScheme::__set_m_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::InputControlScheme::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::InputControlScheme::__set_m_BindingGroup(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::InputControlScheme::__get_m_BindingGroup() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::InputControlScheme::__set_m_DeviceRequirements(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, 0x10>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> ::UnityEngine::InputSystem::InputControlScheme::__get_m_DeviceRequirements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, 0x10>(this->__instance);
}
 ::StringW ::UnityEngine::InputSystem::InputControlScheme::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::UnityEngine::InputSystem::InputControlScheme::get_bindingGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "get_bindingGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputControlScheme::set_bindingGroup(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "set_bindingGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> ::UnityEngine::InputSystem::InputControlScheme::get_deviceRequirements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "get_deviceRequirements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param devices: ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> (default: csnull)
/// @param bindingGroup: ::StringW (default: csnull)
 void ::UnityEngine::InputSystem::InputControlScheme::_ctor(::StringW name, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> devices, ::StringW bindingGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name, devices, bindingGroup);
}
/// @param bindingGroup: ::StringW (default: csnull)
 void ::UnityEngine::InputSystem::InputControlScheme::SetNameAndBindingGroup(::StringW name, ::StringW bindingGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "SetNameAndBindingGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name, bindingGroup);
}
/// @param mustIncludeDevice: ::UnityEngine::InputSystem::InputDevice (default: csnull)
/// @param allowUnsuccesfulMatch: bool (default: false)
template<typename TDevices,typename TSchemes>
 ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> ::UnityEngine::InputSystem::InputControlScheme::FindControlSchemeForDevices(TDevices devices, TSchemes schemes, ::UnityEngine::InputSystem::InputDevice mustIncludeDevice, bool allowUnsuccesfulMatch)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                        "FindControlSchemeForDevices",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSchemes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, false>(nullptr, ___internal_method, devices, schemes, mustIncludeDevice, allowUnsuccesfulMatch);
}
/// @param mustIncludeDevice: ::UnityEngine::InputSystem::InputDevice (default: csnull)
/// @param allowUnsuccessfulMatch: bool (default: false)
template<typename TDevices,typename TSchemes>
 bool ::UnityEngine::InputSystem::InputControlScheme::FindControlSchemeForDevices(TDevices devices, TSchemes schemes, ByRef<::UnityEngine::InputSystem::InputControlScheme> controlScheme, ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult> matchResult, ::UnityEngine::InputSystem::InputDevice mustIncludeDevice, bool allowUnsuccessfulMatch)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                        "FindControlSchemeForDevices",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSchemes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, devices, schemes, controlScheme, matchResult, mustIncludeDevice, allowUnsuccessfulMatch);
}
template<typename TSchemes>
 ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> ::UnityEngine::InputSystem::InputControlScheme::FindControlSchemeForDevice(::UnityEngine::InputSystem::InputDevice device, TSchemes schemes)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                        "FindControlSchemeForDevice",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSchemes>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, false>(nullptr, ___internal_method, device, schemes);
}
 bool ::UnityEngine::InputSystem::InputControlScheme::SupportsDevice(::UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "SupportsDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, device);
}
/// @param favorDevice: ::UnityEngine::InputSystem::InputDevice (default: csnull)
template<typename TDevices>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult ::UnityEngine::InputSystem::InputControlScheme::PickDevicesFrom(TDevices devices, ::UnityEngine::InputSystem::InputDevice favorDevice)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                        "PickDevicesFrom",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, devices, favorDevice);
}
 bool ::UnityEngine::InputSystem::InputControlScheme::Equals(::UnityEngine::InputSystem::InputControlScheme other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool ::UnityEngine::InputSystem::InputControlScheme::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t ::UnityEngine::InputSystem::InputControlScheme::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::UnityEngine::InputSystem::InputControlScheme::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::InputControlScheme::op_Equality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool ::UnityEngine::InputSystem::InputControlScheme::op_Inequality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
} // end anonymous namespace
