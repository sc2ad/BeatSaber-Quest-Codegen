#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace GlobalNamespace {
class LightColorGroupEffect;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroupEffectManager;
}
// Type: ::LightColorGroupEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5022))
// CS Name: LightColorGroupEffectManager
class CORDL_TYPE LightColorGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LightColorGroupEffectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffectManager", modifiers: " const&", def_value: None }]
constexpr LightColorGroupEffectManager(LightColorGroupEffectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffectManager", modifiers: "&&", def_value: None }]
constexpr LightColorGroupEffectManager(LightColorGroupEffectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightColorGroupEffectManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightColorGroupEffectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightColorGroupEffectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightColorGroupEffectManager& operator=(LightColorGroupEffectManager&& o) noexcept = default;
  constexpr LightColorGroupEffectManager& operator=(LightColorGroupEffectManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::LightGroup> __declspec(property(get=__get__lightGroups, put=__set__lightGroups))  _lightGroups;

constexpr void __set__lightGroups(::ArrayW<::GlobalNamespace::LightGroup> value) ;

constexpr ::ArrayW<::GlobalNamespace::LightGroup> __get__lightGroups() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__colorBoostBeatmapDataCallbackWrapper, put=__set__colorBoostBeatmapDataCallbackWrapper))  _colorBoostBeatmapDataCallbackWrapper;

constexpr void __set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__colorBoostBeatmapDataCallbackWrapper() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect> __declspec(property(get=__get__lightColorGroupEffects, put=__set__lightColorGroupEffects))  _lightColorGroupEffects;

constexpr void __set__lightColorGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect> __get__lightColorGroupEffects() const;


// Properties

 ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::LightGroup> __declspec(property(get=get_lightGroups))  lightGroups;


// Methods

/// @brief Method get_lightGroups addr 0x225d98c size 0x8 virtual false final false
 ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::LightGroup> get_lightGroups() ;

/// @brief Method Start addr 0x225d994 size 0x2a0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x225dc34 size 0x15c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleColorBoostBeatmapEvent addr 0x225dd90 size 0x15c virtual false final false
 void HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData eventData) ;

// Ctor Parameters []
explicit LightColorGroupEffectManager() ;

/// @brief Method .ctor addr 0x225deec size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightColorGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroupEffectManager, "", "LightColorGroupEffectManager");
