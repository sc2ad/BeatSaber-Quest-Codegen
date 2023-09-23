#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/XR/zzzz__AvailableTrackingData_def.hpp"
//  Writing Method size for method: UnityEngine::XR::XRNodeState.set_uniqueID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRNodeState::*)(uint64_t)>(&UnityEngine::XR::XRNodeState::set_uniqueID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d39a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "set_uniqueID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.get_nodeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::XRNode (UnityEngine::XR::XRNodeState::*)()>(&UnityEngine::XR::XRNodeState::get_nodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d39aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "get_nodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.set_nodeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRNodeState::*)(UnityEngine::XR::XRNode)>(&UnityEngine::XR::XRNodeState::set_nodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d39a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "set_nodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.set_tracked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRNodeState::*)(bool)>(&UnityEngine::XR::XRNodeState::set_tracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d39a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "set_tracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.TryGetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::XR::XRNodeState::TryGetPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d39aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.TryGetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(ByRef<UnityEngine::Quaternion>)>(&UnityEngine::XR::XRNodeState::TryGetRotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d39b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.TryGetVelocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::XR::XRNodeState::TryGetVelocity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d39bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.TryGetAngularVelocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::XR::XRNodeState::TryGetAngularVelocity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d39bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetAngularVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.TryGetAcceleration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::XR::XRNodeState::TryGetAcceleration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d39bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.TryGetAngularAcceleration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::XR::XRNodeState::TryGetAngularAcceleration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d39c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetAngularAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.TryGet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Vector3, UnityEngine::XR::AvailableTrackingData, ByRef<UnityEngine::Vector3>)>(&UnityEngine::XR::XRNodeState::TryGet)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d39ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::AvailableTrackingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRNodeState.TryGet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Quaternion, UnityEngine::XR::AvailableTrackingData, ByRef<UnityEngine::Quaternion>)>(&UnityEngine::XR::XRNodeState::TryGet)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d39b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::AvailableTrackingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Type", ty: "UnityEngine::XR::XRNode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AvailableFields", ty: "UnityEngine::XR::AvailableTrackingData", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Velocity", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AngularVelocity", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Acceleration", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AngularAcceleration", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Tracked", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UniqueID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::XRNodeState::XRNodeState(UnityEngine::XR::XRNode m_Type, UnityEngine::XR::AvailableTrackingData m_AvailableFields, UnityEngine::Vector3 m_Position, UnityEngine::Quaternion m_Rotation, UnityEngine::Vector3 m_Velocity, UnityEngine::Vector3 m_AngularVelocity, UnityEngine::Vector3 m_Acceleration, UnityEngine::Vector3 m_AngularAcceleration, int32_t m_Tracked, uint64_t m_UniqueID) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Type = m_Type;
this->m_AvailableFields = m_AvailableFields;
this->m_Position = m_Position;
this->m_Rotation = m_Rotation;
this->m_Velocity = m_Velocity;
this->m_AngularVelocity = m_AngularVelocity;
this->m_Acceleration = m_Acceleration;
this->m_AngularAcceleration = m_AngularAcceleration;
this->m_Tracked = m_Tracked;
this->m_UniqueID = m_UniqueID;
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_Type(UnityEngine::XR::XRNode value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::XRNode, 0x0>(this->__instance, std::forward<UnityEngine::XR::XRNode>(value));
}
constexpr UnityEngine::XR::XRNode UnityEngine::XR::XRNodeState::__get_m_Type() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::XRNode, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_AvailableFields(UnityEngine::XR::AvailableTrackingData value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::AvailableTrackingData, 0x4>(this->__instance, std::forward<UnityEngine::XR::AvailableTrackingData>(value));
}
constexpr UnityEngine::XR::AvailableTrackingData UnityEngine::XR::XRNodeState::__get_m_AvailableFields() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::AvailableTrackingData, 0x4>(this->__instance);
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_Position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x8>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::XR::XRNodeState::__get_m_Position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x8>(this->__instance);
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_Rotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x14>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion UnityEngine::XR::XRNodeState::__get_m_Rotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x14>(this->__instance);
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_Velocity(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x24>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::XR::XRNodeState::__get_m_Velocity() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x24>(this->__instance);
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_AngularVelocity(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x30>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::XR::XRNodeState::__get_m_AngularVelocity() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x30>(this->__instance);
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_Acceleration(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x3c>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::XR::XRNodeState::__get_m_Acceleration() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x3c>(this->__instance);
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_AngularAcceleration(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x48>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::XR::XRNodeState::__get_m_AngularAcceleration() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x48>(this->__instance);
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_Tracked(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::XRNodeState::__get_m_Tracked() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->__instance);
}
constexpr void UnityEngine::XR::XRNodeState::__set_m_UniqueID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x58>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t UnityEngine::XR::XRNodeState::__get_m_UniqueID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x58>(this->__instance);
}
 void UnityEngine::XR::XRNodeState::set_uniqueID(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "set_uniqueID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::XR::XRNode UnityEngine::XR::XRNodeState::get_nodeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "get_nodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::XRNode, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::XR::XRNodeState::set_nodeType(UnityEngine::XR::XRNode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "set_nodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void UnityEngine::XR::XRNodeState::set_tracked(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "set_tracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::XR::XRNodeState::TryGetPosition(ByRef<UnityEngine::Vector3> position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, position);
}
 bool UnityEngine::XR::XRNodeState::TryGetRotation(ByRef<UnityEngine::Quaternion> rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, rotation);
}
 bool UnityEngine::XR::XRNodeState::TryGetVelocity(ByRef<UnityEngine::Vector3> velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, velocity);
}
 bool UnityEngine::XR::XRNodeState::TryGetAngularVelocity(ByRef<UnityEngine::Vector3> angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetAngularVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, angularVelocity);
}
 bool UnityEngine::XR::XRNodeState::TryGetAcceleration(ByRef<UnityEngine::Vector3> acceleration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, acceleration);
}
 bool UnityEngine::XR::XRNodeState::TryGetAngularAcceleration(ByRef<UnityEngine::Vector3> angularAcceleration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGetAngularAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, angularAcceleration);
}
 bool UnityEngine::XR::XRNodeState::TryGet(UnityEngine::Vector3 inValue, UnityEngine::XR::AvailableTrackingData availabilityFlag, ByRef<UnityEngine::Vector3> outValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::AvailableTrackingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, inValue, availabilityFlag, outValue);
}
 bool UnityEngine::XR::XRNodeState::TryGet(UnityEngine::Quaternion inValue, UnityEngine::XR::AvailableTrackingData availabilityFlag, ByRef<UnityEngine::Quaternion> outValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRNodeState>::get(),
                            "TryGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::AvailableTrackingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, inValue, availabilityFlag, outValue);
}
