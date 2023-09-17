#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class ChallengeResponse;
}
// Type: Mono.Security.Protocol.Ntlm::ChallengeResponse
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13974))
// CS Name: Mono.Security.Protocol.Ntlm.ChallengeResponse
class CORDL_TYPE ChallengeResponse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ChallengeResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeResponse", modifiers: " const&", def_value: None }]
constexpr ChallengeResponse(ChallengeResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeResponse", modifiers: "&&", def_value: None }]
constexpr ChallengeResponse(ChallengeResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChallengeResponse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChallengeResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChallengeResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChallengeResponse& operator=(ChallengeResponse&& o) noexcept = default;
  constexpr ChallengeResponse& operator=(ChallengeResponse const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_magic, put=__set_magic))  magic;

static void __set_magic(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_magic() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_nullEncMagic, put=__set_nullEncMagic))  nullEncMagic;

static void __set_nullEncMagic(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_nullEncMagic() ;

 bool __declspec(property(get=__get__disposed, put=__set__disposed))  _disposed;

constexpr void __set__disposed(bool value) ;

constexpr bool __get__disposed() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__challenge, put=__set__challenge))  _challenge;

constexpr void __set__challenge(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__challenge() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__lmpwd, put=__set__lmpwd))  _lmpwd;

constexpr void __set__lmpwd(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__lmpwd() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__ntpwd, put=__set__ntpwd))  _ntpwd;

constexpr void __set__ntpwd(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__ntpwd() const;


// Properties

 ::StringW __declspec(property(put=set_Password))  Password;

 ::ArrayW<uint8_t> __declspec(property(put=set_Challenge))  Challenge;

 ::ArrayW<uint8_t> __declspec(property(get=get_LM))  LM;

 ::ArrayW<uint8_t> __declspec(property(get=get_NT))  NT;


// Methods

// Ctor Parameters []
explicit ChallengeResponse() ;

/// @brief Method .ctor addr 0x2291520 size 0x70 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "challenge", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ChallengeResponse(::StringW password, ::ArrayW<uint8_t> challenge) ;

/// @brief Method .ctor addr 0x2291590 size 0x38 virtual false final false
 void _ctor(::StringW password, ::ArrayW<uint8_t> challenge) ;

/// @brief Method Finalize addr 0x2291b08 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method set_Password addr 0x22915c8 size 0x40c virtual false final false
 void set_Password(::StringW value) ;

/// @brief Method set_Challenge addr 0x22919d4 size 0x134 virtual false final false
 void set_Challenge(::ArrayW<uint8_t> value) ;

/// @brief Method get_LM addr 0x2291d50 size 0x64 virtual false final false
 ::ArrayW<uint8_t> get_LM() ;

/// @brief Method get_NT addr 0x2292090 size 0x64 virtual false final false
 ::ArrayW<uint8_t> get_NT() ;

/// @brief Method Dispose addr 0x2291ba8 size 0x64 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x22920f4 size 0x6c virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method GetResponse addr 0x2291db4 size 0x2dc virtual false final false
 ::ArrayW<uint8_t> GetResponse(::ArrayW<uint8_t> pwd) ;

/// @brief Method PrepareDESKey addr 0x2292160 size 0x1f8 virtual false final false
 ::ArrayW<uint8_t> PrepareDESKey(::ArrayW<uint8_t> key56bits, int32_t position) ;

/// @brief Method PasswordToKey addr 0x2291c0c size 0x144 virtual false final false
 ::ArrayW<uint8_t> PasswordToKey(::StringW password, int32_t position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Protocol::Ntlm
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::ChallengeResponse);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::ChallengeResponse, "Mono.Security.Protocol.Ntlm", "ChallengeResponse");
