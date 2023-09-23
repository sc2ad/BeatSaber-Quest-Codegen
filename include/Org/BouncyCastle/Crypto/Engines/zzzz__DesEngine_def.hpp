#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class DesEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::DesEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(839))
// CS Name: Org.BouncyCastle.Crypto.Engines.DesEngine
class CORDL_TYPE DesEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DesEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEngine", modifiers: " const&", def_value: None }]
constexpr DesEngine(DesEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEngine", modifiers: "&&", def_value: None }]
constexpr DesEngine(DesEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DesEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesEngine& operator=(DesEngine&& o) noexcept = default;
  constexpr DesEngine& operator=(DesEngine const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{8};

 ::ArrayW<int32_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_workingKey() const;

static ::ArrayW<int16_t> __declspec(property(get=__get_bytebit, put=__set_bytebit))  bytebit;

static void __set_bytebit(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_bytebit() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_bigbyte, put=__set_bigbyte))  bigbyte;

static void __set_bigbyte(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_bigbyte() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_pc1, put=__set_pc1))  pc1;

static void __set_pc1(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_pc1() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_totrot, put=__set_totrot))  totrot;

static void __set_totrot(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_totrot() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_pc2, put=__set_pc2))  pc2;

static void __set_pc2(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_pc2() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SP1, put=__set_SP1))  SP1;

static void __set_SP1(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SP1() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SP2, put=__set_SP2))  SP2;

static void __set_SP2(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SP2() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SP3, put=__set_SP3))  SP3;

static void __set_SP3(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SP3() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SP4, put=__set_SP4))  SP4;

static void __set_SP4(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SP4() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SP5, put=__set_SP5))  SP5;

static void __set_SP5(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SP5() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SP6, put=__set_SP6))  SP6;

static void __set_SP6(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SP6() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SP7, put=__set_SP7))  SP7;

static void __set_SP7(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SP7() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SP8, put=__set_SP8))  SP8;

static void __set_SP8(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SP8() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method GetWorkingKey addr 0xe3e3d8 size 0x8 virtual true final false
 ::ArrayW<int32_t> GetWorkingKey() ;

/// @brief Method Init addr 0xe3e3e0 size 0x144 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe3ea90 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe3ead0 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe3ead8 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe3eae0 size 0x13c virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe3f050 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method GenerateWorkingKey addr 0xe3e524 size 0x56c virtual false final false
static ::ArrayW<int32_t> GenerateWorkingKey(bool encrypting, ::ArrayW<uint8_t> key) ;

/// @brief Method DesFunc addr 0xe3ec1c size 0x434 virtual false final false
static void DesFunc(::ArrayW<int32_t> wKey, ::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

// Ctor Parameters []
explicit DesEngine() ;

/// @brief Method .ctor addr 0xe3f40c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::DesEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::DesEngine, "Org.BouncyCastle.Crypto.Engines", "DesEngine");
