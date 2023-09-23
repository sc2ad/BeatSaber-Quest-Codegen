#pragma once
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
//  Writing Method size for method: GlobalNamespace::IMultiplayerLevelEndActionsListener.ReportPlayerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerLevelEndActionsListener::*)(GlobalNamespace::MultiplayerLevelCompletionResults)>(&GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IMultiplayerLevelEndActionsListener),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IMultiplayerLevelEndActionsListener>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IMultiplayerLevelEndActionsListener.ReportPlayerNetworkDidFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerLevelEndActionsListener::*)(GlobalNamespace::MultiplayerLevelCompletionResults)>(&GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IMultiplayerLevelEndActionsListener),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IMultiplayerLevelEndActionsListener>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IMultiplayerLevelEndActionsListener>::get(),
                            "ReportPlayerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, results);
}
 void GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed(GlobalNamespace::MultiplayerLevelCompletionResults results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IMultiplayerLevelEndActionsListener>::get(),
                            "ReportPlayerNetworkDidFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, results);
}
