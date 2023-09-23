#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System {
class EnvironmentHelpers;
}
// Type: System::EnvironmentHelpers
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7742))
// CS Name: System.EnvironmentHelpers
class CORDL_TYPE EnvironmentHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnvironmentHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentHelpers", modifiers: " const&", def_value: None }]
constexpr EnvironmentHelpers(EnvironmentHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentHelpers", modifiers: "&&", def_value: None }]
constexpr EnvironmentHelpers(EnvironmentHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvironmentHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentHelpers& operator=(EnvironmentHelpers&& o) noexcept = default;
  constexpr EnvironmentHelpers& operator=(EnvironmentHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method IsWindowsVistaOrAbove addr 0x27bba48 size 0x8 virtual false final false
static bool IsWindowsVistaOrAbove() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::EnvironmentHelpers);
DEFINE_IL2CPP_ARG_TYPE(System::EnvironmentHelpers, "System", "EnvironmentHelpers");
