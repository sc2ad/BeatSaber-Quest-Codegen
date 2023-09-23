#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class UserCapability;
}
// Type: Oculus.Platform.Models::UserCapability
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13484))
// CS Name: Oculus.Platform.Models.UserCapability
class CORDL_TYPE UserCapability : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UserCapability() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserCapability", modifiers: " const&", def_value: None }]
constexpr UserCapability(UserCapability const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserCapability", modifiers: "&&", def_value: None }]
constexpr UserCapability(UserCapability&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserCapability(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserCapability& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserCapability& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserCapability& operator=(UserCapability&& o) noexcept = default;
  constexpr UserCapability& operator=(UserCapability const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Description, put=__set_Description))  Description;

constexpr void __set_Description(::StringW value) ;

constexpr ::StringW __get_Description() const;

 bool __declspec(property(get=__get_IsEnabled, put=__set_IsEnabled))  IsEnabled;

constexpr void __set_IsEnabled(bool value) ;

constexpr bool __get_IsEnabled() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 ::StringW __declspec(property(get=__get_ReasonCode, put=__set_ReasonCode))  ReasonCode;

constexpr void __set_ReasonCode(::StringW value) ;

constexpr ::StringW __get_ReasonCode() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UserCapability(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a38e8 size 0xac virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::UserCapability);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserCapability, "Oculus.Platform.Models", "UserCapability");
