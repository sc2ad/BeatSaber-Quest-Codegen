#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Type: UnityEngine.UIElements::IUxmlAttributes
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7091))
// CS Name: UnityEngine.UIElements.IUxmlAttributes
class CORDL_TYPE IUxmlAttributes : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IUxmlAttributes() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUxmlAttributes(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method TryGetAttributeValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetAttributeValue(::StringW attributeName, ByRef<::StringW> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IUxmlAttributes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IUxmlAttributes, "UnityEngine.UIElements", "IUxmlAttributes");
