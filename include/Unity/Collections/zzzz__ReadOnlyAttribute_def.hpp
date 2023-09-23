#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections {
class ReadOnlyAttribute;
}
// Type: Unity.Collections::ReadOnlyAttribute
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9946))
// CS Name: Unity.Collections.ReadOnlyAttribute
class CORDL_TYPE ReadOnlyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReadOnlyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: " const&", def_value: None }]
constexpr ReadOnlyAttribute(ReadOnlyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "&&", def_value: None }]
constexpr ReadOnlyAttribute(ReadOnlyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ReadOnlyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReadOnlyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReadOnlyAttribute& operator=(ReadOnlyAttribute&& o) noexcept = default;
  constexpr ReadOnlyAttribute& operator=(ReadOnlyAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ReadOnlyAttribute() ;

/// @brief Method .ctor addr 0x2b2857c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
NEED_NO_BOX(Unity::Collections::ReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::ReadOnlyAttribute, "Unity.Collections", "ReadOnlyAttribute");
