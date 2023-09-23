#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
class IPointerCaptureEventInternal;
}
// Type: UnityEngine.UIElements::IPointerCaptureEventInternal
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7248))
// CS Name: UnityEngine.UIElements.IPointerCaptureEventInternal
class CORDL_TYPE IPointerCaptureEventInternal : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPointerCaptureEventInternal() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPointerCaptureEventInternal(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_pointerId))  pointerId;


// Methods

/// @brief Method get_pointerId addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_pointerId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IPointerCaptureEventInternal);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IPointerCaptureEventInternal, "UnityEngine.UIElements", "IPointerCaptureEventInternal");
