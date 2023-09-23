#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class BufferedLightColorGroupEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__BufferedLightColorGroupEffect__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5015))
// CS Name: BufferedLightColorGroupEffect::InitData
class CORDL_TYPE GlobalNamespace__BufferedLightColorGroupEffect__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BufferedLightColorGroupEffect__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BufferedLightColorGroupEffect__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BufferedLightColorGroupEffect__InitData(GlobalNamespace__BufferedLightColorGroupEffect__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BufferedLightColorGroupEffect__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BufferedLightColorGroupEffect__InitData(GlobalNamespace__BufferedLightColorGroupEffect__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BufferedLightColorGroupEffect__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BufferedLightColorGroupEffect__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BufferedLightColorGroupEffect__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BufferedLightColorGroupEffect__InitData& operator=(GlobalNamespace__BufferedLightColorGroupEffect__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__BufferedLightColorGroupEffect__InitData& operator=(GlobalNamespace__BufferedLightColorGroupEffect__InitData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LightGroup __declspec(property(get=__get_lightGroup, put=__set_lightGroup))  lightGroup;

constexpr void __set_lightGroup(GlobalNamespace::LightGroup value) ;

constexpr GlobalNamespace::LightGroup __get_lightGroup() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get_materialPropertyBlockController, put=__set_materialPropertyBlockController))  materialPropertyBlockController;

constexpr void __set_materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get_materialPropertyBlockController() const;


// Methods

// Ctor Parameters [CppParam { name: "lightGroup", ty: "GlobalNamespace::LightGroup", modifiers: "", def_value: None }, CppParam { name: "materialPropertyBlockController", ty: "GlobalNamespace::MaterialPropertyBlockController", modifiers: "", def_value: None }]
explicit GlobalNamespace__BufferedLightColorGroupEffect__InitData(GlobalNamespace::LightGroup lightGroup, GlobalNamespace::MaterialPropertyBlockController materialPropertyBlockController) ;

/// @brief Method .ctor addr 0x225c99c size 0x2c virtual false final false
 void _ctor(GlobalNamespace::LightGroup lightGroup, GlobalNamespace::MaterialPropertyBlockController materialPropertyBlockController) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BufferedLightColorGroupEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5016))
