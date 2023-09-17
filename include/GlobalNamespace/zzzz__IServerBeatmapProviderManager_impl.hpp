#pragma once
namespace {
#include "GlobalNamespace/zzzz__IServerBeatmapProviderManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProviderManager.GetServerBeatmapProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IServerBeatmapProvider (::GlobalNamespace::IServerBeatmapProviderManager::*)()>(&::GlobalNamespace::IServerBeatmapProviderManager::GetServerBeatmapProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IServerBeatmapProviderManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProviderManager>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProviderManager.RefreshAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::IServerBeatmapProviderManager::*)()>(&::GlobalNamespace::IServerBeatmapProviderManager::RefreshAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IServerBeatmapProviderManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProviderManager>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::IServerBeatmapProviderManager::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::IServerBeatmapProvider ::GlobalNamespace::IServerBeatmapProviderManager::GetServerBeatmapProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProviderManager>::get(),
                            "GetServerBeatmapProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IServerBeatmapProvider, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::IServerBeatmapProviderManager::RefreshAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProviderManager>::get(),
                            "RefreshAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
