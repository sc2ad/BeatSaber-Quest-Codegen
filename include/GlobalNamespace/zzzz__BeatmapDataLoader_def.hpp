#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_3_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_4_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__WaypointData_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace BeatmapSaveDataVersion3 {
struct ____BeatmapSaveDataVersion3__BeatmapSaveData__EaseType;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class BeatmapDataBasicInfo;
}
namespace BeatmapSaveDataVersion3 {
struct ____BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType;
}
namespace GlobalNamespace {
struct BeatmapEventTransitionType;
}
namespace BeatmapSaveDataVersion3 {
struct ____BeatmapSaveDataVersion3__BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion3 {
struct ____BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace GlobalNamespace {
class EnvironmentKeywords;
}
namespace GlobalNamespace {
class EnvironmentLightGroups;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace BeatmapSaveDataVersion3 {
struct ____BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__SliderData__Type;
}
namespace GlobalNamespace {
struct ______BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
namespace BeatmapSaveDataVersion3 {
struct ____BeatmapSaveDataVersion3__BeatmapSaveData__Axis;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
struct ______BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData;
}
namespace GlobalNamespace {
class BPMChangeBeatmapEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
template<typename T,typename TParam>
class DataConvertor_2;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
class LightColorBaseData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox;
}
namespace GlobalNamespace {
class LightColorBeatmapEventDataBox;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData;
}
namespace GlobalNamespace {
class LightRotationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox;
}
namespace GlobalNamespace {
class LightRotationBeatmapEventDataBox;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData;
}
namespace GlobalNamespace {
class LightTranslationBaseData;
}
namespace GlobalNamespace {
class LightTranslationBeatmapEventDataBox;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace BeatmapSaveDataVersion3 {
struct ____BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__SliderData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class WaypointData;
}
namespace BeatmapSaveDataVersion3 {
class ____BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase,typename TIn,typename TOut>
class ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TIn,::cordl_internals::il2cpp_reference_type TOut>
class ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase,TIn,TOut>;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__SliderConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor;
}
namespace GlobalNamespace {
struct ______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData;
}
// Type: ::BpmChangeData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4289))
// CS Name: BeatmapDataLoader::BpmTimeProcessor::BpmChangeData
struct CORDL_TYPE ______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bpmChangeStartTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bpmChangeStartBpmTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }]
constexpr ______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm) noexcept;


                    constexpr ______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData(______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData const&) = default;
                    constexpr ______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData(______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData&&) = default;
                    constexpr ______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData& operator=(______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData& operator=(______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_bpmChangeStartTime, put=__set_bpmChangeStartTime))  bpmChangeStartTime;

constexpr void __set_bpmChangeStartTime(float_t value) ;

constexpr float_t __get_bpmChangeStartTime() const;

 float_t __declspec(property(get=__get_bpmChangeStartBpmTime, put=__set_bpmChangeStartBpmTime))  bpmChangeStartBpmTime;

constexpr void __set_bpmChangeStartBpmTime(float_t value) ;

constexpr float_t __get_bpmChangeStartBpmTime() const;

