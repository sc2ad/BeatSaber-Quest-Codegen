#pragma once
namespace {
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::ISubsystemDescriptor.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ISubsystemDescriptor::*)()>(&::UnityEngine::ISubsystemDescriptor::get_id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ISubsystemDescriptor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ISubsystemDescriptor>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ISubsystemDescriptor.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ISubsystem (::UnityEngine::ISubsystemDescriptor::*)()>(&::UnityEngine::ISubsystemDescriptor::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ISubsystemDescriptor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ISubsystemDescriptor>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::StringW ::UnityEngine::ISubsystemDescriptor::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ISubsystemDescriptor>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::ISubsystem ::UnityEngine::ISubsystemDescriptor::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ISubsystemDescriptor>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
