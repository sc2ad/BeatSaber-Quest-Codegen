#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::StencilOp::StencilOp(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::StencilOp::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::StencilOp::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::StencilOp  ::UnityEngine::Rendering::StencilOp::Keep{0};
constexpr ::UnityEngine::Rendering::StencilOp  ::UnityEngine::Rendering::StencilOp::Zero{1};
constexpr ::UnityEngine::Rendering::StencilOp  ::UnityEngine::Rendering::StencilOp::Replace{2};
constexpr ::UnityEngine::Rendering::StencilOp  ::UnityEngine::Rendering::StencilOp::IncrementSaturate{3};
constexpr ::UnityEngine::Rendering::StencilOp  ::UnityEngine::Rendering::StencilOp::DecrementSaturate{4};
constexpr ::UnityEngine::Rendering::StencilOp  ::UnityEngine::Rendering::StencilOp::Invert{5};
constexpr ::UnityEngine::Rendering::StencilOp  ::UnityEngine::Rendering::StencilOp::IncrementWrap{6};
constexpr ::UnityEngine::Rendering::StencilOp  ::UnityEngine::Rendering::StencilOp::DecrementWrap{7};
} // end anonymous namespace
