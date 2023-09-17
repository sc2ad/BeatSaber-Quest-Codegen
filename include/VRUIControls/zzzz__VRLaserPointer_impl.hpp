#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "VRUIControls/zzzz__VRLaserPointer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::VRUIControls::VRLaserPointer.SetLocalPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRLaserPointer::*)(::UnityEngine::Vector3)>(&::VRUIControls::VRLaserPointer::SetLocalPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d3f354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get(),
                            "SetLocalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRLaserPointer.SetLocalScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRLaserPointer::*)(::UnityEngine::Vector3)>(&::VRUIControls::VRLaserPointer::SetLocalScale)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d3f39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get(),
                            "SetLocalScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRLaserPointer.SetFadeDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRLaserPointer::*)(float_t)>(&::VRUIControls::VRLaserPointer::SetFadeDistance)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2d3f3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get(),
                            "SetFadeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRLaserPointer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRLaserPointer::*)()>(&::VRUIControls::VRLaserPointer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::VRUIControls::VRLaserPointer::__set__renderer(::UnityEngine::MeshRenderer value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshRenderer>(value));
}
constexpr ::UnityEngine::MeshRenderer ::VRUIControls::VRLaserPointer::__get__renderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::VRUIControls::VRLaserPointer::__set__fadeStartNormalizedDistanceId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_fadeStartNormalizedDistanceId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get>(std::forward<int32_t>(value));
}
 int32_t ::VRUIControls::VRLaserPointer::__get__fadeStartNormalizedDistanceId()  {
return ::cordl_internals::getStaticField<int32_t, "_fadeStartNormalizedDistanceId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get>();
}
 void ::VRUIControls::VRLaserPointer::__set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock value)  {
::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get>(std::forward<::UnityEngine::MaterialPropertyBlock>(value));
}
 ::UnityEngine::MaterialPropertyBlock ::VRUIControls::VRLaserPointer::__get__materialPropertyBlock()  {
return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get>();
}
 void ::VRUIControls::VRLaserPointer::SetLocalPosition(::UnityEngine::Vector3 position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get(),
                            "SetLocalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position);
}
 void ::VRUIControls::VRLaserPointer::SetLocalScale(::UnityEngine::Vector3 scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get(),
                            "SetLocalScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scale);
}
 void ::VRUIControls::VRLaserPointer::SetFadeDistance(float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get(),
                            "SetFadeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, distance);
}
// Ctor Parameters []
 ::VRUIControls::VRLaserPointer::VRLaserPointer()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<VRLaserPointer>())) {}
 void ::VRUIControls::VRLaserPointer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
