#pragma once
namespace {
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::INotificationReceiver.OnNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::INotificationReceiver::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification, ::bs_hook::Il2CppWrapperType)>(&::UnityEngine::Playables::INotificationReceiver::OnNotify)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Playables::INotificationReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotificationReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::Playables::INotificationReceiver::OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification notification, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotificationReceiver>::get(),
                            "OnNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, origin, notification, context);
}
} // end anonymous namespace
