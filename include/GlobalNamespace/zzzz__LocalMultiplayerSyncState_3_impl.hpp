#pragma once
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_impl.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__LocalStateBuffer_3_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::__set__player(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::__get__player() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::__set__stateBuffer(GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>(value));
}
constexpr GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::__get__stateBuffer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param smoother: GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> (default: csnull)
 GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::New_ctor(GlobalNamespace::IConnectedPlayer player, float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> smoother)  {
GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>(player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother))};
return o;
}
/// @param smoother: GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> (default: csnull)
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::_ctor(GlobalNamespace::IConnectedPlayer player, float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template<typename T>
 bool GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::TryGetSerializedState(GlobalNamespace::IPacketPool_1<T> pool, ByRef<T> serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                        "TryGetSerializedState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPacketPool_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pool, serializable);
}
template<typename T>
 bool GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::TryGetSerializedStateDelta(GlobalNamespace::IPacketPool_1<T> pool, ByRef<T> serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                        "TryGetSerializedStateDelta",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPacketPool_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pool, serializable);
}
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::SetCurrentTime(float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                            "SetCurrentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::SetState(System::Int32Enum type, TState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, state);
}
 TState GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::GetState(System::Int32Enum type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TState, false>(const_cast<void*>(instance), ___internal_method, type);
}
 TState GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::get_Item(System::Int32Enum t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TState, false>(const_cast<void*>(instance), ___internal_method, t);
}
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>::set_Item(System::Int32Enum t, TState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t, value);
}
//  Writing Method size for method: GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>.get_stateBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> (GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::*)()>(&GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::get_stateBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>.get_player
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer (GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::*)()>(&GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::get_player)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::*)(GlobalNamespace::IConnectedPlayer, float_t, float_t, int32_t, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>)>(&GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>.SetDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::*)()>(&GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::SetDirty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>.SetCurrentTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::*)(float_t)>(&GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::SetCurrentTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "SetCurrentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>.SetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::*)(System::Int32Enum, GlobalNamespace::PoseSerializable)>(&GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::SetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>.GetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PoseSerializable (GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::*)(System::Int32Enum)>(&GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::GetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PoseSerializable (GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::*)(System::Int32Enum)>(&GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::*)(System::Int32Enum, GlobalNamespace::PoseSerializable)>(&GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::set_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PoseSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::__set__player(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::__get__player() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::__set__stateBuffer(GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>(value));
}
constexpr GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::__get__stateBuffer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IConnectedPlayer GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param smoother: GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> (default: csnull)
 GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::New_ctor(GlobalNamespace::IConnectedPlayer player, float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother)  {
GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>(player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother))};
return o;
}
/// @param smoother: GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> (default: csnull)
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::_ctor(GlobalNamespace::IConnectedPlayer player, float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template<typename T>
 bool GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::TryGetSerializedState(GlobalNamespace::IPacketPool_1<T> pool, ByRef<T> serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                        "TryGetSerializedState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPacketPool_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pool, serializable);
}
template<typename T>
 bool GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::TryGetSerializedStateDelta(GlobalNamespace::IPacketPool_1<T> pool, ByRef<T> serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                        "TryGetSerializedStateDelta",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPacketPool_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pool, serializable);
}
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::SetCurrentTime(float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "SetCurrentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::SetState(System::Int32Enum type, GlobalNamespace::PoseSerializable state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, state);
}
 GlobalNamespace::PoseSerializable GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::GetState(System::Int32Enum type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PoseSerializable, false>(const_cast<void*>(instance), ___internal_method, type);
}
 GlobalNamespace::PoseSerializable GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::get_Item(System::Int32Enum t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PoseSerializable, false>(const_cast<void*>(instance), ___internal_method, t);
}
 void GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>::set_Item(System::Int32Enum t, GlobalNamespace::PoseSerializable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t, value);
}
