#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose::____GlobalNamespace__NodePoseSyncState__NodePose(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose  ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose::Head{0};
constexpr ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose  ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose::LeftController{1};
constexpr ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose  ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose::RightController{2};
constexpr ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose  ::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose::Count{3};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncState::*)(::LiteNetLib::Utils::NetDataWriter)>(&::GlobalNamespace::NodePoseSyncState::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdcc5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncState::*)(::LiteNetLib::Utils::NetDataReader)>(&::GlobalNamespace::NodePoseSyncState::Deserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdcc63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.SetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncState::*)(::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose, ::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::NodePoseSyncState::SetState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdcc67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.GetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PoseSerializable (::GlobalNamespace::NodePoseSyncState::*)(::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose)>(&::GlobalNamespace::NodePoseSyncState::GetState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xdcc6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NodePoseSyncState::*)(ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xdcc718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.GetDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::GetDelta)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xdcc7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.ApplyDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::ApplyDelta)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xdcc8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.GetSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NodePoseSyncState::*)()>(&::GlobalNamespace::NodePoseSyncState::GetSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdcc9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "GetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.IStateTable_NodePoseSyncState,NodePoseSyncState_NodePose,PoseSerializable__GetDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState,NodePoseSyncState_NodePose,PoseSerializable__GetDelta)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xdcca44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.IStateTable_NodePoseSyncState,NodePoseSyncState_NodePose,PoseSerializable__ApplyDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState,NodePoseSyncState_NodePose,PoseSerializable__ApplyDelta)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xdcca74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.IEquatableByReference_NodePoseSyncState__Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NodePoseSyncState::*)(ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::IEquatableByReference_NodePoseSyncState__Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdccaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "IEquatableByReference<NodePoseSyncState>.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose,::GlobalNamespace::PoseSerializable>
constexpr  ::GlobalNamespace::NodePoseSyncState::operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose,::GlobalNamespace::PoseSerializable>() const {
return ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose,::GlobalNamespace::PoseSerializable>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr  ::GlobalNamespace::NodePoseSyncState::operator ::LiteNetLib::Utils::INetSerializable() const {
return ::LiteNetLib::Utils::INetSerializable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>
constexpr  ::GlobalNamespace::NodePoseSyncState::operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>() const {
return ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_head", ty: "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "_leftController", ty: "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rightController", ty: "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NodePoseSyncState::NodePoseSyncState(::GlobalNamespace::PoseSerializable _head, ::GlobalNamespace::PoseSerializable _leftController, ::GlobalNamespace::PoseSerializable _rightController) noexcept : ::bs_hook::ValueTypeWrapper() {this->_head = _head;
this->_leftController = _leftController;
this->_rightController = _rightController;
}
constexpr void ::GlobalNamespace::NodePoseSyncState::__set__head(::GlobalNamespace::PoseSerializable value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PoseSerializable, 0x0>(this->__instance, std::forward<::GlobalNamespace::PoseSerializable>(value));
}
constexpr ::GlobalNamespace::PoseSerializable ::GlobalNamespace::NodePoseSyncState::__get__head() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PoseSerializable, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::NodePoseSyncState::__set__leftController(::GlobalNamespace::PoseSerializable value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PoseSerializable, 0x18>(this->__instance, std::forward<::GlobalNamespace::PoseSerializable>(value));
}
constexpr ::GlobalNamespace::PoseSerializable ::GlobalNamespace::NodePoseSyncState::__get__leftController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PoseSerializable, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::NodePoseSyncState::__set__rightController(::GlobalNamespace::PoseSerializable value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PoseSerializable, 0x30>(this->__instance, std::forward<::GlobalNamespace::PoseSerializable>(value));
}
constexpr ::GlobalNamespace::PoseSerializable ::GlobalNamespace::NodePoseSyncState::__get__rightController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PoseSerializable, 0x30>(this->__instance);
}
 void ::GlobalNamespace::NodePoseSyncState::Serialize(::LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, writer);
}
 void ::GlobalNamespace::NodePoseSyncState::Deserialize(::LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, reader);
}
 void ::GlobalNamespace::NodePoseSyncState::SetState(::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose nodePose, ::GlobalNamespace::PoseSerializable pose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, nodePose, pose);
}
 ::GlobalNamespace::PoseSerializable ::GlobalNamespace::NodePoseSyncState::GetState(::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose nodePose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__NodePoseSyncState__NodePose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, nodePose);
}
 bool ::GlobalNamespace::NodePoseSyncState::Equals(ByRef<::GlobalNamespace::NodePoseSyncState> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 ::GlobalNamespace::NodePoseSyncState ::GlobalNamespace::NodePoseSyncState::GetDelta(ByRef<::GlobalNamespace::NodePoseSyncState> latest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, latest);
}
 ::GlobalNamespace::NodePoseSyncState ::GlobalNamespace::NodePoseSyncState::ApplyDelta(ByRef<::GlobalNamespace::NodePoseSyncState> delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, delta);
}
 int32_t ::GlobalNamespace::NodePoseSyncState::GetSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "GetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::GlobalNamespace::NodePoseSyncState ::GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState,NodePoseSyncState_NodePose,PoseSerializable__GetDelta(ByRef<::GlobalNamespace::NodePoseSyncState> stateTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateTable);
}
 ::GlobalNamespace::NodePoseSyncState ::GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState,NodePoseSyncState_NodePose,PoseSerializable__ApplyDelta(ByRef<::GlobalNamespace::NodePoseSyncState> delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, delta);
}
 bool ::GlobalNamespace::NodePoseSyncState::IEquatableByReference_NodePoseSyncState__Equals(ByRef<::GlobalNamespace::NodePoseSyncState> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(),
                            "IEquatableByReference<NodePoseSyncState>.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NodePoseSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
} // end anonymous namespace
