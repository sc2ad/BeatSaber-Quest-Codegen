#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Net {
class Logging;
}
// Type: System.Net::Logging
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7996))
// CS Name: System.Net.Logging
class CORDL_TYPE Logging : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Logging() = default;

// Ctor Parameters [CppParam { name: "", ty: "Logging", modifiers: " const&", def_value: None }]
constexpr Logging(Logging const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Logging", modifiers: "&&", def_value: None }]
constexpr Logging(Logging&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Logging(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Logging& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Logging& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Logging& operator=(Logging&& o) noexcept = default;
  constexpr Logging& operator=(Logging const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_On))  On;


// Methods

/// @brief Method get_On addr 0x2828170 size 0x8 virtual false final false
static bool get_On() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::Logging);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Logging, "System.Net", "Logging");
