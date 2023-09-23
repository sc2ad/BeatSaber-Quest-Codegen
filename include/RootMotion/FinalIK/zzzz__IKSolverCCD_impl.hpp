#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverCCD_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::IKSolverCCD.FadeOutBoneWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverCCD::*)()>(&RootMotion::FinalIK::IKSolverCCD::FadeOutBoneWeights)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11d6b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                            "FadeOutBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverCCD.OnInitiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverCCD::*)()>(&RootMotion::FinalIK::IKSolverCCD::OnInitiate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11d6b8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverCCD),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverCCD.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverCCD::*)()>(&RootMotion::FinalIK::IKSolverCCD::OnUpdate)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x11d7080;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverCCD),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverCCD.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverCCD::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverCCD::Solve)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x11d7754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverCCD._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverCCD::*)()>(&RootMotion::FinalIK::IKSolverCCD::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11d7de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::IKSolverCCD::__set_OnPreIteration(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate RootMotion::FinalIK::IKSolverCCD::__get_OnPreIteration() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::IKSolverCCD::FadeOutBoneWeights()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                            "FadeOutBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverCCD::OnInitiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                            "OnInitiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverCCD::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverCCD::Solve(UnityEngine::Vector3 targetPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, targetPosition);
}
// Ctor Parameters []
 RootMotion::FinalIK::IKSolverCCD::IKSolverCCD()  : RootMotion::FinalIK::IKSolverHeuristic(THROW_UNLESS(::il2cpp_utils::New<IKSolverCCD>())) {}
 void RootMotion::FinalIK::IKSolverCCD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverCCD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
