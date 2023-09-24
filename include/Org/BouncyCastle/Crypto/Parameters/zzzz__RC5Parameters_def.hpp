#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RC5Parameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::RC5Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1015))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1077))
// CS Name: Org.BouncyCastle.Crypto.Parameters.RC5Parameters
class CORDL_TYPE RC5Parameters : public Org::BouncyCastle::Crypto::Parameters::KeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RC5Parameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC5Parameters", modifiers: " const&", def_value: None }]
constexpr RC5Parameters(RC5Parameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC5Parameters", modifiers: "&&", def_value: None }]
constexpr RC5Parameters(RC5Parameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC5Parameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::KeyParameter(ptr) {
}


  constexpr RC5Parameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC5Parameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC5Parameters& operator=(RC5Parameters&& o) noexcept = default;
  constexpr RC5Parameters& operator=(RC5Parameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_rounds, put=__set_rounds))  rounds;

constexpr void __set_rounds(int32_t value) ;

constexpr int32_t __get_rounds() const;


// Properties

 int32_t __declspec(property(get=get_Rounds))  Rounds;


// Methods

static Org::BouncyCastle::Crypto::Parameters::RC5Parameters New_ctor(::ArrayW<uint8_t> key, int32_t rounds) ;

/// @brief Method .ctor addr 0xeab334 size 0x8c virtual false final false
 void _ctor(::ArrayW<uint8_t> key, int32_t rounds) ;

/// @brief Method get_Rounds addr 0xeab3c0 size 0x8 virtual false final false
 int32_t get_Rounds() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::RC5Parameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::RC5Parameters, "Org.BouncyCastle.Crypto.Parameters", "RC5Parameters");
