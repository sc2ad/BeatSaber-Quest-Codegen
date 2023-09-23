#pragma once
#include "GlobalNamespace/zzzz__IInvitePlatformHandler_def.hpp"
//  Writing Method size for method: GlobalNamespace::IInvitePlatformHandler.get_isSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IInvitePlatformHandler::*)()>(&GlobalNamespace::IInvitePlatformHandler::get_isSupported)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IInvitePlatformHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IInvitePlatformHandler>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IInvitePlatformHandler.OpenInvitePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IInvitePlatformHandler::*)()>(&GlobalNamespace::IInvitePlatformHandler::OpenInvitePanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IInvitePlatformHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IInvitePlatformHandler>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 bool GlobalNamespace::IInvitePlatformHandler::get_isSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IInvitePlatformHandler>::get(),
                            "get_isSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IInvitePlatformHandler::OpenInvitePanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IInvitePlatformHandler>::get(),
                            "OpenInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
