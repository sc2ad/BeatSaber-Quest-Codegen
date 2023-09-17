#pragma once
namespace {
#include "GlobalNamespace/zzzz__OVRGLTFLoader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "GlobalNamespace/zzzz__OVRChunkType_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRBinaryChunk_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVRMaterialData_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25b99cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0._ProcessMesh_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::_ProcessMesh_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25b99d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0>::get(),
                            "<ProcessMesh>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::__set___4__this(::GlobalNamespace::OVRGLTFLoader value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRGLTFLoader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OVRGLTFLoader>(value));
}
constexpr ::GlobalNamespace::OVRGLTFLoader ::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRGLTFLoader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::__set_matData(::GlobalNamespace::OVRMaterialData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRMaterialData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OVRMaterialData>(value));
}
constexpr ::GlobalNamespace::OVRMaterialData ::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::__get_matData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRMaterialData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0::_ProcessMesh_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0>::get(),
                            "<ProcessMesh>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::StringW)>(&::GlobalNamespace::OVRGLTFLoader::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25b470c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRGLTFLoader::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25b4744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.LoadGLB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRGLTFScene (::GlobalNamespace::OVRGLTFLoader::*)(bool, bool)>(&::GlobalNamespace::OVRGLTFLoader::LoadGLB)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x25b47cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "LoadGLB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetModelShader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::UnityEngine::Shader)>(&::GlobalNamespace::OVRGLTFLoader::SetModelShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25b550c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "SetModelShader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetModelAlphaBlendShader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::UnityEngine::Shader)>(&::GlobalNamespace::OVRGLTFLoader::SetModelAlphaBlendShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25b5514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "SetModelAlphaBlendShader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetTextureQualityFiltering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::GlobalNamespace::OVRTextureQualityFiltering)>(&::GlobalNamespace::OVRGLTFLoader::SetTextureQualityFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25b551c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "SetTextureQualityFiltering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTextureQualityFiltering>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetMipMapBias
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(float_t)>(&::GlobalNamespace::OVRGLTFLoader::SetMipMapBias)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25b5524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "SetMipMapBias",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.DetectTextureQuality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTextureQualityFiltering (*)(ByRef<::UnityEngine::Texture2D>)>(&::GlobalNamespace::OVRGLTFLoader::DetectTextureQuality)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x25b5540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "DetectTextureQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ApplyTextureQuality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRTextureQualityFiltering, ByRef<::UnityEngine::Texture2D>)>(&::GlobalNamespace::OVRGLTFLoader::ApplyTextureQuality)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x25b5600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ApplyTextureQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTextureQualityFiltering>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ValidateGLB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRGLTFLoader::*)(::System::IO::Stream)>(&::GlobalNamespace::OVRGLTFLoader::ValidateGLB)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x25b4d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ValidateGLB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ReadChunk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::OVRGLTFLoader::*)(::System::IO::Stream, ::GlobalNamespace::OVRChunkType)>(&::GlobalNamespace::OVRGLTFLoader::ReadChunk)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25b4f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ReadChunk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRChunkType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ValidateChunk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRGLTFLoader::*)(::System::IO::Stream, ::GlobalNamespace::OVRChunkType, ByRef<uint32_t>)>(&::GlobalNamespace::OVRGLTFLoader::ValidateChunk)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x25b4fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ValidateChunk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRChunkType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.LoadGLTF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRGLTFLoader::*)(bool, bool)>(&::GlobalNamespace::OVRGLTFLoader::LoadGLTF)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x25b511c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "LoadGLTF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONNode, int32_t, bool)>(&::GlobalNamespace::OVRGLTFLoader::ProcessNode)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x25b5774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMeshData (::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONNode, bool)>(&::GlobalNamespace::OVRGLTFLoader::ProcessMesh)> {
  constexpr static std::size_t size = 0x143c;
  constexpr static std::size_t addrs = 0x25b64c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.FlipTraingleIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<int32_t>>)>(&::GlobalNamespace::OVRGLTFLoader::FlipTraingleIndices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25b8340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "FlipTraingleIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessSkin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONNode, ::UnityEngine::SkinnedMeshRenderer)>(&::GlobalNamespace::OVRGLTFLoader::ProcessSkin)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x25b78fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessSkin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SkinnedMeshRenderer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMaterialData (::GlobalNamespace::OVRGLTFLoader::*)(int32_t)>(&::GlobalNamespace::OVRGLTFLoader::ProcessMaterial)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x25b7d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTextureData (::GlobalNamespace::OVRGLTFLoader::*)(int32_t)>(&::GlobalNamespace::OVRGLTFLoader::ProcessTexture)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x25b7f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.TranscodeTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(ByRef<::GlobalNamespace::OVRTextureData>)>(&::GlobalNamespace::OVRGLTFLoader::TranscodeTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25b853c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "TranscodeTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRTextureData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.CreateUnityMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (::GlobalNamespace::OVRGLTFLoader::*)(::GlobalNamespace::OVRMaterialData, bool)>(&::GlobalNamespace::OVRGLTFLoader::CreateUnityMaterial)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x25b83ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "CreateUnityMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMaterialData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.GetInputNodeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRGLTFInputNode (::GlobalNamespace::OVRGLTFLoader::*)(::StringW)>(&::GlobalNamespace::OVRGLTFLoader::GetInputNodeType)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x25b85cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "GetInputNodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessAnimations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)()>(&::GlobalNamespace::OVRGLTFLoader::ProcessAnimations)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x25b6020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessAnimations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::OVRGLTFLoader::__set_m_jsonData(::OVRSimpleJSON::JSONNode value)  {
::cordl_internals::setInstanceField<::OVRSimpleJSON::JSONNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::OVRSimpleJSON::JSONNode>(value));
}
constexpr ::OVRSimpleJSON::JSONNode ::GlobalNamespace::OVRGLTFLoader::__get_m_jsonData() const {
return ::cordl_internals::getInstanceField<::OVRSimpleJSON::JSONNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRGLTFLoader::__set_m_glbStream(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::GlobalNamespace::OVRGLTFLoader::__get_m_glbStream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRGLTFLoader::__set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRBinaryChunk, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OVRBinaryChunk>(value));
}
constexpr ::GlobalNamespace::OVRBinaryChunk ::GlobalNamespace::OVRGLTFLoader::__get_m_binaryChunk() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRBinaryChunk, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRGLTFLoader::__set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::GameObject>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject> ::GlobalNamespace::OVRGLTFLoader::__get_m_Nodes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::GameObject>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRGLTFLoader::__set_m_AnimationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode> ::GlobalNamespace::OVRGLTFLoader::__get_m_AnimationNodes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRGLTFLoader::__set_m_Shader(::UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Shader>(value));
}
constexpr ::UnityEngine::Shader ::GlobalNamespace::OVRGLTFLoader::__get_m_Shader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRGLTFLoader::__set_m_AlphaBlendShader(::UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Shader>(value));
}
constexpr ::UnityEngine::Shader ::GlobalNamespace::OVRGLTFLoader::__get_m_AlphaBlendShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRGLTFLoader::__set_m_TextureQuality(::GlobalNamespace::OVRTextureQualityFiltering value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTextureQualityFiltering, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OVRTextureQualityFiltering>(value));
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering ::GlobalNamespace::OVRGLTFLoader::__get_m_TextureQuality() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTextureQualityFiltering, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRGLTFLoader::__set_m_TextureMipmapBias(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRGLTFLoader::__get_m_TextureMipmapBias() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OVRGLTFLoader::__set_GLTFToUnitySpace(::UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "GLTFToUnitySpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get>(std::forward<::UnityEngine::Vector3>(value));
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVRGLTFLoader::__get_GLTFToUnitySpace()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "GLTFToUnitySpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get>();
}
 void ::GlobalNamespace::OVRGLTFLoader::__set_GLTFToUnityTangent(::UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "GLTFToUnityTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get>(std::forward<::UnityEngine::Vector3>(value));
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVRGLTFLoader::__get_GLTFToUnityTangent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "GLTFToUnityTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get>();
}
 void ::GlobalNamespace::OVRGLTFLoader::__set_GLTFToUnitySpace_Rotation(::UnityEngine::Vector4 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector4, "GLTFToUnitySpace_Rotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get>(std::forward<::UnityEngine::Vector4>(value));
}
 ::UnityEngine::Vector4 ::GlobalNamespace::OVRGLTFLoader::__get_GLTFToUnitySpace_Rotation()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "GLTFToUnitySpace_Rotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get>();
}
 void ::GlobalNamespace::OVRGLTFLoader::__set_InputNodeNameMap(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OVRGLTFInputNode> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OVRGLTFInputNode>, "InputNodeNameMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OVRGLTFInputNode>>(value));
}
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OVRGLTFInputNode> ::GlobalNamespace::OVRGLTFLoader::__get_InputNodeNameMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OVRGLTFInputNode>, "InputNodeNameMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get>();
}
// Ctor Parameters [CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }]
 ::GlobalNamespace::OVRGLTFLoader::OVRGLTFLoader(::StringW fileName)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OVRGLTFLoader>(fileName))) {}
 void ::GlobalNamespace::OVRGLTFLoader::_ctor(::StringW fileName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fileName);
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::GlobalNamespace::OVRGLTFLoader::OVRGLTFLoader(::ArrayW<uint8_t> data)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OVRGLTFLoader>(data))) {}
 void ::GlobalNamespace::OVRGLTFLoader::_ctor(::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
/// @param loadMips: bool (default: true)
 ::GlobalNamespace::OVRGLTFScene ::GlobalNamespace::OVRGLTFLoader::LoadGLB(bool supportAnimation, bool loadMips)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "LoadGLB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFScene, false>(const_cast<void*>(instance), ___internal_method, supportAnimation, loadMips);
}
 void ::GlobalNamespace::OVRGLTFLoader::SetModelShader(::UnityEngine::Shader shader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "SetModelShader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shader);
}
 void ::GlobalNamespace::OVRGLTFLoader::SetModelAlphaBlendShader(::UnityEngine::Shader shader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "SetModelAlphaBlendShader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shader);
}
 void ::GlobalNamespace::OVRGLTFLoader::SetTextureQualityFiltering(::GlobalNamespace::OVRTextureQualityFiltering loadedTexturesQuality)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "SetTextureQualityFiltering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTextureQualityFiltering>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, loadedTexturesQuality);
}
 void ::GlobalNamespace::OVRGLTFLoader::SetMipMapBias(float_t loadedTexturesMipmapBiasing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "SetMipMapBias",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, loadedTexturesMipmapBiasing);
}
 ::GlobalNamespace::OVRTextureQualityFiltering ::GlobalNamespace::OVRGLTFLoader::DetectTextureQuality(ByRef<::UnityEngine::Texture2D> srcTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "DetectTextureQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTextureQualityFiltering, false>(nullptr, ___internal_method, srcTexture);
}
 void ::GlobalNamespace::OVRGLTFLoader::ApplyTextureQuality(::GlobalNamespace::OVRTextureQualityFiltering qualityLevel, ByRef<::UnityEngine::Texture2D> destTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ApplyTextureQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTextureQualityFiltering>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, qualityLevel, destTexture);
}
 bool ::GlobalNamespace::OVRGLTFLoader::ValidateGLB(::System::IO::Stream glbStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ValidateGLB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, glbStream);
}
 ::ArrayW<uint8_t> ::GlobalNamespace::OVRGLTFLoader::ReadChunk(::System::IO::Stream glbStream, ::GlobalNamespace::OVRChunkType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ReadChunk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRChunkType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, glbStream, type);
}
 bool ::GlobalNamespace::OVRGLTFLoader::ValidateChunk(::System::IO::Stream glbStream, ::GlobalNamespace::OVRChunkType type, ByRef<uint32_t> chunkLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ValidateChunk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRChunkType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, glbStream, type, chunkLength);
}
 int32_t ::GlobalNamespace::OVRGLTFLoader::LoadGLTF(bool supportAnimation, bool loadMips)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "LoadGLTF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, supportAnimation, loadMips);
}
 void ::GlobalNamespace::OVRGLTFLoader::ProcessNode(::OVRSimpleJSON::JSONNode node, int32_t nodeId, bool loadMips)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, nodeId, loadMips);
}
 ::GlobalNamespace::OVRMeshData ::GlobalNamespace::OVRGLTFLoader::ProcessMesh(::OVRSimpleJSON::JSONNode meshNode, bool loadMips)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMeshData, false>(const_cast<void*>(instance), ___internal_method, meshNode, loadMips);
}
 void ::GlobalNamespace::OVRGLTFLoader::FlipTraingleIndices(ByRef<::ArrayW<int32_t>> indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "FlipTraingleIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, indices);
}
 void ::GlobalNamespace::OVRGLTFLoader::ProcessSkin(::OVRSimpleJSON::JSONNode skinNode, ::UnityEngine::SkinnedMeshRenderer renderer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessSkin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SkinnedMeshRenderer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, skinNode, renderer);
}
 ::GlobalNamespace::OVRMaterialData ::GlobalNamespace::OVRGLTFLoader::ProcessMaterial(int32_t matId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMaterialData, false>(const_cast<void*>(instance), ___internal_method, matId);
}
 ::GlobalNamespace::OVRTextureData ::GlobalNamespace::OVRGLTFLoader::ProcessTexture(int32_t textureId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTextureData, false>(const_cast<void*>(instance), ___internal_method, textureId);
}
 void ::GlobalNamespace::OVRGLTFLoader::TranscodeTexture(ByRef<::GlobalNamespace::OVRTextureData> textureData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "TranscodeTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRTextureData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, textureData);
}
 ::UnityEngine::Material ::GlobalNamespace::OVRGLTFLoader::CreateUnityMaterial(::GlobalNamespace::OVRMaterialData matData, bool loadMips)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "CreateUnityMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMaterialData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method, matData, loadMips);
}
 ::GlobalNamespace::OVRGLTFInputNode ::GlobalNamespace::OVRGLTFLoader::GetInputNodeType(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "GetInputNodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFInputNode, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void ::GlobalNamespace::OVRGLTFLoader::ProcessAnimations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFLoader>::get(),
                            "ProcessAnimations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
