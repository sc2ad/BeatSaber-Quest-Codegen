#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode::TriangulationMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode::Unconstrained{0};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode::Constrained{1};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode::Polygon{2};
} // end anonymous namespace