 float_t __declspec(property(get=__get_bpm, put=__set_bpm))  bpm;

constexpr void __set_bpm(float_t value) ;

constexpr float_t __get_bpm() const;


// Methods

/// @brief Method .ctor addr 0x21ce01c size 0xc virtual false final false
 void _ctor(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BpmTimeProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4290))
// CS Name: BeatmapDataLoader::BpmTimeProcessor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BpmChangeData = ::GlobalNamespace::______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData;

/// @brief Convert operator to ::GlobalNamespace::IBeatToTimeConvertor
constexpr operator  ::GlobalNamespace::IBeatToTimeConvertor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor(____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor(____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor& operator=(____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor& operator=(____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData> __declspec(property(get=__get__bpmChangeDataList, put=__set__bpmChangeDataList))  _bpmChangeDataList;

constexpr void __set__bpmChangeDataList(::System::Collections::Generic::List_1<::GlobalNamespace::______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData> __get__bpmChangeDataList() const;

 int32_t __declspec(property(get=__get_currentBpmChangesDataIdx, put=__set_currentBpmChangesDataIdx))  currentBpmChangesDataIdx;

constexpr void __set_currentBpmChangesDataIdx(int32_t value) ;

constexpr int32_t __get_currentBpmChangesDataIdx() const;


// Methods

// Ctor Parameters [CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bpmEventsSaveData", ty: "::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData>", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor(float_t startBpm, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData> bpmEventsSaveData) ;

/// @brief Method .ctor addr 0x21cd464 size 0x2b4 virtual false final false
 void _ctor(float_t startBpm, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData> bpmEventsSaveData) ;

/// @brief Method ConvertBeatToTime addr 0x21ce028 size 0x108 virtual true final true
 float_t ConvertBeatToTime(float_t beat) ;

/// @brief Method Reset addr 0x21cd7c8 size 0x8 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataItemConvertor`3
// Type: ::BasicEventConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4292)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 907 }), TypeDefinitionIndex(TypeDefinitionIndex(14906)), TypeDefinitionIndex(TypeDefinitionIndex(14912)), TypeDefinitionIndex(TypeDefinitionIndex(14964))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4291))
// CS Name: BeatmapDataLoader::BasicEventConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData,::GlobalNamespace::BasicBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor(____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor(____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData,::GlobalNamespace::BasicBeatmapEventData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter __declspec(property(get=__get__specialEventsFilter, put=__set__specialEventsFilter))  _specialEventsFilter;

constexpr void __set__specialEventsFilter(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter __get__specialEventsFilter() const;


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }, CppParam { name: "specialEventsFilter", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor, ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter specialEventsFilter) ;

/// @brief Method .ctor addr 0x21cd828 size 0x64 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor, ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter specialEventsFilter) ;

/// @brief Method Convert addr 0x21ce130 size 0xd4 virtual true final false
 ::GlobalNamespace::BasicBeatmapEventData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData basicEventSaveData) ;

/// @brief Method ConvertFromBeatmapSaveDataBeatmapEventType addr 0x21ce204 size 0x4 virtual false final false
static ::GlobalNamespace::BasicBeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType beatmapEventType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BombNoteConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14932)), TypeDefinitionIndex(TypeDefinitionIndex(14940)), TypeDefinitionIndex(TypeDefinitionIndex(4292)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 911 }), TypeDefinitionIndex(TypeDefinitionIndex(14995))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4293))
// CS Name: BeatmapDataLoader::BombNoteConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData,::GlobalNamespace::NoteData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor(____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor(____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData,::GlobalNamespace::NoteData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x21cd770 size 0x58 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method Convert addr 0x21ce208 size 0x74 virtual true final false
 ::GlobalNamespace::NoteData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData bombNoteSaveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BpmEventConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4292)), TypeDefinitionIndex(TypeDefinitionIndex(14912)), TypeDefinitionIndex(TypeDefinitionIndex(14966)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 908 }), TypeDefinitionIndex(TypeDefinitionIndex(14914))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4294))
// CS Name: BeatmapDataLoader::BpmEventConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData,::GlobalNamespace::BPMChangeBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor(____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor(____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData,::GlobalNamespace::BPMChangeBeatmapEventData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x21cd7d0 size 0x58 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method Convert addr 0x21ce27c size 0xa4 virtual true final false
 ::GlobalNamespace::BPMChangeBeatmapEventData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData bpmChangeEventSaveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ColorBoostEventConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912)), TypeDefinitionIndex(TypeDefinitionIndex(14965)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 909 }), TypeDefinitionIndex(TypeDefinitionIndex(4292)), TypeDefinitionIndex(TypeDefinitionIndex(14915))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4295))
