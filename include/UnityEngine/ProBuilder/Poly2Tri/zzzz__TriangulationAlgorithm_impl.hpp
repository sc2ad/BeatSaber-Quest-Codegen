#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationAlgorithm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm::TriangulationAlgorithm(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm  UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm::DTSweep{0};
