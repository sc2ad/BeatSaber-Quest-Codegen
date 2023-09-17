#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITransform;
}
// Type: UnityEngine.UIElements::ITransform
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6865))
// CS Name: UnityEngine.UIElements.ITransform
class CORDL_TYPE ITransform : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITransform() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITransform(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 ::UnityEngine::Vector3 __declspec(property(get=get_scale))  scale;


// Methods

/// @brief Method get_position addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_position(::UnityEngine::Vector3 value) ;

/// @brief Method get_scale addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector3 get_scale() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ITransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITransform, "UnityEngine.UIElements", "ITransform");
