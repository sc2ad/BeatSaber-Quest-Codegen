#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class KeyBuilder;
}
// Type: Mono.Security.Cryptography::KeyBuilder
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14000))
// CS Name: Mono.Security.Cryptography.KeyBuilder
class CORDL_TYPE KeyBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~KeyBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyBuilder", modifiers: " const&", def_value: None }]
constexpr KeyBuilder(KeyBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyBuilder", modifiers: "&&", def_value: None }]
constexpr KeyBuilder(KeyBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyBuilder& operator=(KeyBuilder&& o) noexcept = default;
  constexpr KeyBuilder& operator=(KeyBuilder const& o) noexcept = default;
                


// Fields

static System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=__get_rng, put=__set_rng))  rng;

static void __set_rng(System::Security::Cryptography::RandomNumberGenerator value) ;

static System::Security::Cryptography::RandomNumberGenerator __get_rng() ;


// Properties

static System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=get_Rng))  Rng;


// Methods

/// @brief Method get_Rng addr 0x2297190 size 0x68 virtual false final false
static System::Security::Cryptography::RandomNumberGenerator get_Rng() ;

/// @brief Method Key addr 0x22961e4 size 0x70 virtual false final false
static ::ArrayW<uint8_t> Key(int32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::KeyBuilder);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::KeyBuilder, "Mono.Security.Cryptography", "KeyBuilder");
