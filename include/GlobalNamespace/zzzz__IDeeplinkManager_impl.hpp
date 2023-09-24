#pragma once
#include "GlobalNamespace/zzzz__IDeeplinkManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__Deeplink_def.hpp"
//  Writing Method size for method: GlobalNamespace::IDeeplinkManager.add_didReceiveDeeplinkEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IDeeplinkManager::*)(System::Action_1<GlobalNamespace::Deeplink>)>(&GlobalNamespace::IDeeplinkManager::add_didReceiveDeeplinkEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IDeeplinkManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IDeeplinkManager>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IDeeplinkManager.remove_didReceiveDeeplinkEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IDeeplinkManager::*)(System::Action_1<GlobalNamespace::Deeplink>)>(&GlobalNamespace::IDeeplinkManager::remove_didReceiveDeeplinkEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IDeeplinkManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IDeeplinkManager>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IDeeplinkManager.get_currentDeeplink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::Deeplink (GlobalNamespace::IDeeplinkManager::*)()>(&GlobalNamespace::IDeeplinkManager::get_currentDeeplink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IDeeplinkManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IDeeplinkManager>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::IDeeplinkManager::add_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IDeeplinkManager>::get(),
                            "add_didReceiveDeeplinkEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::Deeplink>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IDeeplinkManager::remove_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IDeeplinkManager>::get(),
                            "remove_didReceiveDeeplinkEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::Deeplink>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::Deeplink GlobalNamespace::IDeeplinkManager::get_currentDeeplink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IDeeplinkManager>::get(),
                            "get_currentDeeplink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::Deeplink, false>(const_cast<void*>(instance), ___internal_method);
}
