#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/XR/zzzz__InputTracking_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType::UnityEngine__XR__InputTracking__TrackingStateEventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType  UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType::NodeAdded{0};
constexpr UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType  UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType::NodeRemoved{1};
constexpr UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType  UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType::TrackingAcquired{2};
constexpr UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType  UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType::TrackingLost{3};
//  Writing Method size for method: UnityEngine::XR::InputTracking.GetNodeStates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>)>(&UnityEngine::XR::InputTracking::GetNodeStates)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d394bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "GetNodeStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputTracking.GetNodeStates_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>)>(&UnityEngine::XR::InputTracking::GetNodeStates_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d39574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "GetNodeStates_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputTracking.GetDeviceIdAtXRNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(UnityEngine::XR::XRNode)>(&UnityEngine::XR::InputTracking::GetDeviceIdAtXRNode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d393d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "GetDeviceIdAtXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputTracking.add_nodeAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<UnityEngine::XR::XRNodeState>)>(&UnityEngine::XR::InputTracking::add_nodeAdded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2d395b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "add_nodeAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputTracking.remove_nodeAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<UnityEngine::XR::XRNodeState>)>(&UnityEngine::XR::InputTracking::remove_nodeAdded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2d39680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "remove_nodeAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputTracking.add_nodeRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<UnityEngine::XR::XRNodeState>)>(&UnityEngine::XR::InputTracking::add_nodeRemoved)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2d39750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "add_nodeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputTracking.remove_nodeRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<UnityEngine::XR::XRNodeState>)>(&UnityEngine::XR::InputTracking::remove_nodeRemoved)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2d39820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "remove_nodeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputTracking.InvokeTrackingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType, UnityEngine::XR::XRNode, int64_t, bool)>(&UnityEngine::XR::InputTracking::InvokeTrackingEvent)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2d398f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "InvokeTrackingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::XR::InputTracking::__set_trackingAcquired(System::Action_1<UnityEngine::XR::XRNodeState> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::XR::XRNodeState>, "trackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get>(std::forward<System::Action_1<UnityEngine::XR::XRNodeState>>(value));
}
 System::Action_1<UnityEngine::XR::XRNodeState> UnityEngine::XR::InputTracking::__get_trackingAcquired()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::XR::XRNodeState>, "trackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get>();
}
 void UnityEngine::XR::InputTracking::__set_trackingLost(System::Action_1<UnityEngine::XR::XRNodeState> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::XR::XRNodeState>, "trackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get>(std::forward<System::Action_1<UnityEngine::XR::XRNodeState>>(value));
}
 System::Action_1<UnityEngine::XR::XRNodeState> UnityEngine::XR::InputTracking::__get_trackingLost()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::XR::XRNodeState>, "trackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get>();
}
 void UnityEngine::XR::InputTracking::__set_nodeAdded(System::Action_1<UnityEngine::XR::XRNodeState> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::XR::XRNodeState>, "nodeAdded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get>(std::forward<System::Action_1<UnityEngine::XR::XRNodeState>>(value));
}
 System::Action_1<UnityEngine::XR::XRNodeState> UnityEngine::XR::InputTracking::__get_nodeAdded()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::XR::XRNodeState>, "nodeAdded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get>();
}
 void UnityEngine::XR::InputTracking::__set_nodeRemoved(System::Action_1<UnityEngine::XR::XRNodeState> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::XR::XRNodeState>, "nodeRemoved", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get>(std::forward<System::Action_1<UnityEngine::XR::XRNodeState>>(value));
}
 System::Action_1<UnityEngine::XR::XRNodeState> UnityEngine::XR::InputTracking::__get_nodeRemoved()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::XR::XRNodeState>, "nodeRemoved", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get>();
}
 void UnityEngine::XR::InputTracking::GetNodeStates(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> nodeStates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "GetNodeStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nodeStates);
}
 void UnityEngine::XR::InputTracking::GetNodeStates_Internal(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> nodeStates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "GetNodeStates_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nodeStates);
}
 uint64_t UnityEngine::XR::InputTracking::GetDeviceIdAtXRNode(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "GetDeviceIdAtXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, node);
}
 void UnityEngine::XR::InputTracking::add_nodeAdded(System::Action_1<UnityEngine::XR::XRNodeState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "add_nodeAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::XR::InputTracking::remove_nodeAdded(System::Action_1<UnityEngine::XR::XRNodeState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "remove_nodeAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::XR::InputTracking::add_nodeRemoved(System::Action_1<UnityEngine::XR::XRNodeState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "add_nodeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::XR::InputTracking::remove_nodeRemoved(System::Action_1<UnityEngine::XR::XRNodeState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "remove_nodeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::XRNodeState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::XR::InputTracking::InvokeTrackingEvent(UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType eventType, UnityEngine::XR::XRNode nodeType, int64_t uniqueID, bool tracked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputTracking>::get(),
                            "InvokeTrackingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventType, nodeType, uniqueID, tracked);
}
