#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PipelineType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HEU_PipelineType::HEU_PipelineType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HEU_PipelineType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_PipelineType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HEU_PipelineType  HoudiniEngineUnity::HEU_PipelineType::Unsupported{0};
constexpr HoudiniEngineUnity::HEU_PipelineType  HoudiniEngineUnity::HEU_PipelineType::BiRP{1};
constexpr HoudiniEngineUnity::HEU_PipelineType  HoudiniEngineUnity::HEU_PipelineType::URP{2};
constexpr HoudiniEngineUnity::HEU_PipelineType  HoudiniEngineUnity::HEU_PipelineType::HDRP{3};
