#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x21014e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2101534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IConnectedPlayer>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::MultiplayerResultsPyramidViewAvatarInstaller()  : ::Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<MultiplayerResultsPyramidViewAvatarInstaller>())) {}
 void ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
