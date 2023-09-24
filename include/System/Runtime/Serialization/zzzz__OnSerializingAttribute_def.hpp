#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::Serialization {
class OnSerializingAttribute;
}
// Type: System.Runtime.Serialization::OnSerializingAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3225))
// CS Name: System.Runtime.Serialization.OnSerializingAttribute
class CORDL_TYPE OnSerializingAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OnSerializingAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnSerializingAttribute", modifiers: " const&", def_value: None }]
constexpr OnSerializingAttribute(OnSerializingAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnSerializingAttribute", modifiers: "&&", def_value: None }]
constexpr OnSerializingAttribute(OnSerializingAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnSerializingAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr OnSerializingAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnSerializingAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnSerializingAttribute& operator=(OnSerializingAttribute&& o) noexcept = default;
  constexpr OnSerializingAttribute& operator=(OnSerializingAttribute const& o) noexcept = default;
                


// Methods

static System::Runtime::Serialization::OnSerializingAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2351c94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::OnSerializingAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::OnSerializingAttribute, "System.Runtime.Serialization", "OnSerializingAttribute");
