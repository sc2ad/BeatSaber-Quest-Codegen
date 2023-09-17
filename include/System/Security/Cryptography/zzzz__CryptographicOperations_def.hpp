#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptographicOperations;
}
// Type: System.Security.Cryptography::CryptographicOperations
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2911))
// CS Name: System.Security.Cryptography.CryptographicOperations
class CORDL_TYPE CryptographicOperations : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CryptographicOperations() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptographicOperations", modifiers: " const&", def_value: None }]
constexpr CryptographicOperations(CryptographicOperations const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptographicOperations", modifiers: "&&", def_value: None }]
constexpr CryptographicOperations(CryptographicOperations&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptographicOperations(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CryptographicOperations& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptographicOperations& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptographicOperations& operator=(CryptographicOperations&& o) noexcept = default;
  constexpr CryptographicOperations& operator=(CryptographicOperations const& o) noexcept = default;
                


// Methods

/// @brief Method ZeroMemory addr 0x22eda1c size 0x68 virtual false final false
static void ZeroMemory(::System::Span_1<uint8_t> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::CryptographicOperations);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptographicOperations, "System.Security.Cryptography", "CryptographicOperations");
