#pragma once
namespace {
#include "GlobalNamespace/zzzz__ISonyPlatformManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISonyPlatformManager.get_userAccountId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::ISonyPlatformManager::*)()>(&::GlobalNamespace::ISonyPlatformManager::get_userAccountId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ISonyPlatformManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPlatformManager>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISonyPlatformManager.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ISonyPlatformManager::*)()>(&::GlobalNamespace::ISonyPlatformManager::get_userId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ISonyPlatformManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPlatformManager>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISonyPlatformManager.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ISonyPlatformManager::*)()>(&::GlobalNamespace::ISonyPlatformManager::get_userName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ISonyPlatformManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPlatformManager>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISonyPlatformManager.get_initializationTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::ISonyPlatformManager::*)()>(&::GlobalNamespace::ISonyPlatformManager::get_initializationTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ISonyPlatformManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPlatformManager>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 uint64_t ::GlobalNamespace::ISonyPlatformManager::get_userAccountId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPlatformManager>::get(),
                            "get_userAccountId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::ISonyPlatformManager::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPlatformManager>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::ISonyPlatformManager::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPlatformManager>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::ISonyPlatformManager::get_initializationTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPlatformManager>::get(),
                            "get_initializationTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
