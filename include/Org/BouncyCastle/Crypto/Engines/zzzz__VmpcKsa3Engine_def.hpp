#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__VmpcEngine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class VmpcKsa3Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::VmpcKsa3Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(882))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(883))
// CS Name: Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
class CORDL_TYPE VmpcKsa3Engine : public ::Org::BouncyCastle::Crypto::Engines::VmpcEngine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~VmpcKsa3Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "VmpcKsa3Engine", modifiers: " const&", def_value: None }]
constexpr VmpcKsa3Engine(VmpcKsa3Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VmpcKsa3Engine", modifiers: "&&", def_value: None }]
constexpr VmpcKsa3Engine(VmpcKsa3Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VmpcKsa3Engine(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Engines::VmpcEngine(ptr) {
}


  constexpr VmpcKsa3Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VmpcKsa3Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VmpcKsa3Engine& operator=(VmpcKsa3Engine&& o) noexcept = default;
  constexpr VmpcKsa3Engine& operator=(VmpcKsa3Engine const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0xe68670 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method InitKey addr 0xe686b0 size 0x2a4 virtual true final false
 void InitKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) ;

// Ctor Parameters []
explicit VmpcKsa3Engine() ;

/// @brief Method .ctor addr 0xe68954 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine, "Org.BouncyCastle.Crypto.Engines", "VmpcKsa3Engine");
