// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: PickerOptions
  struct PickerOptions;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: SelectionPicker
  class SelectionPicker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPicker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPicker*, "UnityEngine.ProBuilder", "SelectionPicker");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPicker
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectionPicker : public ::Il2CppObject {
    public:
    // static public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.HashSet`1<System.Int32>> PickVerticesInRect(UnityEngine.Camera cam, UnityEngine.Rect rect, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selectable, UnityEngine.ProBuilder.PickerOptions options, System.Single pixelsPerPoint)
    // Offset: 0x19D5E34
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<int>*>* PickVerticesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, ::UnityEngine::ProBuilder::PickerOptions options, float pixelsPerPoint);
    // static public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face>> PickFacesInRect(UnityEngine.Camera cam, UnityEngine.Rect rect, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selectable, UnityEngine.ProBuilder.PickerOptions options, System.Single pixelsPerPoint)
    // Offset: 0x19D6B5C
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* PickFacesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, ::UnityEngine::ProBuilder::PickerOptions options, float pixelsPerPoint);
    // static public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Edge>> PickEdgesInRect(UnityEngine.Camera cam, UnityEngine.Rect rect, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selectable, UnityEngine.ProBuilder.PickerOptions options, System.Single pixelsPerPoint)
    // Offset: 0x19D80D8
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* PickEdgesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, ::UnityEngine::ProBuilder::PickerOptions options, float pixelsPerPoint);
    // static public UnityEngine.ProBuilder.Face PickFace(UnityEngine.Camera camera, UnityEngine.Vector3 mousePosition, UnityEngine.ProBuilder.ProBuilderMesh pickable)
    // Offset: 0x19D8E44
    static ::UnityEngine::ProBuilder::Face* PickFace(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::ProBuilder::ProBuilderMesh* pickable);
  }; // UnityEngine.ProBuilder.SelectionPicker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPicker::PickVerticesInRect
// Il2CppName: PickVerticesInRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<int>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::PickerOptions, float)>(&UnityEngine::ProBuilder::SelectionPicker::PickVerticesInRect)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* selectable = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")})->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "PickerOptions")->byval_arg;
    static auto* pixelsPerPoint = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SelectionPicker*), "PickVerticesInRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, rect, selectable, options, pixelsPerPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPicker::PickFacesInRect
// Il2CppName: PickFacesInRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::PickerOptions, float)>(&UnityEngine::ProBuilder::SelectionPicker::PickFacesInRect)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* selectable = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")})->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "PickerOptions")->byval_arg;
    static auto* pixelsPerPoint = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SelectionPicker*), "PickFacesInRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, rect, selectable, options, pixelsPerPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPicker::PickEdgesInRect
// Il2CppName: PickEdgesInRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::PickerOptions, float)>(&UnityEngine::ProBuilder::SelectionPicker::PickEdgesInRect)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* selectable = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")})->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "PickerOptions")->byval_arg;
    static auto* pixelsPerPoint = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SelectionPicker*), "PickEdgesInRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, rect, selectable, options, pixelsPerPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPicker::PickFace
// Il2CppName: PickFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::SelectionPicker::PickFace)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* mousePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pickable = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SelectionPicker*), "PickFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, mousePosition, pickable});
  }
};
