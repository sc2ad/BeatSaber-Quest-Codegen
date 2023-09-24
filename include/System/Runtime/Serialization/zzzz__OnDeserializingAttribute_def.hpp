#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::Serialization {
class OnDeserializingAttribute;
}
// Type: System.Runtime.Serialization::OnDeserializingAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3227))
// CS Name: System.Runtime.Serialization.OnDeserializingAttribute
class CORDL_TYPE OnDeserializingAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OnDeserializingAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializingAttribute", modifiers: " const&", def_value: None }]
constexpr OnDeserializingAttribute(OnDeserializingAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializingAttribute", modifiers: "&&", def_value: None }]
constexpr OnDeserializingAttribute(OnDeserializingAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnDeserializingAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr OnDeserializingAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnDeserializingAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnDeserializingAttribute& operator=(OnDeserializingAttribute&& o) noexcept = default;
  constexpr OnDeserializingAttribute& operator=(OnDeserializingAttribute const& o) noexcept = default;
                


// Methods

static System::Runtime::Serialization::OnDeserializingAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2351ca4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::OnDeserializingAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::OnDeserializingAttribute, "System.Runtime.Serialization", "OnDeserializingAttribute");
