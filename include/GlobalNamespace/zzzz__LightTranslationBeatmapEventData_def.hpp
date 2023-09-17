#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationBeatmapEventData;
}
// Type: ::LightTranslationBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14920))
// CS Name: LightTranslationBeatmapEventData
class CORDL_TYPE LightTranslationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LightTranslationBeatmapEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventData", modifiers: " const&", def_value: None }]
constexpr LightTranslationBeatmapEventData(LightTranslationBeatmapEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventData", modifiers: "&&", def_value: None }]
constexpr LightTranslationBeatmapEventData(LightTranslationBeatmapEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightTranslationBeatmapEventData(void* ptr) noexcept : ::GlobalNamespace::BeatmapEventData(ptr) {
}


  constexpr LightTranslationBeatmapEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightTranslationBeatmapEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightTranslationBeatmapEventData& operator=(LightTranslationBeatmapEventData&& o) noexcept = default;
  constexpr LightTranslationBeatmapEventData& operator=(LightTranslationBeatmapEventData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_groupId, put=__set_groupId))  groupId;

constexpr void __set_groupId(int32_t value) ;

constexpr int32_t __get_groupId() const;

 int32_t __declspec(property(get=__get_elementId, put=__set_elementId))  elementId;

constexpr void __set_elementId(int32_t value) ;

constexpr int32_t __get_elementId() const;

 bool __declspec(property(get=__get_usePreviousEventValue, put=__set_usePreviousEventValue))  usePreviousEventValue;

constexpr void __set_usePreviousEventValue(bool value) ;

constexpr bool __get_usePreviousEventValue() const;

 ::GlobalNamespace::EaseType __declspec(property(get=__get_easeType, put=__set_easeType))  easeType;

constexpr void __set_easeType(::GlobalNamespace::EaseType value) ;

constexpr ::GlobalNamespace::EaseType __get_easeType() const;

 ::GlobalNamespace::LightAxis __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(::GlobalNamespace::LightAxis value) ;

constexpr ::GlobalNamespace::LightAxis __get_axis() const;

 float_t __declspec(property(get=__get__translation_k__BackingField, put=__set__translation_k__BackingField))  _translation_k__BackingField;

constexpr void __set__translation_k__BackingField(float_t value) ;

constexpr float_t __get__translation_k__BackingField() const;

 float_t __declspec(property(get=__get__distribution_k__BackingField, put=__set__distribution_k__BackingField))  _distribution_k__BackingField;

constexpr void __set__distribution_k__BackingField(float_t value) ;

constexpr float_t __get__distribution_k__BackingField() const;

static ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightTranslationBeatmapEventData> __declspec(property(get=__get__defaults, put=__set__defaults))  _defaults;

static void __set__defaults(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightTranslationBeatmapEventData> value) ;

static ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightTranslationBeatmapEventData> __get__defaults() ;


// Properties

 float_t __declspec(property(get=get_translation, put=set_translation))  translation;

 float_t __declspec(property(get=get_distribution, put=set_distribution))  distribution;


// Methods

/// @brief Method get_translation addr 0xd92400 size 0x8 virtual false final false
 float_t get_translation() ;

/// @brief Method set_translation addr 0xd92408 size 0x8 virtual false final false
 void set_translation(float_t value) ;

/// @brief Method get_distribution addr 0xd92410 size 0x8 virtual false final false
 float_t get_distribution() ;

/// @brief Method set_distribution addr 0xd92418 size 0x8 virtual false final false
 void set_distribution(float_t value) ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usePreviousEventValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "::GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::GlobalNamespace::LightAxis", modifiers: "", def_value: None }, CppParam { name: "translation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "distribution", ty: "float_t", modifiers: "", def_value: None }]
explicit LightTranslationBeatmapEventData(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t translation, float_t distribution) ;

/// @brief Method .ctor addr 0xd92420 size 0xdc virtual false final false
 void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t translation, float_t distribution) ;

/// @brief Method ChangeTranslation addr 0xd92514 size 0x8 virtual false final false
 void ChangeTranslation(float_t translation, float_t distribution) ;

/// @brief Method GetCopy addr 0xd9251c size 0xb4 virtual true final false
 ::GlobalNamespace::BeatmapDataItem GetCopy() ;

/// @brief Method SubtypeIdentifier addr 0xd924fc size 0x18 virtual false final false
static int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis) ;

/// @brief Method GetDefault addr 0xd925d0 size 0x160 virtual true final false
 ::GlobalNamespace::BeatmapEventData GetDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBeatmapEventData, "", "LightTranslationBeatmapEventData");
