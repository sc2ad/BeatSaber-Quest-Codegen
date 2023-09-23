#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class GetXPlatformAccessTokenResponse;
}
// Type: ::GetXPlatformAccessTokenResponse
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4715))
// CS Name: GetXPlatformAccessTokenResponse
class CORDL_TYPE GetXPlatformAccessTokenResponse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GetXPlatformAccessTokenResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenResponse", modifiers: " const&", def_value: None }]
constexpr GetXPlatformAccessTokenResponse(GetXPlatformAccessTokenResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenResponse", modifiers: "&&", def_value: None }]
constexpr GetXPlatformAccessTokenResponse(GetXPlatformAccessTokenResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GetXPlatformAccessTokenResponse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GetXPlatformAccessTokenResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GetXPlatformAccessTokenResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GetXPlatformAccessTokenResponse& operator=(GetXPlatformAccessTokenResponse&& o) noexcept = default;
  constexpr GetXPlatformAccessTokenResponse& operator=(GetXPlatformAccessTokenResponse const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_accessToken, put=__set_accessToken))  accessToken;

constexpr void __set_accessToken(::StringW value) ;

constexpr ::StringW __get_accessToken() const;


// Methods

// Ctor Parameters [CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }]
explicit GetXPlatformAccessTokenResponse(::StringW accessToken) ;

/// @brief Method .ctor addr 0x221fa28 size 0x28 virtual false final false
 void _ctor(::StringW accessToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GetXPlatformAccessTokenResponse);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GetXPlatformAccessTokenResponse, "", "GetXPlatformAccessTokenResponse");
