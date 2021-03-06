// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RectTransform
  // [NativeClassAttribute] Offset: D90AD4
  // [NativeHeaderAttribute] Offset: D90AD4
  class RectTransform : public UnityEngine::Transform {
    public:
    // Nested type: UnityEngine::RectTransform::Axis
    struct Axis;
    // Nested type: UnityEngine::RectTransform::ReapplyDrivenProperties
    class ReapplyDrivenProperties;
    // Creating value type constructor for type: RectTransform
    RectTransform() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xD93C90
    // [CompilerGeneratedAttribute] Offset: 0xD93C90
    // Get static field: static private UnityEngine.RectTransform/ReapplyDrivenProperties reapplyDrivenProperties
    static UnityEngine::RectTransform::ReapplyDrivenProperties* _get_reapplyDrivenProperties();
    // Set static field: static private UnityEngine.RectTransform/ReapplyDrivenProperties reapplyDrivenProperties
    static void _set_reapplyDrivenProperties(UnityEngine::RectTransform::ReapplyDrivenProperties* value);
    // static public System.Void add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
    // Offset: 0x1B28604
    static void add_reapplyDrivenProperties(UnityEngine::RectTransform::ReapplyDrivenProperties* value);
    // static public System.Void remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
    // Offset: 0x1B286B8
    static void remove_reapplyDrivenProperties(UnityEngine::RectTransform::ReapplyDrivenProperties* value);
    // public UnityEngine.Rect get_rect()
    // Offset: 0x1B2876C
    UnityEngine::Rect get_rect();
    // public UnityEngine.Vector2 get_anchorMin()
    // Offset: 0x1B28818
    UnityEngine::Vector2 get_anchorMin();
    // public System.Void set_anchorMin(UnityEngine.Vector2 value)
    // Offset: 0x1B288C0
    void set_anchorMin(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_anchorMax()
    // Offset: 0x1B28964
    UnityEngine::Vector2 get_anchorMax();
    // public System.Void set_anchorMax(UnityEngine.Vector2 value)
    // Offset: 0x1B28A0C
    void set_anchorMax(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_anchoredPosition()
    // Offset: 0x1B28AB0
    UnityEngine::Vector2 get_anchoredPosition();
    // public System.Void set_anchoredPosition(UnityEngine.Vector2 value)
    // Offset: 0x1B28B58
    void set_anchoredPosition(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_sizeDelta()
    // Offset: 0x1B28BFC
    UnityEngine::Vector2 get_sizeDelta();
    // public System.Void set_sizeDelta(UnityEngine.Vector2 value)
    // Offset: 0x1B28CA4
    void set_sizeDelta(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0x1B28D48
    UnityEngine::Vector2 get_pivot();
    // public System.Void set_pivot(UnityEngine.Vector2 value)
    // Offset: 0x1B28DF0
    void set_pivot(UnityEngine::Vector2 value);
    // public System.Void set_anchoredPosition3D(UnityEngine.Vector3 value)
    // Offset: 0x1B28E94
    void set_anchoredPosition3D(UnityEngine::Vector3 value);
    // public System.Void set_offsetMin(UnityEngine.Vector2 value)
    // Offset: 0x1B28EFC
    void set_offsetMin(UnityEngine::Vector2 value);
    // public System.Void set_offsetMax(UnityEngine.Vector2 value)
    // Offset: 0x1B29098
    void set_offsetMax(UnityEngine::Vector2 value);
    // public System.Void GetLocalCorners(UnityEngine.Vector3[] fourCornersArray)
    // Offset: 0x1B2922C
    void GetLocalCorners(::Array<UnityEngine::Vector3>* fourCornersArray);
    // public System.Void GetWorldCorners(UnityEngine.Vector3[] fourCornersArray)
    // Offset: 0x1B293FC
    void GetWorldCorners(::Array<UnityEngine::Vector3>* fourCornersArray);
    // public System.Void SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis axis, System.Single size)
    // Offset: 0x1B29538
    void SetSizeWithCurrentAnchors(UnityEngine::RectTransform::Axis axis, float size);
    // static System.Void SendReapplyDrivenProperties(UnityEngine.RectTransform driven)
    // Offset: 0x1B29700
    static void SendReapplyDrivenProperties(UnityEngine::RectTransform* driven);
    // private UnityEngine.Vector2 GetParentSize()
    // Offset: 0x1B29600
    UnityEngine::Vector2 GetParentSize();
    // private System.Void get_rect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1B287C8
    void get_rect_Injected(UnityEngine::Rect& ret);
    // private System.Void get_anchorMin_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B28870
    void get_anchorMin_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_anchorMin_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B28914
    void set_anchorMin_Injected(UnityEngine::Vector2& value);
    // private System.Void get_anchorMax_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B289BC
    void get_anchorMax_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_anchorMax_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B28A60
    void set_anchorMax_Injected(UnityEngine::Vector2& value);
    // private System.Void get_anchoredPosition_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B28B08
    void get_anchoredPosition_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_anchoredPosition_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B28BAC
    void set_anchoredPosition_Injected(UnityEngine::Vector2& value);
    // private System.Void get_sizeDelta_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B28C54
    void get_sizeDelta_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_sizeDelta_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B28CF8
    void set_sizeDelta_Injected(UnityEngine::Vector2& value);
    // private System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B28DA0
    void get_pivot_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_pivot_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1B28E44
    void set_pivot_Injected(UnityEngine::Vector2& value);
  }; // UnityEngine.RectTransform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectTransform*, "UnityEngine", "RectTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RectTransform::add_reapplyDrivenProperties
// Il2CppName: add_reapplyDrivenProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::RectTransform::ReapplyDrivenProperties*)>(&UnityEngine::RectTransform::add_reapplyDrivenProperties)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform/ReapplyDrivenProperties")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "add_reapplyDrivenProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::remove_reapplyDrivenProperties
// Il2CppName: remove_reapplyDrivenProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::RectTransform::ReapplyDrivenProperties*)>(&UnityEngine::RectTransform::remove_reapplyDrivenProperties)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform/ReapplyDrivenProperties")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "remove_reapplyDrivenProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_rect
// Il2CppName: get_rect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_rect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_rect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchorMin
// Il2CppName: get_anchorMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_anchorMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchorMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchorMin
// Il2CppName: set_anchorMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_anchorMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchorMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchorMax
// Il2CppName: get_anchorMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_anchorMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchorMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchorMax
// Il2CppName: set_anchorMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_anchorMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchorMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchoredPosition
// Il2CppName: get_anchoredPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_anchoredPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchoredPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchoredPosition
// Il2CppName: set_anchoredPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_anchoredPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchoredPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_sizeDelta
// Il2CppName: get_sizeDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_sizeDelta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_sizeDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_sizeDelta
// Il2CppName: set_sizeDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_sizeDelta)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_sizeDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_pivot
// Il2CppName: get_pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_pivot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_pivot
// Il2CppName: set_pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_pivot)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchoredPosition3D
// Il2CppName: set_anchoredPosition3D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector3)>(&UnityEngine::RectTransform::set_anchoredPosition3D)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchoredPosition3D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_offsetMin
// Il2CppName: set_offsetMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_offsetMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_offsetMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_offsetMax
// Il2CppName: set_offsetMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_offsetMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_offsetMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::GetLocalCorners
// Il2CppName: GetLocalCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::Array<UnityEngine::Vector3>*)>(&UnityEngine::RectTransform::GetLocalCorners)> {
  static const MethodInfo* get() {
    static auto* fourCornersArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "GetLocalCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fourCornersArray});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::GetWorldCorners
// Il2CppName: GetWorldCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::Array<UnityEngine::Vector3>*)>(&UnityEngine::RectTransform::GetWorldCorners)> {
  static const MethodInfo* get() {
    static auto* fourCornersArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "GetWorldCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fourCornersArray});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::SetSizeWithCurrentAnchors
// Il2CppName: SetSizeWithCurrentAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::RectTransform::Axis, float)>(&UnityEngine::RectTransform::SetSizeWithCurrentAnchors)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform/Axis")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "SetSizeWithCurrentAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::SendReapplyDrivenProperties
// Il2CppName: SendReapplyDrivenProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::RectTransform*)>(&UnityEngine::RectTransform::SendReapplyDrivenProperties)> {
  static const MethodInfo* get() {
    static auto* driven = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "SendReapplyDrivenProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{driven});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::GetParentSize
// Il2CppName: GetParentSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::GetParentSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "GetParentSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_rect_Injected
// Il2CppName: get_rect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Rect&)>(&UnityEngine::RectTransform::get_rect_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_rect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchorMin_Injected
// Il2CppName: get_anchorMin_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::get_anchorMin_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchorMin_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchorMin_Injected
// Il2CppName: set_anchorMin_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::set_anchorMin_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchorMin_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchorMax_Injected
// Il2CppName: get_anchorMax_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::get_anchorMax_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchorMax_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchorMax_Injected
// Il2CppName: set_anchorMax_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::set_anchorMax_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchorMax_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchoredPosition_Injected
// Il2CppName: get_anchoredPosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::get_anchoredPosition_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchoredPosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchoredPosition_Injected
// Il2CppName: set_anchoredPosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::set_anchoredPosition_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchoredPosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_sizeDelta_Injected
// Il2CppName: get_sizeDelta_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::get_sizeDelta_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_sizeDelta_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_sizeDelta_Injected
// Il2CppName: set_sizeDelta_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::set_sizeDelta_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_sizeDelta_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_pivot_Injected
// Il2CppName: get_pivot_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::get_pivot_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_pivot_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_pivot_Injected
// Il2CppName: set_pivot_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(UnityEngine::Vector2&)>(&UnityEngine::RectTransform::set_pivot_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_pivot_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
