#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class ICommandLineArgsProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentCommandLineArgsProvider;
}
// Type: ::EnvironmentCommandLineArgsProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6033))
// CS Name: EnvironmentCommandLineArgsProvider
class CORDL_TYPE EnvironmentCommandLineArgsProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ICommandLineArgsProvider
constexpr operator  ::GlobalNamespace::ICommandLineArgsProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnvironmentCommandLineArgsProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentCommandLineArgsProvider", modifiers: " const&", def_value: None }]
constexpr EnvironmentCommandLineArgsProvider(EnvironmentCommandLineArgsProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentCommandLineArgsProvider", modifiers: "&&", def_value: None }]
constexpr EnvironmentCommandLineArgsProvider(EnvironmentCommandLineArgsProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentCommandLineArgsProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvironmentCommandLineArgsProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentCommandLineArgsProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentCommandLineArgsProvider& operator=(EnvironmentCommandLineArgsProvider&& o) noexcept = default;
  constexpr EnvironmentCommandLineArgsProvider& operator=(EnvironmentCommandLineArgsProvider const& o) noexcept = default;
                


// Methods

/// @brief Method GetCommandLineArgs addr 0x21a8e34 size 0x8 virtual true final true
 ::ArrayW<::StringW> GetCommandLineArgs() ;

// Ctor Parameters []
explicit EnvironmentCommandLineArgsProvider() ;

/// @brief Method .ctor addr 0x21a8ebc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentCommandLineArgsProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentCommandLineArgsProvider, "", "EnvironmentCommandLineArgsProvider");
