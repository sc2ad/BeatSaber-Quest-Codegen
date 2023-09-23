#pragma once
#include "GlobalNamespace/zzzz__NamedPreset_impl.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType  GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::None{0};
constexpr GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType  GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::FakeMirror{1};
constexpr GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType  GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::RenderedMirror{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::*)()>(&GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21f084c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__set_mirrorType(GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__get_mirrorType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__set_reflectLayers(UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<UnityEngine::LayerMask, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::LayerMask>(value));
}
constexpr UnityEngine::LayerMask GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__get_reflectLayers() const {
return ::cordl_internals::getInstanceField<UnityEngine::LayerMask, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__set_stereoTextureWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__get_stereoTextureWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__set_stereoTextureHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__get_stereoTextureHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__set_monoTextureWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__get_monoTextureWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__set_monoTextureHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__get_monoTextureHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__set_maxAntiAliasing(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__get_maxAntiAliasing() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__set_enableBloomPrePassFog(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::__get_enableBloomPrePassFog() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset()  : GlobalNamespace::NamedPreset(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset>())) {}
 void GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::MirrorRendererGraphicsSettingsPresets.get_presets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset> (GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f082c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererGraphicsSettingsPresets>::get(),
                            "get_presets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererGraphicsSettingsPresets.get_namedPresets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::NamedPreset> (GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f0834;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MirrorRendererGraphicsSettingsPresets),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererGraphicsSettingsPresets>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererGraphicsSettingsPresets._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&GlobalNamespace::MirrorRendererGraphicsSettingsPresets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f083c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererGraphicsSettingsPresets>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__set__presets(::ArrayW<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset> GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__get__presets() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset> GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererGraphicsSettingsPresets>::get(),
                            "get_presets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<GlobalNamespace::NamedPreset> GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererGraphicsSettingsPresets>::get(),
                            "get_namedPresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::NamedPreset>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MirrorRendererGraphicsSettingsPresets::MirrorRendererGraphicsSettingsPresets()  : GlobalNamespace::NamedPresetsSO(THROW_UNLESS(::il2cpp_utils::New<MirrorRendererGraphicsSettingsPresets>())) {}
 void GlobalNamespace::MirrorRendererGraphicsSettingsPresets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererGraphicsSettingsPresets>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
