#pragma once
namespace {
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::INotification.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (::UnityEngine::Playables::INotification::*)()>(&::UnityEngine::Playables::INotification::get_id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Playables::INotification),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotification>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::PropertyName ::UnityEngine::Playables::INotification::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotification>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
