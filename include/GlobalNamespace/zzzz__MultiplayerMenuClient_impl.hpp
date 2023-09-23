#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerMenuClient_def.hpp"
#include "GlobalNamespace/zzzz__MenuPlayerController_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerMenuClient.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerMenuClient::*)()>(&GlobalNamespace::MultiplayerMenuClient::LateUpdate)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x214f990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerMenuClient>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerMenuClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerMenuClient::*)()>(&GlobalNamespace::MultiplayerMenuClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214fd08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerMenuClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerMenuClient::__set__menuPlayerController(GlobalNamespace::MenuPlayerController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MenuPlayerController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MenuPlayerController>(value));
}
constexpr GlobalNamespace::MenuPlayerController GlobalNamespace::MultiplayerMenuClient::__get__menuPlayerController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MenuPlayerController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerMenuClient::__set__nodePoseSyncStateManager(GlobalNamespace::INodePoseSyncStateManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INodePoseSyncStateManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INodePoseSyncStateManager>(value));
}
constexpr GlobalNamespace::INodePoseSyncStateManager GlobalNamespace::MultiplayerMenuClient::__get__nodePoseSyncStateManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INodePoseSyncStateManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerMenuClient::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerMenuClient>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerMenuClient::MultiplayerMenuClient()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerMenuClient>())) {}
 void GlobalNamespace::MultiplayerMenuClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerMenuClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