// CS Name: BeatmapDataLoader::ColorBoostEventConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData,::GlobalNamespace::ColorBoostBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor(____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor(____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData,::GlobalNamespace::ColorBoostBeatmapEventData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x21cd88c size 0x58 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method Convert addr 0x21ce320 size 0xa8 virtual true final false
 ::GlobalNamespace::ColorBoostBeatmapEventData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData colorBoostEventSaveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ColorNoteConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14932)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 913 }), TypeDefinitionIndex(TypeDefinitionIndex(14994)), TypeDefinitionIndex(TypeDefinitionIndex(14940)), TypeDefinitionIndex(TypeDefinitionIndex(4292))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4296))
// CS Name: BeatmapDataLoader::ColorNoteConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData,::GlobalNamespace::NoteData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor(____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor(____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData,::GlobalNamespace::NoteData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x21cd718 size 0x58 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method Convert addr 0x21ce3c8 size 0xa8 virtual true final false
 ::GlobalNamespace::NoteData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData colorNoteSaveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapEventDataBoxDistributionParamTypeConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4297))
// CS Name: BeatmapDataLoader::BeatmapEventDataBoxDistributionParamTypeConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor(____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor(____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x21ce470 size 0x8c virtual false final false
static ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType Convert(::GlobalNamespace::______BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType distributionParamType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EventBoxGroupConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4298))
// CS Name: BeatmapDataLoader::EventBoxGroupConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor(____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor(____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox,::GlobalNamespace::LightGroupSO> __declspec(property(get=__get__dataConvertor, put=__set__dataConvertor))  _dataConvertor;

constexpr void __set__dataConvertor(::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox,::GlobalNamespace::LightGroupSO> value) ;

constexpr ::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox,::GlobalNamespace::LightGroupSO> __get__dataConvertor() const;

 ::GlobalNamespace::EnvironmentLightGroups __declspec(property(get=__get__lightGroups, put=__set__lightGroups))  _lightGroups;

constexpr void __set__lightGroups(::GlobalNamespace::EnvironmentLightGroups value) ;

constexpr ::GlobalNamespace::EnvironmentLightGroups __get__lightGroups() const;


// Methods

// Ctor Parameters [CppParam { name: "lightGroups", ty: "::GlobalNamespace::EnvironmentLightGroups", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor(::GlobalNamespace::EnvironmentLightGroups lightGroups) ;

/// @brief Method .ctor addr 0x21cd8e4 size 0x164 virtual false final false
 void _ctor(::GlobalNamespace::EnvironmentLightGroups lightGroups) ;

/// @brief Method Convert addr 0x21cda48 size 0x528 virtual false final false
 ::GlobalNamespace::BeatmapEventDataBoxGroup Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup eventBoxGroupSaveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IndexFilterConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4299))
// CS Name: BeatmapDataLoader::IndexFilterConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor(____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor(____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x21ce4fc size 0x38c virtual false final false
static ::GlobalNamespace::IndexFilter Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, int32_t groupSize) ;

/// @brief Method IsIndexFilterValid addr 0x21ce888 size 0x1088 virtual false final false
static bool IsIndexFilterValid(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, int32_t groupSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightColorEventBoxConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4336)), TypeDefinitionIndex(TypeDefinitionIndex(14671)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4319), inst: 1120 }), TypeDefinitionIndex(TypeDefinitionIndex(14981)), TypeDefinitionIndex(TypeDefinitionIndex(4319)), TypeDefinitionIndex(TypeDefinitionIndex(4323))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4300))
// CS Name: BeatmapDataLoader::LightColorEventBoxConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor : public ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox,::GlobalNamespace::LightColorBeatmapEventDataBox,::GlobalNamespace::LightGroupSO> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor(____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor(____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor(void* ptr) noexcept : ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox,::GlobalNamespace::LightColorBeatmapEventDataBox,::GlobalNamespace::LightGroupSO>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x21d75d4 size 0x2d4 virtual true final false
 ::GlobalNamespace::LightColorBeatmapEventDataBox Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox saveData, ::GlobalNamespace::LightGroupSO lightGroupData) ;

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor() ;

