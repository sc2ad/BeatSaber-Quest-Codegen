#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class XSalsa20Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::XSalsa20Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(836))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(884))
// CS Name: Org.BouncyCastle.Crypto.Engines.XSalsa20Engine
class CORDL_TYPE XSalsa20Engine : public Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~XSalsa20Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "XSalsa20Engine", modifiers: " const&", def_value: None }]
constexpr XSalsa20Engine(XSalsa20Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XSalsa20Engine", modifiers: "&&", def_value: None }]
constexpr XSalsa20Engine(XSalsa20Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XSalsa20Engine(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::Salsa20Engine(ptr) {
}


  constexpr XSalsa20Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XSalsa20Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XSalsa20Engine& operator=(XSalsa20Engine&& o) noexcept = default;
  constexpr XSalsa20Engine& operator=(XSalsa20Engine const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 int32_t __declspec(property(get=get_NonceSize))  NonceSize;


// Methods

/// @brief Method get_AlgorithmName addr 0xe68968 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_NonceSize addr 0xe689a8 size 0x8 virtual true final false
 int32_t get_NonceSize() ;

/// @brief Method SetKey addr 0xe689b0 size 0x264 virtual true final false
 void SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) ;

// Ctor Parameters []
explicit XSalsa20Engine() ;

/// @brief Method .ctor addr 0xe68c14 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::XSalsa20Engine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::XSalsa20Engine, "Org.BouncyCastle.Crypto.Engines", "XSalsa20Engine");
