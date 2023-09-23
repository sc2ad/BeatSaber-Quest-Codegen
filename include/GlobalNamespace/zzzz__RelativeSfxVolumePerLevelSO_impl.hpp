#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair.get_levelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::*)()>(&GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::get_levelId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2229b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>::get(),
                            "get_levelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair.get_relativeSfxVolume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::*)()>(&GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::get_relativeSfxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2229bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>::get(),
                            "get_relativeSfxVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::*)()>(&GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2229bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__set__previewLevel(GlobalNamespace::PreviewBeatmapLevelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PreviewBeatmapLevelSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PreviewBeatmapLevelSO>(value));
}
constexpr GlobalNamespace::PreviewBeatmapLevelSO GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__previewLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PreviewBeatmapLevelSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__set__relativeSfxVolume(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__relativeSfxVolume() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::get_levelId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>::get(),
                            "get_levelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::get_relativeSfxVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>::get(),
                            "get_relativeSfxVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>())) {}
 void GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::RelativeSfxVolumePerLevelSO.get_relativeSfxVolumePerLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair> (GlobalNamespace::RelativeSfxVolumePerLevelSO::*)()>(&GlobalNamespace::RelativeSfxVolumePerLevelSO::get_relativeSfxVolumePerLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2229b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RelativeSfxVolumePerLevelSO>::get(),
                            "get_relativeSfxVolumePerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RelativeSfxVolumePerLevelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RelativeSfxVolumePerLevelSO::*)()>(&GlobalNamespace::RelativeSfxVolumePerLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2229b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RelativeSfxVolumePerLevelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RelativeSfxVolumePerLevelSO::__set__relativeSfxVolumePerLevel(::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair> GlobalNamespace::RelativeSfxVolumePerLevelSO::__get__relativeSfxVolumePerLevel() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair> GlobalNamespace::RelativeSfxVolumePerLevelSO::get_relativeSfxVolumePerLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RelativeSfxVolumePerLevelSO>::get(),
                            "get_relativeSfxVolumePerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePerLevelSO()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<RelativeSfxVolumePerLevelSO>())) {}
 void GlobalNamespace::RelativeSfxVolumePerLevelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RelativeSfxVolumePerLevelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
