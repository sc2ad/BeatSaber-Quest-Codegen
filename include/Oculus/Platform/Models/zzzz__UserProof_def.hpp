#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class UserProof;
}
// Type: Oculus.Platform.Models::UserProof
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13487))
// CS Name: Oculus.Platform.Models.UserProof
class CORDL_TYPE UserProof : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UserProof() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserProof", modifiers: " const&", def_value: None }]
constexpr UserProof(UserProof const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserProof", modifiers: "&&", def_value: None }]
constexpr UserProof(UserProof&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserProof(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserProof& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserProof& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserProof& operator=(UserProof&& o) noexcept = default;
  constexpr UserProof& operator=(UserProof const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(::StringW value) ;

constexpr ::StringW __get_Value() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UserProof(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a3c6c size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::UserProof);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserProof, "Oculus.Platform.Models", "UserProof");
