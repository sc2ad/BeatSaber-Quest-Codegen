#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes::RenderDataDirtyTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UIR::RenderDataDirtyTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderDataDirtyTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::None{0};
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Transform{1};
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::ClipRectSize{2};
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Clipping{4};
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::ClippingHierarchy{8};
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Visuals{16};
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::VisualsHierarchy{32};
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Opacity{64};
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::OpacityHierarchy{128};
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Color{256};
