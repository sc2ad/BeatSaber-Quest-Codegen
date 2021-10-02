// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: TMPro.TextContainerAnchors
#include "TMPro/TextContainerAnchors.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TextContainer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: EB76B0
  // [AddComponentMenu] Offset: EB76B0
  class TextContainer : public UnityEngine::EventSystems::UIBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Boolean m_hasChanged
    // Size: 0x1
    // Offset: 0x18
    bool m_hasChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_hasChanged and: m_pivot
    char __padding0[0x3] = {};
    // private UnityEngine.Vector2 m_pivot
    // Size: 0x8
    // Offset: 0x1C
    UnityEngine::Vector2 m_pivot;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private TMPro.TextContainerAnchors m_anchorPosition
    // Size: 0x4
    // Offset: 0x24
    TMPro::TextContainerAnchors m_anchorPosition;
    // Field size check
    static_assert(sizeof(TMPro::TextContainerAnchors) == 0x4);
    // private UnityEngine.Rect m_rect
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Rect m_rect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private System.Boolean m_isDefaultWidth
    // Size: 0x1
    // Offset: 0x38
    bool m_isDefaultWidth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_isDefaultHeight
    // Size: 0x1
    // Offset: 0x39
    bool m_isDefaultHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_isAutoFitting
    // Size: 0x1
    // Offset: 0x3A
    bool m_isAutoFitting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isAutoFitting and: m_corners
    char __padding6[0x5] = {};
    // private UnityEngine.Vector3[] m_corners
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<UnityEngine::Vector3> m_corners;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3[] m_worldCorners
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<UnityEngine::Vector3> m_worldCorners;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector4 m_margins
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Vector4 m_margins;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // private UnityEngine.RectTransform m_rectTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::RectTransform* m_rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private TMPro.TextMeshPro m_textMeshPro
    // Size: 0x8
    // Offset: 0x68
    TMPro::TextMeshPro* m_textMeshPro;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private UnityEngine.Vector2 k_defaultSize
    static UnityEngine::Vector2 _get_k_defaultSize();
    // Set static field: static private UnityEngine.Vector2 k_defaultSize
    static void _set_k_defaultSize(UnityEngine::Vector2 value);
    // Get instance field reference: private System.Boolean m_hasChanged
    bool& dyn_m_hasChanged();
    // Get instance field reference: private UnityEngine.Vector2 m_pivot
    UnityEngine::Vector2& dyn_m_pivot();
    // Get instance field reference: private TMPro.TextContainerAnchors m_anchorPosition
    TMPro::TextContainerAnchors& dyn_m_anchorPosition();
    // Get instance field reference: private UnityEngine.Rect m_rect
    UnityEngine::Rect& dyn_m_rect();
    // Get instance field reference: private System.Boolean m_isDefaultWidth
    bool& dyn_m_isDefaultWidth();
    // Get instance field reference: private System.Boolean m_isDefaultHeight
    bool& dyn_m_isDefaultHeight();
    // Get instance field reference: private System.Boolean m_isAutoFitting
    bool& dyn_m_isAutoFitting();
    // Get instance field reference: private UnityEngine.Vector3[] m_corners
    ::ArrayW<UnityEngine::Vector3>& dyn_m_corners();
    // Get instance field reference: private UnityEngine.Vector3[] m_worldCorners
    ::ArrayW<UnityEngine::Vector3>& dyn_m_worldCorners();
    // Get instance field reference: private UnityEngine.Vector4 m_margins
    UnityEngine::Vector4& dyn_m_margins();
    // Get instance field reference: private UnityEngine.RectTransform m_rectTransform
    UnityEngine::RectTransform*& dyn_m_rectTransform();
    // Get instance field reference: private TMPro.TextMeshPro m_textMeshPro
    TMPro::TextMeshPro*& dyn_m_textMeshPro();
    // public System.Boolean get_hasChanged()
    // Offset: 0x15C52EC
    bool get_hasChanged();
    // public System.Void set_hasChanged(System.Boolean value)
    // Offset: 0x15C52F4
    void set_hasChanged(bool value);
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0x15C5300
    UnityEngine::Vector2 get_pivot();
    // public System.Void set_pivot(UnityEngine.Vector2 value)
    // Offset: 0x15C5308
    void set_pivot(UnityEngine::Vector2 value);
    // public TMPro.TextContainerAnchors get_anchorPosition()
    // Offset: 0x15C5834
    TMPro::TextContainerAnchors get_anchorPosition();
    // public System.Void set_anchorPosition(TMPro.TextContainerAnchors value)
    // Offset: 0x15C583C
    void set_anchorPosition(TMPro::TextContainerAnchors value);
    // public UnityEngine.Rect get_rect()
    // Offset: 0x15C5990
    UnityEngine::Rect get_rect();
    // public System.Void set_rect(UnityEngine.Rect value)
    // Offset: 0x15C599C
    void set_rect(UnityEngine::Rect value);
    // public UnityEngine.Vector2 get_size()
    // Offset: 0x15C5A28
    UnityEngine::Vector2 get_size();
    // public System.Void set_size(UnityEngine.Vector2 value)
    // Offset: 0x15C5A8C
    void set_size(UnityEngine::Vector2 value);
    // public System.Single get_width()
    // Offset: 0x15C5BFC
    float get_width();
    // public System.Void set_width(System.Single value)
    // Offset: 0x15C5C08
    void set_width(float value);
    // public System.Single get_height()
    // Offset: 0x15C5C7C
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0x15C5C88
    void set_height(float value);
    // public System.Boolean get_isDefaultWidth()
    // Offset: 0x15C5CF8
    bool get_isDefaultWidth();
    // public System.Boolean get_isDefaultHeight()
    // Offset: 0x15C5D00
    bool get_isDefaultHeight();
    // public System.Boolean get_isAutoFitting()
    // Offset: 0x15C5D08
    bool get_isAutoFitting();
    // public System.Void set_isAutoFitting(System.Boolean value)
    // Offset: 0x15C5D10
    void set_isAutoFitting(bool value);
    // public UnityEngine.Vector3[] get_corners()
    // Offset: 0x15C5D1C
    ::ArrayW<UnityEngine::Vector3> get_corners();
    // public UnityEngine.Vector3[] get_worldCorners()
    // Offset: 0x15C5D24
    ::ArrayW<UnityEngine::Vector3> get_worldCorners();
    // public UnityEngine.Vector4 get_margins()
    // Offset: 0x15C5D2C
    UnityEngine::Vector4 get_margins();
    // public System.Void set_margins(UnityEngine.Vector4 value)
    // Offset: 0x15C5D38
    void set_margins(UnityEngine::Vector4 value);
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x15C5E2C
    UnityEngine::RectTransform* get_rectTransform();
    // public TMPro.TextMeshPro get_textMeshPro()
    // Offset: 0x15C5EC4
    TMPro::TextMeshPro* get_textMeshPro();
    // private System.Void OnContainerChanged()
    // Offset: 0x15C56F8
    void OnContainerChanged();
    // private System.Void SetRect(UnityEngine.Vector2 size)
    // Offset: 0x15C5B78
    void SetRect(UnityEngine::Vector2 size);
    // private System.Void UpdateCorners()
    // Offset: 0x15C601C
    void UpdateCorners();
    // private UnityEngine.Vector2 GetPivot(TMPro.TextContainerAnchors anchor)
    // Offset: 0x15C5880
    UnityEngine::Vector2 GetPivot(TMPro::TextContainerAnchors anchor);
    // private TMPro.TextContainerAnchors GetAnchorPosition(UnityEngine.Vector2 pivot)
    // Offset: 0x15C53D4
    TMPro::TextContainerAnchors GetAnchorPosition(UnityEngine::Vector2 pivot);
    // public System.Void .ctor()
    // Offset: 0x15C6420
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TextContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextContainer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x15C6498
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override System.Void Awake()
    // Offset: 0x15C5F5C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0x15C6014
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x15C6018
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x15C628C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
  }; // TMPro.TextContainer
  #pragma pack(pop)
  static check_size<sizeof(TextContainer), 104 + sizeof(TMPro::TextMeshPro*)> __TMPro_TextContainerSizeCheck;
  static_assert(sizeof(TextContainer) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextContainer*, "TMPro", "TextContainer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TextContainer::get_hasChanged
// Il2CppName: get_hasChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_hasChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_hasChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::set_hasChanged
// Il2CppName: set_hasChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(bool)>(&TMPro::TextContainer::set_hasChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "set_hasChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_pivot
// Il2CppName: get_pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_pivot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::set_pivot
// Il2CppName: set_pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(UnityEngine::Vector2)>(&TMPro::TextContainer::set_pivot)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "set_pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_anchorPosition
// Il2CppName: get_anchorPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TextContainerAnchors (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_anchorPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_anchorPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::set_anchorPosition
// Il2CppName: set_anchorPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(TMPro::TextContainerAnchors)>(&TMPro::TextContainer::set_anchorPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("TMPro", "TextContainerAnchors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "set_anchorPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_rect
// Il2CppName: get_rect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_rect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_rect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::set_rect
// Il2CppName: set_rect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(UnityEngine::Rect)>(&TMPro::TextContainer::set_rect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "set_rect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(UnityEngine::Vector2)>(&TMPro::TextContainer::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(float)>(&TMPro::TextContainer::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(float)>(&TMPro::TextContainer::set_height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_isDefaultWidth
// Il2CppName: get_isDefaultWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_isDefaultWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_isDefaultWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_isDefaultHeight
// Il2CppName: get_isDefaultHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_isDefaultHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_isDefaultHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_isAutoFitting
// Il2CppName: get_isAutoFitting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_isAutoFitting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_isAutoFitting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::set_isAutoFitting
// Il2CppName: set_isAutoFitting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(bool)>(&TMPro::TextContainer::set_isAutoFitting)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "set_isAutoFitting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_corners
// Il2CppName: get_corners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector3> (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_corners)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_corners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_worldCorners
// Il2CppName: get_worldCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector3> (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_worldCorners)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_worldCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_margins
// Il2CppName: get_margins
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_margins)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_margins", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::set_margins
// Il2CppName: set_margins
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(UnityEngine::Vector4)>(&TMPro::TextContainer::set_margins)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "set_margins", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectTransform* (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::get_textMeshPro
// Il2CppName: get_textMeshPro
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TextMeshPro* (TMPro::TextContainer::*)()>(&TMPro::TextContainer::get_textMeshPro)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "get_textMeshPro", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::OnContainerChanged
// Il2CppName: OnContainerChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)()>(&TMPro::TextContainer::OnContainerChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "OnContainerChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::SetRect
// Il2CppName: SetRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)(UnityEngine::Vector2)>(&TMPro::TextContainer::SetRect)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "SetRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::UpdateCorners
// Il2CppName: UpdateCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)()>(&TMPro::TextContainer::UpdateCorners)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "UpdateCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::GetPivot
// Il2CppName: GetPivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (TMPro::TextContainer::*)(TMPro::TextContainerAnchors)>(&TMPro::TextContainer::GetPivot)> {
  static const MethodInfo* get() {
    static auto* anchor = &::il2cpp_utils::GetClassFromName("TMPro", "TextContainerAnchors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "GetPivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchor});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::GetAnchorPosition
// Il2CppName: GetAnchorPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TextContainerAnchors (TMPro::TextContainer::*)(UnityEngine::Vector2)>(&TMPro::TextContainer::GetAnchorPosition)> {
  static const MethodInfo* get() {
    static auto* pivot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "GetAnchorPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pivot});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TextContainer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TextContainer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)()>(&TMPro::TextContainer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)()>(&TMPro::TextContainer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)()>(&TMPro::TextContainer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TextContainer::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TextContainer::*)()>(&TMPro::TextContainer::OnRectTransformDimensionsChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TextContainer*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
