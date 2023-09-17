#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
// Ctor Parameters [CppParam { name: "instance", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bindingIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter(::bs_hook::Il2CppWrapperType instance, ::System::Reflection::FieldInfo field, int32_t bindingIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->instance = instance;
this->field = field;
this->bindingIndex = bindingIndex;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter::__set_instance(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter::__get_instance() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter::__set_field(::System::Reflection::FieldInfo value)  {
::cordl_internals::setInstanceField<::System::Reflection::FieldInfo, 0x8>(this->__instance, std::forward<::System::Reflection::FieldInfo>(value));
}
constexpr ::System::Reflection::FieldInfo ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter::__get_field() const {
return ::cordl_internals::getInstanceField<::System::Reflection::FieldInfo, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter::__set_bindingIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter::__get_bindingIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::*)(::UnityEngine::InputSystem::InputActionState, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride, int32_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28accfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28acd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28b233c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28b23f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>() const {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::operator ::System::Collections::IEnumerable() const {
return ::System::Collections::IEnumerable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Parameter", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable(::UnityEngine::InputSystem::InputActionState m_State, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride m_Parameter, int32_t m_MapIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_State = m_State;
this->m_Parameter = m_Parameter;
this->m_MapIndex = m_MapIndex;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::__set_m_State(::UnityEngine::InputSystem::InputActionState value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionState, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::InputActionState>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionState ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::__get_m_State() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::__set_m_Parameter(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride, 0x8>(this->__instance, std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>(value));
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::__get_m_Parameter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::__set_m_MapIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::__get_m_MapIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->__instance);
}
/// @param mapIndex: int32_t (default: -1)
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::_ctor(::UnityEngine::InputSystem::InputActionState state, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride parameter, int32_t mapIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, state, parameter, mapIndex);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)(::UnityEngine::InputSystem::InputActionState, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride, int32_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x28b20f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator.MoveToNextBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextBinding)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x28b262c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "MoveToNextBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator.MoveToNextInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextInteraction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28b27e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "MoveToNextInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator.MoveToNextProcessor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextProcessor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28b2940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "MoveToNextProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator.FindParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)(::bs_hook::Il2CppWrapperType)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::FindParameter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x28b2858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "FindParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28acda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::Reset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28b2560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28acd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28b29b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28b2a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>() const {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::operator ::System::Collections::IEnumerator() const {
return ::System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingCurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingEndIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionCurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionEndIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProcessorCurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProcessorEndIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ObjectType", ty: "::System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_ParameterName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_MayBeInteraction", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MayBeProcessor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MayBeComposite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentBindingIsComposite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_CurrentParameter", ty: "::System::Reflection::FieldInfo", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator(::UnityEngine::InputSystem::InputActionState m_State, int32_t m_MapIndex, int32_t m_BindingCurrentIndex, int32_t m_BindingEndIndex, int32_t m_InteractionCurrentIndex, int32_t m_InteractionEndIndex, int32_t m_ProcessorCurrentIndex, int32_t m_ProcessorEndIndex, ::UnityEngine::InputSystem::InputBinding m_BindingMask, ::System::Type m_ObjectType, ::StringW m_ParameterName, bool m_MayBeInteraction, bool m_MayBeProcessor, bool m_MayBeComposite, bool m_CurrentBindingIsComposite, ::bs_hook::Il2CppWrapperType m_CurrentObject, ::System::Reflection::FieldInfo m_CurrentParameter) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_State = m_State;
this->m_MapIndex = m_MapIndex;
this->m_BindingCurrentIndex = m_BindingCurrentIndex;
this->m_BindingEndIndex = m_BindingEndIndex;
this->m_InteractionCurrentIndex = m_InteractionCurrentIndex;
this->m_InteractionEndIndex = m_InteractionEndIndex;
this->m_ProcessorCurrentIndex = m_ProcessorCurrentIndex;
this->m_ProcessorEndIndex = m_ProcessorEndIndex;
this->m_BindingMask = m_BindingMask;
this->m_ObjectType = m_ObjectType;
this->m_ParameterName = m_ParameterName;
this->m_MayBeInteraction = m_MayBeInteraction;
this->m_MayBeProcessor = m_MayBeProcessor;
this->m_MayBeComposite = m_MayBeComposite;
this->m_CurrentBindingIsComposite = m_CurrentBindingIsComposite;
this->m_CurrentObject = m_CurrentObject;
this->m_CurrentParameter = m_CurrentParameter;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_State(::UnityEngine::InputSystem::InputActionState value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionState, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::InputActionState>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionState ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_State() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_MapIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_MapIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_BindingCurrentIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_BindingCurrentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_BindingEndIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_BindingEndIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_InteractionCurrentIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_InteractionCurrentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_InteractionEndIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_InteractionEndIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_ProcessorCurrentIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_ProcessorCurrentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_ProcessorEndIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_ProcessorEndIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_BindingMask(::UnityEngine::InputSystem::InputBinding value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputBinding, 0x28>(this->__instance, std::forward<::UnityEngine::InputSystem::InputBinding>(value));
}
constexpr ::UnityEngine::InputSystem::InputBinding ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_BindingMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputBinding, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_ObjectType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x80>(this->__instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_ObjectType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x80>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_ParameterName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x88>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_ParameterName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_MayBeInteraction(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_MayBeInteraction() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_MayBeProcessor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x91>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_MayBeProcessor() const {
return ::cordl_internals::getInstanceField<bool, 0x91>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_MayBeComposite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x92>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_MayBeComposite() const {
return ::cordl_internals::getInstanceField<bool, 0x92>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_CurrentBindingIsComposite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x93>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_CurrentBindingIsComposite() const {
return ::cordl_internals::getInstanceField<bool, 0x93>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_CurrentObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x98>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_CurrentObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x98>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__set_m_CurrentParameter(::System::Reflection::FieldInfo value)  {
::cordl_internals::setInstanceField<::System::Reflection::FieldInfo, 0xa0>(this->__instance, std::forward<::System::Reflection::FieldInfo>(value));
}
constexpr ::System::Reflection::FieldInfo ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::__get_m_CurrentParameter() const {
return ::cordl_internals::getInstanceField<::System::Reflection::FieldInfo, 0xa0>(this->__instance);
}
/// @param mapIndex: int32_t (default: -1)
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::_ctor(::UnityEngine::InputSystem::InputActionState state, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride parameter, int32_t mapIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, state, parameter, mapIndex);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextBinding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "MoveToNextBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextInteraction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "MoveToNextInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::MoveToNextProcessor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "MoveToNextProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::FindParameter(::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "FindParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, instance);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride.get_objectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::get_objectType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28b24ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            "get_objectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::*)(::StringW, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28aca9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::*)(::StringW, ::StringW, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28b2a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> (*)(::UnityEngine::InputSystem::InputActionMap, ByRef<::UnityEngine::InputSystem::InputBinding>, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::Find)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x28ada90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> (*)(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>, int32_t, ByRef<::UnityEngine::InputSystem::InputBinding>, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::Find)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x28b2a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride.PickMoreSpecificOne
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> (*)(::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>, ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::PickMoreSpecificOne)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x28b2c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            "PickMoreSpecificOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "objectRegistrationName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "parameter", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride(::StringW objectRegistrationName, ::StringW parameter, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->objectRegistrationName = objectRegistrationName;
this->parameter = parameter;
this->bindingMask = bindingMask;
this->value = value;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::__set_objectRegistrationName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::__get_objectRegistrationName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::__set_parameter(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::__get_parameter() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::__set_bindingMask(::UnityEngine::InputSystem::InputBinding value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputBinding, 0x10>(this->__instance, std::forward<::UnityEngine::InputSystem::InputBinding>(value));
}
constexpr ::UnityEngine::InputSystem::InputBinding ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::__get_bindingMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputBinding, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::__set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::PrimitiveValue, 0x68>(this->__instance, std::forward<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::PrimitiveValue, 0x68>(this->__instance);
}
 ::System::Type ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::get_objectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            "get_objectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param value: ::UnityEngine::InputSystem::Utilities::PrimitiveValue (default: {})
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::_ctor(::StringW parameterName, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, parameterName, bindingMask, value);
}
/// @param value: ::UnityEngine::InputSystem::Utilities::PrimitiveValue (default: {})
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::_ctor(::StringW objectRegistrationName, ::StringW parameterName, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, objectRegistrationName, parameterName, bindingMask, value);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::Find(::UnityEngine::InputSystem::InputActionMap actionMap, ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW parameterName, ::StringW objectRegistrationName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>, false>(nullptr, ___internal_method, actionMap, binding, parameterName, objectRegistrationName);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::Find(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> overrides, int32_t overrideCount, ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW parameterName, ::StringW objectRegistrationName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>, false>(nullptr, ___internal_method, overrides, overrideCount, binding, parameterName, objectRegistrationName);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride::PickMoreSpecificOne(::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> first, ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> second)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get(),
                            "PickMoreSpecificOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>, false>(nullptr, ___internal_method, first, second);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::Started{1};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::Completed{2};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::Canceled{4};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::OnEventHooked{8};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::OnAfterUpdateHooked{16};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::DontIgnoreNoisyControls{64};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::DontGeneralizePathOfSelectedControl{128};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::AddNewBinding{256};
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags  ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags::SuppressMatchingEvents{512};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::*)()>(&::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b33ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0._WithTargetBinding_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::*)(::UnityEngine::InputSystem::InputControlScheme)>(&::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::_WithTargetBinding_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28b4e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0>::get(),
                            "<WithTargetBinding>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::__set_group(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::__get_group() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0>())) {}
 void ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0::_WithTargetBinding_b__0(::UnityEngine::InputSystem::InputControlScheme x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0>::get(),
                            "<WithTargetBinding>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_action
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b2ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28b2ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_candidates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_candidates)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28b2f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_candidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_scores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_scores)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28b2f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_scores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_magnitudes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_magnitudes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28b2f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_magnitudes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_selectedControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_selectedControl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28b2ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_selectedControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_started
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_started)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28b306c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_completed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28b3078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_canceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_canceled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28b3084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b3090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b3098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.get_expectedControlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_expectedControlType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28b1b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_expectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithAction)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x28b182c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithMatchingEventsBeingSuppressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(bool)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithMatchingEventsBeingSuppressed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x28b1af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithMatchingEventsBeingSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithCancelingThrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithCancelingThrough)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28b1b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithCancelingThrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithCancelingThrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithCancelingThrough)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28b3148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithCancelingThrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithExpectedControlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28b3100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithExpectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithExpectedControlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::System::Type)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x28b31d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithExpectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithTargetBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(int32_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithTargetBinding)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x28b1b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithTargetBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithBindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithBindingMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28b3520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithBindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithBindingGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithBindingGroup)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28b3540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithBindingGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithoutGeneralizingPathOfSelectedControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithoutGeneralizingPathOfSelectedControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28b35d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithoutGeneralizingPathOfSelectedControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithRebindAddingNewBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithRebindAddingNewBinding)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28b35e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithRebindAddingNewBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithMagnitudeHavingToBeGreaterThan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(float_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithMagnitudeHavingToBeGreaterThan)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x28b35fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithMagnitudeHavingToBeGreaterThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithoutIgnoringNoisyControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithoutIgnoringNoisyControls)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28b36c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithoutIgnoringNoisyControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithControlsHavingToMatchPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithControlsHavingToMatchPath)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x28b33f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithControlsHavingToMatchPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithControlsExcluding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithControlsExcluding)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x28b19c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithControlsExcluding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.WithTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(float_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b36e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b36f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnCancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b36f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnPotentialMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnPotentialMatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b3700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnPotentialMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnGeneratePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnGeneratePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b3708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnGeneratePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnComputeScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnComputeScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b3710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnComputeScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnApplyBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnApplyBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b3718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnApplyBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnMatchWaitForAnother
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(float_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnMatchWaitForAnother)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b19c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnMatchWaitForAnother",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Start)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x28b3720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Cancel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28b3a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Complete)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28b3a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.AddCandidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::UnityEngine::InputSystem::InputControl, float_t, float_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::AddCandidate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x28b3d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "AddCandidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.RemoveCandidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::RemoveCandidate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x28b4034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "RemoveCandidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28b4154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28b42b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28b4348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.HookOnEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::HookOnEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x28b3950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "HookOnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.UnhookOnEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::UnhookOnEvent)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28b41b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "UnhookOnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnEvent)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x28b43e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.SortCandidatesByScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::SortCandidatesByScore)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x28b3f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "SortCandidatesByScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.HavePathMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl, ::ArrayW<::StringW>, int32_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::HavePathMatch)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28b4b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "HavePathMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.HookOnAfterUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::HookOnAfterUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x28b3888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "HookOnAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.UnhookOnAfterUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::UnhookOnAfterUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28b4240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "UnhookOnAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnAfterUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnAfterUpdate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28b4ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnComplete)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x28b3a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.OnCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnCancel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x28b3a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.ResetAfterMatchCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::ResetAfterMatchCompleted)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28b4da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "ResetAfterMatchCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.ThrowIfRebindInProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::ThrowIfRebindInProgress)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28b30a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "ThrowIfRebindInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation.GeneratePathForControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)(::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::GeneratePathForControl)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x28b4c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "GeneratePathForControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28b179c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_ActionToRebind(::UnityEngine::InputSystem::InputAction value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputAction>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_ActionToRebind() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_BindingMask() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_ControlType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_ControlType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_ExpectedLayout(::UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_ExpectedLayout() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InternedString, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_IncludePathCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_IncludePathCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_IncludePaths(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_IncludePaths() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_ExcludePathCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_ExcludePathCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_ExcludePaths(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_ExcludePaths() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_TargetBindingIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_TargetBindingIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_BindingGroupForNewBinding(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_BindingGroupForNewBinding() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_CancelBinding(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_CancelBinding() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_MagnitudeThreshold(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_MagnitudeThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_Scores(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_Scores() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_Magnitudes(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_Magnitudes() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_LastMatchTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_LastMatchTime() const {
return ::cordl_internals::getInstanceField<double_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_StartTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_StartTime() const {
return ::cordl_internals::getInstanceField<double_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_Timeout(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_Timeout() const {
return ::cordl_internals::getInstanceField<float_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_WaitSecondsAfterMatch(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_WaitSecondsAfterMatch() const {
return ::cordl_internals::getInstanceField<float_t, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_Candidates(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>>(value));
}
constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_Candidates() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_OnComplete(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_OnComplete() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_OnCancel(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_OnCancel() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_OnPotentialMatch() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW>>(value));
}
constexpr ::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_OnGeneratePath() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t> value)  {
::cordl_internals::setInstanceField<::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>>(value));
}
constexpr ::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_OnComputeScore() const {
return ::cordl_internals::getInstanceField<::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW>>(value));
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_OnApplyBinding() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_OnEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_OnEventDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_OnAfterUpdateDelegate(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_OnAfterUpdateDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_LayoutCache(::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Cache value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Cache, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Cache>(value));
}
constexpr ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Cache ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_LayoutCache() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Cache, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_PathBuilder(::System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::StringBuilder>(value));
}
constexpr ::System::Text::StringBuilder ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_PathBuilder() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_Flags(::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags>(value));
}
constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__set_m_StartingActuations(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl,float_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl,float_t>, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl,float_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl,float_t> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::__get_m_StartingActuations() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl,float_t>, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_action()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_candidates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_candidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_scores()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_scores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_magnitudes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_magnitudes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::InputControl ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_selectedControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_selectedControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_started()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_completed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_canceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_timeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::get_expectedControlType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "get_expectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithAction(::UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, action);
}
/// @param value: bool (default: true)
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithMatchingEventsBeingSuppressed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithMatchingEventsBeingSuppressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithCancelingThrough(::StringW binding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithCancelingThrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, binding);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithCancelingThrough(::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithCancelingThrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, control);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType(::StringW layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithExpectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, layoutName);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithExpectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, type);
}
template<typename TControl>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithExpectedControlType()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                        "WithExpectedControlType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithTargetBinding(int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithTargetBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, bindingIndex);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithBindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithBindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, bindingMask);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithBindingGroup(::StringW group)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithBindingGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, group);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithoutGeneralizingPathOfSelectedControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithoutGeneralizingPathOfSelectedControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param group: ::StringW (default: csnull)
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithRebindAddingNewBinding(::StringW group)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithRebindAddingNewBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, group);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithMagnitudeHavingToBeGreaterThan(float_t magnitude)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithMagnitudeHavingToBeGreaterThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, magnitude);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithoutIgnoringNoisyControls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithoutIgnoringNoisyControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithControlsHavingToMatchPath(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithControlsHavingToMatchPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, path);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithControlsExcluding(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithControlsExcluding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, path);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::WithTimeout(float_t timeInSeconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "WithTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, timeInSeconds);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnComplete(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnCancel(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnPotentialMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnGeneratePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnComputeScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnApplyBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnMatchWaitForAnother(float_t seconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnMatchWaitForAnother",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method, seconds);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Complete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param magnitude: float_t (default: -1)
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::AddCandidate(::UnityEngine::InputSystem::InputControl control, float_t score, float_t magnitude)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "AddCandidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control, score, magnitude);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::RemoveCandidate(::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "RemoveCandidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, control);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::HookOnEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "HookOnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::UnhookOnEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "UnhookOnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventPtr, device);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::SortCandidatesByScore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "SortCandidatesByScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::HavePathMatch(::UnityEngine::InputSystem::InputControl control, ::ArrayW<::StringW> paths, int32_t pathCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "HavePathMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, paths, pathCount);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::HookOnAfterUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "HookOnAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::UnhookOnAfterUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "UnhookOnAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnAfterUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnAfterUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::OnCancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "OnCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::ResetAfterMatchCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "ResetAfterMatchCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::ThrowIfRebindInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "ThrowIfRebindInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::GeneratePathForControl(::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            "GeneratePathForControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, control);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>())) {}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper.Acquire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::Acquire)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28b20a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28b4e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b209c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::Acquire()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper>())) {}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28aebdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0._GetBindingDisplayString_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::_GetBindingDisplayString_b__0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x28b4ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0>::get(),
                            "<GetBindingDisplayString>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::__set_bindings(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::__get_bindings() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::__set_firstPartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::__get_firstPartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::__set_partStrings(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::__get_partStrings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::__set_partCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::__get_partCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0>())) {}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0::_GetBindingDisplayString_b__0(::StringW fragment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0>::get(),
                            "<GetBindingDisplayString>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, fragment);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetParameterValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> (*)(::UnityEngine::InputSystem::InputAction, ::StringW, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x28ac968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetParameterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetParameterValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> (*)(::UnityEngine::InputSystem::InputAction, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x28acb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetParameterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetParameterValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> (*)(::UnityEngine::InputSystem::InputAction, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x28ace58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetParameterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap, ::StringW, ::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x28ad070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionAsset, ::StringW, ::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x28ad584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction, ::StringW, ::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28ad71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction, ::StringW, ::UnityEngine::InputSystem::Utilities::PrimitiveValue, int32_t)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x28ad880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyParameterOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionState, int32_t, ByRef<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>, ByRef<int32_t>, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x28ad1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputAction, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x28adc3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputActionMap, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x28add54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputAction, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x28ade6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingForControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (*)(::UnityEngine::InputSystem::InputAction, ::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingForControl)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x28adf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingForControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingIndexForControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputAction, ::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndexForControl)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x28ae0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingIndexForControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingDisplayString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions, ::StringW)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28ae250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingDisplayString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingDisplayString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x28ae3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingDisplayString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingDisplayString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction, int32_t, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x28ae5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingDisplayString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.GetBindingDisplayString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction, int32_t, ByRef<::StringW>, ByRef<::StringW>, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x28ae63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingDisplayString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction, ::StringW, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28aebe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x28aec68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction, int32_t, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x28aeea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction, int32_t, ::StringW)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x28af0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputActionMap, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x28aed74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap, int32_t, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x28aef68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveBindingOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction, int32_t)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28af190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveBindingOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28af210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveBindingOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28af298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveAllBindingOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::IInputActionCollection2)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveAllBindingOverrides)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x28af320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveAllBindingOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveAllBindingOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveAllBindingOverrides)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x28af860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveAllBindingOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverrides)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x28af99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.RemoveBindingOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverrides)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x28afd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveBindingOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverridesOnMatchingControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputAction, ::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverridesOnMatchingControls)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x28b00ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverridesOnMatchingControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.ApplyBindingOverridesOnMatchingControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputActionMap, ::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverridesOnMatchingControls)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x28b0208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverridesOnMatchingControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.SaveBindingOverridesAsJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::IInputActionCollection2)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::SaveBindingOverridesAsJson)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x28b032c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "SaveBindingOverridesAsJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.SaveBindingOverridesAsJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::SaveBindingOverridesAsJson)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x28b09a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "SaveBindingOverridesAsJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.AddBindingOverrideJsonTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::IInputActionCollection2, ::UnityEngine::InputSystem::InputBinding, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>, ::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::AddBindingOverrideJsonTo)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x28b07c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "AddBindingOverrideJsonTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.LoadBindingOverridesFromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::IInputActionCollection2, ::StringW, bool)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJson)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x28b0d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "LoadBindingOverridesFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.LoadBindingOverridesFromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction, ::StringW, bool)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJson)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x28b11d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "LoadBindingOverridesFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.LoadBindingOverridesFromJsonInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::IInputActionCollection2, ::StringW)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJsonInternal)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x28b0ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "LoadBindingOverridesFromJsonInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.PerformInteractiveRebinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation (*)(::UnityEngine::InputSystem::InputAction, int32_t)>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::PerformInteractiveRebinding)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x28b13c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "PerformInteractiveRebinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionRebindingExtensions.DeferBindingResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper (*)()>(&::UnityEngine::InputSystem::InputActionRebindingExtensions::DeferBindingResolution)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x28abd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "DeferBindingResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::__set_s_DeferBindingResolutionWrapper(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper, "s_DeferBindingResolutionWrapper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get>(std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper>(value));
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper ::UnityEngine::InputSystem::InputActionRebindingExtensions::__get_s_DeferBindingResolutionWrapper()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper, "s_DeferBindingResolutionWrapper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get>();
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue(::UnityEngine::InputSystem::InputAction action, ::StringW name, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetParameterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>, false>(nullptr, ___internal_method, action, name, bindingMask);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride parameterOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetParameterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>, false>(nullptr, ___internal_method, action, parameterOverride);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue(::UnityEngine::InputSystem::InputAction action, ::StringW name, int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetParameterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>, false>(nullptr, ___internal_method, action, name, bindingIndex);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
template<typename TObject,typename TValue>
 ::System::Nullable_1<TValue> ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetParameterValue(::UnityEngine::InputSystem::InputAction action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                        "GetParameterValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<TValue>, false>(nullptr, ___internal_method, action, expr, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
template<typename TObject,typename TValue>
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputAction action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, TValue value, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                        "ApplyParameterOverride",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, expr, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
template<typename TObject,typename TValue>
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap actionMap, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, TValue value, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                        "ApplyParameterOverride",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, expr, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
template<typename TObject,typename TValue>
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset asset, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, TValue value, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                        "ApplyParameterOverride",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, expr, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
/// @param value: ::UnityEngine::InputSystem::Utilities::PrimitiveValue (default: {})
template<typename TObject,typename TValue>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride ::UnityEngine::InputSystem::InputActionRebindingExtensions::ExtractParameterOverride(::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                        "ExtractParameterOverride",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride, false>(nullptr, ___internal_method, expr, bindingMask, value);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap actionMap, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, name, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset asset, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, name, value, bindingMask);
}
/// @param bindingMask: ::UnityEngine::InputSystem::InputBinding (default: {})
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputAction action, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, name, value, bindingMask);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputAction action, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, name, value, bindingIndex);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyParameterOverride(::UnityEngine::InputSystem::InputActionState state, int32_t mapIndex, ByRef<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>> parameterOverrides, ByRef<int32_t> parameterOverridesCount, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride parameterOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyParameterOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state, mapIndex, parameterOverrides, parameterOverridesCount, parameterOverride);
}
 int32_t ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, action, bindingMask);
}
 int32_t ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex(::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, actionMap, bindingMask);
}
/// @param group: ::StringW (default: csnull)
/// @param path: ::StringW (default: csnull)
 int32_t ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndex(::UnityEngine::InputSystem::InputAction action, ::StringW group, ::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, action, group, path);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingForControl(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingForControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(nullptr, ___internal_method, action, control);
}
 int32_t ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingIndexForControl(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingIndexForControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, action, control);
}
/// @param options: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions (default: 0)
/// @param group: ::StringW (default: csnull)
 ::StringW ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options, ::StringW group)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingDisplayString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action, options, group);
}
/// @param options: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions (default: 0)
 ::StringW ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingDisplayString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action, bindingMask, options);
}
/// @param options: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions (default: 0)
 ::StringW ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingDisplayString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action, bindingIndex, options);
}
/// @param options: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions (default: 0)
 ::StringW ::UnityEngine::InputSystem::InputActionRebindingExtensions::GetBindingDisplayString(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex, ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "GetBindingDisplayString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action, bindingIndex, deviceLayoutName, controlPath, options);
}
/// @param group: ::StringW (default: csnull)
/// @param path: ::StringW (default: csnull)
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputAction action, ::StringW newPath, ::StringW group, ::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, newPath, group, path);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding bindingOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingOverride);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingIndex, bindingOverride);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex, ::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingIndex, path);
}
 int32_t ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputBinding bindingOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, actionMap, bindingOverride);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap actionMap, int32_t bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, bindingIndex, bindingOverride);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingIndex);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, bindingMask);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverride(::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveBindingOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, bindingMask);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveAllBindingOverrides(::UnityEngine::InputSystem::IInputActionCollection2 actions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveAllBindingOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actions);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveAllBindingOverrides(::UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveAllBindingOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverrides(::UnityEngine::InputSystem::InputActionMap actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> overrides)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, overrides);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::RemoveBindingOverrides(::UnityEngine::InputSystem::InputActionMap actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> overrides)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "RemoveBindingOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionMap, overrides);
}
 int32_t ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverridesOnMatchingControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, action, control);
}
 int32_t ::UnityEngine::InputSystem::InputActionRebindingExtensions::ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "ApplyBindingOverridesOnMatchingControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, actionMap, control);
}
 ::StringW ::UnityEngine::InputSystem::InputActionRebindingExtensions::SaveBindingOverridesAsJson(::UnityEngine::InputSystem::IInputActionCollection2 actions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "SaveBindingOverridesAsJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, actions);
}
 ::StringW ::UnityEngine::InputSystem::InputActionRebindingExtensions::SaveBindingOverridesAsJson(::UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "SaveBindingOverridesAsJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
/// @param action: ::UnityEngine::InputSystem::InputAction (default: csnull)
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::AddBindingOverrideJsonTo(::UnityEngine::InputSystem::IInputActionCollection2 actions, ::UnityEngine::InputSystem::InputBinding binding, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson> list, ::UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "AddBindingOverrideJsonTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actions, binding, list, action);
}
/// @param removeExisting: bool (default: true)
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJson(::UnityEngine::InputSystem::IInputActionCollection2 actions, ::StringW json, bool removeExisting)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "LoadBindingOverridesFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actions, json, removeExisting);
}
/// @param removeExisting: bool (default: true)
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJson(::UnityEngine::InputSystem::InputAction action, ::StringW json, bool removeExisting)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "LoadBindingOverridesFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, json, removeExisting);
}
 void ::UnityEngine::InputSystem::InputActionRebindingExtensions::LoadBindingOverridesFromJsonInternal(::UnityEngine::InputSystem::IInputActionCollection2 actions, ::StringW json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "LoadBindingOverridesFromJsonInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actions, json);
}
/// @param bindingIndex: int32_t (default: -1)
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation ::UnityEngine::InputSystem::InputActionRebindingExtensions::PerformInteractiveRebinding(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "PerformInteractiveRebinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, false>(nullptr, ___internal_method, action, bindingIndex);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper ::UnityEngine::InputSystem::InputActionRebindingExtensions::DeferBindingResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionRebindingExtensions>::get(),
                            "DeferBindingResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
