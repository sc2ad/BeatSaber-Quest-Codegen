#pragma once
#include "RootMotion/FinalIK/zzzz__IK_impl.hpp"
#include "RootMotion/FinalIK/zzzz__ArmIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverArm_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::ArmIK.OpenUserManual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ArmIK::*)()>(&RootMotion::FinalIK::ArmIK::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c3ec4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::ArmIK),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ArmIK.OpenScriptReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ArmIK::*)()>(&RootMotion::FinalIK::ArmIK::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c3f08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::ArmIK),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ArmIK.SupportGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ArmIK::*)()>(&RootMotion::FinalIK::ArmIK::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c3f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ArmIK.ASThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ArmIK::*)()>(&RootMotion::FinalIK::ArmIK::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c3f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ArmIK.GetIKSolver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver (RootMotion::FinalIK::ArmIK::*)()>(&RootMotion::FinalIK::ArmIK::GetIKSolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c3fd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::ArmIK),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ArmIK._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ArmIK::*)()>(&RootMotion::FinalIK::ArmIK::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11c3fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::ArmIK::__set_solver(RootMotion::FinalIK::IKSolverArm value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::IKSolverArm, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::IKSolverArm>(value));
}
constexpr RootMotion::FinalIK::IKSolverArm RootMotion::FinalIK::ArmIK::__get_solver() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::IKSolverArm, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::ArmIK::OpenUserManual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::ArmIK::OpenScriptReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::ArmIK::SupportGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::ArmIK::ASThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::IKSolver RootMotion::FinalIK::ArmIK::GetIKSolver()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                            "GetIKSolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::IKSolver, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::ArmIK::ArmIK()  : RootMotion::FinalIK::IK(THROW_UNLESS(::il2cpp_utils::New<ArmIK>())) {}
 void RootMotion::FinalIK::ArmIK::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ArmIK>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
