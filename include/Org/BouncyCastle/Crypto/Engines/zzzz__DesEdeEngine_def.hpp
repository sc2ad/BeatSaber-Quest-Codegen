#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__DesEngine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class DesEdeEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::DesEdeEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(839))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(840))
// CS Name: Org.BouncyCastle.Crypto.Engines.DesEdeEngine
class CORDL_TYPE DesEdeEngine : public Org::BouncyCastle::Crypto::Engines::DesEngine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DesEdeEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeEngine", modifiers: " const&", def_value: None }]
constexpr DesEdeEngine(DesEdeEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeEngine", modifiers: "&&", def_value: None }]
constexpr DesEdeEngine(DesEdeEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesEdeEngine(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::DesEngine(ptr) {
}


  constexpr DesEdeEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesEdeEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesEdeEngine& operator=(DesEdeEngine&& o) noexcept = default;
  constexpr DesEdeEngine& operator=(DesEdeEngine const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_workingKey1, put=__set_workingKey1))  workingKey1;

constexpr void __set_workingKey1(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_workingKey1() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_workingKey2, put=__set_workingKey2))  workingKey2;

constexpr void __set_workingKey2(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_workingKey2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_workingKey3, put=__set_workingKey3))  workingKey3;

constexpr void __set_workingKey3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_workingKey3() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method Init addr 0xe3f414 size 0x2a4 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe3f6b8 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetBlockSize addr 0xe3f6f8 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe3f700 size 0x1f0 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe3f8f0 size 0x4 virtual true final false
 void Reset() ;

static Org::BouncyCastle::Crypto::Engines::DesEdeEngine New_ctor() ;

/// @brief Method .ctor addr 0xe3f8f4 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::DesEdeEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::DesEdeEngine, "Org.BouncyCastle.Crypto.Engines", "DesEdeEngine");
