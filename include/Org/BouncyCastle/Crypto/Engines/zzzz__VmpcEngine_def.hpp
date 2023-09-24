#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class VmpcEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::VmpcEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(882))
// CS Name: Org.BouncyCastle.Crypto.Engines.VmpcEngine
class CORDL_TYPE VmpcEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IStreamCipher
constexpr operator  Org::BouncyCastle::Crypto::IStreamCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~VmpcEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "VmpcEngine", modifiers: " const&", def_value: None }]
constexpr VmpcEngine(VmpcEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VmpcEngine", modifiers: "&&", def_value: None }]
constexpr VmpcEngine(VmpcEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VmpcEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VmpcEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VmpcEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VmpcEngine& operator=(VmpcEngine&& o) noexcept = default;
  constexpr VmpcEngine& operator=(VmpcEngine const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(uint8_t value) ;

constexpr uint8_t __get_n() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_P, put=__set_P))  P;

constexpr void __set_P(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_P() const;

 uint8_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(uint8_t value) ;

constexpr uint8_t __get_s() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workingIV, put=__set_workingIV))  workingIV;

constexpr void __set_workingIV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workingIV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workingKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0xe67ff4 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe68034 size 0x198 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method InitKey addr 0xe681cc size 0x1fc virtual true final false
 void InitKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) ;

/// @brief Method ProcessBytes addr 0xe683c8 size 0x1c0 virtual true final false
 void ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe68588 size 0x10 virtual true final false
 void Reset() ;

/// @brief Method ReturnByte addr 0xe68598 size 0xc4 virtual true final false
 uint8_t ReturnByte(uint8_t input) ;

static Org::BouncyCastle::Crypto::Engines::VmpcEngine New_ctor() ;

/// @brief Method .ctor addr 0xe6865c size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::VmpcEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::VmpcEngine, "Org.BouncyCastle.Crypto.Engines", "VmpcEngine");
