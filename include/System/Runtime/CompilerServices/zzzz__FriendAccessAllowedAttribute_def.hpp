#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class FriendAccessAllowedAttribute;
}
// Type: System.Runtime.CompilerServices::FriendAccessAllowedAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3408))
// CS Name: System.Runtime.CompilerServices.FriendAccessAllowedAttribute
class CORDL_TYPE FriendAccessAllowedAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FriendAccessAllowedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "FriendAccessAllowedAttribute", modifiers: " const&", def_value: None }]
constexpr FriendAccessAllowedAttribute(FriendAccessAllowedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FriendAccessAllowedAttribute", modifiers: "&&", def_value: None }]
constexpr FriendAccessAllowedAttribute(FriendAccessAllowedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FriendAccessAllowedAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr FriendAccessAllowedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FriendAccessAllowedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FriendAccessAllowedAttribute& operator=(FriendAccessAllowedAttribute&& o) noexcept = default;
  constexpr FriendAccessAllowedAttribute& operator=(FriendAccessAllowedAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FriendAccessAllowedAttribute() ;

/// @brief Method .ctor addr 0x2370a98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::FriendAccessAllowedAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::FriendAccessAllowedAttribute, "System.Runtime.CompilerServices", "FriendAccessAllowedAttribute");
