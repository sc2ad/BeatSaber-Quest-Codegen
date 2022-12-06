// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RectMask2D
  class RectMask2D;
  // Forward declaring type: IClippable
  class IClippable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: MaskUtilities
  class MaskUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::MaskUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MaskUtilities*, "UnityEngine.UI", "MaskUtilities");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.MaskUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class MaskUtilities : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x1F3ACA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaskUtilities* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::MaskUtilities::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaskUtilities*, creationType>()));
    }
    // static public System.Void Notify2DMaskStateChanged(UnityEngine.Component mask)
    // Offset: 0x1F3A1F4
    static void Notify2DMaskStateChanged(::UnityEngine::Component* mask);
    // static public System.Void NotifyStencilStateChanged(UnityEngine.Component mask)
    // Offset: 0x1F39664
    static void NotifyStencilStateChanged(::UnityEngine::Component* mask);
    // static public UnityEngine.Transform FindRootSortOverrideCanvas(UnityEngine.Transform start)
    // Offset: 0x1F39DE8
    static ::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform* start);
    // static public System.Int32 GetStencilDepth(UnityEngine.Transform transform, UnityEngine.Transform stopAfter)
    // Offset: 0x1F39F64
    static int GetStencilDepth(::UnityEngine::Transform* transform, ::UnityEngine::Transform* stopAfter);
    // static public System.Boolean IsDescendantOrSelf(UnityEngine.Transform father, UnityEngine.Transform child)
    // Offset: 0x1F3A448
    static bool IsDescendantOrSelf(::UnityEngine::Transform* father, ::UnityEngine::Transform* child);
    // static public UnityEngine.UI.RectMask2D GetRectMaskForClippable(UnityEngine.UI.IClippable clippable)
    // Offset: 0x1F3A5C8
    static ::UnityEngine::UI::RectMask2D* GetRectMaskForClippable(::UnityEngine::UI::IClippable* clippable);
    // static public System.Void GetRectMasksForClip(UnityEngine.UI.RectMask2D clipper, System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> masks)
    // Offset: 0x1F3A9AC
    static void GetRectMasksForClip(::UnityEngine::UI::RectMask2D* clipper, ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* masks);
  }; // UnityEngine.UI.MaskUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::MaskUtilities::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::MaskUtilities::Notify2DMaskStateChanged
// Il2CppName: Notify2DMaskStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Component*)>(&UnityEngine::UI::MaskUtilities::Notify2DMaskStateChanged)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskUtilities*), "Notify2DMaskStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskUtilities::NotifyStencilStateChanged
// Il2CppName: NotifyStencilStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Component*)>(&UnityEngine::UI::MaskUtilities::NotifyStencilStateChanged)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskUtilities*), "NotifyStencilStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskUtilities::FindRootSortOverrideCanvas
// Il2CppName: FindRootSortOverrideCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)(::UnityEngine::Transform*)>(&UnityEngine::UI::MaskUtilities::FindRootSortOverrideCanvas)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskUtilities*), "FindRootSortOverrideCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskUtilities::GetStencilDepth
// Il2CppName: GetStencilDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&UnityEngine::UI::MaskUtilities::GetStencilDepth)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* stopAfter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskUtilities*), "GetStencilDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, stopAfter});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskUtilities::IsDescendantOrSelf
// Il2CppName: IsDescendantOrSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&UnityEngine::UI::MaskUtilities::IsDescendantOrSelf)> {
  static const MethodInfo* get() {
    static auto* father = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* child = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskUtilities*), "IsDescendantOrSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{father, child});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskUtilities::GetRectMaskForClippable
// Il2CppName: GetRectMaskForClippable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::RectMask2D* (*)(::UnityEngine::UI::IClippable*)>(&UnityEngine::UI::MaskUtilities::GetRectMaskForClippable)> {
  static const MethodInfo* get() {
    static auto* clippable = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "IClippable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskUtilities*), "GetRectMaskForClippable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clippable});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskUtilities::GetRectMasksForClip
// Il2CppName: GetRectMasksForClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::RectMask2D*, ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>*)>(&UnityEngine::UI::MaskUtilities::GetRectMasksForClip)> {
  static const MethodInfo* get() {
    static auto* clipper = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "RectMask2D")->byval_arg;
    static auto* masks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UI", "RectMask2D")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskUtilities*), "GetRectMasksForClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipper, masks});
  }
};
