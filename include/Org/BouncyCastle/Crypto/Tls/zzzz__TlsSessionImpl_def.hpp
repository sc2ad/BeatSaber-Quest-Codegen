#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSessionImpl;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSessionImpl
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1325))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSessionImpl
class CORDL_TYPE TlsSessionImpl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsSession
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsSession() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TlsSessionImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSessionImpl", modifiers: " const&", def_value: None }]
constexpr TlsSessionImpl(TlsSessionImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSessionImpl", modifiers: "&&", def_value: None }]
constexpr TlsSessionImpl(TlsSessionImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSessionImpl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsSessionImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsSessionImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsSessionImpl& operator=(TlsSessionImpl&& o) noexcept = default;
  constexpr TlsSessionImpl& operator=(TlsSessionImpl const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSessionID, put=__set_mSessionID))  mSessionID;

constexpr void __set_mSessionID(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSessionID() const;

 ::Org::BouncyCastle::Crypto::Tls::SessionParameters __declspec(property(get=__get_mSessionParameters, put=__set_mSessionParameters))  mSessionParameters;

constexpr void __set_mSessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters __get_mSessionParameters() const;

 bool __declspec(property(get=__get_mResumable, put=__set_mResumable))  mResumable;

constexpr void __set_mResumable(bool value) ;

constexpr bool __get_mResumable() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_SessionID))  SessionID;

 bool __declspec(property(get=get_IsResumable))  IsResumable;


// Methods

// Ctor Parameters [CppParam { name: "sessionID", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "sessionParameters", ty: "::Org::BouncyCastle::Crypto::Tls::SessionParameters", modifiers: "", def_value: None }]
explicit TlsSessionImpl(::ArrayW<uint8_t> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters sessionParameters) ;

/// @brief Method .ctor addr 0xf29be4 size 0x140 virtual false final false
 void _ctor(::ArrayW<uint8_t> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters sessionParameters) ;

/// @brief Method ExportSessionParameters addr 0xf29d24 size 0xb4 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::SessionParameters ExportSessionParameters() ;

/// @brief Method get_SessionID addr 0xf29dd8 size 0x34 virtual true final false
 ::ArrayW<uint8_t> get_SessionID() ;

/// @brief Method Invalidate addr 0xf29e0c size 0x24 virtual true final false
 void Invalidate() ;

/// @brief Method get_IsResumable addr 0xf29e30 size 0x34 virtual true final false
 bool get_IsResumable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl, "Org.BouncyCastle.Crypto.Tls", "TlsSessionImpl");
