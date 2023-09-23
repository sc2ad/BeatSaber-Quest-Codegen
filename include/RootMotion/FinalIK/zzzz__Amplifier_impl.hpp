#pragma once
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Amplifier_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink::*)()>(&GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1207794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink::__set_effector(RootMotion::FinalIK::FullBodyBipedEffector value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::FullBodyBipedEffector>(value));
}
constexpr RootMotion::FinalIK::FullBodyBipedEffector GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink::__get_effector() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink::__set_weight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink::RootMotion__FinalIK__Amplifier__Body__EffectorLink()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__Amplifier__Body__EffectorLink>())) {}
 void GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::*)(RootMotion::FinalIK::IKSolverFullBodyBiped, float_t, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::Update)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x120743c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body.Multiply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x120776c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x120777c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__set_transform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__get_transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__set_relativeTo(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__get_relativeTo() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__set_effectorLinks(::ArrayW<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink>>(value));
}
constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink> RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__get_effectorLinks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::RootMotion__FinalIK__Amplifier__Body__EffectorLink>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__set_verticalWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__get_verticalWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__set_horizontalWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__get_horizontalWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__set_speed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__get_speed() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__set_lastRelativePos(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__get_lastRelativePos() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__set_smoothDelta(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__get_smoothDelta() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__set_firstUpdate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::__get_firstUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::Update(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t w, float_t deltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solver, w, deltaTime);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::Multiply(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, v1, v2);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::RootMotion__FinalIK__Amplifier__Body()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__Amplifier__Body>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::Amplifier.OnModifyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Amplifier::*)()>(&RootMotion::FinalIK::Amplifier::OnModifyOffset)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x12072ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::Amplifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::Amplifier>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::Amplifier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Amplifier::*)()>(&RootMotion::FinalIK::Amplifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x120774c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::Amplifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::Amplifier::__set_bodies(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body> RootMotion::FinalIK::Amplifier::__get_bodies() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Amplifier__Body>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::Amplifier::OnModifyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::Amplifier>::get(),
                            "OnModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::Amplifier::Amplifier()  : RootMotion::FinalIK::OffsetModifier(THROW_UNLESS(::il2cpp_utils::New<Amplifier>())) {}
 void RootMotion::FinalIK::Amplifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::Amplifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
