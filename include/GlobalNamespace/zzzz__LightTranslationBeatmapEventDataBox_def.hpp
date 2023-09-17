#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class LightTranslationBaseData;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationBeatmapEventDataBox;
}
// Type: ::LightTranslationBeatmapEventDataBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4323))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4340))
// CS Name: LightTranslationBeatmapEventDataBox
class CORDL_TYPE LightTranslationBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LightTranslationBeatmapEventDataBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataBox", modifiers: " const&", def_value: None }]
constexpr LightTranslationBeatmapEventDataBox(LightTranslationBeatmapEventDataBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataBox", modifiers: "&&", def_value: None }]
constexpr LightTranslationBeatmapEventDataBox(LightTranslationBeatmapEventDataBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightTranslationBeatmapEventDataBox(void* ptr) noexcept : ::GlobalNamespace::BeatmapEventDataBox(ptr) {
}


  constexpr LightTranslationBeatmapEventDataBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightTranslationBeatmapEventDataBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightTranslationBeatmapEventDataBox& operator=(LightTranslationBeatmapEventDataBox&& o) noexcept = default;
  constexpr LightTranslationBeatmapEventDataBox& operator=(LightTranslationBeatmapEventDataBox const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData> __declspec(property(get=__get__lightTranslationBaseDataList, put=__set__lightTranslationBaseDataList))  _lightTranslationBaseDataList;

constexpr void __set__lightTranslationBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData> __get__lightTranslationBaseDataList() const;

 ::GlobalNamespace::LightAxis __declspec(property(get=__get__axis, put=__set__axis))  _axis;

constexpr void __set__axis(::GlobalNamespace::LightAxis value) ;

constexpr ::GlobalNamespace::LightAxis __get__axis() const;

 float_t __declspec(property(get=__get__translationDirection, put=__set__translationDirection))  _translationDirection;

constexpr void __set__translationDirection(float_t value) ;

constexpr float_t __get__translationDirection() const;

 float_t __declspec(property(get=__get__beatStep, put=__set__beatStep))  _beatStep;

constexpr void __set__beatStep(float_t value) ;

constexpr float_t __get__beatStep() const;


// Properties

 int32_t __declspec(property(get=get_subtypeIdentifier))  subtypeIdentifier;

 float_t __declspec(property(get=get_beatStep))  beatStep;


// Methods

/// @brief Method get_subtypeIdentifier addr 0x21debf4 size 0x8 virtual true final false
 int32_t get_subtypeIdentifier() ;

/// @brief Method get_beatStep addr 0x21debfc size 0x8 virtual true final false
 float_t get_beatStep() ;

// Ctor Parameters [CppParam { name: "indexFilter", ty: "::GlobalNamespace::IndexFilter", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParamType", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::GlobalNamespace::LightAxis", modifiers: "", def_value: None }, CppParam { name: "flipTranslation", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "gapDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gapDistributionParamType", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "gapDistributionShouldAffectFirstBaseEvent", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "gapDistributionEaseType", ty: "::GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "lightTranslationBaseDataList", ty: "::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData>", modifiers: "", def_value: None }]
explicit LightTranslationBeatmapEventDataBox(::GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, ::GlobalNamespace::LightAxis axis, bool flipTranslation, float_t gapDistributionParam, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType gapDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData> lightTranslationBaseDataList) ;

/// @brief Method .ctor addr 0x21d8a48 size 0x22c virtual false final false
 void _ctor(::GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, ::GlobalNamespace::LightAxis axis, bool flipTranslation, float_t gapDistributionParam, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType gapDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData> lightTranslationBaseDataList) ;

/// @brief Method Unpack addr 0x21dec04 size 0x4e4 virtual true final false
 void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat, ::GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData> output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBeatmapEventDataBox, "", "LightTranslationBeatmapEventDataBox");
