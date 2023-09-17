#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelItem_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelController::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2276410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelController::Update)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x227649c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22769b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerLeaderboardPanelController::__set__items(::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem> ::GlobalNamespace::MultiplayerLeaderboardPanelController::__get__items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLeaderboardPanelController::__set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerScoreProvider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerScoreProvider>(value));
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider ::GlobalNamespace::MultiplayerLeaderboardPanelController::__get__scoreProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerScoreProvider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MultiplayerLeaderboardPanelController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerLeaderboardPanelController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerLeaderboardPanelController::MultiplayerLeaderboardPanelController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLeaderboardPanelController>())) {}
 void ::GlobalNamespace::MultiplayerLeaderboardPanelController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
