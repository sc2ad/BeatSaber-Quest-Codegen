#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
// Type: Oculus.Platform.Models::UserDataStoreUpdateResponse
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13486))
// CS Name: Oculus.Platform.Models.UserDataStoreUpdateResponse
class CORDL_TYPE UserDataStoreUpdateResponse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UserDataStoreUpdateResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStoreUpdateResponse", modifiers: " const&", def_value: None }]
constexpr UserDataStoreUpdateResponse(UserDataStoreUpdateResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStoreUpdateResponse", modifiers: "&&", def_value: None }]
constexpr UserDataStoreUpdateResponse(UserDataStoreUpdateResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserDataStoreUpdateResponse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserDataStoreUpdateResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserDataStoreUpdateResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserDataStoreUpdateResponse& operator=(UserDataStoreUpdateResponse&& o) noexcept = default;
  constexpr UserDataStoreUpdateResponse& operator=(UserDataStoreUpdateResponse const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_Success, put=__set_Success))  Success;

constexpr void __set_Success(bool value) ;

constexpr bool __get_Success() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UserDataStoreUpdateResponse(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a3bf0 size 0x7c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::UserDataStoreUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserDataStoreUpdateResponse, "Oculus.Platform.Models", "UserDataStoreUpdateResponse");
