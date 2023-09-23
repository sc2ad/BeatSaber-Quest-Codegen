#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections {
class WriteOnlyAttribute;
}
// Type: Unity.Collections::WriteOnlyAttribute
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9947))
// CS Name: Unity.Collections.WriteOnlyAttribute
class CORDL_TYPE WriteOnlyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WriteOnlyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "WriteOnlyAttribute", modifiers: " const&", def_value: None }]
constexpr WriteOnlyAttribute(WriteOnlyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WriteOnlyAttribute", modifiers: "&&", def_value: None }]
constexpr WriteOnlyAttribute(WriteOnlyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WriteOnlyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr WriteOnlyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WriteOnlyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WriteOnlyAttribute& operator=(WriteOnlyAttribute&& o) noexcept = default;
  constexpr WriteOnlyAttribute& operator=(WriteOnlyAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit WriteOnlyAttribute() ;

/// @brief Method .ctor addr 0x2b28584 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
NEED_NO_BOX(Unity::Collections::WriteOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::WriteOnlyAttribute, "Unity.Collections", "WriteOnlyAttribute");
