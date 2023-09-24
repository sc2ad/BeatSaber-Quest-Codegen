#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
class LightRotationBaseData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IndexFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBeatmapEventDataBox;
}
// Type: ::LightRotationBeatmapEventDataBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4323))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4338))
// CS Name: LightRotationBeatmapEventDataBox
class CORDL_TYPE LightRotationBeatmapEventDataBox : public GlobalNamespace::BeatmapEventDataBox {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LightRotationBeatmapEventDataBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataBox", modifiers: " const&", def_value: None }]
constexpr LightRotationBeatmapEventDataBox(LightRotationBeatmapEventDataBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataBox", modifiers: "&&", def_value: None }]
constexpr LightRotationBeatmapEventDataBox(LightRotationBeatmapEventDataBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightRotationBeatmapEventDataBox(void* ptr) noexcept : GlobalNamespace::BeatmapEventDataBox(ptr) {
}


  constexpr LightRotationBeatmapEventDataBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightRotationBeatmapEventDataBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightRotationBeatmapEventDataBox& operator=(LightRotationBeatmapEventDataBox&& o) noexcept = default;
  constexpr LightRotationBeatmapEventDataBox& operator=(LightRotationBeatmapEventDataBox const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData> __declspec(property(get=__get__lightRotationBaseDataList, put=__set__lightRotationBaseDataList))  _lightRotationBaseDataList;

constexpr void __set__lightRotationBaseDataList(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData> __get__lightRotationBaseDataList() const;

 GlobalNamespace::LightAxis __declspec(property(get=__get__axis, put=__set__axis))  _axis;

constexpr void __set__axis(GlobalNamespace::LightAxis value) ;

constexpr GlobalNamespace::LightAxis __get__axis() const;

 float_t __declspec(property(get=__get__rotationDirection, put=__set__rotationDirection))  _rotationDirection;

constexpr void __set__rotationDirection(float_t value) ;

constexpr float_t __get__rotationDirection() const;

 float_t __declspec(property(get=__get__rotationStep, put=__set__rotationStep))  _rotationStep;

constexpr void __set__rotationStep(float_t value) ;

constexpr float_t __get__rotationStep() const;

 float_t __declspec(property(get=__get__beatStep, put=__set__beatStep))  _beatStep;

constexpr void __set__beatStep(float_t value) ;

constexpr float_t __get__beatStep() const;


// Properties

 int32_t __declspec(property(get=get_subtypeIdentifier))  subtypeIdentifier;

 float_t __declspec(property(get=get_beatStep))  beatStep;


// Methods

/// @brief Method get_subtypeIdentifier addr 0x21de664 size 0x8 virtual true final false
 int32_t get_subtypeIdentifier() ;

/// @brief Method get_beatStep addr 0x21de66c size 0x8 virtual true final false
 float_t get_beatStep() ;

static GlobalNamespace::LightRotationBeatmapEventDataBox New_ctor(GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, GlobalNamespace::LightAxis axis, bool flipRotation, float_t rotationDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType rotationDistributionEaseType, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData> lightRotationBaseDataList) ;

/// @brief Method .ctor addr 0x21d81c4 size 0x22c virtual false final false
 void _ctor(GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, GlobalNamespace::LightAxis axis, bool flipRotation, float_t rotationDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType rotationDistributionEaseType, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData> lightRotationBaseDataList) ;

/// @brief Method Unpack addr 0x21de674 size 0x580 virtual true final false
 void Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData> output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightRotationBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightRotationBeatmapEventDataBox, "", "LightRotationBeatmapEventDataBox");
