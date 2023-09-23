#pragma once
#include "GlobalNamespace/zzzz__IRichPresencePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
//  Writing Method size for method: GlobalNamespace::IRichPresencePlatformHandler.SetPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IRichPresencePlatformHandler::*)(GlobalNamespace::IRichPresenceData)>(&GlobalNamespace::IRichPresencePlatformHandler::SetPresence)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IRichPresencePlatformHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IRichPresencePlatformHandler>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IRichPresencePlatformHandler.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IRichPresencePlatformHandler::*)()>(&GlobalNamespace::IRichPresencePlatformHandler::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IRichPresencePlatformHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IRichPresencePlatformHandler>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::IRichPresencePlatformHandler::SetPresence(GlobalNamespace::IRichPresenceData richPresenceData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IRichPresencePlatformHandler>::get(),
                            "SetPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IRichPresenceData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, richPresenceData);
}
 void GlobalNamespace::IRichPresencePlatformHandler::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IRichPresencePlatformHandler>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
