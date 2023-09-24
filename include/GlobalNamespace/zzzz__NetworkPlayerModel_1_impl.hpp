#pragma once
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
/// @brief Convert operator to GlobalNamespace::INetworkPlayer
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::operator GlobalNamespace::INetworkPlayer() const noexcept {
return GlobalNamespace::INetworkPlayer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::__set__playerModel(GlobalNamespace::NetworkPlayerModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NetworkPlayerModel_1<T>>(value));
}
constexpr GlobalNamespace::NetworkPlayerModel_1<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::__get__playerModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::__set__connectedPlayer(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::New_ctor(GlobalNamespace::NetworkPlayerModel_1<T> playerModel, GlobalNamespace::IConnectedPlayer connectedPlayer)  {
GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>(playerModel, connectedPlayer))};
return o;
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::_ctor(GlobalNamespace::NetworkPlayerModel_1<T> playerModel, GlobalNamespace::IConnectedPlayer connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NetworkPlayerModel_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerModel, connectedPlayer);
}
 ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_isMe()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_isMe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_sortIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_sortIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_currentPartySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelSelectionMask, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_isMyPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_isMyPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_connectedPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_connectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_canJoin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_canJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::Join()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_requiresPassword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_requiresPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::Join(::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, password);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_isWaitingOnJoin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_isWaitingOnJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_canInvite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_canInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::Invite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "Invite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_isWaitingOnInvite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_isWaitingOnInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_canKick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_canKick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::Kick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "Kick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_canLeave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_canLeave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::Leave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "Leave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_canBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_canBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::Block()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "Block",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::get_canUnblock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "get_canUnblock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::Unblock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "Unblock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::SendJoinResponse(bool accept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "SendJoinResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, accept);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>::SendInviteResponse(bool accept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(),
                            "SendInviteResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, accept);
}
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::NetworkPlayerModel_1<T>>
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::NetworkPlayerModel_1<T>>() const noexcept {
return GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::NetworkPlayerModel_1<T>>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__set_secret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__set_code(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__get_code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::NetworkPlayerModel_1<T>>
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T>::operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::NetworkPlayerModel_1<T>>() const noexcept {
return GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::NetworkPlayerModel_1<T>>(::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__StartClientPartyConfig<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to GlobalNamespace::INetworkPlayer
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::operator GlobalNamespace::INetworkPlayer() const noexcept {
return GlobalNamespace::INetworkPlayer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__set__playerModel(GlobalNamespace::NetworkPlayerModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NetworkPlayerModel_1<T>>(value));
}
constexpr GlobalNamespace::NetworkPlayerModel_1<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__get__playerModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__set__code(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__get__code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__set__selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__get__selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__set__configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__get__configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__set__currentPlayerCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__get__currentPlayerCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__set__lastUpdateTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::__get__lastUpdateTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::New_ctor(GlobalNamespace::NetworkPlayerModel_1<T> playerModel, ::StringW code, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>(playerModel, code, selectionMask, configuration))};
return o;
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::_ctor(GlobalNamespace::NetworkPlayerModel_1<T> playerModel, ::StringW code, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NetworkPlayerModel_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerModel, code, selectionMask, configuration);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::Update(int32_t currentPlayerCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentPlayerCount);
}
 ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::INetworkPlayer_get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "INetworkPlayer.get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_code()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::INetworkPlayer_get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "INetworkPlayer.get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_serverName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_serverName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_isMe()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_isMe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_currentPartySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelSelectionMask, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_connectedPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_connectedPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_isMyPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_isMyPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_hasTimedOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_hasTimedOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_canJoin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_canJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::Join()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_requiresPassword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_requiresPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::Join(::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, password);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_isWaitingOnJoin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_isWaitingOnJoin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_canInvite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_canInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::Invite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "Invite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_isWaitingOnInvite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_isWaitingOnInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_canKick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_canKick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::Kick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "Kick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_canLeave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_canLeave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::Leave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "Leave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_canBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_canBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::Block()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "Block",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::get_canUnblock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "get_canUnblock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::Unblock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "Unblock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::SendJoinResponse(bool accept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "SendJoinResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, accept);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>::SendInviteResponse(bool accept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>::get(),
                            "SendInviteResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, accept);
}
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IAuthenticationTokenProvider>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::NetworkPlayerModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IAuthenticationTokenProvider> __t__builder, GlobalNamespace::NetworkPlayerModel_1<T> __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IAuthenticationTokenProvider> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IAuthenticationTokenProvider>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IAuthenticationTokenProvider> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__set___4__this(GlobalNamespace::NetworkPlayerModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x10>(this->__instance, std::forward<GlobalNamespace::NetworkPlayerModel_1<T>>(value));
}
constexpr GlobalNamespace::NetworkPlayerModel_1<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>, 0x18>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>, 0x18>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__set___2__current(GlobalNamespace::INetworkPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkPlayer>(value));
}
constexpr GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__set___4__this(GlobalNamespace::NetworkPlayerModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NetworkPlayerModel_1<T>>(value));
}
constexpr GlobalNamespace::NetworkPlayerModel_1<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__set__i_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__get__i_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::INetworkPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__set___2__current(GlobalNamespace::INetworkPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkPlayer>(value));
}
constexpr GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__set___4__this(GlobalNamespace::NetworkPlayerModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NetworkPlayerModel_1<T>>(value));
}
constexpr GlobalNamespace::NetworkPlayerModel_1<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__set___7__wrap1(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::INetworkPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__set_clearCurrentList(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__get_clearCurrentList() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__set___4__this(GlobalNamespace::NetworkPlayerModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NetworkPlayerModel_1<T>>(value));
}
constexpr GlobalNamespace::NetworkPlayerModel_1<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NetworkPlayerModel_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__set_localSelectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__get_localSelectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__set_localConfiguration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__get_localConfiguration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::_Refresh_b__0(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo> servers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>>::get(),
                            "<Refresh>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, servers);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>::_Refresh_b__1(GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c__DisplayClass59_0<T>>::get(),
                            "<Refresh>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>::__set___9(GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T> value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>>::get>(std::forward<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>>(value));
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>>::get>();
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>::__set___9__71_0(System::Comparison_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> value)  {
::cordl_internals::setStaticField<System::Comparison_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>, "<>9__71_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>>::get>(std::forward<System::Comparison_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>>(value));
}
 System::Comparison_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>::__get___9__71_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>, "<>9__71_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>>::get>();
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T> GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>::_PlayerOrderChanged_b__71_0(GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> a, GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1____c<T>>::get(),
                            "<PlayerOrderChanged>b__71_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModel
constexpr  GlobalNamespace::NetworkPlayerModel_1<T>::operator GlobalNamespace::INetworkPlayerModel() const noexcept {
return GlobalNamespace::INetworkPlayerModel(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__platformUserModel(GlobalNamespace::IPlatformUserModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPlatformUserModel, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IPlatformUserModel>(value));
}
constexpr GlobalNamespace::IPlatformUserModel GlobalNamespace::NetworkPlayerModel_1<T>::__get__platformUserModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPlatformUserModel, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__authenticationTokenProviderTask(System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> GlobalNamespace::NetworkPlayerModel_1<T>::__get__authenticationTokenProviderTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__localPlayer(GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> GlobalNamespace::NetworkPlayerModel_1<T>::__get__localPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__networkingFailed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::NetworkPlayerModel_1<T>::__get__networkingFailed() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__masterServerUnreachable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::NetworkPlayerModel_1<T>::__get__masterServerUnreachable() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__currentPlayerCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NetworkPlayerModel_1<T>::__get__currentPlayerCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set_partySizeChangedEvent(System::Action_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<int32_t>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<int32_t>>(value));
}
constexpr System::Action_1<int32_t> GlobalNamespace::NetworkPlayerModel_1<T>::__get_partySizeChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<int32_t>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set_partyRefreshingEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::NetworkPlayerModel_1<T>::__get_partyRefreshingEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayerModel>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> GlobalNamespace::NetworkPlayerModel_1<T>::__get_partyChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayer>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::NetworkPlayerModel_1<T>::__get_joinRequestedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayer>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayer>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::NetworkPlayerModel_1<T>::__get_inviteRequestedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayer>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__partyPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>> GlobalNamespace::NetworkPlayerModel_1<T>::__get__partyPlayers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__publicServers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>> GlobalNamespace::NetworkPlayerModel_1<T>::__get__publicServers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__lastServerRefresh(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NetworkPlayerModel_1<T>::__get__lastServerRefresh() const {
return ::cordl_internals::getInstanceField<float_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__isRefreshing(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::NetworkPlayerModel_1<T>::__get__isRefreshing() const {
return ::cordl_internals::getInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__set__filterChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::NetworkPlayerModel_1<T>::__get__filterChanged() const {
return ::cordl_internals::getInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> GlobalNamespace::NetworkPlayerModel_1<T>::get_authenticationTokenProviderTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "get_authenticationTokenProviderTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::add_partySizeChangedEvent(System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "add_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::remove_partySizeChangedEvent(System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "remove_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::add_partyRefreshingEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "add_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::remove_partyRefreshingEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "remove_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "add_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "remove_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "add_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "remove_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "add_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "remove_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::NetworkPlayerModel_1<T>::get_localPlayerIsPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "get_localPlayerIsPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::NetworkPlayerModel_1<T>::get_hasNetworkingFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "get_hasNetworkingFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::NetworkPlayerModel_1<T>::get_secret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::NetworkPlayerModel_1<T>::get_code()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::NetworkPlayerModel_1<T>::get_partyOwnerId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "get_partyOwnerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::NetworkPlayerModel_1<T>::get_currentPartySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::NetworkPlayerModel_1<T>::get_publicServers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "get_publicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::NetworkPlayerModel_1<T>::get_connectionManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "get_connectionManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::HandlePlatformUserInfoDidChange(GlobalNamespace::UserInfo newInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "HandlePlatformUserInfoDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UserInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newInfo);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T2>
 bool GlobalNamespace::NetworkPlayerModel_1<T>::CreatePartyConnection(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2> config)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                        "CreatePartyConnection",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, config);
}
/// @param secret: ::StringW (default: csnull)
/// @param code: ::StringW (default: csnull)
 GlobalNamespace::IConnectionInitParams_1<T> GlobalNamespace::NetworkPlayerModel_1<T>::GetConnectToServerParams(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, ::StringW code)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "GetConnectToServerParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectionInitParams_1<T>, false>(const_cast<void*>(instance), ___internal_method, selectionMask, configuration, secret, code);
}
 GlobalNamespace::IConnectionInitParams_1<T> GlobalNamespace::NetworkPlayerModel_1<T>::GetStartClientParams(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "GetStartClientParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectionInitParams_1<T>, false>(const_cast<void*>(instance), ___internal_method, selectionMask, configuration);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::RefreshPublicServers(GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask, GlobalNamespace::GameplayServerConfiguration localConfiguration, System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>> onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason> onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "RefreshPublicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, localSelectionMask, localConfiguration, onSuccess, onFailure);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> GlobalNamespace::NetworkPlayerModel_1<T>::InitAuthenticationTokenProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "InitAuthenticationTokenProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::NetworkPlayerModel_1<T>::GetPartyPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "GetPartyPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::NetworkPlayerModel_1<T>::GetOtherPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "GetOtherPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::HandlePlayersChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "HandlePlayersChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::HandleInviteRequested(GlobalNamespace::INetworkPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "HandleInviteRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::HandleJoinRequested(GlobalNamespace::INetworkPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "HandleJoinRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::HandlePartyChanged(GlobalNamespace::INetworkPlayerModel playerModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "HandlePartyChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerModel);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::ResetMasterServerReachability()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "ResetMasterServerReachability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::Connected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::Disconnected(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "Disconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::ConnectionFailed(GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "ConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerConnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "PlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerDisconnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "PlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerStateChanged(GlobalNamespace::IConnectedPlayer connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "PlayerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayer);
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerOrderChanged(GlobalNamespace::IConnectedPlayer connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "PlayerOrderChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayer);
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T> GlobalNamespace::NetworkPlayerModel_1<T>::GetPlayer(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "GetPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkPlayer<T>, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T> GlobalNamespace::NetworkPlayerModel_1<T>::GetServer(::StringW code)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            "GetServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__NetworkPlayerModel_1__NetworkServer<T>, false>(const_cast<void*>(instance), ___internal_method, code);
}
 GlobalNamespace::NetworkPlayerModel_1<T> GlobalNamespace::NetworkPlayerModel_1<T>::New_ctor()  {
GlobalNamespace::NetworkPlayerModel_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::NetworkPlayerModel_1<T>>())};
return o;
}
 void GlobalNamespace::NetworkPlayerModel_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NetworkPlayerModel_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
