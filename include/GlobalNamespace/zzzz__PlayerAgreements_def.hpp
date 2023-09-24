#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class PlayerAgreements;
}
// Type: ::PlayerAgreements
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4734))
// CS Name: PlayerAgreements
class CORDL_TYPE PlayerAgreements : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlayerAgreements() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerAgreements", modifiers: " const&", def_value: None }]
constexpr PlayerAgreements(PlayerAgreements const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerAgreements", modifiers: "&&", def_value: None }]
constexpr PlayerAgreements(PlayerAgreements&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerAgreements(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerAgreements& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerAgreements& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerAgreements& operator=(PlayerAgreements&& o) noexcept = default;
  constexpr PlayerAgreements& operator=(PlayerAgreements const& o) noexcept = default;
                


// Fields

/// @brief Field kFirstEulaVersion offset 0
static constexpr int32_t  kFirstEulaVersion{1};

/// @brief Field kFirstPrivacyPolicyVersion offset 0
static constexpr int32_t  kFirstPrivacyPolicyVersion{1};

/// @brief Field kCurrentEulaVersion offset 0
static constexpr int32_t  kCurrentEulaVersion{5};

/// @brief Field kCurrentPrivacyPolicyVersion offset 0
static constexpr int32_t  kCurrentPrivacyPolicyVersion{5};

/// @brief Field kCurrentHealthAndSafetyVersion offset 0
static constexpr int32_t  kCurrentHealthAndSafetyVersion{1};

 int32_t __declspec(property(get=__get_eulaVersion, put=__set_eulaVersion))  eulaVersion;

constexpr void __set_eulaVersion(int32_t value) ;

constexpr int32_t __get_eulaVersion() const;

 int32_t __declspec(property(get=__get_privacyPolicyVersion, put=__set_privacyPolicyVersion))  privacyPolicyVersion;

constexpr void __set_privacyPolicyVersion(int32_t value) ;

constexpr int32_t __get_privacyPolicyVersion() const;

 int32_t __declspec(property(get=__get_healthAndSafetyVersion, put=__set_healthAndSafetyVersion))  healthAndSafetyVersion;

constexpr void __set_healthAndSafetyVersion(int32_t value) ;

constexpr int32_t __get_healthAndSafetyVersion() const;


// Methods

static GlobalNamespace::PlayerAgreements New_ctor() ;

/// @brief Method .ctor addr 0x2220348 size 0x20 virtual false final false
 void _ctor() ;

static GlobalNamespace::PlayerAgreements New_ctor(int32_t eulaVersion, int32_t privacyPolicyVersion, int32_t healthAndSafetyVersion) ;

/// @brief Method .ctor addr 0x2220368 size 0x3c virtual false final false
 void _ctor(int32_t eulaVersion, int32_t privacyPolicyVersion, int32_t healthAndSafetyVersion) ;

/// @brief Method AgreeToEula addr 0x22203a4 size 0xc virtual false final false
 void AgreeToEula() ;

/// @brief Method AgreeToPrivacyPolicy addr 0x22203b0 size 0xc virtual false final false
 void AgreeToPrivacyPolicy() ;

/// @brief Method AgreeToHealthAndSafety addr 0x22203bc size 0xc virtual false final false
 void AgreeToHealthAndSafety() ;

/// @brief Method AgreedToPreviousPrivacyPolicy addr 0x22203c8 size 0x10 virtual false final false
 bool AgreedToPreviousPrivacyPolicy() ;

/// @brief Method AgreedToAnyPreviousEula addr 0x22203d8 size 0x1c virtual false final false
 bool AgreedToAnyPreviousEula() ;

/// @brief Method AgreedToAnyPreviousPrivacyPolicy addr 0x22203f4 size 0x1c virtual false final false
 bool AgreedToAnyPreviousPrivacyPolicy() ;

/// @brief Method AgreedToAnyPreviousHealthAndSafety addr 0x2220410 size 0xc virtual false final false
 bool AgreedToAnyPreviousHealthAndSafety() ;

/// @brief Method AgreedToEula addr 0x222041c size 0x10 virtual false final false
 bool AgreedToEula() ;

/// @brief Method AgreedToPrivacyPolicy addr 0x222042c size 0x10 virtual false final false
 bool AgreedToPrivacyPolicy() ;

/// @brief Method AgreedToHealthAndSafety addr 0x222043c size 0x10 virtual false final false
 bool AgreedToHealthAndSafety() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerAgreements);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerAgreements, "", "PlayerAgreements");
