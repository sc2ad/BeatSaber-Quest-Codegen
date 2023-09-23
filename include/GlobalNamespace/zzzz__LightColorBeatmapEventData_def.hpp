#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct BeatmapEventTransitionType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
// Type: ::LightColorBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14917))
// CS Name: LightColorBeatmapEventData
class CORDL_TYPE LightColorBeatmapEventData : public GlobalNamespace::BeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~LightColorBeatmapEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventData", modifiers: " const&", def_value: None }]
constexpr LightColorBeatmapEventData(LightColorBeatmapEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventData", modifiers: "&&", def_value: None }]
constexpr LightColorBeatmapEventData(LightColorBeatmapEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightColorBeatmapEventData(void* ptr) noexcept : GlobalNamespace::BeatmapEventData(ptr) {
}


  constexpr LightColorBeatmapEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightColorBeatmapEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightColorBeatmapEventData& operator=(LightColorBeatmapEventData&& o) noexcept = default;
  constexpr LightColorBeatmapEventData& operator=(LightColorBeatmapEventData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_groupId, put=__set_groupId))  groupId;

constexpr void __set_groupId(int32_t value) ;

constexpr int32_t __get_groupId() const;

 int32_t __declspec(property(get=__get_elementId, put=__set_elementId))  elementId;

constexpr void __set_elementId(int32_t value) ;

constexpr int32_t __get_elementId() const;

 GlobalNamespace::BeatmapEventTransitionType __declspec(property(get=__get_transitionType, put=__set_transitionType))  transitionType;

constexpr void __set_transitionType(GlobalNamespace::BeatmapEventTransitionType value) ;

constexpr GlobalNamespace::BeatmapEventTransitionType __get_transitionType() const;

 GlobalNamespace::EnvironmentColorType __declspec(property(get=__get__colorType_k__BackingField, put=__set__colorType_k__BackingField))  _colorType_k__BackingField;

constexpr void __set__colorType_k__BackingField(GlobalNamespace::EnvironmentColorType value) ;

constexpr GlobalNamespace::EnvironmentColorType __get__colorType_k__BackingField() const;

 float_t __declspec(property(get=__get__brightness_k__BackingField, put=__set__brightness_k__BackingField))  _brightness_k__BackingField;

constexpr void __set__brightness_k__BackingField(float_t value) ;

constexpr float_t __get__brightness_k__BackingField() const;

 int32_t __declspec(property(get=__get__strobeBeatFrequency_k__BackingField, put=__set__strobeBeatFrequency_k__BackingField))  _strobeBeatFrequency_k__BackingField;

constexpr void __set__strobeBeatFrequency_k__BackingField(int32_t value) ;

constexpr int32_t __get__strobeBeatFrequency_k__BackingField() const;

static System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::LightColorBeatmapEventData> __declspec(property(get=__get__defaults, put=__set__defaults))  _defaults;

static void __set__defaults(System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::LightColorBeatmapEventData> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::LightColorBeatmapEventData> __get__defaults() ;


// Properties

 GlobalNamespace::EnvironmentColorType __declspec(property(get=get_colorType, put=set_colorType))  colorType;

 float_t __declspec(property(get=get_brightness, put=set_brightness))  brightness;

 int32_t __declspec(property(get=get_strobeBeatFrequency, put=set_strobeBeatFrequency))  strobeBeatFrequency;


// Methods

/// @brief Method get_colorType addr 0xd91cb4 size 0x8 virtual false final false
 GlobalNamespace::EnvironmentColorType get_colorType() ;

/// @brief Method set_colorType addr 0xd91cbc size 0x8 virtual false final false
 void set_colorType(GlobalNamespace::EnvironmentColorType value) ;

/// @brief Method get_brightness addr 0xd91cc4 size 0x8 virtual false final false
 float_t get_brightness() ;

/// @brief Method set_brightness addr 0xd91ccc size 0x8 virtual false final false
 void set_brightness(float_t value) ;

/// @brief Method get_strobeBeatFrequency addr 0xd91cd4 size 0x8 virtual false final false
 int32_t get_strobeBeatFrequency() ;

/// @brief Method set_strobeBeatFrequency addr 0xd91cdc size 0x8 virtual false final false
 void set_strobeBeatFrequency(int32_t value) ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transitionType", ty: "GlobalNamespace::BeatmapEventTransitionType", modifiers: "", def_value: None }, CppParam { name: "colorType", ty: "GlobalNamespace::EnvironmentColorType", modifiers: "", def_value: None }, CppParam { name: "brightness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "strobeBeatFrequency", ty: "int32_t", modifiers: "", def_value: None }]
explicit LightColorBeatmapEventData(float_t time, int32_t groupId, int32_t elementId, GlobalNamespace::BeatmapEventTransitionType transitionType, GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency) ;

/// @brief Method .ctor addr 0xd91ce4 size 0xc4 virtual false final false
 void _ctor(float_t time, int32_t groupId, int32_t elementId, GlobalNamespace::BeatmapEventTransitionType transitionType, GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency) ;

/// @brief Method CopyColorDataFrom addr 0xd91db4 size 0x24 virtual false final false
 void CopyColorDataFrom(GlobalNamespace::LightColorBeatmapEventData lightColorBeatmapEventData) ;

/// @brief Method DisableStrobe addr 0xd91dd8 size 0x8 virtual false final false
 void DisableStrobe() ;

/// @brief Method GetCopy addr 0xd91de0 size 0xa4 virtual true final false
 GlobalNamespace::BeatmapDataItem GetCopy() ;

/// @brief Method SubtypeIdentifier addr 0xd91da8 size 0xc virtual false final false
static int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId) ;

/// @brief Method GetDefault addr 0xd91e84 size 0x128 virtual true final false
 GlobalNamespace::BeatmapEventData GetDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightColorBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightColorBeatmapEventData, "", "LightColorBeatmapEventData");
