#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactiveClient_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalInactiveClient.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactiveClient::*)()>(&GlobalNamespace::MultiplayerLocalInactiveClient::LateUpdate)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x20e81b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalInactiveClient>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalInactiveClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactiveClient::*)()>(&GlobalNamespace::MultiplayerLocalInactiveClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e8500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalInactiveClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLocalInactiveClient::__set__playerTransforms(GlobalNamespace::PlayerTransforms value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerTransforms, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerTransforms>(value));
}
constexpr GlobalNamespace::PlayerTransforms GlobalNamespace::MultiplayerLocalInactiveClient::__get__playerTransforms() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerTransforms, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalInactiveClient::__set__nodePoseSyncStateManager(GlobalNamespace::INodePoseSyncStateManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INodePoseSyncStateManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INodePoseSyncStateManager>(value));
}
constexpr GlobalNamespace::INodePoseSyncStateManager GlobalNamespace::MultiplayerLocalInactiveClient::__get__nodePoseSyncStateManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INodePoseSyncStateManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerLocalInactiveClient::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalInactiveClient>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MultiplayerLocalInactiveClient GlobalNamespace::MultiplayerLocalInactiveClient::New_ctor()  {
GlobalNamespace::MultiplayerLocalInactiveClient o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerLocalInactiveClient>())};
return o;
}
 void GlobalNamespace::MultiplayerLocalInactiveClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalInactiveClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
