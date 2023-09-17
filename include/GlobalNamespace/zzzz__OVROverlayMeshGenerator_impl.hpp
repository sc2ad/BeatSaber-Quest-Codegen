#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVROverlayMeshGenerator_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace  ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::Right{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace  ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::Left{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace  ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::Top{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace  ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::Bottom{3};
constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace  ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::Front{4};
constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace  ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::Back{5};
constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace  ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace::COUNT{6};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::Awake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x25d55dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.SetOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(::GlobalNamespace::OVROverlay)>(&::GlobalNamespace::OVROverlayMeshGenerator::SetOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d5750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "SetOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetBoundingRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::GlobalNamespace::OVROverlayMeshGenerator::*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetBoundingRect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x25d5758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetBoundingRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25d589c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25d58a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::Update)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x25d58a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.UpdateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x25d5ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "UpdateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GenerateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>, ::System::Collections::Generic::List_1<int32_t>, ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x25d61a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25d7f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetSphereUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereVert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x25d7f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetSphereVert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildSphere
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>, ::System::Collections::Generic::List_1<int32_t>, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect, float_t, int32_t, int32_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildSphere)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x25d64e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "BuildSphere",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace, ::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x25d7fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetCubeUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeVert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace, ::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x25d8114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetCubeVert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildCube
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>, ::System::Collections::Generic::List_1<int32_t>, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, int32_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildCube)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x25d6c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "BuildCube",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildQuad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>, ::System::Collections::Generic::List_1<int32_t>, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildQuad)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x25d71c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "BuildQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildHemicylinder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>, ::System::Collections::Generic::List_1<int32_t>, ::UnityEngine::Vector3, ::UnityEngine::Rect, int32_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x25d78e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "BuildHemicylinder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x25d8220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__Mesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::GlobalNamespace::OVROverlayMeshGenerator::__get__Mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__Verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3> ::GlobalNamespace::OVROverlayMeshGenerator::__get__Verts() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__UV(::System::Collections::Generic::List_1<::UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2> ::GlobalNamespace::OVROverlayMeshGenerator::__get__UV() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__Tris(::System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t> ::GlobalNamespace::OVROverlayMeshGenerator::__get__Tris() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__Overlay(::GlobalNamespace::OVROverlay value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVROverlay, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OVROverlay>(value));
}
constexpr ::GlobalNamespace::OVROverlay ::GlobalNamespace::OVROverlayMeshGenerator::__get__Overlay() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVROverlay, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__MeshFilter(::UnityEngine::MeshFilter value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshFilter, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshFilter>(value));
}
constexpr ::UnityEngine::MeshFilter ::GlobalNamespace::OVROverlayMeshGenerator::__get__MeshFilter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__MeshCollider(::UnityEngine::MeshCollider value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshCollider, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshCollider>(value));
}
constexpr ::UnityEngine::MeshCollider ::GlobalNamespace::OVROverlayMeshGenerator::__get__MeshCollider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshCollider, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__MeshRenderer(::UnityEngine::MeshRenderer value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshRenderer>(value));
}
constexpr ::UnityEngine::MeshRenderer ::GlobalNamespace::OVROverlayMeshGenerator::__get__MeshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__CameraRoot(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::OVROverlayMeshGenerator::__get__CameraRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__Transform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::OVROverlayMeshGenerator::__get__Transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__LastShape(::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape ::GlobalNamespace::OVROverlayMeshGenerator::__get__LastShape() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__LastPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::OVROverlayMeshGenerator::__get__LastPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__LastRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::GlobalNamespace::OVROverlayMeshGenerator::__get__LastRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__LastScale(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::OVROverlayMeshGenerator::__get__LastScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__LastDestRectLeft(::UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect ::GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectLeft() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__LastDestRectRight(::UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect ::GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectRight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__LastSrcRectLeft(::UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect ::GlobalNamespace::OVROverlayMeshGenerator::__get__LastSrcRectLeft() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__LastTexture(::UnityEngine::Texture value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Texture>(value));
}
constexpr ::UnityEngine::Texture ::GlobalNamespace::OVROverlayMeshGenerator::__get__LastTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVROverlayMeshGenerator::__set__Awake(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVROverlayMeshGenerator::__get__Awake() const {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::__set_BottomLeft(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "BottomLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
 ::ArrayW<::UnityEngine::Vector3> ::GlobalNamespace::OVROverlayMeshGenerator::__get_BottomLeft()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "BottomLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get>();
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::__set_RightVector(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "RightVector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
 ::ArrayW<::UnityEngine::Vector3> ::GlobalNamespace::OVROverlayMeshGenerator::__get_RightVector()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "RightVector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get>();
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::__set_UpVector(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "UpVector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
 ::ArrayW<::UnityEngine::Vector3> ::GlobalNamespace::OVROverlayMeshGenerator::__get_UpVector()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "UpVector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get>();
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::SetOverlay(::GlobalNamespace::OVROverlay overlay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "SetOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, overlay);
}
 ::UnityEngine::Rect ::GlobalNamespace::OVROverlayMeshGenerator::GetBoundingRect(::UnityEngine::Rect a, ::UnityEngine::Rect b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetBoundingRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh(::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "UpdateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shape, position, rotation, scale, rect);
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uvs, ::System::Collections::Generic::List_1<int32_t> tris, ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uvs, tris, shape, position, rotation, scale, rect);
}
 ::UnityEngine::Vector2 ::GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV(float_t theta, float_t phi, float_t expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetSphereUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, theta, phi, expand_coef);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert(float_t theta, float_t phi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetSphereVert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, theta, phi);
}
/// @param worldScale: float_t (default: 800)
/// @param latitudes: int32_t (default: 128)
/// @param longitudes: int32_t (default: 128)
/// @param expand_coef: float_t (default: 1)
 void ::GlobalNamespace::OVROverlayMeshGenerator::BuildSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uv, ::System::Collections::Generic::List_1<int32_t> triangles, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, float_t worldScale, int32_t latitudes, int32_t longitudes, float_t expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "BuildSphere",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, position, rotation, scale, rect, worldScale, latitudes, longitudes, expand_coef);
}
 ::UnityEngine::Vector2 ::GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV(::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetCubeUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, face, sideUV, expand_coef);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert(::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "GetCubeVert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, face, sideUV, expand_coef);
}
/// @param worldScale: float_t (default: 800)
/// @param subQuads: int32_t (default: 1)
/// @param expand_coef: float_t (default: 1.01)
 void ::GlobalNamespace::OVROverlayMeshGenerator::BuildCube(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uv, ::System::Collections::Generic::List_1<int32_t> triangles, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, float_t worldScale, int32_t subQuads, float_t expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "BuildCube",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, position, rotation, scale, worldScale, subQuads, expand_coef);
}
 void ::GlobalNamespace::OVROverlayMeshGenerator::BuildQuad(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uv, ::System::Collections::Generic::List_1<int32_t> triangles, ::UnityEngine::Rect rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "BuildQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, rect);
}
/// @param longitudes: int32_t (default: 128)
 void ::GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uv, ::System::Collections::Generic::List_1<int32_t> triangles, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, int32_t longitudes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            "BuildHemicylinder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, scale, rect, longitudes);
}
// Ctor Parameters []
 ::GlobalNamespace::OVROverlayMeshGenerator::OVROverlayMeshGenerator()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVROverlayMeshGenerator>())) {}
 void ::GlobalNamespace::OVROverlayMeshGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