/// @brief Method .ctor addr 0x21d7b4c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightColoBaseDataConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4301))
// CS Name: BeatmapDataLoader::LightColoBaseDataConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor(____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor(____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x21d78a8 size 0xa4 virtual false final false
static ::GlobalNamespace::LightColorBaseData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData saveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightRotationEventBoxConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14983)), TypeDefinitionIndex(TypeDefinitionIndex(4338)), TypeDefinitionIndex(TypeDefinitionIndex(4319)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4319), inst: 1121 }), TypeDefinitionIndex(TypeDefinitionIndex(14671)), TypeDefinitionIndex(TypeDefinitionIndex(4323))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4302))
// CS Name: BeatmapDataLoader::LightRotationEventBoxConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor : public ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox,::GlobalNamespace::LightRotationBeatmapEventDataBox,::GlobalNamespace::LightGroupSO> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor(____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor(____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor(void* ptr) noexcept : ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox,::GlobalNamespace::LightRotationBeatmapEventDataBox,::GlobalNamespace::LightGroupSO>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x21d7be8 size 0x508 virtual true final false
 ::GlobalNamespace::LightRotationBeatmapEventDataBox Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox saveData, ::GlobalNamespace::LightGroupSO lightGroupData) ;

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor() ;

/// @brief Method .ctor addr 0x21d83f0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightRotationBaseDataConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4303))
// CS Name: BeatmapDataLoader::LightRotationBaseDataConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor(____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor(____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x21d80f0 size 0xd4 virtual false final false
static ::GlobalNamespace::LightRotationBaseData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData saveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightTranslationEventBoxConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4323)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4319), inst: 1122 }), TypeDefinitionIndex(TypeDefinitionIndex(4319)), TypeDefinitionIndex(TypeDefinitionIndex(14986)), TypeDefinitionIndex(TypeDefinitionIndex(4340)), TypeDefinitionIndex(TypeDefinitionIndex(14671))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4304))
// CS Name: BeatmapDataLoader::LightTranslationEventBoxConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor : public ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox,::GlobalNamespace::LightTranslationBeatmapEventDataBox,::GlobalNamespace::LightGroupSO> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor(____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor(____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor(void* ptr) noexcept : ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox,::GlobalNamespace::LightTranslationBeatmapEventDataBox,::GlobalNamespace::LightGroupSO>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x21d8494 size 0x508 virtual true final false
 ::GlobalNamespace::LightTranslationBeatmapEventDataBox Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox saveData, ::GlobalNamespace::LightGroupSO lightGroupData) ;

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor() ;

/// @brief Method .ctor addr 0x21d8c74 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightTranslationBaseDataConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4305))
// CS Name: BeatmapDataLoader::LightTranslationBaseDataConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor(____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor(____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x21d899c size 0xac virtual false final false
static ::GlobalNamespace::LightTranslationBaseData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData saveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObstacleConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4292)), TypeDefinitionIndex(TypeDefinitionIndex(14942)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 914 }), TypeDefinitionIndex(TypeDefinitionIndex(14932)), TypeDefinitionIndex(TypeDefinitionIndex(15001))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4306))
// CS Name: BeatmapDataLoader::ObstacleConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData,::GlobalNamespace::ObstacleData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor(____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor(____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData,::GlobalNamespace::ObstacleData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x21d8d04 size 0x58 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method Convert addr 0x21d8d5c size 0xec virtual true final false
 ::GlobalNamespace::ObstacleData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData obstacleSaveData) ;

