#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__ShapeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ShapeType::ShapeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::ShapeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::ShapeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Cube{0};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Stair{1};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::CurvedStair{2};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Prism{3};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Cylinder{4};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Plane{5};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Door{6};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Pipe{7};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Cone{8};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Sprite{9};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Arch{10};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Sphere{11};
constexpr ::UnityEngine::ProBuilder::ShapeType  ::UnityEngine::ProBuilder::ShapeType::Torus{12};
} // end anonymous namespace
