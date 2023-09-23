#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
class InviteOptions;
}
// Type: Oculus.Platform::InviteOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13186))
// CS Name: Oculus.Platform.InviteOptions
class CORDL_TYPE InviteOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InviteOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "InviteOptions", modifiers: " const&", def_value: None }]
constexpr InviteOptions(InviteOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InviteOptions", modifiers: "&&", def_value: None }]
constexpr InviteOptions(InviteOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InviteOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InviteOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InviteOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InviteOptions& operator=(InviteOptions&& o) noexcept = default;
  constexpr InviteOptions& operator=(InviteOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit InviteOptions() ;

/// @brief Method .ctor addr 0x257af00 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method AddSuggestedUser addr 0x257af64 size 0x68 virtual false final false
 void AddSuggestedUser(uint64_t userID) ;

/// @brief Method ClearSuggestedUsers addr 0x257afcc size 0x58 virtual false final false
 void ClearSuggestedUsers() ;

/// @brief Method op_Explicit addr 0x257b024 size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::InviteOptions options) ;

/// @brief Method Finalize addr 0x257b07c size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::InviteOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::InviteOptions, "Oculus.Platform", "InviteOptions");
