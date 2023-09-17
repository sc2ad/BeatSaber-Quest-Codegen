#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Security {
class SecurityManager;
}
// Type: System.Security::SecurityManager
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2886))
// CS Name: System.Security.SecurityManager
class CORDL_TYPE SecurityManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecurityManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityManager", modifiers: " const&", def_value: None }]
constexpr SecurityManager(SecurityManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityManager", modifiers: "&&", def_value: None }]
constexpr SecurityManager(SecurityManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecurityManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityManager& operator=(SecurityManager&& o) noexcept = default;
  constexpr SecurityManager& operator=(SecurityManager const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_SecurityEnabled))  SecurityEnabled;


// Methods

/// @brief Method get_SecurityEnabled addr 0x22e4f1c size 0x8 virtual false final false
static bool get_SecurityEnabled() ;

/// @brief Method EnsureElevatedPermissions addr 0x22e866c size 0x4 virtual false final false
static void EnsureElevatedPermissions() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
} // end anonymous namespace
NEED_NO_BOX(::System::Security::SecurityManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityManager, "System.Security", "SecurityManager");
