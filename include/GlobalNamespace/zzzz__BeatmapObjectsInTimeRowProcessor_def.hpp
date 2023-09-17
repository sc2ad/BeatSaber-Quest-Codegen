#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class NoteData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class SliderData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0;
}
// Type: ::TimeSliceContainer`1
// Type: ::SliderTailData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14901))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14951))
// CS Name: BeatmapObjectsInTimeRowProcessor::SliderTailData
class CORDL_TYPE ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData : public ::GlobalNamespace::BeatmapDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData(void* ptr) noexcept : ::GlobalNamespace::BeatmapDataItem(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData& operator=(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData& operator=(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::SliderData __declspec(property(get=__get_slider, put=__set_slider))  slider;

constexpr void __set_slider(::GlobalNamespace::SliderData value) ;

constexpr ::GlobalNamespace::SliderData __get_slider() const;


// Methods

// Ctor Parameters [CppParam { name: "slider", ty: "::GlobalNamespace::SliderData", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData(::GlobalNamespace::SliderData slider) ;

/// @brief Method .ctor addr 0xd95f1c size 0x50 virtual false final false
 void _ctor(::GlobalNamespace::SliderData slider) ;

/// @brief Method GetCopy addr 0xd983d0 size 0x4 virtual true final false
 ::GlobalNamespace::BeatmapDataItem GetCopy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass17_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14952))
// CS Name: BeatmapObjectsInTimeRowProcessor::<>c__DisplayClass17_0
class CORDL_TYPE ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0& operator=(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0& operator=(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_currentTimeSliceTime, put=__set_currentTimeSliceTime))  currentTimeSliceTime;

constexpr void __set_currentTimeSliceTime(float_t value) ;

constexpr float_t __get_currentTimeSliceTime() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0() ;

/// @brief Method .ctor addr 0xd9802c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1 addr 0xd983d4 size 0x80 virtual false final false
 bool _HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1(::GlobalNamespace::SliderData tail) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14953))
// CS Name: BeatmapObjectsInTimeRowProcessor::<>c
class CORDL_TYPE ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c& operator=(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c& operator=(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c value) ;

static ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::BeatmapDataItem,bool> __declspec(property(get=__get___9__17_0, put=__set___9__17_0))  __9__17_0;

static void __set___9__17_0(::System::Func_2<::GlobalNamespace::BeatmapDataItem,bool> value) ;

static ::System::Func_2<::GlobalNamespace::BeatmapDataItem,bool> __get___9__17_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c() ;

/// @brief Method .ctor addr 0xd984b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0 addr 0xd984c0 size 0xb8 virtual false final false
 bool _HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0(::GlobalNamespace::BeatmapDataItem item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapObjectsInTimeRowProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14954))
// CS Name: BeatmapObjectsInTimeRowProcessor
class CORDL_TYPE BeatmapObjectsInTimeRowProcessor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c;

using __c__DisplayClass17_0 = ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0;

using SliderTailData = ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData;

