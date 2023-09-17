#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Net {
class DigestHeaderParser;
}
namespace System {
struct DateTime;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class Authorization;
}
namespace System::Net {
class ICredentials;
}
// Forward declare root types
namespace System::Net {
class DigestSession;
}
// Type: System.Net::DigestSession
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8011))
// CS Name: System.Net.DigestSession
class CORDL_TYPE DigestSession : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DigestSession() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestSession", modifiers: " const&", def_value: None }]
constexpr DigestSession(DigestSession const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestSession", modifiers: "&&", def_value: None }]
constexpr DigestSession(DigestSession&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigestSession(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DigestSession& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigestSession& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigestSession& operator=(DigestSession&& o) noexcept = default;
  constexpr DigestSession& operator=(DigestSession const& o) noexcept = default;
                


// Fields

static ::System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=__get_rng, put=__set_rng))  rng;

static void __set_rng(::System::Security::Cryptography::RandomNumberGenerator value) ;

static ::System::Security::Cryptography::RandomNumberGenerator __get_rng() ;

 ::System::DateTime __declspec(property(get=__get_lastUse, put=__set_lastUse))  lastUse;

constexpr void __set_lastUse(::System::DateTime value) ;

constexpr ::System::DateTime __get_lastUse() const;

 int32_t __declspec(property(get=__get__nc, put=__set__nc))  _nc;

constexpr void __set__nc(int32_t value) ;

constexpr int32_t __get__nc() const;

 ::System::Security::Cryptography::HashAlgorithm __declspec(property(get=__get_hash, put=__set_hash))  hash;

constexpr void __set_hash(::System::Security::Cryptography::HashAlgorithm value) ;

constexpr ::System::Security::Cryptography::HashAlgorithm __get_hash() const;

 ::System::Net::DigestHeaderParser __declspec(property(get=__get_parser, put=__set_parser))  parser;

constexpr void __set_parser(::System::Net::DigestHeaderParser value) ;

constexpr ::System::Net::DigestHeaderParser __get_parser() const;

 ::StringW __declspec(property(get=__get__cnonce, put=__set__cnonce))  _cnonce;

constexpr void __set__cnonce(::StringW value) ;

constexpr ::StringW __get__cnonce() const;


// Properties

 ::StringW __declspec(property(get=get_Algorithm))  Algorithm;

 ::StringW __declspec(property(get=get_Realm))  Realm;

 ::StringW __declspec(property(get=get_Nonce))  Nonce;

 ::StringW __declspec(property(get=get_Opaque))  Opaque;

 ::StringW __declspec(property(get=get_QOP))  QOP;

 ::StringW __declspec(property(get=get_CNonce))  CNonce;

 ::System::DateTime __declspec(property(get=get_LastUse))  LastUse;


// Methods

// Ctor Parameters []
explicit DigestSession() ;

/// @brief Method .ctor addr 0x282b69c size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method get_Algorithm addr 0x282b70c size 0x18 virtual false final false
 ::StringW get_Algorithm() ;

/// @brief Method get_Realm addr 0x282b724 size 0x18 virtual false final false
 ::StringW get_Realm() ;

/// @brief Method get_Nonce addr 0x282b73c size 0x18 virtual false final false
 ::StringW get_Nonce() ;

/// @brief Method get_Opaque addr 0x282b754 size 0x18 virtual false final false
 ::StringW get_Opaque() ;

/// @brief Method get_QOP addr 0x282b76c size 0x18 virtual false final false
 ::StringW get_QOP() ;

/// @brief Method get_CNonce addr 0x282b784 size 0xf4 virtual false final false
 ::StringW get_CNonce() ;

/// @brief Method Parse addr 0x282b878 size 0xe0 virtual false final false
 bool Parse(::StringW challenge) ;

/// @brief Method HashToHexString addr 0x282b958 size 0x150 virtual false final false
 ::StringW HashToHexString(::StringW toBeHashed) ;

/// @brief Method HA1 addr 0x282baa8 size 0x124 virtual false final false
 ::StringW HA1(::StringW username, ::StringW password) ;

/// @brief Method HA2 addr 0x282bbcc size 0xd0 virtual false final false
 ::StringW HA2(::System::Net::HttpWebRequest webRequest) ;

/// @brief Method Response addr 0x282bc9c size 0x160 virtual false final false
 ::StringW Response(::StringW username, ::StringW password, ::System::Net::HttpWebRequest webRequest) ;

/// @brief Method Authenticate addr 0x282bdfc size 0x5e0 virtual false final false
 ::System::Net::Authorization Authenticate(::System::Net::WebRequest webRequest, ::System::Net::ICredentials credentials) ;

/// @brief Method get_LastUse addr 0x282c3dc size 0x8 virtual false final false
 ::System::DateTime get_LastUse() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::DigestSession);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DigestSession, "System.Net", "DigestSession");
