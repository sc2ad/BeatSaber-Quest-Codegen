#pragma once
namespace {
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__CallbacksInTime_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::*)(::GlobalNamespace::IReadonlyBeatmapData, float_t, bool)>(&::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2231b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::__set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::__get_beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::__set_startFilterTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::__get_startFilterTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::__set_shouldKeepReplayState(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::__get_shouldKeepReplayState() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "beatmapData", ty: "::GlobalNamespace::IReadonlyBeatmapData", modifiers: "", def_value: None }, CppParam { name: "startFilterTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shouldKeepReplayState", ty: "bool", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::____GlobalNamespace__BeatmapCallbacksController__InitData(::GlobalNamespace::IReadonlyBeatmapData beatmapData, float_t startFilterTime, bool shouldKeepReplayState)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatmapCallbacksController__InitData>(beatmapData, startFilterTime, shouldKeepReplayState))) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData::_ctor(::GlobalNamespace::IReadonlyBeatmapData beatmapData, float_t startFilterTime, bool shouldKeepReplayState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapData, startFilterTime, shouldKeepReplayState);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior.CallCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior::*)(::GlobalNamespace::CallbacksInTime, ::GlobalNamespace::BeatmapDataItem)>(&::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior::CallCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior.Replay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior::*)(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>)>(&::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior::Replay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior::CallCallbacks(::GlobalNamespace::CallbacksInTime callbacksInTime, ::GlobalNamespace::BeatmapDataItem beatmapDataItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callbacksInTime, beatmapDataItem);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior::Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> callbacksInTimes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callbacksInTimes);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior.CallCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::*)(::GlobalNamespace::CallbacksInTime, ::GlobalNamespace::BeatmapDataItem)>(&::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::CallCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2231b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior.Replay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::*)(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>)>(&::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::Replay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2231b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2230228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::operator ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior() const noexcept {
return ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior(::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::CallCallbacks(::GlobalNamespace::CallbacksInTime callbacksInTime, ::GlobalNamespace::BeatmapDataItem beatmapDataItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callbacksInTime, beatmapDataItem);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> callbacksInTimes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callbacksInTimes);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior>())) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState.CallCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::*)(::GlobalNamespace::CallbacksInTime, ::GlobalNamespace::BeatmapDataItem)>(&::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::CallCallbacks)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2231b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState.Replay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::*)(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>)>(&::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::Replay)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2231c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2230230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::operator ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior() const noexcept {
return ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::__set__replayState(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type,int32_t>,::GlobalNamespace::BeatmapDataItem> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type,int32_t>,::GlobalNamespace::BeatmapDataItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type,int32_t>,::GlobalNamespace::BeatmapDataItem>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type,int32_t>,::GlobalNamespace::BeatmapDataItem> ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::__get__replayState() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type,int32_t>,::GlobalNamespace::BeatmapDataItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::CallCallbacks(::GlobalNamespace::CallbacksInTime callbacksInTime, ::GlobalNamespace::BeatmapDataItem beatmapDataItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callbacksInTime, beatmapDataItem);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> callbacksInTimes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callbacksInTimes);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState>())) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.get_sendCallbacksOnBeatmapDataChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222fdac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "get_sendCallbacksOnBeatmapDataChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.set_sendCallbacksOnBeatmapDataChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(bool)>(&::GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x222fdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "set_sendCallbacksOnBeatmapDataChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.get_songTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222fdc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.add_didProcessAllCallbacksThisFrameEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action)>(&::GlobalNamespace::BeatmapCallbacksController::add_didProcessAllCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x222fdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "add_didProcessAllCallbacksThisFrameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.remove_didProcessAllCallbacksThisFrameEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action)>(&::GlobalNamespace::BeatmapCallbacksController::remove_didProcessAllCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x222fe64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "remove_didProcessAllCallbacksThisFrameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData)>(&::GlobalNamespace::BeatmapCallbacksController::_ctor)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x222ff00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::Dispose)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x22302ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.ReplayState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::ReplayState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2230500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "ReplayState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(float_t)>(&::GlobalNamespace::BeatmapCallbacksController::ManualUpdate)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x22305ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.RemoveBeatmapCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapDataCallbackWrapper)>(&::GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2230b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "RemoveBeatmapCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.TriggerBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData)>(&::GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2230ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "TriggerBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWasInserted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>)>(&::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x22310f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "HandleBeatmapEventDataWasInserted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWillBeRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>)>(&::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x22316c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "HandleBeatmapEventDataWillBeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWasRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData)>(&::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x223191c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "HandleBeatmapEventDataWasRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::BeatmapCallbacksController::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCallbacksController::__set_didProcessAllCallbacksThisFrameEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::BeatmapCallbacksController::__get_didProcessAllCallbacksThisFrameEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCallbacksController::__set__callbacksInTimes(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime> ::GlobalNamespace::BeatmapCallbacksController::__get__callbacksInTimes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCallbacksController::__set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData ::GlobalNamespace::BeatmapCallbacksController::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCallbacksController::__set__callCallbacksBehavior(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior ::GlobalNamespace::BeatmapCallbacksController::__get__callCallbacksBehavior() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__ICallCallbacksBehavior, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCallbacksController::__set__startFilterTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapCallbacksController::__get__startFilterTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCallbacksController::__set__prevSongTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapCallbacksController::__get__prevSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCallbacksController::__set__songTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapCallbacksController::__get__songTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCallbacksController::__set__sendCallbacksOnBeatmapDataChangeChange(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::BeatmapCallbacksController::__get__sendCallbacksOnBeatmapDataChangeChange() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCallbacksController::__set__processingCallbacks(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::BeatmapCallbacksController::__get__processingCallbacks() const {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "get_sendCallbacksOnBeatmapDataChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "set_sendCallbacksOnBeatmapDataChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::BeatmapCallbacksController::get_songTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapCallbacksController::add_didProcessAllCallbacksThisFrameEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "add_didProcessAllCallbacksThisFrameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::BeatmapCallbacksController::remove_didProcessAllCallbacksThisFrameEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "remove_didProcessAllCallbacksThisFrameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "initData", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData", modifiers: "", def_value: None }]
 ::GlobalNamespace::BeatmapCallbacksController::BeatmapCallbacksController(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData initData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapCallbacksController>(initData))) {}
 void ::GlobalNamespace::BeatmapCallbacksController::_ctor(::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData initData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapCallbacksController__InitData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initData);
}
 void ::GlobalNamespace::BeatmapCallbacksController::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapCallbacksController::ReplayState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "ReplayState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapCallbacksController::ManualUpdate(float_t songTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songTime);
}
template<typename T>
 ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T> callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                        "AddBeatmapCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper, false>(const_cast<void*>(instance), ___internal_method, aheadTime, callback);
}
template<typename T>
 ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T> callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                        "AddBeatmapCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper, false>(const_cast<void*>(instance), ___internal_method, callback);
}
template<typename T>
 ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T> callback, ::ArrayW<int32_t> beatmapDataSubtypeIdentifiers)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                        "AddBeatmapCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper, false>(const_cast<void*>(instance), ___internal_method, callback, beatmapDataSubtypeIdentifiers);
}
template<typename T>
 ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T> callback, ::ArrayW<int32_t> beatmapDataSubtypeIdentifiers)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                        "AddBeatmapCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper, false>(const_cast<void*>(instance), ___internal_method, aheadTime, callback, beatmapDataSubtypeIdentifiers);
}
 void ::GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback(::GlobalNamespace::BeatmapDataCallbackWrapper callbackWrapper)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "RemoveBeatmapCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callbackWrapper);
}
 void ::GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent(::GlobalNamespace::BeatmapEventData beatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "TriggerBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEventData);
}
 void ::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted(::GlobalNamespace::BeatmapEventData beatmapEventData, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "HandleBeatmapEventDataWasInserted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEventData, node);
}
 void ::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved(::GlobalNamespace::BeatmapEventData beatmapEventDataToRemove, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> nodeToRemove)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "HandleBeatmapEventDataWillBeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEventDataToRemove, nodeToRemove);
}
 void ::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved(::GlobalNamespace::BeatmapEventData beatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController>::get(),
                            "HandleBeatmapEventDataWasRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEventData);
}
} // end anonymous namespace
