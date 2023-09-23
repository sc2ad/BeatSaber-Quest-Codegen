#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ChoiceListType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_ChoiceListType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_ChoiceListType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ChoiceListType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_ChoiceListType  HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_NONE{0};
constexpr HoudiniEngineUnity::HAPI_ChoiceListType  HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_NORMAL{1};
constexpr HoudiniEngineUnity::HAPI_ChoiceListType  HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_MINI{2};
constexpr HoudiniEngineUnity::HAPI_ChoiceListType  HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_REPLACE{3};
constexpr HoudiniEngineUnity::HAPI_ChoiceListType  HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_TOGGLE{4};
