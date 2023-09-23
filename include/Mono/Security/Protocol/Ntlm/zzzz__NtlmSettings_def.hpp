#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Mono::Security::Protocol::Ntlm {
struct NtlmAuthLevel;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class NtlmSettings;
}
// Type: Mono.Security.Protocol.Ntlm::NtlmSettings
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13979))
// CS Name: Mono.Security.Protocol.Ntlm.NtlmSettings
class CORDL_TYPE NtlmSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NtlmSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "NtlmSettings", modifiers: " const&", def_value: None }]
constexpr NtlmSettings(NtlmSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NtlmSettings", modifiers: "&&", def_value: None }]
constexpr NtlmSettings(NtlmSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NtlmSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NtlmSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NtlmSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NtlmSettings& operator=(NtlmSettings&& o) noexcept = default;
  constexpr NtlmSettings& operator=(NtlmSettings const& o) noexcept = default;
                


// Fields

static Mono::Security::Protocol::Ntlm::NtlmAuthLevel __declspec(property(get=__get_defaultAuthLevel, put=__set_defaultAuthLevel))  defaultAuthLevel;

static void __set_defaultAuthLevel(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value) ;

static Mono::Security::Protocol::Ntlm::NtlmAuthLevel __get_defaultAuthLevel() ;


// Properties

static Mono::Security::Protocol::Ntlm::NtlmAuthLevel __declspec(property(get=get_DefaultAuthLevel))  DefaultAuthLevel;


// Methods

/// @brief Method get_DefaultAuthLevel addr 0x2293d4c size 0x58 virtual false final false
static Mono::Security::Protocol::Ntlm::NtlmAuthLevel get_DefaultAuthLevel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Protocol::Ntlm
NEED_NO_BOX(Mono::Security::Protocol::Ntlm::NtlmSettings);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::NtlmSettings, "Mono.Security.Protocol.Ntlm", "NtlmSettings");
