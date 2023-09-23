#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainCameraCullingMask_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData::*)(bool)>(&GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2676864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData::__set_showDebris(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData::__get_showDebris() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "showDebris", ty: "bool", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData::GlobalNamespace__MainCameraCullingMask__InitData(bool showDebris)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MainCameraCullingMask__InitData>(showDebris))) {}
 void GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData::_ctor(bool showDebris)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, showDebris);
}
//  Writing Method size for method: GlobalNamespace::MainCameraCullingMask.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainCameraCullingMask::*)()>(&GlobalNamespace::MainCameraCullingMask::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2676744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainCameraCullingMask>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainCameraCullingMask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainCameraCullingMask::*)()>(&GlobalNamespace::MainCameraCullingMask::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26767f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainCameraCullingMask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MainCameraCullingMask::__set__camera(UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<UnityEngine::Camera, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Camera>(value));
}
constexpr UnityEngine::Camera GlobalNamespace::MainCameraCullingMask::__get__camera() const {
return ::cordl_internals::getInstanceField<UnityEngine::Camera, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainCameraCullingMask::__set__initData(GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData GlobalNamespace::MainCameraCullingMask::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MainCameraCullingMask__InitData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MainCameraCullingMask::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainCameraCullingMask>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MainCameraCullingMask::MainCameraCullingMask()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MainCameraCullingMask>())) {}
 void GlobalNamespace::MainCameraCullingMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainCameraCullingMask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
