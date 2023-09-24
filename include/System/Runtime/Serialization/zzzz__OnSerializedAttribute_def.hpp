#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::Serialization {
class OnSerializedAttribute;
}
// Type: System.Runtime.Serialization::OnSerializedAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3226))
// CS Name: System.Runtime.Serialization.OnSerializedAttribute
class CORDL_TYPE OnSerializedAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OnSerializedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnSerializedAttribute", modifiers: " const&", def_value: None }]
constexpr OnSerializedAttribute(OnSerializedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnSerializedAttribute", modifiers: "&&", def_value: None }]
constexpr OnSerializedAttribute(OnSerializedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnSerializedAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr OnSerializedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnSerializedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnSerializedAttribute& operator=(OnSerializedAttribute&& o) noexcept = default;
  constexpr OnSerializedAttribute& operator=(OnSerializedAttribute const& o) noexcept = default;
                


// Methods

static System::Runtime::Serialization::OnSerializedAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2351c9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::OnSerializedAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::OnSerializedAttribute, "System.Runtime.Serialization", "OnSerializedAttribute");
