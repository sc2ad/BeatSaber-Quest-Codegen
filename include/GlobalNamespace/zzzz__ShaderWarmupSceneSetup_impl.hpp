#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::ShaderWarmupSceneSetup.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShaderWarmupSceneSetup::*)()>(&GlobalNamespace::ShaderWarmupSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x21d3bd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ShaderWarmupSceneSetup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ShaderWarmupSceneSetup>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ShaderWarmupSceneSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShaderWarmupSceneSetup::*)()>(&GlobalNamespace::ShaderWarmupSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d3c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ShaderWarmupSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ShaderWarmupSceneSetup::__set__sharedWarmupColorScheme(GlobalNamespace::ColorSchemeSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSchemeSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSchemeSO>(value));
}
constexpr GlobalNamespace::ColorSchemeSO GlobalNamespace::ShaderWarmupSceneSetup::__get__sharedWarmupColorScheme() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSchemeSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ShaderWarmupSceneSetup::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ShaderWarmupSceneSetup>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::ShaderWarmupSceneSetup::ShaderWarmupSceneSetup()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<ShaderWarmupSceneSetup>())) {}
 void GlobalNamespace::ShaderWarmupSceneSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ShaderWarmupSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
