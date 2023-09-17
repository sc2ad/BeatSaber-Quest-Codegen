#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_ParameterModifier_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction::MULTIPARM_INSERT{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction::MULTIPARM_REMOVE{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction::MULTIPARM_CLEAR{2};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction::SET_FLOAT{3};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction::SET_INT{4};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ParameterModifier.GetNewModifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ParameterModifier (*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction, int32_t, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_ParameterModifier::GetNewModifier)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20204bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier>::get(),
                            "GetNewModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ParameterModifier.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ParameterModifier::*)(::HoudiniEngineUnity::HEU_ParameterModifier)>(&::HoudiniEngineUnity::HEU_ParameterModifier::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2020548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterModifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ParameterModifier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ParameterModifier::*)()>(&::HoudiniEngineUnity::HEU_ParameterModifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2020540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier>
constexpr  ::HoudiniEngineUnity::HEU_ParameterModifier::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ParameterModifier::__set__parameterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_ParameterModifier::__get__parameterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ParameterModifier::__set__action(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction ::HoudiniEngineUnity::HEU_ParameterModifier::__get__action() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ParameterModifier::__set__instanceIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_ParameterModifier::__get__instanceIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ParameterModifier::__set__modifierValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_ParameterModifier::__get__modifierValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ParameterModifier::__set__floatValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HEU_ParameterModifier::__get__floatValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ParameterModifier::__set__intValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_ParameterModifier::__get__intValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::HoudiniEngineUnity::HEU_ParameterModifier ::HoudiniEngineUnity::HEU_ParameterModifier::GetNewModifier(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction action, int32_t parameterIndex, int32_t instanceIndex, int32_t modifierValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier>::get(),
                            "GetNewModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ParameterModifier, false>(nullptr, ___internal_method, action, parameterIndex, instanceIndex, modifierValue);
}
 bool ::HoudiniEngineUnity::HEU_ParameterModifier::IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterModifier other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterModifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_ParameterModifier::HEU_ParameterModifier()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_ParameterModifier>())) {}
 void ::HoudiniEngineUnity::HEU_ParameterModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