/// @brief Method GetNoteLineLayer addr 0x21d8e48 size 0x14 virtual false final false
static ::GlobalNamespace::NoteLineLayer GetNoteLineLayer(int32_t lineLayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RotationEventConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14922)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 910 }), TypeDefinitionIndex(TypeDefinitionIndex(4292)), TypeDefinitionIndex(TypeDefinitionIndex(14968)), TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4307))
// CS Name: BeatmapDataLoader::RotationEventConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData,::GlobalNamespace::SpawnRotationBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor(____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor(____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData,::GlobalNamespace::SpawnRotationBeatmapEventData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x21d8e5c size 0x58 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method Convert addr 0x21d8eb4 size 0xb4 virtual true final false
 ::GlobalNamespace::SpawnRotationBeatmapEventData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData rotationEventSaveData) ;

/// @brief Method SpawnRotationEventType addr 0x21d8f68 size 0x10 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType SpawnRotationEventType(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime executionTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SliderConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4292)), TypeDefinitionIndex(TypeDefinitionIndex(14946)), TypeDefinitionIndex(TypeDefinitionIndex(14932)), TypeDefinitionIndex(TypeDefinitionIndex(14999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 915 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4308))
// CS Name: BeatmapDataLoader::SliderConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__SliderConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__SliderData,::GlobalNamespace::SliderData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__SliderConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__SliderConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__SliderConvertor(____GlobalNamespace__BeatmapDataLoader__SliderConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__SliderConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__SliderConvertor(____GlobalNamespace__BeatmapDataLoader__SliderConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__SliderConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__SliderData,::GlobalNamespace::SliderData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__SliderConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__SliderConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__SliderConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__SliderConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__SliderConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__SliderConvertor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__SliderConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x21d8f78 size 0x58 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method Convert addr 0x21d8fd0 size 0x144 virtual true final false
 ::GlobalNamespace::SliderData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__SliderData sliderSaveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BurstSliderConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4292)), TypeDefinitionIndex(TypeDefinitionIndex(14932)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 912 }), TypeDefinitionIndex(TypeDefinitionIndex(15000)), TypeDefinitionIndex(TypeDefinitionIndex(14946))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4309))
// CS Name: BeatmapDataLoader::BurstSliderConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData,::GlobalNamespace::SliderData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor(____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor(____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData,::GlobalNamespace::SliderData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x21d9114 size 0x58 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method Convert addr 0x21d916c size 0x130 virtual true final false
 ::GlobalNamespace::SliderData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData sliderSaveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::WaypointConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 916 }), TypeDefinitionIndex(TypeDefinitionIndex(14949)), TypeDefinitionIndex(TypeDefinitionIndex(4292)), TypeDefinitionIndex(TypeDefinitionIndex(14996)), TypeDefinitionIndex(TypeDefinitionIndex(14932))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4310))
