#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGridCube_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
//  Writing Method size for method: GlobalNamespace::OVRGridCube.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)()>(&GlobalNamespace::OVRGridCube::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2622e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRGridCube.SetOVRCameraController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)(ByRef<GlobalNamespace::OVRCameraRig>)>(&GlobalNamespace::OVRGridCube::SetOVRCameraController)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2623038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "SetOVRCameraController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::OVRCameraRig>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRGridCube.UpdateCubeGrid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)()>(&GlobalNamespace::OVRGridCube::UpdateCubeGrid)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2622e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "UpdateCubeGrid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRGridCube.CreateCubeGrid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)()>(&GlobalNamespace::OVRGridCube::CreateCubeGrid)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x2623044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "CreateCubeGrid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRGridCube.CubeGridSwitchColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)(bool)>(&GlobalNamespace::OVRGridCube::CubeGridSwitchColor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x26233ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "CubeGridSwitchColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRGridCube._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)()>(&GlobalNamespace::OVRGridCube::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2623574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRGridCube::__set_GridKey(UnityEngine::KeyCode value)  {
::cordl_internals::setInstanceField<UnityEngine::KeyCode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::KeyCode>(value));
}
constexpr UnityEngine::KeyCode GlobalNamespace::OVRGridCube::__get_GridKey() const {
return ::cordl_internals::getInstanceField<UnityEngine::KeyCode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_CubeGrid(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRGridCube::__get_CubeGrid() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_CubeGridOn(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRGridCube::__get_CubeGridOn() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_CubeSwitchColorOld(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRGridCube::__get_CubeSwitchColorOld() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_CubeSwitchColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRGridCube::__get_CubeSwitchColor() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_gridSizeX(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRGridCube::__get_gridSizeX() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_gridSizeY(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRGridCube::__get_gridSizeY() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_gridSizeZ(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRGridCube::__get_gridSizeZ() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_gridScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRGridCube::__get_gridScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_cubeScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRGridCube::__get_cubeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRGridCube::__set_CameraController(GlobalNamespace::OVRCameraRig value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRCameraRig, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRCameraRig>(value));
}
constexpr GlobalNamespace::OVRCameraRig GlobalNamespace::OVRGridCube::__get_CameraController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRCameraRig, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVRGridCube::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRGridCube::SetOVRCameraController(ByRef<GlobalNamespace::OVRCameraRig> cameraController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "SetOVRCameraController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::OVRCameraRig>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cameraController);
}
 void GlobalNamespace::OVRGridCube::UpdateCubeGrid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "UpdateCubeGrid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRGridCube::CreateCubeGrid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "CreateCubeGrid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRGridCube::CubeGridSwitchColor(bool CubeSwitchColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            "CubeGridSwitchColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, CubeSwitchColor);
}
// Ctor Parameters []
 GlobalNamespace::OVRGridCube::OVRGridCube()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVRGridCube>())) {}
 void GlobalNamespace::OVRGridCube::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRGridCube>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
