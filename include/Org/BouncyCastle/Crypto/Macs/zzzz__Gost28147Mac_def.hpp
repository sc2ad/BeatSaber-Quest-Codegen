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
class Gost28147Mac;
}
// Type: Org.BouncyCastle.Crypto.Macs::Gost28147Mac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(942))
// CS Name: Org.BouncyCastle.Crypto.Macs.Gost28147Mac
class CORDL_TYPE Gost28147Mac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Gost28147Mac() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Mac", modifiers: " const&", def_value: None }]
constexpr Gost28147Mac(Gost28147Mac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Mac", modifiers: "&&", def_value: None }]
constexpr Gost28147Mac(Gost28147Mac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost28147Mac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost28147Mac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost28147Mac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost28147Mac& operator=(Gost28147Mac&& o) noexcept = default;
  constexpr Gost28147Mac& operator=(Gost28147Mac const& o) noexcept = default;
                


// Fields

/// @brief Field blockSize offset 0
static constexpr int32_t  blockSize{8};

/// @brief Field macSize offset 0
static constexpr int32_t  macSize{4};

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mac() const;

 bool __declspec(property(get=__get_firstStep, put=__set_firstStep))  firstStep;

constexpr void __set_firstStep(bool value) ;

constexpr bool __get_firstStep() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_workingKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_macIV, put=__set_macIV))  macIV;

constexpr void __set_macIV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_macIV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_S, put=__set_S))  S;

constexpr void __set_S(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_S() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit Gost28147Mac() ;

/// @brief Method .ctor addr 0xe80e98 size 0xb8 virtual false final false
 void _ctor() ;

/// @brief Method GenerateWorkingKey addr 0xe80f50 size 0xfc virtual false final false
static ::ArrayW<int32_t> GenerateWorkingKey(::ArrayW<uint8_t> userKey) ;

/// @brief Method Init addr 0xe810c0 size 0x278 virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe81370 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetMacSize addr 0xe813b0 size 0x8 virtual true final true
 int32_t GetMacSize() ;

/// @brief Method gost28147_mainStep addr 0xe813b8 size 0xe8 virtual false final false
 int32_t gost28147_mainStep(int32_t n1, int32_t key) ;

/// @brief Method gost28147MacFunc addr 0xe814a0 size 0xe4 virtual false final false
 void gost28147MacFunc(::ArrayW<int32_t> workingKey, ::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method bytesToint addr 0xe8104c size 0x74 virtual false final false
static int32_t bytesToint(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method intTobytes addr 0xe81584 size 0x80 virtual false final false
static void intTobytes(int32_t num, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method CM5func addr 0xe81604 size 0xe4 virtual false final false
static ::ArrayW<uint8_t> CM5func(::ArrayW<uint8_t> buf, int32_t bufOff, ::ArrayW<uint8_t> mac) ;

/// @brief Method Update addr 0xe816e8 size 0x110 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe817f8 size 0x200 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe819f8 size 0x148 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe81338 size 0x38 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::Gost28147Mac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::Gost28147Mac, "Org.BouncyCastle.Crypto.Macs", "Gost28147Mac");
