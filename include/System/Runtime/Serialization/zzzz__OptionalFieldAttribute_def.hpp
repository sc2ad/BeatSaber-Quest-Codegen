#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization {
class OptionalFieldAttribute;
}
// Type: System.Runtime.Serialization::OptionalFieldAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3224))
// CS Name: System.Runtime.Serialization.OptionalFieldAttribute
class CORDL_TYPE OptionalFieldAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OptionalFieldAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OptionalFieldAttribute", modifiers: " const&", def_value: None }]
constexpr OptionalFieldAttribute(OptionalFieldAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OptionalFieldAttribute", modifiers: "&&", def_value: None }]
constexpr OptionalFieldAttribute(OptionalFieldAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OptionalFieldAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr OptionalFieldAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OptionalFieldAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OptionalFieldAttribute& operator=(OptionalFieldAttribute&& o) noexcept = default;
  constexpr OptionalFieldAttribute& operator=(OptionalFieldAttribute const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_versionAdded, put=__set_versionAdded))  versionAdded;

constexpr void __set_versionAdded(int32_t value) ;

constexpr int32_t __get_versionAdded() const;


// Properties

 int32_t __declspec(property(put=set_VersionAdded))  VersionAdded;


// Methods

static System::Runtime::Serialization::OptionalFieldAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2351c0c size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method set_VersionAdded addr 0x2351c1c size 0x78 virtual false final false
 void set_VersionAdded(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::OptionalFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::OptionalFieldAttribute, "System.Runtime.Serialization", "OptionalFieldAttribute");
