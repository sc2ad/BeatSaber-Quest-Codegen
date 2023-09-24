#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleClippingController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController.SetClippingParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::SetClippingParams)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x20e23cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>::get(),
                            "SetClippingParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e2518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__set__materialPropertyBlockControllers(::ArrayW<GlobalNamespace::MaterialPropertyBlockController> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::MaterialPropertyBlockController>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::MaterialPropertyBlockController>>(value));
}
constexpr ::ArrayW<GlobalNamespace::MaterialPropertyBlockController> GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__get__materialPropertyBlockControllers() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::MaterialPropertyBlockController>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__set__clippingPlanePositionID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_clippingPlanePositionID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__get__clippingPlanePositionID()  {
return ::cordl_internals::getStaticField<int32_t, "_clippingPlanePositionID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>::get>();
}
 void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__set__clippingPlaneNormalID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_clippingPlaneNormalID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__get__clippingPlaneNormalID()  {
return ::cordl_internals::getStaticField<int32_t, "_clippingPlaneNormalID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>::get>();
}
 void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::SetClippingParams(UnityEngine::Vector3 position, UnityEngine::Vector3 normal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>::get(),
                            "SetClippingParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position, normal);
}
 GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::New_ctor()  {
GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>())};
return o;
}
 void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
