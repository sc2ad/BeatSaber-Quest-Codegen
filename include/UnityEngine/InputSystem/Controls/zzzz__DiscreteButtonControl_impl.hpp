#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode  ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode::WriteDisabled{0};
constexpr ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode  ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode::WriteNullAndMaxValue{1};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.FinishSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)()>(&::UnityEngine::InputSystem::Controls::DiscreteButtonControl::FinishSetup)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2977c0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.ReadUnprocessedValueFromState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)(void*)>(&::UnityEngine::InputSystem::Controls::DiscreteButtonControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2977cb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.WriteValueIntoState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)(float_t, void*)>(&::UnityEngine::InputSystem::Controls::DiscreteButtonControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2977d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)()>(&::UnityEngine::InputSystem::Controls::DiscreteButtonControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2977e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_minValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_minValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_maxValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_maxValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_wrapAtValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x124>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_wrapAtValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x124>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_nullValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_nullValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_writeMode(::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode>(value));
}
constexpr ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_writeMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::FinishSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl>::get(),
                            "FinishSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::ReadUnprocessedValueFromState(void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl>::get(),
                            "ReadUnprocessedValueFromState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, statePtr);
}
 void ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::WriteValueIntoState(float_t value, void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl>::get(),
                            "WriteValueIntoState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, statePtr);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::DiscreteButtonControl()  : ::UnityEngine::InputSystem::Controls::ButtonControl(THROW_UNLESS(::il2cpp_utils::New<DiscreteButtonControl>())) {}
 void ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
