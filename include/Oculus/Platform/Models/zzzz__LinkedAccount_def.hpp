#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct ServiceProvider;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LinkedAccount;
}
// Type: Oculus.Platform.Models::LinkedAccount
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13431))
// CS Name: Oculus.Platform.Models.LinkedAccount
class CORDL_TYPE LinkedAccount : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LinkedAccount() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedAccount", modifiers: " const&", def_value: None }]
constexpr LinkedAccount(LinkedAccount const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedAccount", modifiers: "&&", def_value: None }]
constexpr LinkedAccount(LinkedAccount&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedAccount(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedAccount& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedAccount& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedAccount& operator=(LinkedAccount&& o) noexcept = default;
  constexpr LinkedAccount& operator=(LinkedAccount const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_AccessToken, put=__set_AccessToken))  AccessToken;

constexpr void __set_AccessToken(::StringW value) ;

constexpr ::StringW __get_AccessToken() const;

 Oculus::Platform::ServiceProvider __declspec(property(get=__get_ServiceProvider, put=__set_ServiceProvider))  ServiceProvider;

constexpr void __set_ServiceProvider(Oculus::Platform::ServiceProvider value) ;

constexpr Oculus::Platform::ServiceProvider __get_ServiceProvider() const;

 ::StringW __declspec(property(get=__get_UserId, put=__set_UserId))  UserId;

constexpr void __set_UserId(::StringW value) ;

constexpr ::StringW __get_UserId() const;


// Methods

static Oculus::Platform::Models::LinkedAccount New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259fcac size 0x98 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LinkedAccount);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LinkedAccount, "Oculus.Platform.Models", "LinkedAccount");
