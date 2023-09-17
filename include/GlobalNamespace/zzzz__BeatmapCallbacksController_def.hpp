#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class CallbacksInTime;
}
namespace GlobalNamespace {
template<typename T>
class BeatmapDataCallback_1;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapCallbacksController__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4820))
// CS Name: BeatmapCallbacksController::InitData
class CORDL_TYPE ____GlobalNamespace__BeatmapCallbacksController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BeatmapCallbacksController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapCallbacksController__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapCallbacksController__InitData(____GlobalNamespace__BeatmapCallbacksController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapCallbacksController__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapCallbacksController__InitData(____GlobalNamespace__BeatmapCallbacksController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapCallbacksController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapCallbacksController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapCallbacksController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapCallbacksController__InitData& operator=(____GlobalNamespace__BeatmapCallbacksController__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapCallbacksController__InitData& operator=(____GlobalNamespace__BeatmapCallbacksController__InitData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get_beatmapData, put=__set_beatmapData))  beatmapData;

constexpr void __set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData __get_beatmapData() const;

 float_t __declspec(property(get=__get_startFilterTime, put=__set_startFilterTime))  startFilterTime;

constexpr void __set_startFilterTime(float_t value) ;

constexpr float_t __get_startFilterTime() const;

 bool __declspec(property(get=__get_shouldKeepReplayState, put=__set_shouldKeepReplayState))  shouldKeepReplayState;

constexpr void __set_shouldKeepReplayState(bool value) ;

constexpr bool __get_shouldKeepReplayState() const;


// Methods

// Ctor Parameters [CppParam { name: "beatmapData", ty: "::GlobalNamespace::IReadonlyBeatmapData", modifiers: "", def_value: None }, CppParam { name: "startFilterTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shouldKeepReplayState", ty: "bool", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapCallbacksController__InitData(::GlobalNamespace::IReadonlyBeatmapData beatmapData, float_t startFilterTime, bool shouldKeepReplayState) ;

/// @brief Method .ctor addr 0x2231b10 size 0x40 virtual false final false
 void _ctor(::GlobalNamespace::IReadonlyBeatmapData beatmapData, float_t startFilterTime, bool shouldKeepReplayState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ICallCallbacksBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4821))
// CS Name: BeatmapCallbacksController::ICallCallbacksBehavior
class CORDL_TYPE ____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior : public ::cordl_internals::InterfaceW {
public:
// Declarations
~____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CallCallbacks addr 0x0 size 0xffffffffffffffff virtual true final false
 void CallCallbacks(::GlobalNamespace::CallbacksInTime callbacksInTime, ::GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

/// @brief Method Replay addr 0x0 size 0xffffffffffffffff virtual true final false
 void Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> callbacksInTimes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallCallbacksBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4822))
// CS Name: BeatmapCallbacksController::CallCallbacksBehavior
class CORDL_TYPE ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior
constexpr operator  ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior(____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior(____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior& operator=(____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior& operator=(____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior const& o) noexcept = default;
                


// Methods

/// @brief Method CallCallbacks addr 0x2231b50 size 0x18 virtual true final true
 void CallCallbacks(::GlobalNamespace::CallbacksInTime callbacksInTime, ::GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

/// @brief Method Replay addr 0x2231b68 size 0x4 virtual true final true
 void Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> callbacksInTimes) ;

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior() ;

/// @brief Method .ctor addr 0x2230228 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallCallbacksBehaviorWithLastState
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4823))
// CS Name: BeatmapCallbacksController::CallCallbacksBehaviorWithLastState
class CORDL_TYPE ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior
constexpr operator  ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState(____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState(____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState& operator=(____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState& operator=(____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type,int32_t>,::GlobalNamespace::BeatmapDataItem> __declspec(property(get=__get__replayState, put=__set__replayState))  _replayState;

constexpr void __set__replayState(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type,int32_t>,::GlobalNamespace::BeatmapDataItem> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type,int32_t>,::GlobalNamespace::BeatmapDataItem> __get__replayState() const;


// Methods

/// @brief Method CallCallbacks addr 0x2231b6c size 0xc4 virtual true final true
 void CallCallbacks(::GlobalNamespace::CallbacksInTime callbacksInTime, ::GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

/// @brief Method Replay addr 0x2231c30 size 0x288 virtual true final true
 void Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> callbacksInTimes) ;

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState() ;

/// @brief Method .ctor addr 0x2230230 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapCallbacksController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4824))
// CS Name: BeatmapCallbacksController
class CORDL_TYPE BeatmapCallbacksController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CallCallbacksBehaviorWithLastState = ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState;

using CallCallbacksBehavior = ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior;

using ICallCallbacksBehavior = ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior;

using InitData = ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BeatmapCallbacksController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController", modifiers: " const&", def_value: None }]
constexpr BeatmapCallbacksController(BeatmapCallbacksController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController", modifiers: "&&", def_value: None }]
constexpr BeatmapCallbacksController(BeatmapCallbacksController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCallbacksController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapCallbacksController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCallbacksController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCallbacksController& operator=(BeatmapCallbacksController&& o) noexcept = default;
  constexpr BeatmapCallbacksController& operator=(BeatmapCallbacksController const& o) noexcept = default;
                


// Fields

 ::System::Action __declspec(property(get=__get_didProcessAllCallbacksThisFrameEvent, put=__set_didProcessAllCallbacksThisFrameEvent))  didProcessAllCallbacksThisFrameEvent;

constexpr void __set_didProcessAllCallbacksThisFrameEvent(::System::Action value) ;

constexpr ::System::Action __get_didProcessAllCallbacksThisFrameEvent() const;

 ::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> __declspec(property(get=__get__callbacksInTimes, put=__set__callbacksInTimes))  _callbacksInTimes;

constexpr void __set__callbacksInTimes(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> __get__callbacksInTimes() const;

 ::GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData __get__beatmapData() const;

 ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior __declspec(property(get=__get__callCallbacksBehavior, put=__set__callCallbacksBehavior))  _callCallbacksBehavior;

constexpr void __set__callCallbacksBehavior(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior __get__callCallbacksBehavior() const;

 float_t __declspec(property(get=__get__startFilterTime, put=__set__startFilterTime))  _startFilterTime;

constexpr void __set__startFilterTime(float_t value) ;

constexpr float_t __get__startFilterTime() const;

 float_t __declspec(property(get=__get__prevSongTime, put=__set__prevSongTime))  _prevSongTime;

constexpr void __set__prevSongTime(float_t value) ;

constexpr float_t __get__prevSongTime() const;

 float_t __declspec(property(get=__get__songTime, put=__set__songTime))  _songTime;

constexpr void __set__songTime(float_t value) ;

constexpr float_t __get__songTime() const;

 bool __declspec(property(get=__get__sendCallbacksOnBeatmapDataChangeChange, put=__set__sendCallbacksOnBeatmapDataChangeChange))  _sendCallbacksOnBeatmapDataChangeChange;

constexpr void __set__sendCallbacksOnBeatmapDataChangeChange(bool value) ;

constexpr bool __get__sendCallbacksOnBeatmapDataChangeChange() const;

 bool __declspec(property(get=__get__processingCallbacks, put=__set__processingCallbacks))  _processingCallbacks;

constexpr void __set__processingCallbacks(bool value) ;

constexpr bool __get__processingCallbacks() const;


// Properties

 bool __declspec(property(get=get_sendCallbacksOnBeatmapDataChange, put=set_sendCallbacksOnBeatmapDataChange))  sendCallbacksOnBeatmapDataChange;

 float_t __declspec(property(get=get_songTime))  songTime;


// Methods

/// @brief Method get_sendCallbacksOnBeatmapDataChange addr 0x222fdac size 0x8 virtual false final false
 bool get_sendCallbacksOnBeatmapDataChange() ;

/// @brief Method set_sendCallbacksOnBeatmapDataChange addr 0x222fdb4 size 0xc virtual false final false
 void set_sendCallbacksOnBeatmapDataChange(bool value) ;

/// @brief Method get_songTime addr 0x222fdc0 size 0x8 virtual false final false
 float_t get_songTime() ;

/// @brief Method add_didProcessAllCallbacksThisFrameEvent addr 0x222fdc8 size 0x9c virtual false final false
 void add_didProcessAllCallbacksThisFrameEvent(::System::Action value) ;

/// @brief Method remove_didProcessAllCallbacksThisFrameEvent addr 0x222fe64 size 0x9c virtual false final false
 void remove_didProcessAllCallbacksThisFrameEvent(::System::Action value) ;

// Ctor Parameters [CppParam { name: "initData", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData", modifiers: "", def_value: None }]
explicit BeatmapCallbacksController(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData initData) ;

/// @brief Method .ctor addr 0x222ff00 size 0x328 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData initData) ;

/// @brief Method Dispose addr 0x22302ac size 0x254 virtual true final true
 void Dispose() ;

/// @brief Method ReplayState addr 0x2230500 size 0xac virtual false final false
 void ReplayState() ;

/// @brief Method ManualUpdate addr 0x22305ac size 0x5e0 virtual false final false
 void ManualUpdate(float_t songTime) ;

/// @brief Method AddBeatmapCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::GlobalNamespace::BeatmapDataCallbackWrapper AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T> callback) ;

/// @brief Method AddBeatmapCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::GlobalNamespace::BeatmapDataCallbackWrapper AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T> callback) ;

/// @brief Method AddBeatmapCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::GlobalNamespace::BeatmapDataCallbackWrapper AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T> callback, ::ArrayW<int32_t> beatmapDataSubtypeIdentifiers) ;

/// @brief Method AddBeatmapCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::GlobalNamespace::BeatmapDataCallbackWrapper AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T> callback, ::ArrayW<int32_t> beatmapDataSubtypeIdentifiers) ;

/// @brief Method RemoveBeatmapCallback addr 0x2230b8c size 0xc0 virtual false final false
 void RemoveBeatmapCallback(::GlobalNamespace::BeatmapDataCallbackWrapper callbackWrapper) ;

/// @brief Method TriggerBeatmapEvent addr 0x2230ebc size 0x160 virtual false final false
 void TriggerBeatmapEvent(::GlobalNamespace::BeatmapEventData beatmapEventData) ;

/// @brief Method HandleBeatmapEventDataWasInserted addr 0x22310f0 size 0x5d8 virtual false final false
 void HandleBeatmapEventDataWasInserted(::GlobalNamespace::BeatmapEventData beatmapEventData, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> node) ;

/// @brief Method HandleBeatmapEventDataWillBeRemoved addr 0x22316c8 size 0x254 virtual false final false
 void HandleBeatmapEventDataWillBeRemoved(::GlobalNamespace::BeatmapEventData beatmapEventDataToRemove, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> nodeToRemove) ;

/// @brief Method HandleBeatmapEventDataWasRemoved addr 0x223191c size 0x1f4 virtual false final false
 void HandleBeatmapEventDataWasRemoved(::GlobalNamespace::BeatmapEventData beatmapEventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController, "", "BeatmapCallbacksController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior, "", "BeatmapCallbacksController/CallCallbacksBehavior");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState, "", "BeatmapCallbacksController/CallCallbacksBehaviorWithLastState");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior, "", "BeatmapCallbacksController/ICallCallbacksBehavior");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData, "", "BeatmapCallbacksController/InitData");
