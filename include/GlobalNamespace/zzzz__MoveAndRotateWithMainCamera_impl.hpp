#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MoveAndRotateWithMainCamera_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&::GlobalNamespace::MoveAndRotateWithMainCamera::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21a3a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&::GlobalNamespace::MoveAndRotateWithMainCamera::LateUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21a3ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&::GlobalNamespace::MoveAndRotateWithMainCamera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a3bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MoveAndRotateWithMainCamera::__set__mainCamera(::GlobalNamespace::MainCamera value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainCamera, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MainCamera>(value));
}
constexpr ::GlobalNamespace::MainCamera ::GlobalNamespace::MoveAndRotateWithMainCamera::__get__mainCamera() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainCamera, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MoveAndRotateWithMainCamera::__set__rotationOffset(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::GlobalNamespace::MoveAndRotateWithMainCamera::__get__rotationOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MoveAndRotateWithMainCamera::__set__positionOffset(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::MoveAndRotateWithMainCamera::__get__positionOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MoveAndRotateWithMainCamera::__set__transform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::MoveAndRotateWithMainCamera::__get__transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MoveAndRotateWithMainCamera::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MoveAndRotateWithMainCamera::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MoveAndRotateWithMainCamera::MoveAndRotateWithMainCamera()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MoveAndRotateWithMainCamera>())) {}
 void ::GlobalNamespace::MoveAndRotateWithMainCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
