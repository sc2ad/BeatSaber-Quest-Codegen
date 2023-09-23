#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class LobbyDataModelInstaller;
}
// Type: ::LobbyDataModelInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5481))
// CS Name: LobbyDataModelInstaller
class CORDL_TYPE LobbyDataModelInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LobbyDataModelInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelInstaller", modifiers: " const&", def_value: None }]
constexpr LobbyDataModelInstaller(LobbyDataModelInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelInstaller", modifiers: "&&", def_value: None }]
constexpr LobbyDataModelInstaller(LobbyDataModelInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbyDataModelInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr LobbyDataModelInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbyDataModelInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbyDataModelInstaller& operator=(LobbyDataModelInstaller&& o) noexcept = default;
  constexpr LobbyDataModelInstaller& operator=(LobbyDataModelInstaller const& o) noexcept = default;
                


// Methods

/// @brief Method InstallBindings addr 0x2119bf0 size 0x474 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit LobbyDataModelInstaller() ;

/// @brief Method .ctor addr 0x211a064 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LobbyDataModelInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyDataModelInstaller, "", "LobbyDataModelInstaller");
