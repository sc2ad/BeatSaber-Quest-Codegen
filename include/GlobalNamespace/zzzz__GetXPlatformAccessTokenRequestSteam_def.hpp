#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class GetXPlatformAccessTokenRequestSteam;
}
// Type: ::GetXPlatformAccessTokenRequestSteam
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4714))
// CS Name: GetXPlatformAccessTokenRequestSteam
class CORDL_TYPE GetXPlatformAccessTokenRequestSteam : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GetXPlatformAccessTokenRequestSteam() = default;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSteam", modifiers: " const&", def_value: None }]
constexpr GetXPlatformAccessTokenRequestSteam(GetXPlatformAccessTokenRequestSteam const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSteam", modifiers: "&&", def_value: None }]
constexpr GetXPlatformAccessTokenRequestSteam(GetXPlatformAccessTokenRequestSteam&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GetXPlatformAccessTokenRequestSteam(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GetXPlatformAccessTokenRequestSteam& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GetXPlatformAccessTokenRequestSteam& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GetXPlatformAccessTokenRequestSteam& operator=(GetXPlatformAccessTokenRequestSteam&& o) noexcept = default;
  constexpr GetXPlatformAccessTokenRequestSteam& operator=(GetXPlatformAccessTokenRequestSteam const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_platformToken, put=__set_platformToken))  platformToken;

constexpr void __set_platformToken(::StringW value) ;

constexpr ::StringW __get_platformToken() const;

 int64_t __declspec(property(get=__get_platformUserId, put=__set_platformUserId))  platformUserId;

constexpr void __set_platformUserId(int64_t value) ;

constexpr int64_t __get_platformUserId() const;


// Methods

// Ctor Parameters [CppParam { name: "platformToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platformUserId", ty: "int64_t", modifiers: "", def_value: None }]
explicit GetXPlatformAccessTokenRequestSteam(::StringW platformToken, int64_t platformUserId) ;

/// @brief Method .ctor addr 0x221f9fc size 0x2c virtual false final false
 void _ctor(::StringW platformToken, int64_t platformUserId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GetXPlatformAccessTokenRequestSteam);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetXPlatformAccessTokenRequestSteam, "", "GetXPlatformAccessTokenRequestSteam");
