#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayerPauseOnInputFocusLost_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
//  Writing Method size for method: GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x20bec88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x20beedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.HandleInputFocusCaptured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x20bee98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            "HandleInputFocusCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.HandleInputFocusReleased
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x20bf080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            "HandleInputFocusReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bf0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__set__songPreviewPlayer(GlobalNamespace::AudioPlayerBase value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioPlayerBase, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioPlayerBase>(value));
}
constexpr GlobalNamespace::AudioPlayerBase GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__songPreviewPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioPlayerBase, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IVRPlatformHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr GlobalNamespace::IVRPlatformHelper GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IVRPlatformHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            "HandleInputFocusCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            "HandleInputFocusReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::New_ctor()  {
GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>())};
return o;
}
 void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
