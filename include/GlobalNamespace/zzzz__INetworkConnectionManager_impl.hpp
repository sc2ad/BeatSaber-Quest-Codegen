#pragma once
#include "GlobalNamespace/zzzz__INetworkConnectionManager_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsState_def.hpp"
namespace {
//  Writing Method size for method: GlobalNamespace::INetworkConnectionManager.add_onStatisticsUpdatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkConnectionManager::*)(GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate)>(&GlobalNamespace::INetworkConnectionManager::add_onStatisticsUpdatedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkConnectionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::INetworkConnectionManager.remove_onStatisticsUpdatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkConnectionManager::*)(GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate)>(&GlobalNamespace::INetworkConnectionManager::remove_onStatisticsUpdatedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkConnectionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::INetworkConnectionManager.get_port
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::INetworkConnectionManager::*)()>(&GlobalNamespace::INetworkConnectionManager::get_port)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkConnectionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::INetworkConnectionManager.get_isClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkConnectionManager::*)()>(&GlobalNamespace::INetworkConnectionManager::get_isClient)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkConnectionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::INetworkConnectionManager.get_isServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkConnectionManager::*)()>(&GlobalNamespace::INetworkConnectionManager::get_isServer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkConnectionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::INetworkConnectionManager.ConnectToEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkConnectionManager::*)(::StringW, ::StringW, System::Net::IPEndPoint, ::StringW, ::StringW, bool)>(&GlobalNamespace::INetworkConnectionManager::ConnectToEndPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkConnectionManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IConnectionManager
constexpr  GlobalNamespace::INetworkConnectionManager::operator GlobalNamespace::IConnectionManager() const noexcept {
return GlobalNamespace::IConnectionManager(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  GlobalNamespace::INetworkConnectionManager::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::INetworkConnectionManager::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IUnconnectedConnectionManager
constexpr  GlobalNamespace::INetworkConnectionManager::operator GlobalNamespace::IUnconnectedConnectionManager() const noexcept {
return GlobalNamespace::IUnconnectedConnectionManager(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IUnconnectedMessageSender
constexpr  GlobalNamespace::INetworkConnectionManager::operator GlobalNamespace::IUnconnectedMessageSender() const noexcept {
return GlobalNamespace::IUnconnectedMessageSender(::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::INetworkConnectionManager::add_onStatisticsUpdatedEvent(GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                            "add_onStatisticsUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::INetworkConnectionManager::remove_onStatisticsUpdatedEvent(GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                            "remove_onStatisticsUpdatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::INetworkConnectionManager::get_port()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                            "get_port",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::INetworkConnectionManager::get_isClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                            "get_isClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::INetworkConnectionManager::get_isServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                            "get_isServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::INetworkConnectionManager::ConnectToEndPoint(::StringW userId, ::StringW userName, System::Net::IPEndPoint remoteEndPoint, ::StringW remoteUserId, ::StringW remoteUserName, bool remoteUserIsConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkConnectionManager>::get(),
                            "ConnectToEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, userName, remoteEndPoint, remoteUserId, remoteUserName, remoteUserIsConnectionOwner);
}
} // end anonymous namespace
