#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ShaderWarmupSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetupData.get_nextScenesTransitionSetupData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScenesTransitionSetupDataSO (::GlobalNamespace::ShaderWarmupSceneSetupData::*)()>(&::GlobalNamespace::ShaderWarmupSceneSetupData::get_nextScenesTransitionSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cfa24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData>::get(),
                            "get_nextScenesTransitionSetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetupData.set_nextScenesTransitionSetupData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderWarmupSceneSetupData::*)(::GlobalNamespace::ScenesTransitionSetupDataSO)>(&::GlobalNamespace::ShaderWarmupSceneSetupData::set_nextScenesTransitionSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cfa2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData>::get(),
                            "set_nextScenesTransitionSetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderWarmupSceneSetupData::*)(::GlobalNamespace::ScenesTransitionSetupDataSO)>(&::GlobalNamespace::ShaderWarmupSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21cfa34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ShaderWarmupSceneSetupData::__set__nextScenesTransitionSetupData_k__BackingField(::GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO ::GlobalNamespace::ShaderWarmupSceneSetupData::__get__nextScenesTransitionSetupData_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::ScenesTransitionSetupDataSO ::GlobalNamespace::ShaderWarmupSceneSetupData::get_nextScenesTransitionSetupData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData>::get(),
                            "get_nextScenesTransitionSetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScenesTransitionSetupDataSO, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ShaderWarmupSceneSetupData::set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData>::get(),
                            "set_nextScenesTransitionSetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "nextScenesTransitionSetupData", ty: "::GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: None }]
 ::GlobalNamespace::ShaderWarmupSceneSetupData::ShaderWarmupSceneSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData)  : ::GlobalNamespace::SceneSetupData(THROW_UNLESS(::il2cpp_utils::New<ShaderWarmupSceneSetupData>(nextScenesTransitionSetupData))) {}
 void ::GlobalNamespace::ShaderWarmupSceneSetupData::_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nextScenesTransitionSetupData);
}
} // end anonymous namespace
