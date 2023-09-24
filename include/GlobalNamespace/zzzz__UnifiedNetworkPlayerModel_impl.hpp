#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__PartyMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__LocalNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::GameLift{0};
constexpr GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::Platform{1};
constexpr GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::LocalNetwork{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2214df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>
constexpr  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>() const noexcept {
return GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_secret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_code(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::New_ctor()  {
GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2214b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>
constexpr  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig::operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>() const noexcept {
return GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig::__set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig::__set_configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig::New_ctor()  {
GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22149ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2215554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x22155a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2215c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2215d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.__m__Finally3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__m__Finally3)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2215de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "<>m__Finally3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPlayer (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2215e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2215e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2215edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2215ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::*)()>(&GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2215f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__set___2__current(GlobalNamespace::INetworkPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkPlayer>(value));
}
constexpr GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__get___2__current() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__set___4__this(GlobalNamespace::UnifiedNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::UnifiedNetworkPlayerModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::UnifiedNetworkPlayerModel>(value));
}
constexpr GlobalNamespace::UnifiedNetworkPlayerModel GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::UnifiedNetworkPlayerModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__set___7__wrap1(System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71 GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::__m__Finally3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "<>m__Finally3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::INetworkPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerCreatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22126e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerCreatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2212794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerDestroyedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2212844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerDestroyedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22128f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.add_partySizeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<int32_t>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22129a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.remove_partySizeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<int32_t>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2212a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.add_partyRefreshingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action)>(&GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2212b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyRefreshingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action)>(&GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2212ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.add_partyChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2212c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2212cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.add_joinRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2212d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.remove_joinRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2212e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.add_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2212efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.remove_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer>)>(&GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2212fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPlayerModel (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x221305c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_activeNetworkPlayerModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModelType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2213098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_activeNetworkPlayerModelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_localPlayerIsPartyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22130a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_localPlayerIsPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_hasNetworkingFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x221317c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_hasNetworkingFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_currentPartySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2213258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2213328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x221341c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_secret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_secret)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2213510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_code
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_code)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2213534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_connectedPlayerManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2213558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_connectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_publicServers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2213628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_publicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_friends
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_friends)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2213670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_friends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_localNetworkPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_localNetworkPlayers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2213694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_localNetworkPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_discoveryEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22136b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.set_discoveryEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x221377c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "set_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_enableFriends
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_enableFriends)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2213854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_enableFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.set_enableFriends
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::set_enableFriends)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2213878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "set_enableFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_enableLocalNetwork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_enableLocalNetwork)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2213c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_enableLocalNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.set_enableLocalNetwork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::set_enableLocalNetwork)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2213c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "set_enableLocalNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::Initialize)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x2213cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::Dispose)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x2214290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_partyPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2214864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_partyPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.get_otherPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2214934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_otherPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.SetServerFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x22149e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "SetServerFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.RefreshAlternateDiscoveryModels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::RefreshAlternateDiscoveryModels)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x22138ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "RefreshAlternateDiscoveryModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandlePlayersChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2214b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandlePlayersChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandleInviteRequested
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(GlobalNamespace::INetworkPlayer)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2214b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleInviteRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandleJoinRequested
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(GlobalNamespace::INetworkPlayer)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2214bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleJoinRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(GlobalNamespace::INetworkPlayerModel)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2214bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandlePartyChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartySizeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(int32_t)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2214bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandlePartySizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyRefreshing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2214c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandlePartyRefreshing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandleLocalPlayerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandleLocalPlayerConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2214c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleLocalPlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandleFriendConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2214ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleFriendConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandleLocalPlayerConnectToMasterServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(::StringW)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandleLocalPlayerConnectToMasterServer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2214d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleLocalPlayerConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandleFriendConnectToMasterServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(::StringW)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnectToMasterServer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2214dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleFriendConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(GlobalNamespace::INetworkPlayerModel)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2214ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleConnectedPlayerManagerCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(GlobalNamespace::INetworkPlayerModel)>(&GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2215320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleConnectedPlayerManagerDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.ResetMasterServerReachability
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22153f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "ResetMasterServerReachability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.DestroyPartyConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2215440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "DestroyPartyConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel.SetActiveNetworkPlayerModelType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType)>(&GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2215510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "SetActiveNetworkPlayerModelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnifiedNetworkPlayerModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221554c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IUnifiedNetworkPlayerModel
constexpr  GlobalNamespace::UnifiedNetworkPlayerModel::operator GlobalNamespace::IUnifiedNetworkPlayerModel() const noexcept {
return GlobalNamespace::IUnifiedNetworkPlayerModel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModel
constexpr  GlobalNamespace::UnifiedNetworkPlayerModel::operator GlobalNamespace::INetworkPlayerModel() const noexcept {
return GlobalNamespace::INetworkPlayerModel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IInitializable
constexpr  GlobalNamespace::UnifiedNetworkPlayerModel::operator Zenject::IInitializable() const noexcept {
return Zenject::IInitializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::UnifiedNetworkPlayerModel::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__gameLiftNetworkPlayerModel(GlobalNamespace::GameLiftNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameLiftNetworkPlayerModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameLiftNetworkPlayerModel>(value));
}
constexpr GlobalNamespace::GameLiftNetworkPlayerModel GlobalNamespace::UnifiedNetworkPlayerModel::__get__gameLiftNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameLiftNetworkPlayerModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__platformNetworkPlayerModel(GlobalNamespace::PlatformNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlatformNetworkPlayerModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlatformNetworkPlayerModel>(value));
}
constexpr GlobalNamespace::PlatformNetworkPlayerModel GlobalNamespace::UnifiedNetworkPlayerModel::__get__platformNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlatformNetworkPlayerModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__localNetworkPlayerModel(GlobalNamespace::LocalNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LocalNetworkPlayerModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LocalNetworkPlayerModel>(value));
}
constexpr GlobalNamespace::LocalNetworkPlayerModel GlobalNamespace::UnifiedNetworkPlayerModel::__get__localNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LocalNetworkPlayerModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayerModel>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerCreatedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayerModel>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerDestroyedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_partySizeChangedEvent(System::Action_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<int32_t>>(value));
}
constexpr System::Action_1<int32_t> GlobalNamespace::UnifiedNetworkPlayerModel::__get_partySizeChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_partyRefreshingEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyRefreshingEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayerModel>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayer>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::UnifiedNetworkPlayerModel::__get_joinRequestedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayer>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayer>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::UnifiedNetworkPlayerModel::__get_inviteRequestedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayer>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__partyMessageHandler(GlobalNamespace::PartyMessageHandler value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PartyMessageHandler, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PartyMessageHandler>(value));
}
constexpr GlobalNamespace::PartyMessageHandler GlobalNamespace::UnifiedNetworkPlayerModel::__get__partyMessageHandler() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PartyMessageHandler, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__friendPartyMessageHandler(GlobalNamespace::PartyMessageHandler value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PartyMessageHandler, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PartyMessageHandler>(value));
}
constexpr GlobalNamespace::PartyMessageHandler GlobalNamespace::UnifiedNetworkPlayerModel::__get__friendPartyMessageHandler() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PartyMessageHandler, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__localNetworkPartyMessageHandler(GlobalNamespace::PartyMessageHandler value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PartyMessageHandler, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PartyMessageHandler>(value));
}
constexpr GlobalNamespace::PartyMessageHandler GlobalNamespace::UnifiedNetworkPlayerModel::__get__localNetworkPartyMessageHandler() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PartyMessageHandler, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__activeNetworkPlayerModelType(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel::__get__activeNetworkPlayerModelType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent(System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent(System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "add_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "remove_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::INetworkPlayerModel GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_activeNetworkPlayerModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::INetworkPlayerModel, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_activeNetworkPlayerModelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_localPlayerIsPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_hasNetworkingFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelSelectionMask, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayServerConfiguration GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_secret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_code()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ConnectedPlayerManager GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_connectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ConnectedPlayerManager, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_publicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::UnifiedNetworkPlayerModel::get_friends()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_friends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::UnifiedNetworkPlayerModel::get_localNetworkPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_localNetworkPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "set_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::UnifiedNetworkPlayerModel::get_enableFriends()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_enableFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::set_enableFriends(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "set_enableFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::UnifiedNetworkPlayerModel::get_enableLocalNetwork()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_enableLocalNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::set_enableLocalNetwork(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "set_enableLocalNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_partyPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "get_otherPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "SetServerFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectionMask, configuration);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::RefreshAlternateDiscoveryModels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "RefreshAlternateDiscoveryModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandlePlayersChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested(GlobalNamespace::INetworkPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleInviteRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested(GlobalNamespace::INetworkPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleJoinRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged(GlobalNamespace::INetworkPlayerModel playerModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandlePartyChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerModel);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandlePartySizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandlePartyRefreshing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandleLocalPlayerConnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleLocalPlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleFriendConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandleLocalPlayerConnectToMasterServer(::StringW secret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleLocalPlayerConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secret);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnectToMasterServer(::StringW secret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleFriendConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secret);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated(GlobalNamespace::INetworkPlayerModel networkPlayerModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleConnectedPlayerManagerCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, networkPlayerModel);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed(GlobalNamespace::INetworkPlayerModel networkPlayerModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "HandleConnectedPlayerManagerDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, networkPlayerModel);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "ResetMasterServerReachability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 bool GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConnection(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T> partyConfig)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                        "CreatePartyConnection",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, partyConfig);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "DestroyPartyConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType activeNetworkPlayerModelType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            "SetActiveNetworkPlayerModelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, activeNetworkPlayerModelType);
}
 GlobalNamespace::UnifiedNetworkPlayerModel GlobalNamespace::UnifiedNetworkPlayerModel::New_ctor()  {
GlobalNamespace::UnifiedNetworkPlayerModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UnifiedNetworkPlayerModel>())};
return o;
}
 void GlobalNamespace::UnifiedNetworkPlayerModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnifiedNetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
