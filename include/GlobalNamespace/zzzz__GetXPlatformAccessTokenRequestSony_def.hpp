#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class GetXPlatformAccessTokenRequestSony;
}
// Type: ::GetXPlatformAccessTokenRequestSony
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4713))
// CS Name: GetXPlatformAccessTokenRequestSony
class CORDL_TYPE GetXPlatformAccessTokenRequestSony : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GetXPlatformAccessTokenRequestSony() = default;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSony", modifiers: " const&", def_value: None }]
constexpr GetXPlatformAccessTokenRequestSony(GetXPlatformAccessTokenRequestSony const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSony", modifiers: "&&", def_value: None }]
constexpr GetXPlatformAccessTokenRequestSony(GetXPlatformAccessTokenRequestSony&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GetXPlatformAccessTokenRequestSony(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GetXPlatformAccessTokenRequestSony& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GetXPlatformAccessTokenRequestSony& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GetXPlatformAccessTokenRequestSony& operator=(GetXPlatformAccessTokenRequestSony&& o) noexcept = default;
  constexpr GetXPlatformAccessTokenRequestSony& operator=(GetXPlatformAccessTokenRequestSony const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_platformToken, put=__set_platformToken))  platformToken;

constexpr void __set_platformToken(::StringW value) ;

constexpr ::StringW __get_platformToken() const;

 GlobalNamespace::PlatformEnvironment __declspec(property(get=__get_platformEnvironment, put=__set_platformEnvironment))  platformEnvironment;

constexpr void __set_platformEnvironment(GlobalNamespace::PlatformEnvironment value) ;

constexpr GlobalNamespace::PlatformEnvironment __get_platformEnvironment() const;


// Methods

static GlobalNamespace::GetXPlatformAccessTokenRequestSony New_ctor(::StringW platformToken, GlobalNamespace::PlatformEnvironment platformEnvironment) ;

/// @brief Method .ctor addr 0x221f9cc size 0x30 virtual false final false
 void _ctor(::StringW platformToken, GlobalNamespace::PlatformEnvironment platformEnvironment) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GetXPlatformAccessTokenRequestSony);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GetXPlatformAccessTokenRequestSony, "", "GetXPlatformAccessTokenRequestSony");
