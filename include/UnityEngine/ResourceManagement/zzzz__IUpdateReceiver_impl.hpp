#pragma once
namespace {
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::IUpdateReceiver.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::IUpdateReceiver::*)(float_t)>(&::UnityEngine::ResourceManagement::IUpdateReceiver::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourceManagement::IUpdateReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::IUpdateReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::ResourceManagement::IUpdateReceiver::Update(float_t unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::IUpdateReceiver>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unscaledDeltaTime);
}
} // end anonymous namespace
