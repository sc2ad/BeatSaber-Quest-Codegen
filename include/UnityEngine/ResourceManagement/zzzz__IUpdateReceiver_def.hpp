#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
// Type: UnityEngine.ResourceManagement::IUpdateReceiver
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14239))
// CS Name: UnityEngine.ResourceManagement.IUpdateReceiver
class CORDL_TYPE IUpdateReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IUpdateReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUpdateReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(float_t unscaledDeltaTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::IUpdateReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::IUpdateReceiver, "UnityEngine.ResourceManagement", "IUpdateReceiver");
