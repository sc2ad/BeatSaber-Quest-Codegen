#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_impl.hpp"
#include "Tayx/Graphy/zzzz__GraphyDebugger_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamMonitor_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::Tayx__Graphy__GraphyDebugger__DebugVariable(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::Fps{0};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::Fps_Min{1};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::Fps_Max{2};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::Fps_Avg{3};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::Ram_Allocated{4};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::Ram_Reserved{5};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::Ram_Mono{6};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable::Audio_DB{7};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer::Tayx__Graphy__GraphyDebugger__DebugComparer(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer::Less_than{0};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer::Equals_or_less_than{1};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer::Equals{2};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer::Equals_or_greater_than{3};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer::Greater_than{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation::Tayx__Graphy__GraphyDebugger__ConditionEvaluation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation::All_conditions_must_be_met{0};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation::Only_one_condition_has_to_be_met{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType::Tayx__Graphy__GraphyDebugger__MessageType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType::Log{0};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType::Warning{1};
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType  Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType::Error{2};
// Ctor Parameters [CppParam { name: "Variable", ty: "Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comparer", ty: "Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition::Tayx__Graphy__GraphyDebugger__DebugCondition(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable Variable, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer Comparer, float_t Value) noexcept : ::bs_hook::ValueTypeWrapper() {this->Variable = Variable;
this->Comparer = Comparer;
this->Value = Value;
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition::__set_Variable(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable value)  {
::cordl_internals::setInstanceField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable, 0x0>(this->__instance, std::forward<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable>(value));
}
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition::__get_Variable() const {
return ::cordl_internals::getInstanceField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable, 0x0>(this->__instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition::__set_Comparer(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer value)  {
::cordl_internals::setInstanceField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer, 0x4>(this->__instance, std::forward<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer>(value));
}
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition::__get_Comparer() const {
return ::cordl_internals::getInstanceField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer, 0x4>(this->__instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition::__set_Value(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition::__get_Value() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket.get_Check
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::*)()>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::get_Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286eef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get(),
                            "get_Check",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::*)()>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x286e7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket.Executed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::*)()>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::Executed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x286eeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get(),
                            "Executed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::*)()>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x286dde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_Active(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_Active() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_Id(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_Id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_ExecuteOnce(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_ExecuteOnce() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_InitSleepTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_InitSleepTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_ExecuteSleepTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_ExecuteSleepTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_ConditionEvaluation(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation value)  {
::cordl_internals::setInstanceField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation>(value));
}
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_ConditionEvaluation() const {
return ::cordl_internals::getInstanceField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_DebugConditions(System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>>(value));
}
constexpr System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition> Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_DebugConditions() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_MessageType(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType value)  {
::cordl_internals::setInstanceField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType>(value));
}
constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_MessageType() const {
return ::cordl_internals::getInstanceField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_Message(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_Message() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_TakeScreenshot(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_TakeScreenshot() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_ScreenshotFileName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_ScreenshotFileName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_DebugBreak(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_DebugBreak() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_UnityEvents(UnityEngine::Events::UnityEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityEvent, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityEvent>(value));
}
constexpr UnityEngine::Events::UnityEvent Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_UnityEvents() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityEvent, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_Callbacks(System::Collections::Generic::List_1<System::Action> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Action>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Action>>(value));
}
constexpr System::Collections::Generic::List_1<System::Action> Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_Callbacks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Action>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_canBeChecked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_canBeChecked() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_executed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x69>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_executed() const {
return ::cordl_internals::getInstanceField<bool, 0x69>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__set_timePassed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::__get_timePassed() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::get_Check()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get(),
                            "get_Check",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::Executed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get(),
                            "Executed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::Tayx__Graphy__GraphyDebugger__DebugPacket()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Tayx__Graphy__GraphyDebugger__DebugPacket>())) {}
 void Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0::*)()>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286e2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0._GetFirstDebugPacketWithId_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0::*)(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket)>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0::_GetFirstDebugPacketWithId_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x286ef00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0>::get(),
                            "<GetFirstDebugPacketWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0::__set_packetId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0::__get_packetId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0>())) {}
 void Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0::_GetFirstDebugPacketWithId_b__0(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0>::get(),
                            "<GetFirstDebugPacketWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0::*)()>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286e3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0._GetAllDebugPacketsWithId_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0::*)(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket)>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0::_GetAllDebugPacketsWithId_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x286ef24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0>::get(),
                            "<GetAllDebugPacketsWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0::__set_packetId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0::__get_packetId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0>())) {}
 void Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0::_GetAllDebugPacketsWithId_b__0(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0>::get(),
                            "<GetAllDebugPacketsWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0::*)()>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286e52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0._RemoveAllDebugPacketsWithId_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0::*)(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket)>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0::_RemoveAllDebugPacketsWithId_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x286ef48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0>::get(),
                            "<RemoveAllDebugPacketsWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0::__set_packetId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0::__get_packetId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0>())) {}
 void Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0::_RemoveAllDebugPacketsWithId_b__0(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0>::get(),
                            "<RemoveAllDebugPacketsWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::*)()>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286efd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c._CheckDebugPackets_b__24_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::*)(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket)>(&Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::_CheckDebugPackets_b__24_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x286efd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c>::get(),
                            "<CheckDebugPackets>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
    return ___internal_method;
  }
};
 void Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::__set___9(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c value)  {
::cordl_internals::setStaticField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c>::get>(std::forward<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c>(value));
}
 Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::__get___9()  {
return ::cordl_internals::getStaticField<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c>::get>();
}
 void Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::__set___9__24_0(System::Predicate_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> value)  {
::cordl_internals::setStaticField<System::Predicate_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c>::get>(std::forward<System::Predicate_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>>(value));
}
 System::Predicate_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::__get___9__24_0()  {
return ::cordl_internals::getStaticField<System::Predicate_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c>::get>();
}
// Ctor Parameters []
 Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::Tayx__Graphy__GraphyDebugger____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Tayx__Graphy__GraphyDebugger____c>())) {}
 void Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c::_CheckDebugPackets_b__24_0(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c>::get(),
                            "<CheckDebugPackets>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet);
}
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)()>(&Tayx::Graphy::GraphyDebugger::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x286d620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)()>(&Tayx::Graphy::GraphyDebugger::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x286d6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)()>(&Tayx::Graphy::GraphyDebugger::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286d77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket)>(&Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x286db9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(int32_t, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType, ::StringW, bool, System::Action)>(&Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x286dc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(int32_t, System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType, ::StringW, bool, System::Action)>(&Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x286defc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(int32_t, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType, ::StringW, bool, System::Collections::Generic::List_1<System::Action>)>(&Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x286e014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Action>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(int32_t, System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType, ::StringW, bool, System::Collections::Generic::List_1<System::Action>)>(&Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x286e144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Action>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.GetFirstDebugPacketWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket (Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&Tayx::Graphy::GraphyDebugger::GetFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x286e1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "GetFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.GetAllDebugPacketsWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> (Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&Tayx::Graphy::GraphyDebugger::GetAllDebugPacketsWithId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x286e2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "GetAllDebugPacketsWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.RemoveFirstDebugPacketWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&Tayx::Graphy::GraphyDebugger::RemoveFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x286e3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "RemoveFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.RemoveAllDebugPacketsWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&Tayx::Graphy::GraphyDebugger::RemoveAllDebugPacketsWithId)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x286e440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "RemoveAllDebugPacketsWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.AddCallbackToFirstDebugPacketWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(System::Action, int32_t)>(&Tayx::Graphy::GraphyDebugger::AddCallbackToFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x286e534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddCallbackToFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.AddCallbackToAllDebugPacketWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(System::Action, int32_t)>(&Tayx::Graphy::GraphyDebugger::AddCallbackToAllDebugPacketWithId)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x286e60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddCallbackToAllDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.CheckDebugPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)()>(&Tayx::Graphy::GraphyDebugger::CheckDebugPackets)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x286d780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "CheckDebugPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.CheckIfConditionIsMet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tayx::Graphy::GraphyDebugger::*)(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition)>(&Tayx::Graphy::GraphyDebugger::CheckIfConditionIsMet)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x286e854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "CheckIfConditionIsMet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.GetRequestedValueFromDebugVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (Tayx::Graphy::GraphyDebugger::*)(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable)>(&Tayx::Graphy::GraphyDebugger::GetRequestedValueFromDebugVariable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x286ed20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "GetRequestedValueFromDebugVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tayx::Graphy::GraphyDebugger.ExecuteOperationsInDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::*)(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket)>(&Tayx::Graphy::GraphyDebugger::ExecuteOperationsInDebugPacket)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x286e964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "ExecuteOperationsInDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_debugPackets(System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>>(value));
}
constexpr System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> Tayx::Graphy::GraphyDebugger::__get_m_debugPackets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_fpsMonitor(Tayx::Graphy::Fps::G_FpsMonitor value)  {
::cordl_internals::setInstanceField<Tayx::Graphy::Fps::G_FpsMonitor, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tayx::Graphy::Fps::G_FpsMonitor>(value));
}
constexpr Tayx::Graphy::Fps::G_FpsMonitor Tayx::Graphy::GraphyDebugger::__get_m_fpsMonitor() const {
return ::cordl_internals::getInstanceField<Tayx::Graphy::Fps::G_FpsMonitor, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_ramMonitor(Tayx::Graphy::Ram::G_RamMonitor value)  {
::cordl_internals::setInstanceField<Tayx::Graphy::Ram::G_RamMonitor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tayx::Graphy::Ram::G_RamMonitor>(value));
}
constexpr Tayx::Graphy::Ram::G_RamMonitor Tayx::Graphy::GraphyDebugger::__get_m_ramMonitor() const {
return ::cordl_internals::getInstanceField<Tayx::Graphy::Ram::G_RamMonitor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_audioMonitor(Tayx::Graphy::Audio::G_AudioMonitor value)  {
::cordl_internals::setInstanceField<Tayx::Graphy::Audio::G_AudioMonitor, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tayx::Graphy::Audio::G_AudioMonitor>(value));
}
constexpr Tayx::Graphy::Audio::G_AudioMonitor Tayx::Graphy::GraphyDebugger::__get_m_audioMonitor() const {
return ::cordl_internals::getInstanceField<Tayx::Graphy::Audio::G_AudioMonitor, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Tayx::Graphy::GraphyDebugger::GraphyDebugger()  : Tayx::Graphy::Utils::G_Singleton_1<Tayx::Graphy::GraphyDebugger>(THROW_UNLESS(::il2cpp_utils::New<GraphyDebugger>())) {}
 void Tayx::Graphy::GraphyDebugger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Tayx::Graphy::GraphyDebugger::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Tayx::Graphy::GraphyDebugger::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket newDebugPacket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newDebugPacket);
}
 void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition newDebugCondition, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, System::Action newCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newId, newDebugCondition, newMessageType, newMessage, newDebugBreak, newCallback);
}
 void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition> newDebugConditions, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, System::Action newCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newId, newDebugConditions, newMessageType, newMessage, newDebugBreak, newCallback);
}
 void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition newDebugCondition, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, System::Collections::Generic::List_1<System::Action> newCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Action>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newId, newDebugCondition, newMessageType, newMessage, newDebugBreak, newCallbacks);
}
 void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition> newDebugConditions, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, System::Collections::Generic::List_1<System::Action> newCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Action>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newId, newDebugConditions, newMessageType, newMessage, newDebugBreak, newCallbacks);
}
 Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket Tayx::Graphy::GraphyDebugger::GetFirstDebugPacketWithId(int32_t packetId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "GetFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket, false>(const_cast<void*>(instance), ___internal_method, packetId);
}
 System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> Tayx::Graphy::GraphyDebugger::GetAllDebugPacketsWithId(int32_t packetId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "GetAllDebugPacketsWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>, false>(const_cast<void*>(instance), ___internal_method, packetId);
}
 void Tayx::Graphy::GraphyDebugger::RemoveFirstDebugPacketWithId(int32_t packetId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "RemoveFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packetId);
}
 void Tayx::Graphy::GraphyDebugger::RemoveAllDebugPacketsWithId(int32_t packetId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "RemoveAllDebugPacketsWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packetId);
}
 void Tayx::Graphy::GraphyDebugger::AddCallbackToFirstDebugPacketWithId(System::Action callback, int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddCallbackToFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, id);
}
 void Tayx::Graphy::GraphyDebugger::AddCallbackToAllDebugPacketWithId(System::Action callback, int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "AddCallbackToAllDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, id);
}
 void Tayx::Graphy::GraphyDebugger::CheckDebugPackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "CheckDebugPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Tayx::Graphy::GraphyDebugger::CheckIfConditionIsMet(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition debugCondition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "CheckIfConditionIsMet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, debugCondition);
}
 float_t Tayx::Graphy::GraphyDebugger::GetRequestedValueFromDebugVariable(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable debugVariable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "GetRequestedValueFromDebugVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, debugVariable);
}
 void Tayx::Graphy::GraphyDebugger::ExecuteOperationsInDebugPacket(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket debugPacket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::GraphyDebugger>::get(),
                            "ExecuteOperationsInDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, debugPacket);
}
