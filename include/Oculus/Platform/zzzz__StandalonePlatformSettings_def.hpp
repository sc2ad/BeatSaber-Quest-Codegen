#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace Oculus::Platform {
class StandalonePlatformSettings;
}
// Type: Oculus.Platform::StandalonePlatformSettings
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13363))
// CS Name: Oculus.Platform.StandalonePlatformSettings
class CORDL_TYPE StandalonePlatformSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StandalonePlatformSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandalonePlatformSettings", modifiers: " const&", def_value: None }]
constexpr StandalonePlatformSettings(StandalonePlatformSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandalonePlatformSettings", modifiers: "&&", def_value: None }]
constexpr StandalonePlatformSettings(StandalonePlatformSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandalonePlatformSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandalonePlatformSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandalonePlatformSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandalonePlatformSettings& operator=(StandalonePlatformSettings&& o) noexcept = default;
  constexpr StandalonePlatformSettings& operator=(StandalonePlatformSettings const& o) noexcept = default;
                


// Properties

static ::StringW __declspec(property(get=get_OculusPlatformTestUserEmail, put=set_OculusPlatformTestUserEmail))  OculusPlatformTestUserEmail;

static ::StringW __declspec(property(get=get_OculusPlatformTestUserPassword, put=set_OculusPlatformTestUserPassword))  OculusPlatformTestUserPassword;

static ::StringW __declspec(property(get=get_OculusPlatformTestUserAccessToken, put=set_OculusPlatformTestUserAccessToken))  OculusPlatformTestUserAccessToken;


// Methods

/// @brief Method get_OculusPlatformTestUserEmail addr 0x259a370 size 0x48 virtual false final false
static ::StringW get_OculusPlatformTestUserEmail() ;

/// @brief Method set_OculusPlatformTestUserEmail addr 0x259a3b8 size 0x4 virtual false final false
static void set_OculusPlatformTestUserEmail(::StringW value) ;

/// @brief Method get_OculusPlatformTestUserPassword addr 0x259a3bc size 0x48 virtual false final false
static ::StringW get_OculusPlatformTestUserPassword() ;

/// @brief Method set_OculusPlatformTestUserPassword addr 0x259a404 size 0x4 virtual false final false
static void set_OculusPlatformTestUserPassword(::StringW value) ;

/// @brief Method get_OculusPlatformTestUserAccessToken addr 0x259a408 size 0x48 virtual false final false
static ::StringW get_OculusPlatformTestUserAccessToken() ;

/// @brief Method set_OculusPlatformTestUserAccessToken addr 0x259a450 size 0x4 virtual false final false
static void set_OculusPlatformTestUserAccessToken(::StringW value) ;

// Ctor Parameters []
explicit StandalonePlatformSettings() ;

/// @brief Method .ctor addr 0x259a454 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::StandalonePlatformSettings);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::StandalonePlatformSettings, "Oculus.Platform", "StandalonePlatformSettings");
