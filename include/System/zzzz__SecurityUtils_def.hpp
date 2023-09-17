#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System {
class SecurityUtils;
}
// Type: System::SecurityUtils
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7718))
// CS Name: System.SecurityUtils
class CORDL_TYPE SecurityUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecurityUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityUtils", modifiers: " const&", def_value: None }]
constexpr SecurityUtils(SecurityUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityUtils", modifiers: "&&", def_value: None }]
constexpr SecurityUtils(SecurityUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecurityUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityUtils& operator=(SecurityUtils&& o) noexcept = default;
  constexpr SecurityUtils& operator=(SecurityUtils const& o) noexcept = default;
                


// Methods

/// @brief Method DemandReflectionAccess addr 0x27b6300 size 0x4 virtual false final false
static void DemandReflectionAccess(::System::Type type) ;

/// @brief Method DemandGrantSet addr 0x27b6304 size 0x4 virtual false final false
static void DemandGrantSet(::System::Reflection::Assembly assembly) ;

/// @brief Method HasReflectionPermission addr 0x27b6308 size 0x8 virtual false final false
static bool HasReflectionPermission(::System::Type type) ;

/// @brief Method SecureCreateInstance addr 0x27b6310 size 0xc virtual false final false
static ::bs_hook::Il2CppWrapperType SecureCreateInstance(::System::Type type) ;

/// @brief Method SecureCreateInstance addr 0x27b631c size 0xf8 virtual false final false
static ::bs_hook::Il2CppWrapperType SecureCreateInstance(::System::Type type, ::ArrayW<::bs_hook::Il2CppWrapperType> args, bool allowNonPublic) ;

/// @brief Method SecureConstructorInvoke addr 0x27b6414 size 0xc virtual false final false
static ::bs_hook::Il2CppWrapperType SecureConstructorInvoke(::System::Type type, ::ArrayW<::System::Type> argTypes, ::ArrayW<::bs_hook::Il2CppWrapperType> args, bool allowNonPublic) ;

/// @brief Method SecureConstructorInvoke addr 0x27b6420 size 0x178 virtual false final false
static ::bs_hook::Il2CppWrapperType SecureConstructorInvoke(::System::Type type, ::ArrayW<::System::Type> argTypes, ::ArrayW<::bs_hook::Il2CppWrapperType> args, bool allowNonPublic, ::System::Reflection::BindingFlags extraFlags) ;

/// @brief Method GenericArgumentsAreVisible addr 0x27b6598 size 0xa0 virtual false final false
static bool GenericArgumentsAreVisible(::System::Reflection::MethodInfo method) ;

/// @brief Method MethodInfoInvoke addr 0x27b6638 size 0x110 virtual false final false
static ::bs_hook::Il2CppWrapperType MethodInfoInvoke(::System::Reflection::MethodInfo method, ::bs_hook::Il2CppWrapperType target, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::SecurityUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::SecurityUtils, "System", "SecurityUtils");
