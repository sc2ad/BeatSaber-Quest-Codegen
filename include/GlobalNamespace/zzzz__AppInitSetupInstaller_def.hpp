#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class AppInitSetupInstaller;
}
// Type: ::AppInitSetupInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4016))
// CS Name: AppInitSetupInstaller
class CORDL_TYPE AppInitSetupInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AppInitSetupInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInitSetupInstaller", modifiers: " const&", def_value: None }]
constexpr AppInitSetupInstaller(AppInitSetupInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInitSetupInstaller", modifiers: "&&", def_value: None }]
constexpr AppInitSetupInstaller(AppInitSetupInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppInitSetupInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr AppInitSetupInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppInitSetupInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppInitSetupInstaller& operator=(AppInitSetupInstaller&& o) noexcept = default;
  constexpr AppInitSetupInstaller& operator=(AppInitSetupInstaller const& o) noexcept = default;
                


// Methods

/// @brief Method InstallBindings addr 0x20b46d4 size 0x68 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit AppInitSetupInstaller() ;

/// @brief Method .ctor addr 0x20b473c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AppInitSetupInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitSetupInstaller, "", "AppInitSetupInstaller");