template<typename T>
using TimeSliceContainer_1 = ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BeatmapObjectsInTimeRowProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectsInTimeRowProcessor(BeatmapObjectsInTimeRowProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectsInTimeRowProcessor(BeatmapObjectsInTimeRowProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectsInTimeRowProcessor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapObjectsInTimeRowProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectsInTimeRowProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectsInTimeRowProcessor& operator=(BeatmapObjectsInTimeRowProcessor&& o) noexcept = default;
  constexpr BeatmapObjectsInTimeRowProcessor& operator=(BeatmapObjectsInTimeRowProcessor const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData> __declspec(property(get=__get__currentTimeSliceColorNotes, put=__set__currentTimeSliceColorNotes))  _currentTimeSliceColorNotes;

constexpr void __set__currentTimeSliceColorNotes(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData> __get__currentTimeSliceColorNotes() const;

 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem> __declspec(property(get=__get__currentTimeSliceAllNotesAndSliders, put=__set__currentTimeSliceAllNotesAndSliders))  _currentTimeSliceAllNotesAndSliders;

constexpr void __set__currentTimeSliceAllNotesAndSliders(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem> __get__currentTimeSliceAllNotesAndSliders() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType,::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData>> __declspec(property(get=__get__currentTimeSliceNotesByColorType, put=__set__currentTimeSliceNotesByColorType))  _currentTimeSliceNotesByColorType;

constexpr void __set__currentTimeSliceNotesByColorType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType,::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData>> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType,::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData>> __get__currentTimeSliceNotesByColorType() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData> __declspec(property(get=__get__unprocessedSliderTails, put=__set__unprocessedSliderTails))  _unprocessedSliderTails;

constexpr void __set__unprocessedSliderTails(::System::Collections::Generic::List_1<::GlobalNamespace::SliderData> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData> __get__unprocessedSliderTails() const;

 ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData>> __declspec(property(get=__get__notesInColumnsReusableProcessingListOfLists, put=__set__notesInColumnsReusableProcessingListOfLists))  _notesInColumnsReusableProcessingListOfLists;

constexpr void __set__notesInColumnsReusableProcessingListOfLists(::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData>> __get__notesInColumnsReusableProcessingListOfLists() const;

 int32_t __declspec(property(get=__get__numberOfLines, put=__set__numberOfLines))  _numberOfLines;

constexpr void __set__numberOfLines(int32_t value) ;

constexpr int32_t __get__numberOfLines() const;

/// @brief Field kTimeRowEpsilon offset 0
static constexpr float_t  kTimeRowEpsilon{0.001};

/// @brief Field kMaxNotesAlignmentAngle offset 0
static constexpr float_t  kMaxNotesAlignmentAngle{40};


// Methods

// Ctor Parameters [CppParam { name: "numberOfLines", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeatmapObjectsInTimeRowProcessor(int32_t numberOfLines) ;

/// @brief Method .ctor addr 0xd952f4 size 0x5bc virtual false final false
 void _ctor(int32_t numberOfLines) ;

/// @brief Method ProcessNote addr 0xd958b0 size 0xd4 virtual false final false
 void ProcessNote(::GlobalNamespace::NoteData noteData) ;

/// @brief Method ProcessSlider addr 0xd95984 size 0x184 virtual false final false
 void ProcessSlider(::GlobalNamespace::SliderData sliderData) ;

/// @brief Method ProcessAllRemainingData addr 0xd95b08 size 0x1fc virtual false final false
 void ProcessAllRemainingData() ;

/// @brief Method HandleCurrentTimeSliceColorNotesDidAddItem addr 0xd95d04 size 0x60 virtual false final false
 void HandleCurrentTimeSliceColorNotesDidAddItem(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData> timeSliceContainer, ::GlobalNamespace::NoteData noteData) ;

/// @brief Method HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice addr 0xd95d64 size 0x1b8 virtual false final false
 void HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem> allObjectsTimeSlice) ;

/// @brief Method HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice addr 0xd95f6c size 0x193c virtual false final false
 void HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem> allObjectsTimeSlice, float_t nextTimeSliceTime) ;

/// @brief Method HandleCurrentTimeSliceColorNotesDidFinishTimeSlice addr 0xd9797c size 0x6b0 virtual false final false
 void HandleCurrentTimeSliceColorNotesDidFinishTimeSlice(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData> currentTimeSlice, float_t nextTimeSliceTime) ;

/// @brief Method HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice addr 0xd98034 size 0x350 virtual false final false
 void HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData> timeSliceContainer, float_t nextTimeSliceTime) ;

/// @brief Method SliderHeadPositionOverlapsWithNote addr 0xd978a8 size 0x40 virtual false final false
static bool SliderHeadPositionOverlapsWithNote(::GlobalNamespace::SliderData slider, ::GlobalNamespace::NoteData note) ;

/// @brief Method SliderTailPositionOverlapsWithNote addr 0xd9793c size 0x40 virtual false final false
static bool SliderTailPositionOverlapsWithNote(::GlobalNamespace::SliderData slider, ::GlobalNamespace::NoteData note) ;

/// @brief Method SliderHeadPositionOverlapsWithBurstTail addr 0xd978e8 size 0x54 virtual false final false
static bool SliderHeadPositionOverlapsWithBurstTail(::GlobalNamespace::SliderData slider, ::GlobalNamespace::SliderData sliderTail) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TimeSliceContainer`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14950))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14950), inst: 2 })
// CS Name: BeatmapObjectsInTimeRowProcessor::TimeSliceContainer`1
class CORDL_TYPE ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1& operator=(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1& operator=(____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField))  _time_k__BackingField;

constexpr void __set__time_k__BackingField(float_t value) ;

constexpr float_t __get__time_k__BackingField() const;

 float_t __declspec(property(get=__get__previousTimeSliceTime_k__BackingField, put=__set__previousTimeSliceTime_k__BackingField))  _previousTimeSliceTime_k__BackingField;

constexpr void __set__previousTimeSliceTime_k__BackingField(float_t value) ;

constexpr float_t __get__previousTimeSliceTime_k__BackingField() const;

 ::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,float_t> __declspec(property(get=__get_didFinishTimeSliceEvent, put=__set_didFinishTimeSliceEvent))  didFinishTimeSliceEvent;

constexpr void __set_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,float_t> value) ;

constexpr ::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,float_t> __get_didFinishTimeSliceEvent() const;

 ::System::Action_1<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>> __declspec(property(get=__get_didStartNewTimeSliceEvent, put=__set_didStartNewTimeSliceEvent))  didStartNewTimeSliceEvent;

constexpr void __set_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>> value) ;

constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>> __get_didStartNewTimeSliceEvent() const;

 ::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,T> __declspec(property(get=__get_didAddItemEvent, put=__set_didAddItemEvent))  didAddItemEvent;

constexpr void __set_didAddItemEvent(::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,T> value) ;

constexpr ::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,T> __get_didAddItemEvent() const;

 ::System::Collections::Generic::List_1<T> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::System::Collections::Generic::List_1<T> value) ;

constexpr ::System::Collections::Generic::List_1<T> __get__items() const;


// Properties

 float_t __declspec(property(get=get_time, put=set_time))  time;

 float_t __declspec(property(get=get_previousTimeSliceTime, put=set_previousTimeSliceTime))  previousTimeSliceTime;

 ::System::Collections::Generic::IReadOnlyList_1<T> __declspec(property(get=get_items))  items;


// Methods

/// @brief Method get_time addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_time() ;

/// @brief Method set_time addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_time(float_t value) ;

/// @brief Method get_previousTimeSliceTime addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_previousTimeSliceTime() ;

/// @brief Method set_previousTimeSliceTime addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_previousTimeSliceTime(float_t value) ;

/// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<T> get_items() ;

/// @brief Method add_didFinishTimeSliceEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,float_t> value) ;

/// @brief Method remove_didFinishTimeSliceEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,float_t> value) ;

/// @brief Method add_didStartNewTimeSliceEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>> value) ;

/// @brief Method remove_didStartNewTimeSliceEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>> value) ;

/// @brief Method add_didAddItemEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_didAddItemEvent(::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,T> value) ;

/// @brief Method remove_didAddItemEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_didAddItemEvent(::System::Action_2<::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>,T> value) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item) ;

/// @brief Method AddWithoutNotifications addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddWithoutNotifications(T item) ;

/// @brief Method FinishTimeSlice addr 0x0 size 0xffffffffffffffff virtual false final false
 void FinishTimeSlice(float_t nextTimeSliceTime) ;

/// @brief Method StartNewTimeSlice addr 0x0 size 0xffffffffffffffff virtual false final false
 void StartNewTimeSlice(float_t newSliceTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1, "", "BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1");
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor, "", "BeatmapObjectsInTimeRowProcessor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor__SliderTailData, "", "BeatmapObjectsInTimeRowProcessor/SliderTailData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c, "", "BeatmapObjectsInTimeRowProcessor/<>c");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0, "", "BeatmapObjectsInTimeRowProcessor/<>c__DisplayClass17_0");
