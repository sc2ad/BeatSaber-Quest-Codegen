#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Gost28147Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::Gost28147Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(845))
// CS Name: Org.BouncyCastle.Crypto.Engines.Gost28147Engine
class CORDL_TYPE Gost28147Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Gost28147Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Engine", modifiers: " const&", def_value: None }]
constexpr Gost28147Engine(Gost28147Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Engine", modifiers: "&&", def_value: None }]
constexpr Gost28147Engine(Gost28147Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost28147Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost28147Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost28147Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost28147Engine& operator=(Gost28147Engine&& o) noexcept = default;
  constexpr Gost28147Engine& operator=(Gost28147Engine const& o) noexcept = default;
                


// Fields

/// @brief Field BlockSize offset 0
static constexpr int32_t  BlockSize{8};

 ::ArrayW<int32_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_workingKey() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_S, put=__set_S))  S;

constexpr void __set_S(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_S() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_Sbox_Default, put=__set_Sbox_Default))  Sbox_Default;

static void __set_Sbox_Default(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Sbox_Default() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_ESbox_Test, put=__set_ESbox_Test))  ESbox_Test;

static void __set_ESbox_Test(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ESbox_Test() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_ESbox_A, put=__set_ESbox_A))  ESbox_A;

static void __set_ESbox_A(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ESbox_A() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_ESbox_B, put=__set_ESbox_B))  ESbox_B;

static void __set_ESbox_B(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ESbox_B() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_ESbox_C, put=__set_ESbox_C))  ESbox_C;

static void __set_ESbox_C(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ESbox_C() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_ESbox_D, put=__set_ESbox_D))  ESbox_D;

static void __set_ESbox_D(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ESbox_D() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_DSbox_Test, put=__set_DSbox_Test))  DSbox_Test;

static void __set_DSbox_Test(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_DSbox_Test() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_DSbox_A, put=__set_DSbox_A))  DSbox_A;

static void __set_DSbox_A(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_DSbox_A() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_sBoxes, put=__set_sBoxes))  sBoxes;

static void __set_sBoxes(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_sBoxes() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method AddSBox addr 0xe44da4 size 0x11c virtual false final false
static void AddSBox(::StringW sBoxName, ::ArrayW<uint8_t> sBox) ;

// Ctor Parameters []
explicit Gost28147Engine() ;

/// @brief Method .ctor addr 0xe44ec0 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe44f2c size 0x264 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe452c4 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe45304 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe4530c size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe45314 size 0x118 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe45670 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method generateWorkingKey addr 0xe45190 size 0x134 virtual false final false
 ::ArrayW<int32_t> generateWorkingKey(bool forEncryption, ::ArrayW<uint8_t> userKey) ;

/// @brief Method Gost28147_mainStep addr 0xe456e8 size 0xe8 virtual false final false
 int32_t Gost28147_mainStep(int32_t n1, int32_t key) ;

/// @brief Method Gost28147Func addr 0xe4542c size 0x244 virtual false final false
 void Gost28147Func(::ArrayW<int32_t> workingKey, ::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method bytesToint addr 0xe45674 size 0x74 virtual false final false
static int32_t bytesToint(::ArrayW<uint8_t> inBytes, int32_t inOff) ;

/// @brief Method intTobytes addr 0xe457d0 size 0x80 virtual false final false
static void intTobytes(int32_t num, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method GetSBox addr 0xe45850 size 0x1c0 virtual false final false
static ::ArrayW<uint8_t> GetSBox(::StringW sBoxName) ;

/// @brief Method GetSBoxName addr 0xe45a10 size 0x55c virtual false final false
static ::StringW GetSBoxName(::ArrayW<uint8_t> sBox) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine, "Org.BouncyCastle.Crypto.Engines", "Gost28147Engine");
