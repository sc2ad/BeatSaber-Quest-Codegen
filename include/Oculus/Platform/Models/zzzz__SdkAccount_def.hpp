#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct SdkAccountType;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class SdkAccount;
}
// Type: Oculus.Platform.Models::SdkAccount
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13472))
// CS Name: Oculus.Platform.Models.SdkAccount
class CORDL_TYPE SdkAccount : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SdkAccount() = default;

// Ctor Parameters [CppParam { name: "", ty: "SdkAccount", modifiers: " const&", def_value: None }]
constexpr SdkAccount(SdkAccount const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SdkAccount", modifiers: "&&", def_value: None }]
constexpr SdkAccount(SdkAccount&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SdkAccount(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SdkAccount& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SdkAccount& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SdkAccount& operator=(SdkAccount&& o) noexcept = default;
  constexpr SdkAccount& operator=(SdkAccount const& o) noexcept = default;
                


// Fields

 Oculus::Platform::SdkAccountType __declspec(property(get=__get_AccountType, put=__set_AccountType))  AccountType;

constexpr void __set_AccountType(Oculus::Platform::SdkAccountType value) ;

constexpr Oculus::Platform::SdkAccountType __get_AccountType() const;

 uint64_t __declspec(property(get=__get_UserId, put=__set_UserId))  UserId;

constexpr void __set_UserId(uint64_t value) ;

constexpr uint64_t __get_UserId() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SdkAccount(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a2fec size 0x88 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::SdkAccount);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SdkAccount, "Oculus.Platform.Models", "SdkAccount");
