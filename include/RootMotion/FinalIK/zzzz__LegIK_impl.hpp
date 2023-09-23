#pragma once
#include "RootMotion/FinalIK/zzzz__IK_impl.hpp"
#include "RootMotion/FinalIK/zzzz__LegIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLeg_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::LegIK.OpenUserManual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LegIK::*)()>(&RootMotion::FinalIK::LegIK::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c5204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::LegIK),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LegIK.OpenScriptReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LegIK::*)()>(&RootMotion::FinalIK::LegIK::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c5248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::LegIK),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LegIK.SupportGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LegIK::*)()>(&RootMotion::FinalIK::LegIK::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c528c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LegIK.ASThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LegIK::*)()>(&RootMotion::FinalIK::LegIK::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c52d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LegIK.GetIKSolver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver (RootMotion::FinalIK::LegIK::*)()>(&RootMotion::FinalIK::LegIK::GetIKSolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c5314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::LegIK),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LegIK._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LegIK::*)()>(&RootMotion::FinalIK::LegIK::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11c531c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::LegIK::__set_solver(RootMotion::FinalIK::IKSolverLeg value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::IKSolverLeg, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::IKSolverLeg>(value));
}
constexpr RootMotion::FinalIK::IKSolverLeg RootMotion::FinalIK::LegIK::__get_solver() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::IKSolverLeg, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::LegIK::OpenUserManual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::LegIK::OpenScriptReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::LegIK::SupportGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::LegIK::ASThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::IKSolver RootMotion::FinalIK::LegIK::GetIKSolver()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                            "GetIKSolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::IKSolver, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::LegIK::LegIK()  : RootMotion::FinalIK::IK(THROW_UNLESS(::il2cpp_utils::New<LegIK>())) {}
 void RootMotion::FinalIK::LegIK::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LegIK>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
