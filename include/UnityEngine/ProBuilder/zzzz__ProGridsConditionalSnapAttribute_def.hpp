#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ProGridsConditionalSnapAttribute;
}
// Type: UnityEngine.ProBuilder::ProGridsConditionalSnapAttribute
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12120))
// CS Name: UnityEngine.ProBuilder.ProGridsConditionalSnapAttribute
class CORDL_TYPE ProGridsConditionalSnapAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProGridsConditionalSnapAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProGridsConditionalSnapAttribute", modifiers: " const&", def_value: None }]
constexpr ProGridsConditionalSnapAttribute(ProGridsConditionalSnapAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProGridsConditionalSnapAttribute", modifiers: "&&", def_value: None }]
constexpr ProGridsConditionalSnapAttribute(ProGridsConditionalSnapAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProGridsConditionalSnapAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ProGridsConditionalSnapAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProGridsConditionalSnapAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProGridsConditionalSnapAttribute& operator=(ProGridsConditionalSnapAttribute&& o) noexcept = default;
  constexpr ProGridsConditionalSnapAttribute& operator=(ProGridsConditionalSnapAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ProGridsConditionalSnapAttribute() ;

/// @brief Method .ctor addr 0x29cc41c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute, "UnityEngine.ProBuilder", "ProGridsConditionalSnapAttribute");
