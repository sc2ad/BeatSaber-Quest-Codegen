#pragma once
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
 float_t GlobalNamespace::INodePoseSyncStateManager_5::get_syncTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INodePoseSyncStateManager_5>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::INodePoseSyncStateManager_5::get_connectedPlayerCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INodePoseSyncStateManager_5>::get(),
                            "get_connectedPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState> GlobalNamespace::INodePoseSyncStateManager_5::get_localState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INodePoseSyncStateManager_5>::get(),
                            "get_localState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState> GlobalNamespace::INodePoseSyncStateManager_5::GetSyncStateForPlayer(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INodePoseSyncStateManager_5>::get(),
                            "GetSyncStateForPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState>, false>(const_cast<void*>(instance), ___internal_method, player);
}
 GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState> GlobalNamespace::INodePoseSyncStateManager_5::GetSyncState(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INodePoseSyncStateManager_5>::get(),
                            "GetSyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState>, false>(const_cast<void*>(instance), ___internal_method, i);
}
 void GlobalNamespace::INodePoseSyncStateManager_5::ClearBufferedStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INodePoseSyncStateManager_5>::get(),
                            "ClearBufferedStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
