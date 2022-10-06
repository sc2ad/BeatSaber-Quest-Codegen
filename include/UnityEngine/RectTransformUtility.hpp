// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransformUtility
  class RectTransformUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::RectTransformUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransformUtility*, "UnityEngine", "RectTransformUtility");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RectTransformUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 1093190
  // [NativeHeaderAttribute] Offset: 1093190
  // [NativeHeaderAttribute] Offset: 1093190
  // [NativeHeaderAttribute] Offset: 1093190
  // [NativeHeaderAttribute] Offset: 1093190
  class RectTransformUtility : public ::Il2CppObject {
    public:
    // Get static field: static private readonly UnityEngine.Vector3[] s_Corners
    static ::ArrayW<::UnityEngine::Vector3> _get_s_Corners();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Corners
    static void _set_s_Corners(::ArrayW<::UnityEngine::Vector3> value);
    // static private System.Void .cctor()
    // Offset: 0x2B3B848
    static void _cctor();
    // static public UnityEngine.Vector2 PixelAdjustPoint(UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas)
    // Offset: 0x2B3A7AC
    static ::UnityEngine::Vector2 PixelAdjustPoint(::UnityEngine::Vector2 point, ::UnityEngine::Transform* elementTransform, ::UnityEngine::Canvas* canvas);
    // static public UnityEngine.Rect PixelAdjustRect(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas)
    // Offset: 0x2B3A8C8
    static ::UnityEngine::Rect PixelAdjustRect(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Canvas* canvas);
    // static private System.Boolean PointInRectangle(UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
    // Offset: 0x2B3A9D0
    static bool PointInRectangle(::UnityEngine::Vector2 screenPoint, ::UnityEngine::RectTransform* rect, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4 offset);
    // static public System.Boolean RectangleContainsScreenPoint(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam)
    // Offset: 0x2B3AAF0
    static bool RectangleContainsScreenPoint(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam);
    // static public System.Boolean RectangleContainsScreenPoint(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
    // Offset: 0x2B3ABD4
    static bool RectangleContainsScreenPoint(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4 offset);
    // static public System.Boolean ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector3 worldPoint)
    // Offset: 0x2B3AC90
    static bool ScreenPointToWorldPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ByRef<::UnityEngine::Vector3> worldPoint);
    // static public System.Boolean ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector2 localPoint)
    // Offset: 0x2B3B050
    static bool ScreenPointToLocalPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ByRef<::UnityEngine::Vector2> localPoint);
    // static public UnityEngine.Ray ScreenPointToRay(UnityEngine.Camera cam, UnityEngine.Vector2 screenPos)
    // Offset: 0x2B3AEB0
    static ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Camera* cam, ::UnityEngine::Vector2 screenPos);
    // static public UnityEngine.Vector2 WorldToScreenPoint(UnityEngine.Camera cam, UnityEngine.Vector3 worldPoint)
    // Offset: 0x2B3B194
    static ::UnityEngine::Vector2 WorldToScreenPoint(::UnityEngine::Camera* cam, ::UnityEngine::Vector3 worldPoint);
    // static public System.Void FlipLayoutOnAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Boolean keepPositioning, System.Boolean recursive)
    // Offset: 0x2B3B2A4
    static void FlipLayoutOnAxis(::UnityEngine::RectTransform* rect, int axis, bool keepPositioning, bool recursive);
    // static public System.Void FlipLayoutAxes(UnityEngine.RectTransform rect, System.Boolean keepPositioning, System.Boolean recursive)
    // Offset: 0x2B3B548
    static void FlipLayoutAxes(::UnityEngine::RectTransform* rect, bool keepPositioning, bool recursive);
    // static private UnityEngine.Vector2 GetTransposed(UnityEngine.Vector2 input)
    // Offset: 0x2B3B810
    static ::UnityEngine::Vector2 GetTransposed(::UnityEngine::Vector2 input);
    // static private System.Void PixelAdjustPoint_Injected(ref UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas, out UnityEngine.Vector2 ret)
    // Offset: 0x2B3A860
    static void PixelAdjustPoint_Injected(ByRef<::UnityEngine::Vector2> point, ::UnityEngine::Transform* elementTransform, ::UnityEngine::Canvas* canvas, ByRef<::UnityEngine::Vector2> ret);
    // static private System.Void PixelAdjustRect_Injected(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas, out UnityEngine.Rect ret)
    // Offset: 0x2B3A978
    static void PixelAdjustRect_Injected(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Canvas* canvas, ByRef<::UnityEngine::Rect> ret);
    // static private System.Boolean PointInRectangle_Injected(ref UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam, ref UnityEngine.Vector4 offset)
    // Offset: 0x2B3AA88
    static bool PointInRectangle_Injected(ByRef<::UnityEngine::Vector2> screenPoint, ::UnityEngine::RectTransform* rect, ::UnityEngine::Camera* cam, ByRef<::UnityEngine::Vector4> offset);
  }; // UnityEngine.RectTransformUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::RectTransformUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::PixelAdjustPoint
