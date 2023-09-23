#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier::RootMotion__FinalIK__IKSolverLimb__BendModifier(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier::Animation{0};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier::Target{1};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier::Parent{2};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier::Arm{3};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier::Goal{4};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x11e1b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "direction", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "axis", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "dot", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::RootMotion__FinalIK__IKSolverLimb__AxisDirection(UnityEngine::Vector3 direction, UnityEngine::Vector3 axis, float_t dot) noexcept : ::bs_hook::ValueTypeWrapper() {this->direction = direction;
this->axis = axis;
this->dot = dot;
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::__set_direction(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::__get_direction() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::__set_axis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::__get_axis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::__set_dot(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::__get_dot() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection::_ctor(UnityEngine::Vector3 direction, UnityEngine::Vector3 axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, direction, axis);
}
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb.MaintainRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::MaintainRotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11e078c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "MaintainRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb.MaintainBend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::MaintainBend)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x11e07d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "MaintainBend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb.OnInitiateVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::OnInitiateVirtual)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x11e083c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverLimb),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb.OnUpdateVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::OnUpdateVirtual)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x11e0d84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverLimb),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb.OnPostSolveVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::OnPostSolveVirtual)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x11e18a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverLimb),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11e1948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)(UnityEngine::AvatarIKGoal)>(&RootMotion::FinalIK::IKSolverLimb::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11e1adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AvatarIKGoal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb.get_axisDirections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection> (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::get_axisDirections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11e1b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "get_axisDirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb.StoreAxisDirections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLimb::*)(ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>>)>(&RootMotion::FinalIK::IKSolverLimb::StoreAxisDirections)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x11e0b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "StoreAxisDirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverLimb.GetModifiedBendNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverLimb::*)()>(&RootMotion::FinalIK::IKSolverLimb::GetModifiedBendNormal)> {
  constexpr static std::size_t size = 0xa60;
  constexpr static std::size_t addrs = 0x11e0e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "GetModifiedBendNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_goal(UnityEngine::AvatarIKGoal value)  {
::cordl_internals::setInstanceField<UnityEngine::AvatarIKGoal, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AvatarIKGoal>(value));
}
constexpr UnityEngine::AvatarIKGoal RootMotion::FinalIK::IKSolverLimb::__get_goal() const {
return ::cordl_internals::getInstanceField<UnityEngine::AvatarIKGoal, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bendModifier(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier RootMotion::FinalIK::IKSolverLimb::__get_bendModifier() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__BendModifier, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_maintainRotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::IKSolverLimb::__get_maintainRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bendModifierWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::IKSolverLimb::__get_bendModifierWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bendGoal(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::IKSolverLimb::__get_bendGoal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_maintainBendFor1Frame(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::IKSolverLimb::__get_maintainBendFor1Frame() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_maintainRotationFor1Frame(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::IKSolverLimb::__get_maintainRotationFor1Frame() const {
return ::cordl_internals::getInstanceField<bool, 0xc1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_defaultRootRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::IKSolverLimb::__get_defaultRootRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_parentDefaultRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::IKSolverLimb::__get_parentDefaultRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bone3RotationBeforeSolve(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::IKSolverLimb::__get_bone3RotationBeforeSolve() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_maintainRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::IKSolverLimb::__get_maintainRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_bone3DefaultRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x104>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::IKSolverLimb::__get_bone3DefaultRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x104>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set__bendNormal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x114>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverLimb::__get__bendNormal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x114>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_animationNormal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverLimb::__get_animationNormal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_axisDirectionsLeft(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection> RootMotion::FinalIK::IKSolverLimb::__get_axisDirectionsLeft() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverLimb::__set_axisDirectionsRight(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection> RootMotion::FinalIK::IKSolverLimb::__get_axisDirectionsRight() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::IKSolverLimb::MaintainRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "MaintainRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverLimb::MaintainBend()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "MaintainBend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverLimb::OnInitiateVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "OnInitiateVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverLimb::OnUpdateVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "OnUpdateVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverLimb::OnPostSolveVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "OnPostSolveVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::IKSolverLimb::IKSolverLimb()  : RootMotion::FinalIK::IKSolverTrigonometric(THROW_UNLESS(::il2cpp_utils::New<IKSolverLimb>())) {}
 void RootMotion::FinalIK::IKSolverLimb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "goal", ty: "UnityEngine::AvatarIKGoal", modifiers: "", def_value: None }]
 RootMotion::FinalIK::IKSolverLimb::IKSolverLimb(UnityEngine::AvatarIKGoal goal)  : RootMotion::FinalIK::IKSolverTrigonometric(THROW_UNLESS(::il2cpp_utils::New<IKSolverLimb>(goal))) {}
 void RootMotion::FinalIK::IKSolverLimb::_ctor(UnityEngine::AvatarIKGoal goal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AvatarIKGoal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, goal);
}
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection> RootMotion::FinalIK::IKSolverLimb::get_axisDirections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "get_axisDirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverLimb::StoreAxisDirections(ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>> axisDirections)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "StoreAxisDirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverLimb__AxisDirection>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, axisDirections);
}
 UnityEngine::Vector3 RootMotion::FinalIK::IKSolverLimb::GetModifiedBendNormal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverLimb>::get(),
                            "GetModifiedBendNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
