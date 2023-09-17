#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightTypeSO_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "GlobalNamespace/zzzz__IBloomPrePassParams_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData::*)()>(&::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f96268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData::__set_lightType(::GlobalNamespace::BloomPrePassLightTypeSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BloomPrePassLightTypeSO>(value));
}
constexpr ::GlobalNamespace::BloomPrePassLightTypeSO ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData::__get_lightType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData::__set_preallocateCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData::__get_preallocateCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BloomPrePassRendererSO__PreallocationData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::*)()>(&::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f95258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::__set_mesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::__get_mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::__set_lightQuads(::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassLight__QuadData> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassLight__QuadData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassLight__QuadData>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassLight__QuadData> ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::__get_lightQuads() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassLight__QuadData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::__set_subMeshDescriptor(::UnityEngine::Rendering::SubMeshDescriptor value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::SubMeshDescriptor, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rendering::SubMeshDescriptor>(value));
}
constexpr ::UnityEngine::Rendering::SubMeshDescriptor ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::__get_subMeshDescriptor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::SubMeshDescriptor, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f950a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BloomPrePassRendererSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f950bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::Init)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1f90960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::Cleanup)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x1f950c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.RenderAndSetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t, ::GlobalNamespace::IBloomPrePassParams, ::UnityEngine::RenderTexture, ByRef<::UnityEngine::Vector2>, ByRef<::GlobalNamespace::ToneMapping>)>(&::GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData)> {
  constexpr static std::size_t size = 0x954;
  constexpr static std::size_t addrs = 0x1f91234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "RenderAndSetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::ToneMapping>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.SetDataToShaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, ::UnityEngine::Vector2, ::UnityEngine::Texture, ::GlobalNamespace::ToneMapping)>(&::GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1f91ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "SetDataToShaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.SetCustomStereoCameraEyeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(float_t)>(&::GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1f95fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "SetCustomStereoCameraEyeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.CreateBloomPrePassRenderTextureIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture (::GlobalNamespace::BloomPrePassRendererSO::*)(::UnityEngine::RenderTexture, ::GlobalNamespace::IBloomPrePassParams)>(&::GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1f90f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "CreateBloomPrePassRenderTextureIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.EnableBloomFog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f91b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "EnableBloomFog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.DisableBloomFog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f91d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "DisableBloomFog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.UpdateBloomFogParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1f96020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "UpdateBloomFogParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.GetCameraParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(::UnityEngine::Camera, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<float_t>)>(&::GlobalNamespace::BloomPrePassRendererSO::GetCameraParams)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1f90d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "GetCameraParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.RenderAllLights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GlobalNamespace::BloomPrePassRendererSO::RenderAllLights)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x1f9575c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "RenderAllLights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.PrepareLightsMeshRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(::GlobalNamespace::BloomPrePassLightTypeSO, ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData, int32_t)>(&::GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x1f95260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "PrepareLightsMeshRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.MatrixLerp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::BloomPrePassRendererSO::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GlobalNamespace::BloomPrePassRendererSO::MatrixLerp)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1f96038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "MatrixLerp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1f960f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BloomPrePassRendererSO::__set__bloomFog(::GlobalNamespace::BloomFogSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomFogSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BloomFogSO>(value));
}
constexpr ::GlobalNamespace::BloomFogSO ::GlobalNamespace::BloomPrePassRendererSO::__get__bloomFog() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BloomPrePassRendererSO::__set__preallocationData(::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData> ::GlobalNamespace::BloomPrePassRendererSO::__get__preallocationData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BloomPrePassRendererSO::__set__lightsRenderingData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO,::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO,::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO,::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO,::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData> ::GlobalNamespace::BloomPrePassRendererSO::__get__lightsRenderingData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO,::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BloomPrePassRendererSO::__set__commandBuffer(::UnityEngine::Rendering::CommandBuffer value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::CommandBuffer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rendering::CommandBuffer>(value));
}
constexpr ::UnityEngine::Rendering::CommandBuffer ::GlobalNamespace::BloomPrePassRendererSO::__get__commandBuffer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::CommandBuffer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::__set__vertexTransformMatrixID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_vertexTransformMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BloomPrePassRendererSO::__get__vertexTransformMatrixID()  {
return ::cordl_internals::getStaticField<int32_t, "_vertexTransformMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get>();
}
 void ::GlobalNamespace::BloomPrePassRendererSO::__set__bloomPrePassTextureID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_bloomPrePassTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BloomPrePassRendererSO::__get__bloomPrePassTextureID()  {
return ::cordl_internals::getStaticField<int32_t, "_bloomPrePassTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get>();
}
 void ::GlobalNamespace::BloomPrePassRendererSO::__set__stereoCameraEyeOffsetID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_stereoCameraEyeOffsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BloomPrePassRendererSO::__get__stereoCameraEyeOffsetID()  {
return ::cordl_internals::getStaticField<int32_t, "_stereoCameraEyeOffsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get>();
}
 void ::GlobalNamespace::BloomPrePassRendererSO::__set__customFogTextureToScreenRatioID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_customFogTextureToScreenRatioID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BloomPrePassRendererSO::__get__customFogTextureToScreenRatioID()  {
return ::cordl_internals::getStaticField<int32_t, "_customFogTextureToScreenRatioID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get>();
}
constexpr void ::GlobalNamespace::BloomPrePassRendererSO::__set__initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::BloomPrePassRendererSO::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BloomPrePassRendererSO::__set__blackTexture(::UnityEngine::Texture2D value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Texture2D>(value));
}
constexpr ::UnityEngine::Texture2D ::GlobalNamespace::BloomPrePassRendererSO::__get__blackTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BloomPrePassRendererSO::__set__lowestResBloomTexture(::UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RenderTexture>(value));
}
constexpr ::UnityEngine::RenderTexture ::GlobalNamespace::BloomPrePassRendererSO::__get__lowestResBloomTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix, float_t stereoCameraEyeOffset, ::GlobalNamespace::IBloomPrePassParams bloomPrePassParams, ::UnityEngine::RenderTexture dest, ByRef<::UnityEngine::Vector2> textureToScreenRatio, ByRef<::GlobalNamespace::ToneMapping> toneMapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "RenderAndSetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::ToneMapping>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest, textureToScreenRatio, toneMapping);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders(float_t stereoCameraEyeOffset, ::UnityEngine::Vector2 textureToScreenRatio, ::UnityEngine::Texture bloomFogTexture, ::GlobalNamespace::ToneMapping toneMapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "SetDataToShaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stereoCameraEyeOffset, textureToScreenRatio, bloomFogTexture, toneMapping);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset(float_t stereoCameraEyeOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "SetCustomStereoCameraEyeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stereoCameraEyeOffset);
}
 ::UnityEngine::RenderTexture ::GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded(::UnityEngine::RenderTexture renderTexture, ::GlobalNamespace::IBloomPrePassParams bloomPrePassParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "CreateBloomPrePassRenderTextureIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTexture, false>(const_cast<void*>(instance), ___internal_method, renderTexture, bloomPrePassParams);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "EnableBloomFog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "DisableBloomFog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "UpdateBloomFogParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::GetCameraParams(::UnityEngine::Camera camera, ByRef<::UnityEngine::Matrix4x4> projectionMatrix, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<float_t> stereoCameraEyeOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "GetCameraParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, camera, projectionMatrix, viewMatrix, stereoCameraEyeOffset);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::RenderAllLights(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t linesWidth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "RenderAllLights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewMatrix, projectionMatrix, linesWidth);
}
 void ::GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering(::GlobalNamespace::BloomPrePassLightTypeSO lightType, ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData data, int32_t numberOfLights)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "PrepareLightsMeshRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightType, data, numberOfLights);
}
 ::UnityEngine::Matrix4x4 ::GlobalNamespace::BloomPrePassRendererSO::MatrixLerp(::UnityEngine::Matrix4x4 from, ::UnityEngine::Matrix4x4 to, float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            "MatrixLerp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(const_cast<void*>(instance), ___internal_method, from, to, t);
}
// Ctor Parameters []
 ::GlobalNamespace::BloomPrePassRendererSO::BloomPrePassRendererSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<BloomPrePassRendererSO>())) {}
 void ::GlobalNamespace::BloomPrePassRendererSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
