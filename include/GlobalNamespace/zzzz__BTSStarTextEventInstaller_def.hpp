#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class BTSStarTextEffectController;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEventInstaller;
}
// Type: ::BTSStarTextEventInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3971))
// CS Name: BTSStarTextEventInstaller
class CORDL_TYPE BTSStarTextEventInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BTSStarTextEventInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventInstaller", modifiers: " const&", def_value: None }]
constexpr BTSStarTextEventInstaller(BTSStarTextEventInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventInstaller", modifiers: "&&", def_value: None }]
constexpr BTSStarTextEventInstaller(BTSStarTextEventInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSStarTextEventInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr BTSStarTextEventInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSStarTextEventInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSStarTextEventInstaller& operator=(BTSStarTextEventInstaller&& o) noexcept = default;
  constexpr BTSStarTextEventInstaller& operator=(BTSStarTextEventInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BTSStarTextEffectController __declspec(property(get=__get__btsStarTextEffectController, put=__set__btsStarTextEffectController))  _btsStarTextEffectController;

constexpr void __set__btsStarTextEffectController(GlobalNamespace::BTSStarTextEffectController value) ;

constexpr GlobalNamespace::BTSStarTextEffectController __get__btsStarTextEffectController() const;


// Methods

/// @brief Method InstallBindings addr 0x20ab41c size 0x84 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::BTSStarTextEventInstaller New_ctor() ;

/// @brief Method .ctor addr 0x20ab4a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BTSStarTextEventInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEventInstaller, "", "BTSStarTextEventInstaller");
