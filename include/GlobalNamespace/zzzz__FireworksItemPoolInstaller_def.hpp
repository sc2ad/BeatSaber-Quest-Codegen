#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class FireworksController;
}
// Forward declare root types
namespace GlobalNamespace {
class FireworksItemPoolInstaller;
}
// Type: ::FireworksItemPoolInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4964))
// CS Name: FireworksItemPoolInstaller
class CORDL_TYPE FireworksItemPoolInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FireworksItemPoolInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "FireworksItemPoolInstaller", modifiers: " const&", def_value: None }]
constexpr FireworksItemPoolInstaller(FireworksItemPoolInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FireworksItemPoolInstaller", modifiers: "&&", def_value: None }]
constexpr FireworksItemPoolInstaller(FireworksItemPoolInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FireworksItemPoolInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr FireworksItemPoolInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FireworksItemPoolInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FireworksItemPoolInstaller& operator=(FireworksItemPoolInstaller&& o) noexcept = default;
  constexpr FireworksItemPoolInstaller& operator=(FireworksItemPoolInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FireworksController __declspec(property(get=__get__fireworksController, put=__set__fireworksController))  _fireworksController;

constexpr void __set__fireworksController(GlobalNamespace::FireworksController value) ;

constexpr GlobalNamespace::FireworksController __get__fireworksController() const;

 GlobalNamespace::FireworkItemController __declspec(property(get=__get__fireworkItemControllerPrefab, put=__set__fireworkItemControllerPrefab))  _fireworkItemControllerPrefab;

constexpr void __set__fireworkItemControllerPrefab(GlobalNamespace::FireworkItemController value) ;

constexpr GlobalNamespace::FireworkItemController __get__fireworkItemControllerPrefab() const;


// Methods

/// @brief Method InstallBindings addr 0x2250164 size 0x94 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit FireworksItemPoolInstaller() ;

/// @brief Method .ctor addr 0x22501f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FireworksItemPoolInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworksItemPoolInstaller, "", "FireworksItemPoolInstaller");
