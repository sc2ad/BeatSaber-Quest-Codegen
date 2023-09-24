#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class ColorScheme;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorManager;
}
// Type: ::ColorManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5915))
// CS Name: ColorManager
class CORDL_TYPE ColorManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ColorManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorManager", modifiers: " const&", def_value: None }]
constexpr ColorManager(ColorManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorManager", modifiers: "&&", def_value: None }]
constexpr ColorManager(ColorManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ColorManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorManager& operator=(ColorManager&& o) noexcept = default;
  constexpr ColorManager& operator=(ColorManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorScheme __declspec(property(get=__get__colorScheme, put=__set__colorScheme))  _colorScheme;

constexpr void __set__colorScheme(GlobalNamespace::ColorScheme value) ;

constexpr GlobalNamespace::ColorScheme __get__colorScheme() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_obstaclesColor))  obstaclesColor;


// Methods

/// @brief Method get_obstaclesColor addr 0x2191cd8 size 0x20 virtual false final false
 UnityEngine::Color get_obstaclesColor() ;

/// @brief Method SetColorScheme addr 0x2191cf8 size 0x8 virtual false final false
 void SetColorScheme(GlobalNamespace::ColorScheme colorScheme) ;

/// @brief Method ColorForType addr 0x2191d00 size 0xe8 virtual false final false
 UnityEngine::Color ColorForType(GlobalNamespace::EnvironmentColorType type, bool boost) ;

/// @brief Method ColorForType addr 0x2191de8 size 0x74 virtual false final false
 UnityEngine::Color ColorForType(GlobalNamespace::ColorType type) ;

/// @brief Method ColorForSaberType addr 0x2191e5c size 0x54 virtual false final false
 UnityEngine::Color ColorForSaberType(GlobalNamespace::SaberType type) ;

/// @brief Method EffectsColorForSaberType addr 0x2191eb0 size 0x90 virtual false final false
 UnityEngine::Color EffectsColorForSaberType(GlobalNamespace::SaberType type) ;

/// @brief Method GetObstacleEffectColor addr 0x2191f40 size 0x5c virtual false final false
 UnityEngine::Color GetObstacleEffectColor() ;

static GlobalNamespace::ColorManager New_ctor() ;

/// @brief Method .ctor addr 0x2191f9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorManager, "", "ColorManager");
