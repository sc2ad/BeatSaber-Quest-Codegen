#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Cast5Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Cast6Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::Cast6Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(833))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(834))
// CS Name: Org.BouncyCastle.Crypto.Engines.Cast6Engine
class CORDL_TYPE Cast6Engine : public Org::BouncyCastle::Crypto::Engines::Cast5Engine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Cast6Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cast6Engine", modifiers: " const&", def_value: None }]
constexpr Cast6Engine(Cast6Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cast6Engine", modifiers: "&&", def_value: None }]
constexpr Cast6Engine(Cast6Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cast6Engine(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::Cast5Engine(ptr) {
}


  constexpr Cast6Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cast6Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cast6Engine& operator=(Cast6Engine&& o) noexcept = default;
  constexpr Cast6Engine& operator=(Cast6Engine const& o) noexcept = default;
                


// Fields

/// @brief Field ROUNDS offset 0
static constexpr int32_t  ROUNDS{12};

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{16};

 ::ArrayW<int32_t> __declspec(property(get=__get__Kr, put=__set__Kr))  _Kr;

constexpr void __set__Kr(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__Kr() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__Km, put=__set__Km))  _Km;

constexpr void __set__Km(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__Km() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__Tr, put=__set__Tr))  _Tr;

constexpr void __set__Tr(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__Tr() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__Tm, put=__set__Tm))  _Tm;

constexpr void __set__Tm(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__Tm() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__workingKey, put=__set__workingKey))  _workingKey;

constexpr void __set__workingKey(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__workingKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit Cast6Engine() ;

/// @brief Method .ctor addr 0xe3aeac size 0xd4 virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xe3af80 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Reset addr 0xe3afc0 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method GetBlockSize addr 0xe3afc4 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method SetKey addr 0xe3afcc size 0x9b8 virtual true final false
 void SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0xe3b984 size 0x174 virtual true final false
 int32_t EncryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) ;

/// @brief Method DecryptBlock addr 0xe3be3c size 0x174 virtual true final false
 int32_t DecryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) ;

/// @brief Method CAST_Encipher addr 0xe3baf8 size 0x344 virtual false final false
 void CAST_Encipher(uint32_t A, uint32_t B, uint32_t C, uint32_t D, ::ArrayW<uint32_t> result) ;

/// @brief Method CAST_Decipher addr 0xe3bfb0 size 0x348 virtual false final false
 void CAST_Decipher(uint32_t A, uint32_t B, uint32_t C, uint32_t D, ::ArrayW<uint32_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::Cast6Engine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Cast6Engine, "Org.BouncyCastle.Crypto.Engines", "Cast6Engine");
