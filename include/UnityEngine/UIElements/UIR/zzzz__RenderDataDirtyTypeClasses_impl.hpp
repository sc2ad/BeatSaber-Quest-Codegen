#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypeClasses_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses::RenderDataDirtyTypeClasses(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses::Clipping{0};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses::Opacity{1};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses::Color{2};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses::TransformSize{3};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses::Visuals{4};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses::Count{5};
} // end anonymous namespace
