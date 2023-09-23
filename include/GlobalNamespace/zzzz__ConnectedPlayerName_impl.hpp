#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerName_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerName.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerName::*)()>(&GlobalNamespace::ConnectedPlayerName::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20c2ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerName>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectedPlayerName._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerName::*)()>(&GlobalNamespace::ConnectedPlayerName::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c2f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ConnectedPlayerName::__set__nameText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::ConnectedPlayerName::__get__nameText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConnectedPlayerName::__set__connectedPlayer(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::ConnectedPlayerName::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ConnectedPlayerName::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerName>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::ConnectedPlayerName::ConnectedPlayerName()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ConnectedPlayerName>())) {}
 void GlobalNamespace::ConnectedPlayerName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectedPlayerName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
