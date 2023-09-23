#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::VertexFlags::VertexFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UIR::VertexFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::VertexFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsSolid{0};
constexpr UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsText{1};
constexpr UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsTextured{2};
constexpr UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsDynamic{3};
constexpr UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsSvgGradients{4};
constexpr UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::LastType{10};
constexpr UnityEngine::UIElements::UIR::VertexFlags  UnityEngine::UIElements::UIR::VertexFlags::IsGraphViewEdge{10};
