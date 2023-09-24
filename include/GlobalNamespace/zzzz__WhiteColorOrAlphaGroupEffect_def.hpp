#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class ColorManager;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class IBpmController;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class GlobalNamespace__LightColorGroupEffect__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class WhiteColorOrAlphaGroupEffect;
}
// Type: ::WhiteColorOrAlphaGroupEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5025))
// CS Name: WhiteColorOrAlphaGroupEffect
class CORDL_TYPE WhiteColorOrAlphaGroupEffect : public GlobalNamespace::LightColorGroupEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~WhiteColorOrAlphaGroupEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffect", modifiers: " const&", def_value: None }]
constexpr WhiteColorOrAlphaGroupEffect(WhiteColorOrAlphaGroupEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffect", modifiers: "&&", def_value: None }]
constexpr WhiteColorOrAlphaGroupEffect(WhiteColorOrAlphaGroupEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WhiteColorOrAlphaGroupEffect(void* ptr) noexcept : GlobalNamespace::LightColorGroupEffect(ptr) {
}


  constexpr WhiteColorOrAlphaGroupEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WhiteColorOrAlphaGroupEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WhiteColorOrAlphaGroupEffect& operator=(WhiteColorOrAlphaGroupEffect&& o) noexcept = default;
  constexpr WhiteColorOrAlphaGroupEffect& operator=(WhiteColorOrAlphaGroupEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__defaultColor, put=__set__defaultColor))  _defaultColor;

constexpr void __set__defaultColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__defaultColor() const;


// Methods

static GlobalNamespace::WhiteColorOrAlphaGroupEffect New_ctor(GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData initData, UnityEngine::Color defaultColor, GlobalNamespace::LightWithIdManager lightManager, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::ColorManager colorManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::IBpmController bpmController) ;

/// @brief Method .ctor addr 0x225e048 size 0xc8 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData initData, UnityEngine::Color defaultColor, GlobalNamespace::LightWithIdManager lightManager, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::ColorManager colorManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::IBpmController bpmController) ;

/// @brief Method GetColor addr 0x225e110 size 0x4c virtual true final false
 UnityEngine::Color GetColor(GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::WhiteColorOrAlphaGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WhiteColorOrAlphaGroupEffect, "", "WhiteColorOrAlphaGroupEffect");
