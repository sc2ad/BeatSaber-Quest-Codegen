#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Serialization {
class OnDeserializedAttribute;
}
// Type: System.Runtime.Serialization::OnDeserializedAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3228))
// CS Name: System.Runtime.Serialization.OnDeserializedAttribute
class CORDL_TYPE OnDeserializedAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OnDeserializedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializedAttribute", modifiers: " const&", def_value: None }]
constexpr OnDeserializedAttribute(OnDeserializedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializedAttribute", modifiers: "&&", def_value: None }]
constexpr OnDeserializedAttribute(OnDeserializedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnDeserializedAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr OnDeserializedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnDeserializedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnDeserializedAttribute& operator=(OnDeserializedAttribute&& o) noexcept = default;
  constexpr OnDeserializedAttribute& operator=(OnDeserializedAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OnDeserializedAttribute() ;

/// @brief Method .ctor addr 0x2351cac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::OnDeserializedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OnDeserializedAttribute, "System.Runtime.Serialization", "OnDeserializedAttribute");
