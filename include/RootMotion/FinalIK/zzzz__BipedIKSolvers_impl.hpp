#pragma once
#include "RootMotion/FinalIK/zzzz__BipedIKSolvers_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverAim_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLookAt_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFABRIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__Constraints_def.hpp"
#include "RootMotion/zzzz__BipedReferences_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::BipedIKSolvers.get_limbs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<RootMotion::FinalIK::IKSolverLimb> (RootMotion::FinalIK::BipedIKSolvers::*)()>(&RootMotion::FinalIK::BipedIKSolvers::get_limbs)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x11b76a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::BipedIKSolvers>::get(),
                            "get_limbs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::BipedIKSolvers.get_ikSolvers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<RootMotion::FinalIK::IKSolver> (RootMotion::FinalIK::BipedIKSolvers::*)()>(&RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x11b8240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::BipedIKSolvers>::get(),
                            "get_ikSolvers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::BipedIKSolvers.AssignReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIKSolvers::*)(RootMotion::BipedReferences)>(&RootMotion::FinalIK::BipedIKSolvers::AssignReferences)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x11b7a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::BipedIKSolvers>::get(),
                            "AssignReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::BipedIKSolvers._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIKSolvers::*)()>(&RootMotion::FinalIK::BipedIKSolvers::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x11b80b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::BipedIKSolvers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_leftFoot(RootMotion::FinalIK::IKSolverLimb value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::IKSolverLimb, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::IKSolverLimb>(value));
}
constexpr RootMotion::FinalIK::IKSolverLimb RootMotion::FinalIK::BipedIKSolvers::__get_leftFoot() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::IKSolverLimb, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_rightFoot(RootMotion::FinalIK::IKSolverLimb value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::IKSolverLimb, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::IKSolverLimb>(value));
}
constexpr RootMotion::FinalIK::IKSolverLimb RootMotion::FinalIK::BipedIKSolvers::__get_rightFoot() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::IKSolverLimb, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_leftHand(RootMotion::FinalIK::IKSolverLimb value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::IKSolverLimb, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::IKSolverLimb>(value));
}
constexpr RootMotion::FinalIK::IKSolverLimb RootMotion::FinalIK::BipedIKSolvers::__get_leftHand() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::IKSolverLimb, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_rightHand(RootMotion::FinalIK::IKSolverLimb value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::IKSolverLimb, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::IKSolverLimb>(value));
}
constexpr RootMotion::FinalIK::IKSolverLimb RootMotion::FinalIK::BipedIKSolvers::__get_rightHand() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::IKSolverLimb, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_spine(RootMotion::FinalIK::IKSolverFABRIK value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::IKSolverFABRIK, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::IKSolverFABRIK>(value));
}
constexpr RootMotion::FinalIK::IKSolverFABRIK RootMotion::FinalIK::BipedIKSolvers::__get_spine() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::IKSolverFABRIK, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_lookAt(RootMotion::FinalIK::IKSolverLookAt value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::IKSolverLookAt, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::IKSolverLookAt>(value));
}
constexpr RootMotion::FinalIK::IKSolverLookAt RootMotion::FinalIK::BipedIKSolvers::__get_lookAt() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::IKSolverLookAt, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_aim(RootMotion::FinalIK::IKSolverAim value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::IKSolverAim, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::IKSolverAim>(value));
}
constexpr RootMotion::FinalIK::IKSolverAim RootMotion::FinalIK::BipedIKSolvers::__get_aim() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::IKSolverAim, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_pelvis(RootMotion::FinalIK::Constraints value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::Constraints, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::Constraints>(value));
}
constexpr RootMotion::FinalIK::Constraints RootMotion::FinalIK::BipedIKSolvers::__get_pelvis() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::Constraints, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set__limbs(::ArrayW<RootMotion::FinalIK::IKSolverLimb> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::IKSolverLimb>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::IKSolverLimb>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::IKSolverLimb> RootMotion::FinalIK::BipedIKSolvers::__get__limbs() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::IKSolverLimb>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set__ikSolvers(::ArrayW<RootMotion::FinalIK::IKSolver> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::IKSolver>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::IKSolver>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::IKSolver> RootMotion::FinalIK::BipedIKSolvers::__get__ikSolvers() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::IKSolver>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<RootMotion::FinalIK::IKSolverLimb> RootMotion::FinalIK::BipedIKSolvers::get_limbs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::BipedIKSolvers>::get(),
                            "get_limbs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<RootMotion::FinalIK::IKSolverLimb>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<RootMotion::FinalIK::IKSolver> RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::BipedIKSolvers>::get(),
                            "get_ikSolvers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<RootMotion::FinalIK::IKSolver>, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::BipedIKSolvers::AssignReferences(RootMotion::BipedReferences references)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::BipedIKSolvers>::get(),
                            "AssignReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, references);
}
// Ctor Parameters []
 RootMotion::FinalIK::BipedIKSolvers::BipedIKSolvers()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BipedIKSolvers>())) {}
 void RootMotion::FinalIK::BipedIKSolvers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::BipedIKSolvers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
