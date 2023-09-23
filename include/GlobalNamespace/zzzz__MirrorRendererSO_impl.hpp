#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::*)(UnityEngine::Vector3, UnityEngine::Quaternion, float_t, bool)>(&GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2678ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x26795a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::*)()>(&GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::GetHashCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x26796a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stereoEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::GlobalNamespace__MirrorRendererSO__CameraTransformData(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, float_t fov, bool stereoEnabled) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->rotation = rotation;
this->fov = fov;
this->stereoEnabled = stereoEnabled;
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::__set_rotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xc>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::__get_rotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::__set_fov(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::__get_fov() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::__set_stereoEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::__get_stereoEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::_ctor(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, float_t fov, bool stereoEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, position, rotation, fov, stereoEnabled);
}
 bool GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2678a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2678aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.ValidateParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::ValidateParams)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2678a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "ValidateParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)(UnityEngine::LayerMask, int32_t, int32_t, int32_t, int32_t, int32_t, bool)>(&GlobalNamespace::MirrorRendererSO::Init)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2678aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.PrepareForNextFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::PrepareForNextFrame)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2677dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "PrepareForNextFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.GetMirrorTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture (GlobalNamespace::MirrorRendererSO::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::MirrorRendererSO::GetMirrorTexture)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x26781cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "GetMirrorTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.RenderMirror
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)(UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Matrix4x4, UnityEngine::Rect, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::MirrorRendererSO::RenderMirror)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2678ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "RenderMirror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2679240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.CreateOrUpdateMirrorCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)(UnityEngine::Camera, UnityEngine::RenderTexture)>(&GlobalNamespace::MirrorRendererSO::CreateOrUpdateMirrorCamera)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2678adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "CreateOrUpdateMirrorCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.Plane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::MirrorRendererSO::Plane)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2678d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "Plane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.CameraSpacePlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)(UnityEngine::Matrix4x4, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::MirrorRendererSO::CameraSpacePlane)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2679114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "CameraSpacePlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO.CalculateReflectionMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (*)(UnityEngine::Vector4)>(&GlobalNamespace::MirrorRendererSO::CalculateReflectionMatrix)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2678dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "CalculateReflectionMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MirrorRendererSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2679464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MirrorRendererSO::__set__reflectLayers(UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<UnityEngine::LayerMask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::LayerMask>(value));
}
constexpr UnityEngine::LayerMask GlobalNamespace::MirrorRendererSO::__get__reflectLayers() const {
return ::cordl_internals::getInstanceField<UnityEngine::LayerMask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__stereoTextureWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MirrorRendererSO::__get__stereoTextureWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__stereoTextureHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MirrorRendererSO::__get__stereoTextureHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__monoTextureWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MirrorRendererSO::__get__monoTextureWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__monoTextureHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MirrorRendererSO::__get__monoTextureHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__maxAntiAliasing(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MirrorRendererSO::__get__maxAntiAliasing() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__disableDepthTexture(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MirrorRendererSO::__get__disableDepthTexture() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__enableBloomPrePass(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MirrorRendererSO::__get__enableBloomPrePass() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__bloomPrePassRenderer(GlobalNamespace::BloomPrePassRendererSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassRendererSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassRendererSO>(value));
}
constexpr GlobalNamespace::BloomPrePassRendererSO GlobalNamespace::MirrorRendererSO::__get__bloomPrePassRenderer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassRendererSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__bloomPrePassEffect(GlobalNamespace::BloomPrePassEffectSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassEffectSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassEffectSO>(value));
}
constexpr GlobalNamespace::BloomPrePassEffectSO GlobalNamespace::MirrorRendererSO::__get__bloomPrePassEffect() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassEffectSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__clearDepthShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::MirrorRendererSO::__get__clearDepthShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__bloomPrePassRenderTexture(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture GlobalNamespace::MirrorRendererSO::__get__bloomPrePassRenderTexture() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__mirrorCamera(UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<UnityEngine::Camera, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Camera>(value));
}
constexpr UnityEngine::Camera GlobalNamespace::MirrorRendererSO::__get__mirrorCamera() const {
return ::cordl_internals::getInstanceField<UnityEngine::Camera, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__antialiasing(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MirrorRendererSO::__get__antialiasing() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__renderTextures(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,UnityEngine::RenderTexture> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,UnityEngine::RenderTexture>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,UnityEngine::RenderTexture>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,UnityEngine::RenderTexture> GlobalNamespace::MirrorRendererSO::__get__renderTextures() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,UnityEngine::RenderTexture>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set_kLeftRect(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect GlobalNamespace::MirrorRendererSO::__get_kLeftRect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set_kRightRect(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect GlobalNamespace::MirrorRendererSO::__get_kRightRect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirrorRendererSO::__set_kFullRect(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect GlobalNamespace::MirrorRendererSO::__get_kFullRect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MirrorRendererSO::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MirrorRendererSO::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MirrorRendererSO::ValidateParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "ValidateParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MirrorRendererSO::Init(UnityEngine::LayerMask reflectLayers, int32_t stereoTextureWidth, int32_t stereoTextureHeight, int32_t monoTextureWidth, int32_t monoTextureHeight, int32_t maxAntiAliasing, bool enableBloomPrePass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reflectLayers, stereoTextureWidth, stereoTextureHeight, monoTextureWidth, monoTextureHeight, maxAntiAliasing, enableBloomPrePass);
}
 void GlobalNamespace::MirrorRendererSO::PrepareForNextFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "PrepareForNextFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Texture GlobalNamespace::MirrorRendererSO::GetMirrorTexture(UnityEngine::Vector3 reflectionPlanePos, UnityEngine::Vector3 reflectionPlaneNormal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "GetMirrorTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Texture, false>(const_cast<void*>(instance), ___internal_method, reflectionPlanePos, reflectionPlaneNormal);
}
 void GlobalNamespace::MirrorRendererSO::RenderMirror(UnityEngine::Vector3 camPosition, UnityEngine::Quaternion camRotation, UnityEngine::Matrix4x4 camProjectionMatrix, UnityEngine::Rect screenRect, UnityEngine::Vector3 reclectionPlanePos, UnityEngine::Vector3 reflectionPlaneNormal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "RenderMirror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, camPosition, camRotation, camProjectionMatrix, screenRect, reclectionPlanePos, reflectionPlaneNormal);
}
 void GlobalNamespace::MirrorRendererSO::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MirrorRendererSO::CreateOrUpdateMirrorCamera(UnityEngine::Camera currentCamera, UnityEngine::RenderTexture renderTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "CreateOrUpdateMirrorCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentCamera, renderTexture);
}
 UnityEngine::Vector4 GlobalNamespace::MirrorRendererSO::Plane(UnityEngine::Vector3 pos, UnityEngine::Vector3 normal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "Plane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(nullptr, ___internal_method, pos, normal);
}
 UnityEngine::Vector4 GlobalNamespace::MirrorRendererSO::CameraSpacePlane(UnityEngine::Matrix4x4 worldToCameraMatrix, UnityEngine::Vector3 pos, UnityEngine::Vector3 normal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "CameraSpacePlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(nullptr, ___internal_method, worldToCameraMatrix, pos, normal);
}
 UnityEngine::Matrix4x4 GlobalNamespace::MirrorRendererSO::CalculateReflectionMatrix(UnityEngine::Vector4 plane)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            "CalculateReflectionMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, plane);
}
// Ctor Parameters []
 GlobalNamespace::MirrorRendererSO::MirrorRendererSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<MirrorRendererSO>())) {}
 void GlobalNamespace::MirrorRendererSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirrorRendererSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
