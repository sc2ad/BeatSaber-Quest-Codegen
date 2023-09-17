#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class ICanvasRaycastFilter;
}
// Type: UnityEngine::ICanvasRaycastFilter
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15763))
// CS Name: UnityEngine.ICanvasRaycastFilter
class CORDL_TYPE ICanvasRaycastFilter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICanvasRaycastFilter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICanvasRaycastFilter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method IsRaycastLocationValid addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera eventCamera) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ICanvasRaycastFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ICanvasRaycastFilter, "UnityEngine", "ICanvasRaycastFilter");
