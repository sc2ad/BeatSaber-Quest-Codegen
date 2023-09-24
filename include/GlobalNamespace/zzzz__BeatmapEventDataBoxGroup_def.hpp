#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapEventDataBoxGroup__ElementData;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapEventDataBoxGroup__ElementData;
}
// Type: ::ElementData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4324))
// CS Name: BeatmapEventDataBoxGroup::ElementData
class CORDL_TYPE GlobalNamespace__BeatmapEventDataBoxGroup__ElementData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__BeatmapEventDataBoxGroup__ElementData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapEventDataBoxGroup__ElementData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapEventDataBoxGroup__ElementData(GlobalNamespace__BeatmapEventDataBoxGroup__ElementData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapEventDataBoxGroup__ElementData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapEventDataBoxGroup__ElementData(GlobalNamespace__BeatmapEventDataBoxGroup__ElementData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapEventDataBoxGroup__ElementData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapEventDataBoxGroup__ElementData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapEventDataBoxGroup__ElementData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapEventDataBoxGroup__ElementData& operator=(GlobalNamespace__BeatmapEventDataBoxGroup__ElementData&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapEventDataBoxGroup__ElementData& operator=(GlobalNamespace__BeatmapEventDataBoxGroup__ElementData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_startBeat, put=__set_startBeat))  startBeat;

constexpr void __set_startBeat(float_t value) ;

constexpr float_t __get_startBeat() const;

 int32_t __declspec(property(get=__get_elementId, put=__set_elementId))  elementId;

constexpr void __set_elementId(int32_t value) ;

constexpr int32_t __get_elementId() const;

 int32_t __declspec(property(get=__get_durationOrderIndex, put=__set_durationOrderIndex))  durationOrderIndex;

constexpr void __set_durationOrderIndex(int32_t value) ;

constexpr int32_t __get_durationOrderIndex() const;

 int32_t __declspec(property(get=__get_distributionOrderIndex, put=__set_distributionOrderIndex))  distributionOrderIndex;

constexpr void __set_distributionOrderIndex(int32_t value) ;

constexpr int32_t __get_distributionOrderIndex() const;

 System::Type __declspec(property(get=__get_eventBoxType, put=__set_eventBoxType))  eventBoxType;

constexpr void __set_eventBoxType(System::Type value) ;

constexpr System::Type __get_eventBoxType() const;

 int32_t __declspec(property(get=__get_eventBoxSubtypeIdentifier, put=__set_eventBoxSubtypeIdentifier))  eventBoxSubtypeIdentifier;

constexpr void __set_eventBoxSubtypeIdentifier(int32_t value) ;

constexpr int32_t __get_eventBoxSubtypeIdentifier() const;

 GlobalNamespace::BeatmapEventDataBox __declspec(property(get=__get_eventBox, put=__set_eventBox))  eventBox;

constexpr void __set_eventBox(GlobalNamespace::BeatmapEventDataBox value) ;

constexpr GlobalNamespace::BeatmapEventDataBox __get_eventBox() const;

 GlobalNamespace::BeatmapEventDataBoxGroup __declspec(property(get=__get_boxGroup, put=__set_boxGroup))  boxGroup;

constexpr void __set_boxGroup(GlobalNamespace::BeatmapEventDataBoxGroup value) ;

constexpr GlobalNamespace::BeatmapEventDataBoxGroup __get_boxGroup() const;

 GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData __get__next() const;

 GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData __declspec(property(get=__get__previous, put=__set__previous))  _previous;

constexpr void __set__previous(GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData __get__previous() const;


// Properties

 GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData __declspec(property(get=get_next))  next;

 GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData __declspec(property(get=get_previous))  previous;


// Methods

/// @brief Method get_next addr 0x21db6a4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData get_next() ;

/// @brief Method get_previous addr 0x21db6ac size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData get_previous() ;

static GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData New_ctor(GlobalNamespace::BeatmapEventDataBoxGroup boxGroup, GlobalNamespace::BeatmapEventDataBox eventBox, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t startBeat) ;

/// @brief Method .ctor addr 0x21db0e8 size 0x8c virtual false final false
 void _ctor(GlobalNamespace::BeatmapEventDataBoxGroup boxGroup, GlobalNamespace::BeatmapEventDataBox eventBox, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t startBeat) ;

/// @brief Method ResetConnections addr 0x21db6b4 size 0x8 virtual false final false
 void ResetConnections() ;

/// @brief Method ConnectWithPrevious addr 0x21db6bc size 0x10 virtual false final false
 void ConnectWithPrevious(GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData prevElementData) ;

/// @brief Method ConnectWithNext addr 0x21db6cc size 0x10 virtual false final false
 void ConnectWithNext(GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData nextElementData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapEventDataBoxGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4325))
// CS Name: BeatmapEventDataBoxGroup
class CORDL_TYPE BeatmapEventDataBoxGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ElementData = GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData;

/// @brief Convert operator to System::IComparable_1<GlobalNamespace::BeatmapEventDataBoxGroup>
constexpr operator  System::IComparable_1<GlobalNamespace::BeatmapEventDataBoxGroup>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapEventDataBoxGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroup", modifiers: " const&", def_value: None }]
constexpr BeatmapEventDataBoxGroup(BeatmapEventDataBoxGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroup", modifiers: "&&", def_value: None }]
constexpr BeatmapEventDataBoxGroup(BeatmapEventDataBoxGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventDataBoxGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEventDataBoxGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroup& operator=(BeatmapEventDataBoxGroup&& o) noexcept = default;
  constexpr BeatmapEventDataBoxGroup& operator=(BeatmapEventDataBoxGroup const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_beat, put=__set_beat))  beat;

constexpr void __set_beat(float_t value) ;

constexpr float_t __get_beat() const;

 System::Collections::Generic::Dictionary_2<System::ValueTuple_3<int32_t,System::Type,int32_t>,GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData> __declspec(property(get=__get__elementDataDict, put=__set__elementDataDict))  _elementDataDict;

constexpr void __set__elementDataDict(System::Collections::Generic::Dictionary_2<System::ValueTuple_3<int32_t,System::Type,int32_t>,GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::ValueTuple_3<int32_t,System::Type,int32_t>,GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData> __get__elementDataDict() const;

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData> __declspec(property(get=__get__unpackedBeatmapEventData, put=__set__unpackedBeatmapEventData))  _unpackedBeatmapEventData;

constexpr void __set__unpackedBeatmapEventData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData> __get__unpackedBeatmapEventData() const;

 System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBox> __declspec(property(get=__get__beatmapEventDataBoxList, put=__set__beatmapEventDataBoxList))  _beatmapEventDataBoxList;

constexpr void __set__beatmapEventDataBoxList(System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBox> value) ;

constexpr System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBox> __get__beatmapEventDataBoxList() const;


// Properties

 System::Collections::Generic::IReadOnlyDictionary_2<System::ValueTuple_3<int32_t,System::Type,int32_t>,GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData> __declspec(property(get=get_elementDataDict))  elementDataDict;


// Methods

/// @brief Method get_elementDataDict addr 0x21da8ec size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyDictionary_2<System::ValueTuple_3<int32_t,System::Type,int32_t>,GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData> get_elementDataDict() ;

static GlobalNamespace::BeatmapEventDataBoxGroup New_ctor(float_t beat, System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBox> beatmapEventDataBoxList) ;

/// @brief Method .ctor addr 0x21da8f4 size 0x78c virtual false final false
 void _ctor(float_t beat, System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBox> beatmapEventDataBoxList) ;

/// @brief Method GetCopyWithNewBeat addr 0x21db174 size 0x74 virtual false final false
 GlobalNamespace::BeatmapEventDataBoxGroup GetCopyWithNewBeat(float_t newBeat) ;

/// @brief Method RemoveBeatmapEventDataFromBeatmapData addr 0x21db1e8 size 0x194 virtual false final false
 void RemoveBeatmapEventDataFromBeatmapData(GlobalNamespace::BeatmapData beatmapData) ;

/// @brief Method SyncWithBeatmapData addr 0x21db37c size 0x2f8 virtual false final false
 void SyncWithBeatmapData(int32_t groupId, GlobalNamespace::BeatmapData beatmapData, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor) ;

/// @brief Method CompareTo addr 0x21db674 size 0x30 virtual true final true
 int32_t CompareTo(GlobalNamespace::BeatmapEventDataBoxGroup b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEventDataBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventDataBoxGroup, "", "BeatmapEventDataBoxGroup");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroup__ElementData, "", "BeatmapEventDataBoxGroup/ElementData");
