#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class LightColorBaseData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBeatmapEventDataBox;
}
// Type: ::LightColorBeatmapEventDataBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4323))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4336))
// CS Name: LightColorBeatmapEventDataBox
class CORDL_TYPE LightColorBeatmapEventDataBox : public GlobalNamespace::BeatmapEventDataBox {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LightColorBeatmapEventDataBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataBox", modifiers: " const&", def_value: None }]
constexpr LightColorBeatmapEventDataBox(LightColorBeatmapEventDataBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataBox", modifiers: "&&", def_value: None }]
constexpr LightColorBeatmapEventDataBox(LightColorBeatmapEventDataBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightColorBeatmapEventDataBox(void* ptr) noexcept : GlobalNamespace::BeatmapEventDataBox(ptr) {
}


  constexpr LightColorBeatmapEventDataBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightColorBeatmapEventDataBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightColorBeatmapEventDataBox& operator=(LightColorBeatmapEventDataBox&& o) noexcept = default;
  constexpr LightColorBeatmapEventDataBox& operator=(LightColorBeatmapEventDataBox const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightColorBaseData> __declspec(property(get=__get__lightColorBaseDataList, put=__set__lightColorBaseDataList))  _lightColorBaseDataList;

constexpr void __set__lightColorBaseDataList(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightColorBaseData> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightColorBaseData> __get__lightColorBaseDataList() const;

 float_t __declspec(property(get=__get__brightnessStep, put=__set__brightnessStep))  _brightnessStep;

constexpr void __set__brightnessStep(float_t value) ;

constexpr float_t __get__brightnessStep() const;

 float_t __declspec(property(get=__get__beatStep, put=__set__beatStep))  _beatStep;

constexpr void __set__beatStep(float_t value) ;

constexpr float_t __get__beatStep() const;

 bool __declspec(property(get=__get__brightnessDistributionShouldAffectFirstBaseEvent, put=__set__brightnessDistributionShouldAffectFirstBaseEvent))  _brightnessDistributionShouldAffectFirstBaseEvent;

constexpr void __set__brightnessDistributionShouldAffectFirstBaseEvent(bool value) ;

constexpr bool __get__brightnessDistributionShouldAffectFirstBaseEvent() const;


// Properties

 int32_t __declspec(property(get=get_subtypeIdentifier))  subtypeIdentifier;

 float_t __declspec(property(get=get_beatStep))  beatStep;


// Methods

/// @brief Method get_subtypeIdentifier addr 0x21de180 size 0x8 virtual true final false
 int32_t get_subtypeIdentifier() ;

/// @brief Method get_beatStep addr 0x21de188 size 0x8 virtual true final false
 float_t get_beatStep() ;

// Ctor Parameters [CppParam { name: "indexFilter", ty: "GlobalNamespace::IndexFilter", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParamType", ty: "GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionParamType", ty: "GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionShouldAffectFirstBaseEvent", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionEaseType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "lightColorBaseDataList", ty: "System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightColorBaseData>", modifiers: "", def_value: None }]
explicit LightColorBeatmapEventDataBox(GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType brightnessDistributionParamType, bool brightnessDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType brightnessDistributionEaseType, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightColorBaseData> lightColorBaseDataList) ;

/// @brief Method .ctor addr 0x21d794c size 0x200 virtual false final false
 void _ctor(GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType brightnessDistributionParamType, bool brightnessDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType brightnessDistributionEaseType, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightColorBaseData> lightColorBaseDataList) ;

/// @brief Method Unpack addr 0x21de190 size 0x4d4 virtual true final false
 void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData> output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightColorBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightColorBeatmapEventDataBox, "", "LightColorBeatmapEventDataBox");
