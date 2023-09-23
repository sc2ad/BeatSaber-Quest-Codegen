#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HandleParamBinding_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType::TRANSLATE{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType::ROTATE{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType::SCALE{2};
//  Writing Method size for method: HoudiniEngineUnity::HEU_HandleParamBinding.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_HandleParamBinding::*)(HoudiniEngineUnity::HEU_HandleParamBinding)>(&HoudiniEngineUnity::HEU_HandleParamBinding::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x201ef4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_HandleParamBinding>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HandleParamBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_HandleParamBinding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_HandleParamBinding::*)()>(&HoudiniEngineUnity::HEU_HandleParamBinding::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x201e02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_HandleParamBinding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_HandleParamBinding>
constexpr  HoudiniEngineUnity::HEU_HandleParamBinding::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_HandleParamBinding>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_HandleParamBinding>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__paramType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType HoudiniEngineUnity::HEU_HandleParamBinding::__get__paramType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__parmID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_HandleParamBinding::__get__parmID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__paramName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_HandleParamBinding::__get__paramName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__bDisabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_HandleParamBinding::__get__bDisabled() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__set__boundChannels(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> HoudiniEngineUnity::HEU_HandleParamBinding::__get__boundChannels() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool HoudiniEngineUnity::HEU_HandleParamBinding::IsEquivalentTo(HoudiniEngineUnity::HEU_HandleParamBinding other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_HandleParamBinding>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HandleParamBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamBinding()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_HandleParamBinding>())) {}
 void HoudiniEngineUnity::HEU_HandleParamBinding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_HandleParamBinding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
