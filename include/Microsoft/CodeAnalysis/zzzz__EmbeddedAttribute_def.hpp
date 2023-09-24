#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Microsoft::CodeAnalysis {
class EmbeddedAttribute;
}
// Type: Microsoft.CodeAnalysis::EmbeddedAttribute
namespace Microsoft::CodeAnalysis {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8436))
// CS Name: Microsoft.CodeAnalysis.EmbeddedAttribute
class CORDL_TYPE EmbeddedAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmbeddedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedAttribute", modifiers: " const&", def_value: None }]
constexpr EmbeddedAttribute(EmbeddedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedAttribute", modifiers: "&&", def_value: None }]
constexpr EmbeddedAttribute(EmbeddedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmbeddedAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr EmbeddedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmbeddedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmbeddedAttribute& operator=(EmbeddedAttribute&& o) noexcept = default;
  constexpr EmbeddedAttribute& operator=(EmbeddedAttribute const& o) noexcept = default;
                


// Methods

static Microsoft::CodeAnalysis::EmbeddedAttribute New_ctor() ;

/// @brief Method .ctor addr 0x25a4d70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::CodeAnalysis
NEED_NO_BOX(Microsoft::CodeAnalysis::EmbeddedAttribute);
DEFINE_IL2CPP_ARG_TYPE(Microsoft::CodeAnalysis::EmbeddedAttribute, "Microsoft.CodeAnalysis", "EmbeddedAttribute");
