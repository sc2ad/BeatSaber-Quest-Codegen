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
class RC2Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RC2Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(854))
// CS Name: Org.BouncyCastle.Crypto.Engines.RC2Engine
class CORDL_TYPE RC2Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RC2Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2Engine", modifiers: " const&", def_value: None }]
constexpr RC2Engine(RC2Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2Engine", modifiers: "&&", def_value: None }]
constexpr RC2Engine(RC2Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC2Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RC2Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC2Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC2Engine& operator=(RC2Engine&& o) noexcept = default;
  constexpr RC2Engine& operator=(RC2Engine const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{8};

static ::ArrayW<uint8_t> __declspec(property(get=__get_piTable, put=__set_piTable))  piTable;

static void __set_piTable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_piTable() ;

 ::ArrayW<int32_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_workingKey() const;

 bool __declspec(property(get=__get_encrypting, put=__set_encrypting))  encrypting;

constexpr void __set_encrypting(bool value) ;

constexpr bool __get_encrypting() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method GenerateWorkingKey addr 0xe4c4e4 size 0x2e0 virtual false final false
 ::ArrayW<int32_t> GenerateWorkingKey(::ArrayW<uint8_t> key, int32_t bits) ;

/// @brief Method Init addr 0xe4c7c4 size 0x174 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Reset addr 0xe4c938 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method get_AlgorithmName addr 0xe4c93c size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe4c97c size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe4c984 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe4c98c size 0x138 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method RotateWordLeft addr 0xe4d3fc size 0x1c virtual false final false
 int32_t RotateWordLeft(int32_t x, int32_t y) ;

/// @brief Method EncryptBlock addr 0xe4cac4 size 0x4e0 virtual false final false
 void EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe4cfa4 size 0x458 virtual false final false
 void DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

// Ctor Parameters []
explicit RC2Engine() ;

/// @brief Method .ctor addr 0xe4d4ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::RC2Engine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC2Engine, "Org.BouncyCastle.Crypto.Engines", "RC2Engine");