// Il2CppName: PixelAdjustPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Transform*, ::UnityEngine::Canvas*)>(&UnityEngine::RectTransformUtility::PixelAdjustPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* elementTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "PixelAdjustPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, elementTransform, canvas});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::PixelAdjustRect
// Il2CppName: PixelAdjustRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*)>(&UnityEngine::RectTransformUtility::PixelAdjustRect)> {
  static const MethodInfo* get() {
    static auto* rectTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "PixelAdjustRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rectTransform, canvas});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::PointInRectangle
// Il2CppName: PointInRectangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector4)>(&UnityEngine::RectTransformUtility::PointInRectangle)> {
  static const MethodInfo* get() {
    static auto* screenPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "PointInRectangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenPoint, rect, cam, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::RectangleContainsScreenPoint
// Il2CppName: RectangleContainsScreenPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&UnityEngine::RectTransformUtility::RectangleContainsScreenPoint)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* screenPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "RectangleContainsScreenPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, screenPoint, cam});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::RectangleContainsScreenPoint
// Il2CppName: RectangleContainsScreenPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector4)>(&UnityEngine::RectTransformUtility::RectangleContainsScreenPoint)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* screenPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "RectangleContainsScreenPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, screenPoint, cam, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::ScreenPointToWorldPointInRectangle
// Il2CppName: ScreenPointToWorldPointInRectangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::RectTransformUtility::ScreenPointToWorldPointInRectangle)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* screenPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* worldPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "ScreenPointToWorldPointInRectangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, screenPoint, cam, worldPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::ScreenPointToLocalPointInRectangle
// Il2CppName: ScreenPointToLocalPointInRectangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransformUtility::ScreenPointToLocalPointInRectangle)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* screenPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* localPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "ScreenPointToLocalPointInRectangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, screenPoint, cam, localPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::ScreenPointToRay
// Il2CppName: ScreenPointToRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::Camera*, ::UnityEngine::Vector2)>(&UnityEngine::RectTransformUtility::ScreenPointToRay)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* screenPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "ScreenPointToRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, screenPos});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::WorldToScreenPoint
// Il2CppName: WorldToScreenPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3)>(&UnityEngine::RectTransformUtility::WorldToScreenPoint)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* worldPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "WorldToScreenPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, worldPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::FlipLayoutOnAxis
// Il2CppName: FlipLayoutOnAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*, int, bool, bool)>(&UnityEngine::RectTransformUtility::FlipLayoutOnAxis)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* keepPositioning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "FlipLayoutOnAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, axis, keepPositioning, recursive});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::FlipLayoutAxes
// Il2CppName: FlipLayoutAxes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*, bool, bool)>(&UnityEngine::RectTransformUtility::FlipLayoutAxes)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* keepPositioning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "FlipLayoutAxes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, keepPositioning, recursive});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::GetTransposed
// Il2CppName: GetTransposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&UnityEngine::RectTransformUtility::GetTransposed)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "GetTransposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::PixelAdjustPoint_Injected
// Il2CppName: PixelAdjustPoint_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector2>, ::UnityEngine::Transform*, ::UnityEngine::Canvas*, ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransformUtility::PixelAdjustPoint_Injected)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* elementTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "PixelAdjustPoint_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, elementTransform, canvas, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::PixelAdjustRect_Injected
// Il2CppName: PixelAdjustRect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*, ByRef<::UnityEngine::Rect>)>(&UnityEngine::RectTransformUtility::PixelAdjustRect_Injected)> {
  static const MethodInfo* get() {
    static auto* rectTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "PixelAdjustRect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rectTransform, canvas, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransformUtility::PointInRectangle_Injected
// Il2CppName: PointInRectangle_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Vector2>, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ByRef<::UnityEngine::Vector4>)>(&UnityEngine::RectTransformUtility::PointInRectangle_Injected)> {
  static const MethodInfo* get() {
    static auto* screenPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransformUtility*), "PointInRectangle_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenPoint, rect, cam, offset});
  }
};
