#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class IValueAnimationUpdate;
}
// Type: UnityEngine.UIElements.Experimental::IValueAnimationUpdate
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7557))
// CS Name: UnityEngine.UIElements.Experimental.IValueAnimationUpdate
class CORDL_TYPE IValueAnimationUpdate : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IValueAnimationUpdate() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IValueAnimationUpdate(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Tick addr 0x0 size 0xffffffffffffffff virtual true final false
 void Tick(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
NEED_NO_BOX(UnityEngine::UIElements::Experimental::IValueAnimationUpdate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Experimental::IValueAnimationUpdate, "UnityEngine.UIElements.Experimental", "IValueAnimationUpdate");
