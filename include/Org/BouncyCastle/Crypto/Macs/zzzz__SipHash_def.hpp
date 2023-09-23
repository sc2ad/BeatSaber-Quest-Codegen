#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class SipHash;
}
// Type: Org.BouncyCastle.Crypto.Macs::SipHash
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(946))
// CS Name: Org.BouncyCastle.Crypto.Macs.SipHash
class CORDL_TYPE SipHash : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SipHash() = default;

// Ctor Parameters [CppParam { name: "", ty: "SipHash", modifiers: " const&", def_value: None }]
constexpr SipHash(SipHash const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SipHash", modifiers: "&&", def_value: None }]
constexpr SipHash(SipHash&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SipHash(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SipHash& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SipHash& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SipHash& operator=(SipHash&& o) noexcept = default;
  constexpr SipHash& operator=(SipHash const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(int32_t value) ;

constexpr int32_t __get_c() const;

 int32_t __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(int32_t value) ;

constexpr int32_t __get_d() const;

 int64_t __declspec(property(get=__get_k0, put=__set_k0))  k0;

constexpr void __set_k0(int64_t value) ;

constexpr int64_t __get_k0() const;

 int64_t __declspec(property(get=__get_k1, put=__set_k1))  k1;

constexpr void __set_k1(int64_t value) ;

constexpr int64_t __get_k1() const;

 int64_t __declspec(property(get=__get_v0, put=__set_v0))  v0;

constexpr void __set_v0(int64_t value) ;

constexpr int64_t __get_v0() const;

 int64_t __declspec(property(get=__get_v1, put=__set_v1))  v1;

constexpr void __set_v1(int64_t value) ;

constexpr int64_t __get_v1() const;

 int64_t __declspec(property(get=__get_v2, put=__set_v2))  v2;

constexpr void __set_v2(int64_t value) ;

constexpr int64_t __get_v2() const;

 int64_t __declspec(property(get=__get_v3, put=__set_v3))  v3;

constexpr void __set_v3(int64_t value) ;

constexpr int64_t __get_v3() const;

 int64_t __declspec(property(get=__get_m, put=__set_m))  m;

constexpr void __set_m(int64_t value) ;

constexpr int64_t __get_m() const;

 int32_t __declspec(property(get=__get_wordPos, put=__set_wordPos))  wordPos;

constexpr void __set_wordPos(int32_t value) ;

constexpr int32_t __get_wordPos() const;

 int32_t __declspec(property(get=__get_wordCount, put=__set_wordCount))  wordCount;

constexpr void __set_wordCount(int32_t value) ;

constexpr int32_t __get_wordCount() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit SipHash() ;

/// @brief Method .ctor addr 0xe846a8 size 0x28 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "c", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "int32_t", modifiers: "", def_value: None }]
explicit SipHash(int32_t c, int32_t d) ;

/// @brief Method .ctor addr 0xe846d0 size 0x30 virtual false final false
 void _ctor(int32_t c, int32_t d) ;

/// @brief Method get_AlgorithmName addr 0xe84700 size 0x194 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetMacSize addr 0xe84894 size 0x8 virtual true final false
 int32_t GetMacSize() ;

/// @brief Method Init addr 0xe8489c size 0x154 virtual true final false
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xe849f0 size 0x44 virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe84a34 size 0x1ac virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t offset, int32_t length) ;

/// @brief Method DoFinal addr 0xe84be0 size 0x9c virtual true final false
 int64_t DoFinal() ;

/// @brief Method DoFinal addr 0xe84c7c size 0x44 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe84cc0 size 0x64 virtual true final false
 void Reset() ;

/// @brief Method ProcessMessageWord addr 0xe84d24 size 0x4c virtual true final false
 void ProcessMessageWord() ;

/// @brief Method ApplySipRounds addr 0xe84d70 size 0x4c virtual true final false
 void ApplySipRounds(int32_t n) ;

/// @brief Method RotateLeft addr 0xe84dbc size 0xc virtual false final false
static int64_t RotateLeft(int64_t x, int32_t n) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::SipHash);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::SipHash, "Org.BouncyCastle.Crypto.Macs", "SipHash");