// CS Name: BeatmapDataLoader::WaypointConvertor
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor : public ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData,::GlobalNamespace::WaypointData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__WaypointConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__WaypointConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor(____GlobalNamespace__BeatmapDataLoader__WaypointConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__WaypointConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor(____GlobalNamespace__BeatmapDataLoader__WaypointConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData,::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData,::GlobalNamespace::WaypointData>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__WaypointConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor& operator=(____GlobalNamespace__BeatmapDataLoader__WaypointConvertor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__WaypointConvertor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x21d929c size 0x58 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method Convert addr 0x21d92f4 size 0xc8 virtual true final false
 ::GlobalNamespace::WaypointData Convert(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData waypointSaveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpecialEventsFilter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4311))
// CS Name: BeatmapDataLoader::SpecialEventsFilter
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter(____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter(____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter& operator=(____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter& operator=(____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> __declspec(property(get=__get__eventTypesToFilter, put=__set__eventTypesToFilter))  _eventTypesToFilter;

constexpr void __set__eventTypesToFilter(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> __get__eventTypesToFilter() const;


// Methods

// Ctor Parameters [CppParam { name: "basicEventTypesWithKeywords", ty: "::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords", modifiers: "", def_value: None }, CppParam { name: "environmentKeywords", ty: "::GlobalNamespace::EnvironmentKeywords", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords environmentKeywords) ;

/// @brief Method .ctor addr 0x21d93bc size 0x2dc virtual false final false
 void _ctor(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords environmentKeywords) ;

/// @brief Method IsEventValid addr 0x21d9698 size 0x64 virtual false final false
 bool IsEventValid(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType basicBeatmapEventType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4312))
// CS Name: BeatmapDataLoader
class CORDL_TYPE BeatmapDataLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SpecialEventsFilter = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter;

using WaypointConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__WaypointConvertor;

using BurstSliderConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor;

using SliderConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SliderConvertor;

using RotationEventConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor;

using ObstacleConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor;

using LightTranslationBaseDataConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor;

using LightTranslationEventBoxConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor;

using LightRotationBaseDataConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor;

using LightRotationEventBoxConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor;

using LightColoBaseDataConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor;

using LightColorEventBoxConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor;

using IndexFilterConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor;

using EventBoxGroupConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor;

using BeatmapEventDataBoxDistributionParamTypeConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor;

using ColorNoteConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor;

using ColorBoostEventConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor;

using BpmEventConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor;

using BombNoteConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor;

template<typename TBase,typename TIn,typename TOut>
using BeatmapDataItemConvertor_3 = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>;

using BasicEventConvertor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor;

using BpmTimeProcessor = ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: " const&", def_value: None }]
constexpr BeatmapDataLoader(BeatmapDataLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "&&", def_value: None }]
constexpr BeatmapDataLoader(BeatmapDataLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataLoader& operator=(BeatmapDataLoader&& o) noexcept = default;
  constexpr BeatmapDataLoader& operator=(BeatmapDataLoader const& o) noexcept = default;
                


// Fields

/// @brief Field kDefaultNumberOfLines offset 0
static constexpr int32_t  kDefaultNumberOfLines{4};


// Methods

/// @brief Method GetBeatmapDataFromBeatmapSaveData addr 0x21cc274 size 0x11f0 virtual false final false
static ::GlobalNamespace::BeatmapData GetBeatmapDataFromBeatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData beatmapSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentKeywords environmentKeywords, ::GlobalNamespace::EnvironmentLightGroups environmentLightGroups, ::GlobalNamespace::DefaultEnvironmentEvents defaultEnvironmentEvents, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

/// @brief Method GetBeatmapDataBasicInfoFromSaveData addr 0x21cb030 size 0x2b4 virtual false final false
static ::GlobalNamespace::BeatmapDataBasicInfo GetBeatmapDataBasicInfoFromSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData beatmapSaveData) ;

/// @brief Method GetBeatmapDataFromSaveData addr 0x21cb6d0 size 0x1ac virtual false final false
static ::GlobalNamespace::BeatmapData GetBeatmapDataFromSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData beatmapSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

/// @brief Method ConvertColorType addr 0x21cdf70 size 0x10 virtual false final false
static ::GlobalNamespace::ColorType ConvertColorType(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType noteType) ;

/// @brief Method ConvertColorType addr 0x21cdf80 size 0x14 virtual false final false
static ::GlobalNamespace::EnvironmentColorType ConvertColorType(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType environmentColorType) ;

/// @brief Method ConvertBeatmapEventTransitionType addr 0x21cdf94 size 0x14 virtual false final false
static ::GlobalNamespace::BeatmapEventTransitionType ConvertBeatmapEventTransitionType(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType transitionType) ;

/// @brief Method ConvertAxis addr 0x21cdfa8 size 0x14 virtual false final false
static ::GlobalNamespace::LightAxis ConvertAxis(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__Axis axis) ;

/// @brief Method ConvertEaseType addr 0x21cdfbc size 0x20 virtual false final false
static ::GlobalNamespace::EaseType ConvertEaseType(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__EaseType easeType) ;

/// @brief Method ConvertNoteLineLayer addr 0x21cdfdc size 0x14 virtual false final false
static ::GlobalNamespace::NoteLineLayer ConvertNoteLineLayer(int32_t layer) ;

/// @brief Method ConvertSliderType addr 0x21cdff0 size 0x10 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__SliderData__Type ConvertSliderType(::BeatmapSaveDataVersion3::____BeatmapSaveDataVersion3__BeatmapSaveData__SliderType sliderType) ;

/// @brief Method ConvertRotationOrientation addr 0x21ce000 size 0x14 virtual false final false
static ::GlobalNamespace::LightRotationDirection ConvertRotationOrientation(::GlobalNamespace::______BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection) ;

// Ctor Parameters []
explicit BeatmapDataLoader() ;

/// @brief Method .ctor addr 0x21ce014 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataItemConvertor`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TIn,::cordl_internals::il2cpp_reference_type TOut>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4315), inst: 1119 }), TypeDefinitionIndex(TypeDefinitionIndex(4292)), TypeDefinitionIndex(TypeDefinitionIndex(4315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 5155 })
// CS Name: BeatmapDataLoader::BeatmapDataItemConvertor`3
class CORDL_TYPE ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase,TIn,TOut> : public ::GlobalNamespace::DataItemConvertor_3<TBase,TIn,TOut> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3(____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3(____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3(void* ptr) noexcept : ::GlobalNamespace::DataItemConvertor_3<TBase,TIn,TOut>(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3& operator=(____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3& operator=(____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor __declspec(property(get=__get__bpmTimeProcessor, put=__set__bpmTimeProcessor))  _bpmTimeProcessor;

constexpr void __set__bpmTimeProcessor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor __get__bpmTimeProcessor() const;


// Methods

// Ctor Parameters [CppParam { name: "bpmTimeProcessor", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor bpmTimeProcessor) ;

/// @brief Method BeatToTime addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t BeatToTime(float_t beat) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapDataItemConvertor_3, "", "BeatmapDataLoader/BeatmapDataItemConvertor`3");
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader, "", "BeatmapDataLoader");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BasicEventConvertor, "", "BeatmapDataLoader/BasicEventConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor, "", "BeatmapDataLoader/BeatmapEventDataBoxDistributionParamTypeConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BombNoteConvertor, "", "BeatmapDataLoader/BombNoteConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmEventConvertor, "", "BeatmapDataLoader/BpmEventConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor, "", "BeatmapDataLoader/BpmTimeProcessor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__BurstSliderConvertor, "", "BeatmapDataLoader/BurstSliderConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__ColorBoostEventConvertor, "", "BeatmapDataLoader/ColorBoostEventConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__ColorNoteConvertor, "", "BeatmapDataLoader/ColorNoteConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__EventBoxGroupConvertor, "", "BeatmapDataLoader/EventBoxGroupConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__IndexFilterConvertor, "", "BeatmapDataLoader/IndexFilterConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightColoBaseDataConvertor, "", "BeatmapDataLoader/LightColoBaseDataConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightColorEventBoxConvertor, "", "BeatmapDataLoader/LightColorEventBoxConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightRotationBaseDataConvertor, "", "BeatmapDataLoader/LightRotationBaseDataConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightRotationEventBoxConvertor, "", "BeatmapDataLoader/LightRotationEventBoxConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightTranslationBaseDataConvertor, "", "BeatmapDataLoader/LightTranslationBaseDataConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__LightTranslationEventBoxConvertor, "", "BeatmapDataLoader/LightTranslationEventBoxConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__ObstacleConvertor, "", "BeatmapDataLoader/ObstacleConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__RotationEventConvertor, "", "BeatmapDataLoader/RotationEventConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SliderConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SliderConvertor, "", "BeatmapDataLoader/SliderConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__SpecialEventsFilter, "", "BeatmapDataLoader/SpecialEventsFilter");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__WaypointConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataLoader__WaypointConvertor, "", "BeatmapDataLoader/WaypointConvertor");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______GlobalNamespace__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData, "", "BeatmapDataLoader/BpmTimeProcessor/BpmChangeData");
