#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
// Type: Org.BouncyCastle.Bcpg::S2k
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(586))
// CS Name: Org.BouncyCastle.Bcpg.S2k
class CORDL_TYPE S2k : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~S2k() = default;

// Ctor Parameters [CppParam { name: "", ty: "S2k", modifiers: " const&", def_value: None }]
constexpr S2k(S2k const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "S2k", modifiers: "&&", def_value: None }]
constexpr S2k(S2k&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit S2k(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr S2k& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr S2k& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr S2k& operator=(S2k&& o) noexcept = default;
  constexpr S2k& operator=(S2k const& o) noexcept = default;
                


// Fields

/// @brief Field ExpBias offset 0
static constexpr int32_t  ExpBias{6};

/// @brief Field Simple offset 0
static constexpr int32_t  Simple{0};

/// @brief Field Salted offset 0
static constexpr int32_t  Salted{1};

/// @brief Field SaltedAndIterated offset 0
static constexpr int32_t  SaltedAndIterated{3};

/// @brief Field GnuDummyS2K offset 0
static constexpr int32_t  GnuDummyS2K{101};

/// @brief Field GnuProtectionModeNoPrivateKey offset 0
static constexpr int32_t  GnuProtectionModeNoPrivateKey{1};

/// @brief Field GnuProtectionModeDivertToCard offset 0
static constexpr int32_t  GnuProtectionModeDivertToCard{2};

 int32_t __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(int32_t value) ;

constexpr int32_t __get_type() const;

 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __get_algorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_iv() const;

 int32_t __declspec(property(get=__get_itCount, put=__set_itCount))  itCount;

constexpr void __set_itCount(int32_t value) ;

constexpr int32_t __get_itCount() const;

 int32_t __declspec(property(get=__get_protectionMode, put=__set_protectionMode))  protectionMode;

constexpr void __set_protectionMode(int32_t value) ;

constexpr int32_t __get_protectionMode() const;


// Properties

 int32_t __declspec(property(get=get_Type))  Type;

 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 int64_t __declspec(property(get=get_IterationCount))  IterationCount;

 int32_t __declspec(property(get=get_ProtectionMode))  ProtectionMode;


// Methods

// Ctor Parameters [CppParam { name: "inStr", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit S2k(::System::IO::Stream inStr) ;

/// @brief Method .ctor addr 0x1148f90 size 0x198 virtual false final false
 void _ctor(::System::IO::Stream inStr) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }]
explicit S2k(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm) ;

/// @brief Method .ctor addr 0x1149128 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit S2k(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0x1149158 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t> iv) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "itCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit S2k(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t> iv, int32_t itCount) ;

/// @brief Method .ctor addr 0x1149194 size 0x4c virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t> iv, int32_t itCount) ;

/// @brief Method get_Type addr 0x11491e0 size 0x8 virtual true final false
 int32_t get_Type() ;

/// @brief Method get_HashAlgorithm addr 0x11491e8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm() ;

/// @brief Method GetIV addr 0x11491f0 size 0x5c virtual true final false
 ::ArrayW<uint8_t> GetIV() ;

/// @brief Method GetIterationCount addr 0x114924c size 0xc virtual false final false
 int64_t GetIterationCount() ;

/// @brief Method get_IterationCount addr 0x1149258 size 0x20 virtual true final false
 int64_t get_IterationCount() ;

/// @brief Method get_ProtectionMode addr 0x1149278 size 0x8 virtual true final false
 int32_t get_ProtectionMode() ;

/// @brief Method Encode addr 0x1149280 size 0xfc virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::S2k);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::S2k, "Org.BouncyCastle.Bcpg", "S2k");
