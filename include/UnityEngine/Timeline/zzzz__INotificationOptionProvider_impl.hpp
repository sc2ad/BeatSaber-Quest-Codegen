#pragma once
#include "UnityEngine/Timeline/zzzz__INotificationOptionProvider_def.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::INotificationOptionProvider.get_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::NotificationFlags (UnityEngine::Timeline::INotificationOptionProvider::*)()>(&UnityEngine::Timeline::INotificationOptionProvider::get_flags)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::INotificationOptionProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::INotificationOptionProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::Timeline::NotificationFlags UnityEngine::Timeline::INotificationOptionProvider::get_flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::INotificationOptionProvider>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::NotificationFlags, false>(const_cast<void*>(instance), ___internal_method);
}
