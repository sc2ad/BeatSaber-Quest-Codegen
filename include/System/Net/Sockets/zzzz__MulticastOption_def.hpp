#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Net::Sockets {
class MulticastOption;
}
// Type: System.Net.Sockets::MulticastOption
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8193))
// CS Name: System.Net.Sockets.MulticastOption
class CORDL_TYPE MulticastOption : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MulticastOption() = default;

// Ctor Parameters [CppParam { name: "", ty: "MulticastOption", modifiers: " const&", def_value: None }]
constexpr MulticastOption(MulticastOption const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MulticastOption", modifiers: "&&", def_value: None }]
constexpr MulticastOption(MulticastOption&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MulticastOption(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MulticastOption& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MulticastOption& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MulticastOption& operator=(MulticastOption&& o) noexcept = default;
  constexpr MulticastOption& operator=(MulticastOption const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
NEED_NO_BOX(System::Net::Sockets::MulticastOption);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::MulticastOption, "System.Net.Sockets", "MulticastOption");
