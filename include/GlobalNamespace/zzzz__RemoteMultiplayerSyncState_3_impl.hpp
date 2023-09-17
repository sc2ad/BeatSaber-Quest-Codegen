#pragma once
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__RemoteMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RemoteStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>.get_stateBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> (::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::*)()>(&::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::get_stateBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>.get_player
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer (::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::*)()>(&::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::get_player)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::*)(::GlobalNamespace::IConnectedPlayer, int32_t, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>)>(&::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::__set__player(::GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IConnectedPlayer>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::__get__player() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::__set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>(value));
}
constexpr ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::__get__stateBuffer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IConnectedPlayer ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::UpdateState(T serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get(),
                        "UpdateState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializable);
}
template<typename T>
 void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::UpdateDelta(T serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get(),
                        "UpdateDelta",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializable);
}
// Ctor Parameters [CppParam { name: "player", ty: "::GlobalNamespace::IConnectedPlayer", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interpolator", ty: "::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>", modifiers: "", def_value: None }, CppParam { name: "smoother", ty: "::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>", modifiers: "", def_value: Some("csnull") }]
 ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::RemoteMultiplayerSyncState_3(::GlobalNamespace::IConnectedPlayer player, int32_t size, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> interpolator, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> smoother)  : ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>(THROW_UNLESS(::il2cpp_utils::New<RemoteMultiplayerSyncState_3>(player, size, interpolator, smoother))) {}
/// @param smoother: ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> (default: csnull)
 void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>::_ctor(::GlobalNamespace::IConnectedPlayer player, int32_t size, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> interpolator, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player, size, interpolator, smoother);
}
//  Writing Method size for method: ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>.get_stateBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> (::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::*)()>(&::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::get_stateBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>.get_player
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer (::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::*)()>(&::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::get_player)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::*)(::GlobalNamespace::IConnectedPlayer, int32_t, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>)>(&::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::__set__player(::GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IConnectedPlayer>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::__get__player() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::__set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>(value));
}
constexpr ::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::__get__stateBuffer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RemoteStateBuffer_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::get_stateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get(),
                            "get_stateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IConnectedPlayer ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::get_player()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get(),
                            "get_player",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::UpdateState(T serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get(),
                        "UpdateState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializable);
}
template<typename T>
 void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::UpdateDelta(T serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get(),
                        "UpdateDelta",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializable);
}
// Ctor Parameters [CppParam { name: "player", ty: "::GlobalNamespace::IConnectedPlayer", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interpolator", ty: "::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>", modifiers: "", def_value: None }, CppParam { name: "smoother", ty: "::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>", modifiers: "", def_value: Some("csnull") }]
 ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::RemoteMultiplayerSyncState_3(::GlobalNamespace::IConnectedPlayer player, int32_t size, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> interpolator, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> smoother)  : ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>(THROW_UNLESS(::il2cpp_utils::New<RemoteMultiplayerSyncState_3>(player, size, interpolator, smoother))) {}
/// @param smoother: ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> (default: csnull)
 void ::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>::_ctor(::GlobalNamespace::IConnectedPlayer player, int32_t size, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> interpolator, ::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player, size, interpolator, smoother);
}
} // end anonymous namespace
