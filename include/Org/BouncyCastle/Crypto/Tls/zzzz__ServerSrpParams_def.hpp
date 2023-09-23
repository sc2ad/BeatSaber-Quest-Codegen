#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ServerSrpParams;
}
// Type: Org.BouncyCastle.Crypto.Tls::ServerSrpParams
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1271))
// CS Name: Org.BouncyCastle.Crypto.Tls.ServerSrpParams
class CORDL_TYPE ServerSrpParams : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ServerSrpParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerSrpParams", modifiers: " const&", def_value: None }]
constexpr ServerSrpParams(ServerSrpParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerSrpParams", modifiers: "&&", def_value: None }]
constexpr ServerSrpParams(ServerSrpParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerSrpParams(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServerSrpParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerSrpParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerSrpParams& operator=(ServerSrpParams&& o) noexcept = default;
  constexpr ServerSrpParams& operator=(ServerSrpParams const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_N, put=__set_m_N))  m_N;

constexpr void __set_m_N(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_N() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_g, put=__set_m_g))  m_g;

constexpr void __set_m_g(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_g() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_B, put=__set_m_B))  m_B;

constexpr void __set_m_B(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_B() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_s, put=__set_m_s))  m_s;

constexpr void __set_m_s(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_s() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_B))  B;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_N))  N;

 ::ArrayW<uint8_t> __declspec(property(get=get_S))  S;


// Methods

// Ctor Parameters [CppParam { name: "N", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "s", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "B", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ServerSrpParams(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g, ::ArrayW<uint8_t> s, Org::BouncyCastle::Math::BigInteger B) ;

/// @brief Method .ctor addr 0xf08920 size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g, ::ArrayW<uint8_t> s, Org::BouncyCastle::Math::BigInteger B) ;

/// @brief Method get_B addr 0xf089b0 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_B() ;

/// @brief Method get_G addr 0xf089b8 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method get_N addr 0xf089c0 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_N() ;

/// @brief Method get_S addr 0xf089c8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_S() ;

/// @brief Method Encode addr 0xf089d0 size 0x9c virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xf08a6c size 0xe0 virtual false final false
static Org::BouncyCastle::Crypto::Tls::ServerSrpParams Parse(System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::ServerSrpParams);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::ServerSrpParams, "Org.BouncyCastle.Crypto.Tls", "ServerSrpParams");
