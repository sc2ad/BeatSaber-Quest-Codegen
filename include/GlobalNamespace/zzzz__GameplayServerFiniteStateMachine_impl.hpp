#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__GameState_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__GameplayRpcManager_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__MenuRpcManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::*)(::BGNet::Core::ITaskUtility, ::GlobalNamespace::IMultiplayerSessionManager, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::GlobalNamespace::IServerBeatmapProvider)>(&::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xdaf0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IServerBeatmapProvider>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "taskUtility", ty: "::BGNet::Core::ITaskUtility", modifiers: "", def_value: Some("csnull") }, CppParam { name: "multiplayerSessionManager", ty: "::GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: Some("csnull") }, CppParam { name: "creatorId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "selectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "configuration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapProvider", ty: "::GlobalNamespace::IServerBeatmapProvider", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams(::BGNet::Core::ITaskUtility taskUtility, ::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, ::StringW creatorId, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::GlobalNamespace::IServerBeatmapProvider beatmapProvider) noexcept : ::bs_hook::ValueTypeWrapper() {this->taskUtility = taskUtility;
this->multiplayerSessionManager = multiplayerSessionManager;
this->creatorId = creatorId;
this->selectionMask = selectionMask;
this->configuration = configuration;
this->beatmapProvider = beatmapProvider;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__set_taskUtility(::BGNet::Core::ITaskUtility value)  {
::cordl_internals::setInstanceField<::BGNet::Core::ITaskUtility, 0x0>(this->__instance, std::forward<::BGNet::Core::ITaskUtility>(value));
}
constexpr ::BGNet::Core::ITaskUtility ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__get_taskUtility() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITaskUtility, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager, 0x8>(this->__instance, std::forward<::GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__get_multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__set_creatorId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__get_creatorId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x18>(this->__instance, std::forward<::GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__set_configuration(::GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x30>(this->__instance, std::forward<::GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr ::GlobalNamespace::GameplayServerConfiguration ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__get_configuration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__set_beatmapProvider(::GlobalNamespace::IServerBeatmapProvider value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IServerBeatmapProvider, 0x48>(this->__instance, std::forward<::GlobalNamespace::IServerBeatmapProvider>(value));
}
constexpr ::GlobalNamespace::IServerBeatmapProvider ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::__get_beatmapProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IServerBeatmapProvider, 0x48>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams::_ctor(::BGNet::Core::ITaskUtility taskUtility, ::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, ::StringW creatorId, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::GlobalNamespace::IServerBeatmapProvider beatmapProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IServerBeatmapProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, taskUtility, multiplayerSessionManager, creatorId, selectionMask, configuration, beatmapProvider);
}
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_taskUtility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::ITaskUtility (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&::GlobalNamespace::GameplayServerFiniteStateMachine::get_taskUtility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_taskUtility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_taskUtility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::BGNet::Core::ITaskUtility)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::set_taskUtility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_taskUtility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_multiplayerSessionManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IMultiplayerSessionManager (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&::GlobalNamespace::GameplayServerFiniteStateMachine::get_multiplayerSessionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_multiplayerSessionManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_multiplayerSessionManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::IMultiplayerSessionManager)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::set_multiplayerSessionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_multiplayerSessionManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_ownerUserId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&::GlobalNamespace::GameplayServerFiniteStateMachine::get_ownerUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_ownerUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_ownerUserId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::StringW)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::set_ownerUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_ownerUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&::GlobalNamespace::GameplayServerFiniteStateMachine::get_selectionMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdaf058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::set_selectionMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdaf06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&::GlobalNamespace::GameplayServerFiniteStateMachine::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdaf080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::set_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdaf094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_beatmapProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IServerBeatmapProvider (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&::GlobalNamespace::GameplayServerFiniteStateMachine::get_beatmapProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_beatmapProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_beatmapProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::IServerBeatmapProvider)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::set_beatmapProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_beatmapProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IServerBeatmapProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_menuRpcManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuRpcManager (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&::GlobalNamespace::GameplayServerFiniteStateMachine::get_menuRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_menuRpcManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_menuRpcManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::MenuRpcManager)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::set_menuRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_menuRpcManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuRpcManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_gameplayRpcManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayRpcManager (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&::GlobalNamespace::GameplayServerFiniteStateMachine::get_gameplayRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_gameplayRpcManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_gameplayRpcManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::GameplayRpcManager)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::set_gameplayRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaf0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_gameplayRpcManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayRpcManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xdaef0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set__taskUtility_k__BackingField(::BGNet::Core::ITaskUtility value)  {
::cordl_internals::setInstanceField<::BGNet::Core::ITaskUtility, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::BGNet::Core::ITaskUtility>(value));
}
constexpr ::BGNet::Core::ITaskUtility ::GlobalNamespace::GameplayServerFiniteStateMachine::__get__taskUtility_k__BackingField() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITaskUtility, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set__multiplayerSessionManager_k__BackingField(::GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager ::GlobalNamespace::GameplayServerFiniteStateMachine::__get__multiplayerSessionManager_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set__ownerUserId_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::GameplayServerFiniteStateMachine::__get__ownerUserId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set__selectionMask_k__BackingField(::GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask ::GlobalNamespace::GameplayServerFiniteStateMachine::__get__selectionMask_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set__configuration_k__BackingField(::GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr ::GlobalNamespace::GameplayServerConfiguration ::GlobalNamespace::GameplayServerFiniteStateMachine::__get__configuration_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set__beatmapProvider_k__BackingField(::GlobalNamespace::IServerBeatmapProvider value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IServerBeatmapProvider, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IServerBeatmapProvider>(value));
}
constexpr ::GlobalNamespace::IServerBeatmapProvider ::GlobalNamespace::GameplayServerFiniteStateMachine::__get__beatmapProvider_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IServerBeatmapProvider, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set__menuRpcManager_k__BackingField(::GlobalNamespace::MenuRpcManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuRpcManager, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MenuRpcManager>(value));
}
constexpr ::GlobalNamespace::MenuRpcManager ::GlobalNamespace::GameplayServerFiniteStateMachine::__get__menuRpcManager_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuRpcManager, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set__gameplayRpcManager_k__BackingField(::GlobalNamespace::GameplayRpcManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayRpcManager, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayRpcManager>(value));
}
constexpr ::GlobalNamespace::GameplayRpcManager ::GlobalNamespace::GameplayServerFiniteStateMachine::__get__gameplayRpcManager_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayRpcManager, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set_state(::GlobalNamespace::GameState value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameState, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameState>(value));
}
constexpr ::GlobalNamespace::GameState ::GlobalNamespace::GameplayServerFiniteStateMachine::__get_state() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameState, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameplayServerFiniteStateMachine::__set_enteringState(bool value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::GameplayServerFiniteStateMachine::__get_enteringState() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::BGNet::Core::ITaskUtility ::GlobalNamespace::GameplayServerFiniteStateMachine::get_taskUtility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_taskUtility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BGNet::Core::ITaskUtility, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameplayServerFiniteStateMachine::set_taskUtility(::BGNet::Core::ITaskUtility value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_taskUtility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::IMultiplayerSessionManager ::GlobalNamespace::GameplayServerFiniteStateMachine::get_multiplayerSessionManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_multiplayerSessionManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMultiplayerSessionManager, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameplayServerFiniteStateMachine::set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_multiplayerSessionManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::GlobalNamespace::GameplayServerFiniteStateMachine::get_ownerUserId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_ownerUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameplayServerFiniteStateMachine::set_ownerUserId(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_ownerUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::BeatmapLevelSelectionMask ::GlobalNamespace::GameplayServerFiniteStateMachine::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameplayServerFiniteStateMachine::set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::GameplayServerConfiguration ::GlobalNamespace::GameplayServerFiniteStateMachine::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameplayServerFiniteStateMachine::set_configuration(::GlobalNamespace::GameplayServerConfiguration value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::IServerBeatmapProvider ::GlobalNamespace::GameplayServerFiniteStateMachine::get_beatmapProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_beatmapProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IServerBeatmapProvider, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameplayServerFiniteStateMachine::set_beatmapProvider(::GlobalNamespace::IServerBeatmapProvider value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_beatmapProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IServerBeatmapProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::MenuRpcManager ::GlobalNamespace::GameplayServerFiniteStateMachine::get_menuRpcManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_menuRpcManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuRpcManager, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameplayServerFiniteStateMachine::set_menuRpcManager(::GlobalNamespace::MenuRpcManager value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_menuRpcManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuRpcManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::GameplayRpcManager ::GlobalNamespace::GameplayServerFiniteStateMachine::get_gameplayRpcManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "get_gameplayRpcManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayRpcManager, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameplayServerFiniteStateMachine::set_gameplayRpcManager(::GlobalNamespace::GameplayRpcManager value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            "set_gameplayRpcManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayRpcManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "initParams", ty: "::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams", modifiers: "", def_value: None }]
 ::GlobalNamespace::GameplayServerFiniteStateMachine::GameplayServerFiniteStateMachine(::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GameplayServerFiniteStateMachine>(initParams))) {}
 void ::GlobalNamespace::GameplayServerFiniteStateMachine::_ctor(::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initParams);
}
} // end anonymous namespace
