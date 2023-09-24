#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class CallbacksInTime;
}
// Type: ::CallbacksInTime
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4829))
// CS Name: CallbacksInTime
class CORDL_TYPE CallbacksInTime : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CallbacksInTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "CallbacksInTime", modifiers: " const&", def_value: None }]
constexpr CallbacksInTime(CallbacksInTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CallbacksInTime", modifiers: "&&", def_value: None }]
constexpr CallbacksInTime(CallbacksInTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CallbacksInTime(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CallbacksInTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CallbacksInTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CallbacksInTime& operator=(CallbacksInTime&& o) noexcept = default;
  constexpr CallbacksInTime& operator=(CallbacksInTime const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> __declspec(property(get=__get_lastProcessedNode, put=__set_lastProcessedNode))  lastProcessedNode;

constexpr void __set_lastProcessedNode(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> value) ;

constexpr System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> __get_lastProcessedNode() const;

 float_t __declspec(property(get=__get_aheadTime, put=__set_aheadTime))  aheadTime;

constexpr void __set_aheadTime(float_t value) ;

constexpr float_t __get_aheadTime() const;

 GlobalNamespace::BeatmapEventData __declspec(property(get=__get_beatmapEventDataForCallbacksAfterNodeRemoval, put=__set_beatmapEventDataForCallbacksAfterNodeRemoval))  beatmapEventDataForCallbacksAfterNodeRemoval;

constexpr void __set_beatmapEventDataForCallbacksAfterNodeRemoval(GlobalNamespace::BeatmapEventData value) ;

constexpr GlobalNamespace::BeatmapEventData __get_beatmapEventDataForCallbacksAfterNodeRemoval() const;

 System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,int32_t>,System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataCallbackWrapper>> __declspec(property(get=__get__callbacksWithSubtypeIdentifier, put=__set__callbacksWithSubtypeIdentifier))  _callbacksWithSubtypeIdentifier;

constexpr void __set__callbacksWithSubtypeIdentifier(System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,int32_t>,System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataCallbackWrapper>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,int32_t>,System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataCallbackWrapper>> __get__callbacksWithSubtypeIdentifier() const;

 System::Collections::Generic::Dictionary_2<System::Type,System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataCallbackWrapper>> __declspec(property(get=__get__callbacks, put=__set__callbacks))  _callbacks;

constexpr void __set__callbacks(System::Collections::Generic::Dictionary_2<System::Type,System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataCallbackWrapper>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Type,System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataCallbackWrapper>> __get__callbacks() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

/// @brief Method get_isEmpty addr 0x2230e30 size 0x8c virtual false final false
 bool get_isEmpty() ;

static GlobalNamespace::CallbacksInTime New_ctor(float_t aheadTime) ;

/// @brief Method .ctor addr 0x223203c size 0xd4 virtual false final false
 void _ctor(float_t aheadTime) ;

/// @brief Method AddCallback addr 0x2232110 size 0x308 virtual false final false
 void AddCallback(GlobalNamespace::BeatmapDataCallbackWrapper callbackWrapper) ;

/// @brief Method RemoveCallback addr 0x2230c4c size 0x1e4 virtual false final false
 void RemoveCallback(GlobalNamespace::BeatmapDataCallbackWrapper callbackWrapper) ;

/// @brief Method CallCallbacks addr 0x223101c size 0xd4 virtual false final false
 void CallCallbacks(GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

/// @brief Method CallCallbacks addr 0x2232418 size 0x2cc virtual false final false
 void CallCallbacks(System::Type beatmapEventDataType, GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CallbacksInTime);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CallbacksInTime, "", "CallbacksInTime");
