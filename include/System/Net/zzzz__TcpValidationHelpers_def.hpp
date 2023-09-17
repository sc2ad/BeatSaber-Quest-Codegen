#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net {
class TcpValidationHelpers;
}
// Type: System.Net::TcpValidationHelpers
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7876))
// CS Name: System.Net.TcpValidationHelpers
class CORDL_TYPE TcpValidationHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TcpValidationHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "TcpValidationHelpers", modifiers: " const&", def_value: None }]
constexpr TcpValidationHelpers(TcpValidationHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TcpValidationHelpers", modifiers: "&&", def_value: None }]
constexpr TcpValidationHelpers(TcpValidationHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TcpValidationHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TcpValidationHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TcpValidationHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TcpValidationHelpers& operator=(TcpValidationHelpers&& o) noexcept = default;
  constexpr TcpValidationHelpers& operator=(TcpValidationHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method ValidatePortNumber addr 0x27f8b94 size 0xc virtual false final false
static bool ValidatePortNumber(int32_t port) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::TcpValidationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TcpValidationHelpers, "System.Net", "TcpValidationHelpers");
