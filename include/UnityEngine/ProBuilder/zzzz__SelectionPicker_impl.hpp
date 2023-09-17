#pragma once
namespace {
#include "UnityEngine/ProBuilder/zzzz__SelectionPicker_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PickerOptions_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPicker.PickVerticesInRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<int32_t>> (*)(::UnityEngine::Camera, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::PickerOptions, float_t)>(&::UnityEngine::ProBuilder::SelectionPicker::PickVerticesInRect)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x29cf0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPicker>::get(),
                            "PickVerticesInRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PickerOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPicker.PickFacesInRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>> (*)(::UnityEngine::Camera, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::PickerOptions, float_t)>(&::UnityEngine::ProBuilder::SelectionPicker::PickFacesInRect)> {
  constexpr static std::size_t size = 0xf44;
  constexpr static std::size_t addrs = 0x29d00c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPicker>::get(),
                            "PickFacesInRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PickerOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPicker.PickEdgesInRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>> (*)(::UnityEngine::Camera, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::PickerOptions, float_t)>(&::UnityEngine::ProBuilder::SelectionPicker::PickEdgesInRect)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x29d15e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPicker>::get(),
                            "PickEdgesInRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PickerOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPicker.PickFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face (*)(::UnityEngine::Camera, ::UnityEngine::Vector3, ::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::SelectionPicker::PickFace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29d25d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPicker>::get(),
                            "PickFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
/// @param pixelsPerPoint: float_t (default: 1)
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<int32_t>> ::UnityEngine::ProBuilder::SelectionPicker::PickVerticesInRect(::UnityEngine::Camera cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selectable, ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPicker>::get(),
                            "PickVerticesInRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PickerOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<int32_t>>, false>(nullptr, ___internal_method, cam, rect, selectable, options, pixelsPerPoint);
}
/// @param pixelsPerPoint: float_t (default: 1)
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>> ::UnityEngine::ProBuilder::SelectionPicker::PickFacesInRect(::UnityEngine::Camera cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selectable, ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPicker>::get(),
                            "PickFacesInRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PickerOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>>, false>(nullptr, ___internal_method, cam, rect, selectable, options, pixelsPerPoint);
}
/// @param pixelsPerPoint: float_t (default: 1)
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>> ::UnityEngine::ProBuilder::SelectionPicker::PickEdgesInRect(::UnityEngine::Camera cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selectable, ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPicker>::get(),
                            "PickEdgesInRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PickerOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>>, false>(nullptr, ___internal_method, cam, rect, selectable, options, pixelsPerPoint);
}
 ::UnityEngine::ProBuilder::Face ::UnityEngine::ProBuilder::SelectionPicker::PickFace(::UnityEngine::Camera camera, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::ProBuilder::ProBuilderMesh pickable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPicker>::get(),
                            "PickFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face, false>(nullptr, ___internal_method, camera, mousePosition, pickable);
}
} // end anonymous namespace
