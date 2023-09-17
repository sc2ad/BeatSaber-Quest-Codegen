#pragma once
#include "RootMotion/FinalIK/zzzz__IK_impl.hpp"
namespace {
#include "RootMotion/FinalIK/zzzz__CCDIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverCCD_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.OpenUserManual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c4044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::CCDIK),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.OpenScriptReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c4088;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::CCDIK),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.SupportGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c40cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.ASThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c4110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.GetIKSolver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::GetIKSolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c4154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::CCDIK),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11c415c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::CCDIK::__set_solver(::RootMotion::FinalIK::IKSolverCCD value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IKSolverCCD, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::IKSolverCCD>(value));
}
constexpr ::RootMotion::FinalIK::IKSolverCCD ::RootMotion::FinalIK::CCDIK::__get_solver() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverCCD, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::CCDIK::OpenUserManual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::CCDIK::OpenScriptReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::CCDIK::SupportGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::CCDIK::ASThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::RootMotion::FinalIK::IKSolver ::RootMotion::FinalIK::CCDIK::GetIKSolver()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                            "GetIKSolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::IKSolver, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::CCDIK::CCDIK()  : ::RootMotion::FinalIK::IK(THROW_UNLESS(::il2cpp_utils::New<CCDIK>())) {}
 void ::RootMotion::FinalIK::CCDIK::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
