// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ObjectPool`1<T>
  template<typename T>
  class ObjectPool_1;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: LayoutRebuilder
  class LayoutRebuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::LayoutRebuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::LayoutRebuilder*, "UnityEngine.UI", "LayoutRebuilder");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.LayoutRebuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class LayoutRebuilder : public ::Il2CppObject/*, public ::UnityEngine::UI::ICanvasElement*/ {
    public:
    // Nested type: ::UnityEngine::UI::LayoutRebuilder::$$c
    class $$c;
    public:
    // private UnityEngine.RectTransform m_ToRebuild
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::RectTransform* m_ToRebuild;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private System.Int32 m_CachedHashFromTransform
    // Size: 0x4
    // Offset: 0x18
    int m_CachedHashFromTransform;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UI::ICanvasElement
    operator ::UnityEngine::UI::ICanvasElement() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::ICanvasElement*>(this);
    }
    // Creating interface conversion operator: i_ICanvasElement
    inline ::UnityEngine::UI::ICanvasElement* i_ICanvasElement() noexcept {
      return reinterpret_cast<::UnityEngine::UI::ICanvasElement*>(this);
    }
    // Get static field: static private UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder> s_Rebuilders
    static ::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>* _get_s_Rebuilders();
    // Set static field: static private UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder> s_Rebuilders
    static void _set_s_Rebuilders(::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>* value);
    // Get instance field reference: private UnityEngine.RectTransform m_ToRebuild
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_m_ToRebuild();
    // Get instance field reference: private System.Int32 m_CachedHashFromTransform
    [[deprecated("Use field access instead!")]] int& dyn_m_CachedHashFromTransform();
    // public UnityEngine.Transform get_transform()
    // Offset: 0x1F392B8
    ::UnityEngine::Transform* get_transform();
    // static private System.Void .cctor()
    // Offset: 0x1F39144
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1F3A224
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LayoutRebuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::LayoutRebuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LayoutRebuilder*, creationType>()));
    }
    // private System.Void Initialize(UnityEngine.RectTransform controller)
    // Offset: 0x1F390F8
    void Initialize(::UnityEngine::RectTransform* controller);
    // private System.Void Clear()
    // Offset: 0x1F39138
    void Clear();
    // static private System.Void ReapplyDrivenProperties(UnityEngine.RectTransform driven)
    // Offset: 0x1F39254
    static void ReapplyDrivenProperties(::UnityEngine::RectTransform* driven);
    // public System.Boolean IsDestroyed()
    // Offset: 0x1F392C0
    bool IsDestroyed();
    // static private System.Void StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component> components)
    // Offset: 0x1F39330
    static void StripDisabledBehavioursFromList(::System::Collections::Generic::List_1<::UnityEngine::Component*>* components);
    // static public System.Void ForceRebuildLayoutImmediate(UnityEngine.RectTransform layoutRoot)
    // Offset: 0x1F39424
    static void ForceRebuildLayoutImmediate(::UnityEngine::RectTransform* layoutRoot);
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x1F39500
    void Rebuild(::UnityEngine::UI::CanvasUpdate executing);
    // private System.Void PerformLayoutControl(UnityEngine.RectTransform rect, UnityEngine.Events.UnityAction`1<UnityEngine.Component> action)
    // Offset: 0x1F39AB0
    void PerformLayoutControl(::UnityEngine::RectTransform* rect, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>* action);
    // private System.Void PerformLayoutCalculation(UnityEngine.RectTransform rect, UnityEngine.Events.UnityAction`1<UnityEngine.Component> action)
    // Offset: 0x1F397E4
    void PerformLayoutCalculation(::UnityEngine::RectTransform* rect, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>* action);
    // static public System.Void MarkLayoutForRebuild(UnityEngine.RectTransform rect)
    // Offset: 0x1F37B48
    static void MarkLayoutForRebuild(::UnityEngine::RectTransform* rect);
    // static private System.Boolean ValidController(UnityEngine.RectTransform layoutRoot, System.Collections.Generic.List`1<UnityEngine.Component> comps)
    // Offset: 0x1F39DB4
    static bool ValidController(::UnityEngine::RectTransform* layoutRoot, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* comps);
    // static private System.Void MarkLayoutRootForRebuild(UnityEngine.RectTransform controller)
    // Offset: 0x1F39F90
    static void MarkLayoutRootForRebuild(::UnityEngine::RectTransform* controller);
    // public System.Void LayoutComplete()
    // Offset: 0x1F3A0EC
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x1F3A170
    void GraphicUpdateComplete();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F3A174
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1F3A17C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x1F3A1D0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.UI.LayoutRebuilder
  #pragma pack(pop)
  static check_size<sizeof(LayoutRebuilder), 24 + sizeof(int)> __UnityEngine_UI_LayoutRebuilderSizeCheck;
  static_assert(sizeof(LayoutRebuilder) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::UI::LayoutRebuilder::*)()>(&UnityEngine::UI::LayoutRebuilder::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::LayoutRebuilder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::*)(::UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutRebuilder::Initialize)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::*)()>(&UnityEngine::UI::LayoutRebuilder::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::ReapplyDrivenProperties
// Il2CppName: ReapplyDrivenProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutRebuilder::ReapplyDrivenProperties)> {
  static const MethodInfo* get() {
    static auto* driven = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "ReapplyDrivenProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{driven});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::IsDestroyed
// Il2CppName: IsDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::LayoutRebuilder::*)()>(&UnityEngine::UI::LayoutRebuilder::IsDestroyed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "IsDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::StripDisabledBehavioursFromList
// Il2CppName: StripDisabledBehavioursFromList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Component*>*)>(&UnityEngine::UI::LayoutRebuilder::StripDisabledBehavioursFromList)> {
  static const MethodInfo* get() {
    static auto* components = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Component")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "StripDisabledBehavioursFromList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{components});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::ForceRebuildLayoutImmediate
// Il2CppName: ForceRebuildLayoutImmediate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutRebuilder::ForceRebuildLayoutImmediate)> {
  static const MethodInfo* get() {
    static auto* layoutRoot = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "ForceRebuildLayoutImmediate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layoutRoot});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::*)(::UnityEngine::UI::CanvasUpdate)>(&UnityEngine::UI::LayoutRebuilder::Rebuild)> {
  static const MethodInfo* get() {
    static auto* executing = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "CanvasUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{executing});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::PerformLayoutControl
// Il2CppName: PerformLayoutControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::*)(::UnityEngine::RectTransform*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>*)>(&UnityEngine::UI::LayoutRebuilder::PerformLayoutControl)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Component")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "PerformLayoutControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, action});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::PerformLayoutCalculation
// Il2CppName: PerformLayoutCalculation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::*)(::UnityEngine::RectTransform*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>*)>(&UnityEngine::UI::LayoutRebuilder::PerformLayoutCalculation)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Component")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "PerformLayoutCalculation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, action});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::MarkLayoutForRebuild
// Il2CppName: MarkLayoutForRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutRebuilder::MarkLayoutForRebuild)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "MarkLayoutForRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::ValidController
// Il2CppName: ValidController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*)>(&UnityEngine::UI::LayoutRebuilder::ValidController)> {
  static const MethodInfo* get() {
    static auto* layoutRoot = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* comps = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Component")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "ValidController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layoutRoot, comps});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::MarkLayoutRootForRebuild
// Il2CppName: MarkLayoutRootForRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*)>(&UnityEngine::UI::LayoutRebuilder::MarkLayoutRootForRebuild)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "MarkLayoutRootForRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::LayoutComplete
// Il2CppName: LayoutComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::*)()>(&UnityEngine::UI::LayoutRebuilder::LayoutComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "LayoutComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::GraphicUpdateComplete
// Il2CppName: GraphicUpdateComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::*)()>(&UnityEngine::UI::LayoutRebuilder::GraphicUpdateComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "GraphicUpdateComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::LayoutRebuilder::*)()>(&UnityEngine::UI::LayoutRebuilder::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::LayoutRebuilder::*)(::Il2CppObject*)>(&UnityEngine::UI::LayoutRebuilder::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::LayoutRebuilder::*)()>(&UnityEngine::UI::LayoutRebuilder::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
