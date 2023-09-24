#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Security::Protocol::Ntlm {
class Type2Message;
}
namespace Mono::Security::Protocol::Ntlm {
struct NtlmAuthLevel;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class ChallengeResponse2;
}
// Type: Mono.Security.Protocol.Ntlm::ChallengeResponse2
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13975))
// CS Name: Mono.Security.Protocol.Ntlm.ChallengeResponse2
class CORDL_TYPE ChallengeResponse2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ChallengeResponse2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeResponse2", modifiers: " const&", def_value: None }]
constexpr ChallengeResponse2(ChallengeResponse2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeResponse2", modifiers: "&&", def_value: None }]
constexpr ChallengeResponse2(ChallengeResponse2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChallengeResponse2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChallengeResponse2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChallengeResponse2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChallengeResponse2& operator=(ChallengeResponse2&& o) noexcept = default;
  constexpr ChallengeResponse2& operator=(ChallengeResponse2 const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_magic, put=__set_magic))  magic;

static void __set_magic(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_magic() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_nullEncMagic, put=__set_nullEncMagic))  nullEncMagic;

static void __set_nullEncMagic(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_nullEncMagic() ;


// Methods

/// @brief Method Compute_LM addr 0x2292428 size 0x32c virtual false final false
static ::ArrayW<uint8_t> Compute_LM(::StringW password, ::ArrayW<uint8_t> challenge) ;

/// @brief Method Compute_NTLM_Password addr 0x2292bb0 size 0x104 virtual false final false
static ::ArrayW<uint8_t> Compute_NTLM_Password(::StringW password) ;

/// @brief Method Compute_NTLM addr 0x2292cb4 size 0x6c virtual false final false
static ::ArrayW<uint8_t> Compute_NTLM(::StringW password, ::ArrayW<uint8_t> challenge) ;

/// @brief Method Compute_NTLMv2_Session addr 0x2292d20 size 0x1cc virtual false final false
static void Compute_NTLMv2_Session(::StringW password, ::ArrayW<uint8_t> challenge, ByRef<::ArrayW<uint8_t>> lm, ByRef<::ArrayW<uint8_t>> ntlm) ;

/// @brief Method Compute_NTLMv2 addr 0x2292eec size 0x434 virtual false final false
static ::ArrayW<uint8_t> Compute_NTLMv2(Mono::Security::Protocol::Ntlm::Type2Message type2, ::StringW username, ::StringW password, ::StringW domain) ;

/// @brief Method Compute addr 0x2293410 size 0x1e8 virtual false final false
static void Compute(Mono::Security::Protocol::Ntlm::Type2Message type2, Mono::Security::Protocol::Ntlm::NtlmAuthLevel level, ::StringW username, ::StringW password, ::StringW domain, ByRef<::ArrayW<uint8_t>> lm, ByRef<::ArrayW<uint8_t>> ntlm) ;

/// @brief Method GetResponse addr 0x22928bc size 0x2f4 virtual false final false
static ::ArrayW<uint8_t> GetResponse(::ArrayW<uint8_t> challenge, ::ArrayW<uint8_t> pwd) ;

/// @brief Method PrepareDESKey addr 0x22935f8 size 0x1f8 virtual false final false
static ::ArrayW<uint8_t> PrepareDESKey(::ArrayW<uint8_t> key56bits, int32_t position) ;

/// @brief Method PasswordToKey addr 0x2292754 size 0x168 virtual false final false
static ::ArrayW<uint8_t> PasswordToKey(::StringW password, int32_t position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Protocol::Ntlm
NEED_NO_BOX(Mono::Security::Protocol::Ntlm::ChallengeResponse2);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::ChallengeResponse2, "Mono.Security.Protocol.Ntlm", "ChallengeResponse2");