// CS Name: BufferedLightColorGroupEffect
class CORDL_TYPE BufferedLightColorGroupEffect : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__BufferedLightColorGroupEffect__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~BufferedLightColorGroupEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffect", modifiers: " const&", def_value: None }]
constexpr BufferedLightColorGroupEffect(BufferedLightColorGroupEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffect", modifiers: "&&", def_value: None }]
constexpr BufferedLightColorGroupEffect(BufferedLightColorGroupEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedLightColorGroupEffect(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BufferedLightColorGroupEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedLightColorGroupEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedLightColorGroupEffect& operator=(BufferedLightColorGroupEffect&& o) noexcept = default;
  constexpr BufferedLightColorGroupEffect& operator=(BufferedLightColorGroupEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__colorBoostBeatmapDataCallbackWrapper, put=__set__colorBoostBeatmapDataCallbackWrapper))  _colorBoostBeatmapDataCallbackWrapper;

constexpr void __set__colorBoostBeatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__colorBoostBeatmapDataCallbackWrapper() const;

 ::ArrayW<GlobalNamespace::BeatmapDataCallbackWrapper> __declspec(property(get=__get__lightColorBeatmapEventCallbackWrappers, put=__set__lightColorBeatmapEventCallbackWrappers))  _lightColorBeatmapEventCallbackWrappers;

constexpr void __set__lightColorBeatmapEventCallbackWrappers(::ArrayW<GlobalNamespace::BeatmapDataCallbackWrapper> value) ;

constexpr ::ArrayW<GlobalNamespace::BeatmapDataCallbackWrapper> __get__lightColorBeatmapEventCallbackWrappers() const;

 int32_t __declspec(property(get=__get__lastIndex, put=__set__lastIndex))  _lastIndex;

constexpr void __set__lastIndex(int32_t value) ;

constexpr int32_t __get__lastIndex() const;

 ::ArrayW<float_t> __declspec(property(get=__get__timesBuffer, put=__set__timesBuffer))  _timesBuffer;

constexpr void __set__timesBuffer(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__timesBuffer() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__colorsBuffer, put=__set__colorsBuffer))  _colorsBuffer;

constexpr void __set__colorsBuffer(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__colorsBuffer() const;

 ::ArrayW<float_t> __declspec(property(get=__get__elementIdsBuffer, put=__set__elementIdsBuffer))  _elementIdsBuffer;

constexpr void __set__elementIdsBuffer(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__elementIdsBuffer() const;

 bool __declspec(property(get=__get__useBoostColors, put=__set__useBoostColors))  _useBoostColors;

constexpr void __set__useBoostColors(bool value) ;

constexpr bool __get__useBoostColors() const;

 bool __declspec(property(get=__get__didReceiveEventThisFrame, put=__set__didReceiveEventThisFrame))  _didReceiveEventThisFrame;

constexpr void __set__didReceiveEventThisFrame(bool value) ;

constexpr bool __get__didReceiveEventThisFrame() const;

/// @brief Field kBufferSize offset 0
static constexpr int32_t  kBufferSize{24};

static int32_t __declspec(property(get=__get__timesBufferPropertyId, put=__set__timesBufferPropertyId))  _timesBufferPropertyId;

static void __set__timesBufferPropertyId(int32_t value) ;

static int32_t __get__timesBufferPropertyId() ;

static int32_t __declspec(property(get=__get__colorBufferPropertyId, put=__set__colorBufferPropertyId))  _colorBufferPropertyId;

static void __set__colorBufferPropertyId(int32_t value) ;

static int32_t __get__colorBufferPropertyId() ;

static int32_t __declspec(property(get=__get__elementIdBufferPropertyId, put=__set__elementIdBufferPropertyId))  _elementIdBufferPropertyId;

static void __set__elementIdBufferPropertyId(int32_t value) ;

static int32_t __get__elementIdBufferPropertyId() ;


// Methods

// Ctor Parameters [CppParam { name: "initData", ty: "GlobalNamespace::GlobalNamespace__BufferedLightColorGroupEffect__InitData", modifiers: "", def_value: None }, CppParam { name: "colorManager", ty: "GlobalNamespace::ColorManager", modifiers: "", def_value: None }, CppParam { name: "beatmapCallbacksController", ty: "GlobalNamespace::BeatmapCallbacksController", modifiers: "", def_value: None }]
explicit BufferedLightColorGroupEffect(GlobalNamespace::GlobalNamespace__BufferedLightColorGroupEffect__InitData initData, GlobalNamespace::ColorManager colorManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController) ;

/// @brief Method .ctor addr 0x225c23c size 0x348 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__BufferedLightColorGroupEffect__InitData initData, GlobalNamespace::ColorManager colorManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController) ;

/// @brief Method Cleanup addr 0x225c584 size 0x11c virtual false final false
 void Cleanup() ;

/// @brief Method HandleColorBoostBeatmapEvent addr 0x225c6a0 size 0x1c virtual false final false
 void HandleColorBoostBeatmapEvent(GlobalNamespace::ColorBoostBeatmapEventData colorBoost) ;

/// @brief Method HandleColorChangeBeatmapEvent addr 0x225c6bc size 0xdc virtual false final false
 void HandleColorChangeBeatmapEvent(GlobalNamespace::LightColorBeatmapEventData currentEvent) ;

/// @brief Method HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame addr 0x225c798 size 0x108 virtual false final false
 void HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame() ;

/// @brief Method GetColor addr 0x225c8a0 size 0x34 virtual true final false
 UnityEngine::Color GetColor(GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BufferedLightColorGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BufferedLightColorGroupEffect, "", "BufferedLightColorGroupEffect");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BufferedLightColorGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BufferedLightColorGroupEffect__InitData, "", "BufferedLightColorGroupEffect/InitData");
