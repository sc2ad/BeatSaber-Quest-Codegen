#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Type: System.Security.Cryptography::RandomNumberGenerator
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2942))
// CS Name: System.Security.Cryptography.RandomNumberGenerator
class CORDL_TYPE RandomNumberGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RandomNumberGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: " const&", def_value: None }]
constexpr RandomNumberGenerator(RandomNumberGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: "&&", def_value: None }]
constexpr RandomNumberGenerator(RandomNumberGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RandomNumberGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RandomNumberGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RandomNumberGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RandomNumberGenerator& operator=(RandomNumberGenerator&& o) noexcept = default;
  constexpr RandomNumberGenerator& operator=(RandomNumberGenerator const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RandomNumberGenerator() ;

/// @brief Method .ctor addr 0x22f4d20 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22f4d28 size 0x5c virtual false final false
static System::Security::Cryptography::RandomNumberGenerator Create() ;

/// @brief Method Dispose addr 0x22f4d84 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x22f4df0 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method GetBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetBytes(::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RandomNumberGenerator);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RandomNumberGenerator, "System.Security.Cryptography", "RandomNumberGenerator");
