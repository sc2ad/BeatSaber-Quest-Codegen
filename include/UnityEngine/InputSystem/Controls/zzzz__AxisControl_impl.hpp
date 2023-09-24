#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp::UnityEngine__InputSystem__Controls__AxisControl__Clamp(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp  UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp::None{0};
constexpr UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp  UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp::BeforeNormalize{1};
constexpr UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp  UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp::AfterNormalize{2};
constexpr UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp  UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp::ToConstantBeforeNormalize{3};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::AxisControl.Preprocess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Controls::AxisControl::*)(float_t)>(&UnityEngine::InputSystem::Controls::AxisControl::Preprocess)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2977138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            "Preprocess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::AxisControl.Unpreprocess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Controls::AxisControl::*)(float_t)>(&UnityEngine::InputSystem::Controls::AxisControl::Unpreprocess)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x297720c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            "Unpreprocess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::AxisControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::AxisControl::*)()>(&UnityEngine::InputSystem::Controls::AxisControl::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2977258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::AxisControl.FinishSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::AxisControl::*)()>(&UnityEngine::InputSystem::Controls::AxisControl::FinishSetup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29772e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Controls::AxisControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::AxisControl.ReadUnprocessedValueFromState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Controls::AxisControl::*)(void*)>(&UnityEngine::InputSystem::Controls::AxisControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2977384;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Controls::AxisControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::AxisControl.WriteValueIntoState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::AxisControl::*)(float_t, void*)>(&UnityEngine::InputSystem::Controls::AxisControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29773b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Controls::AxisControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::AxisControl.CompareValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Controls::AxisControl::*)(void*, void*)>(&UnityEngine::InputSystem::Controls::AxisControl::CompareValue)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x29773f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Controls::AxisControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::AxisControl.EvaluateMagnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Controls::AxisControl::*)(void*)>(&UnityEngine::InputSystem::Controls::AxisControl::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x29774e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Controls::AxisControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_clamp(UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp>(value));
}
constexpr UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp UnityEngine::InputSystem::Controls::AxisControl::__get_clamp() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_clampMin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Controls::AxisControl::__get_clampMin() const {
return ::cordl_internals::getInstanceField<float_t, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_clampMax(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Controls::AxisControl::__get_clampMax() const {
return ::cordl_internals::getInstanceField<float_t, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_clampConstant(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Controls::AxisControl::__get_clampConstant() const {
return ::cordl_internals::getInstanceField<float_t, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_invert(bool value)  {
::cordl_internals::setInstanceField<bool, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Controls::AxisControl::__get_invert() const {
return ::cordl_internals::getInstanceField<bool, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_normalize(bool value)  {
::cordl_internals::setInstanceField<bool, 0x101>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Controls::AxisControl::__get_normalize() const {
return ::cordl_internals::getInstanceField<bool, 0x101>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_normalizeMin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x104>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Controls::AxisControl::__get_normalizeMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x104>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_normalizeMax(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Controls::AxisControl::__get_normalizeMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_normalizeZero(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Controls::AxisControl::__get_normalizeZero() const {
return ::cordl_internals::getInstanceField<float_t, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_scale(bool value)  {
::cordl_internals::setInstanceField<bool, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Controls::AxisControl::__get_scale() const {
return ::cordl_internals::getInstanceField<bool, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__set_scaleFactor(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x114>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Controls::AxisControl::__get_scaleFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x114>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t UnityEngine::InputSystem::Controls::AxisControl::Preprocess(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            "Preprocess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::InputSystem::Controls::AxisControl::Unpreprocess(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            "Unpreprocess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Controls::AxisControl UnityEngine::InputSystem::Controls::AxisControl::New_ctor()  {
UnityEngine::InputSystem::Controls::AxisControl o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Controls::AxisControl>())};
return o;
}
 void UnityEngine::InputSystem::Controls::AxisControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Controls::AxisControl::FinishSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            "FinishSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::InputSystem::Controls::AxisControl::ReadUnprocessedValueFromState(void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            "ReadUnprocessedValueFromState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, statePtr);
}
 void UnityEngine::InputSystem::Controls::AxisControl::WriteValueIntoState(float_t value, void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            "WriteValueIntoState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, statePtr);
}
 bool UnityEngine::InputSystem::Controls::AxisControl::CompareValue(void* firstStatePtr, void* secondStatePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            "CompareValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, firstStatePtr, secondStatePtr);
}
 float_t UnityEngine::InputSystem::Controls::AxisControl::EvaluateMagnitude(void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::AxisControl>::get(),
                            "EvaluateMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, statePtr);
}
