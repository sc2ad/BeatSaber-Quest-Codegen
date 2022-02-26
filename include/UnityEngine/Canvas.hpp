// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderMode
  struct RenderMode;
  // Forward declaring type: AdditionalCanvasShaderChannels
  struct AdditionalCanvasShaderChannels;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Canvas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Canvas*, "UnityEngine", "Canvas");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Canvas
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: 11CC744
  // [RequireComponent] Offset: 11CC744
  // [NativeHeaderAttribute] Offset: 11CC744
  // [NativeHeaderAttribute] Offset: 11CC744
  class Canvas : public ::UnityEngine::Behaviour {
    public:
    // Nested type: ::UnityEngine::Canvas::WillRenderCanvases
    class WillRenderCanvases;
    // [DebuggerBrowsableAttribute] Offset: 0x11CC8B4
    // Get static field: static private UnityEngine.Canvas/UnityEngine.WillRenderCanvases preWillRenderCanvases
    static ::UnityEngine::Canvas::WillRenderCanvases* _get_preWillRenderCanvases();
    // Set static field: static private UnityEngine.Canvas/UnityEngine.WillRenderCanvases preWillRenderCanvases
    static void _set_preWillRenderCanvases(::UnityEngine::Canvas::WillRenderCanvases* value);
    // [DebuggerBrowsableAttribute] Offset: 0x11CC8F0
    // Get static field: static private UnityEngine.Canvas/UnityEngine.WillRenderCanvases willRenderCanvases
    static ::UnityEngine::Canvas::WillRenderCanvases* _get_willRenderCanvases();
    // Set static field: static private UnityEngine.Canvas/UnityEngine.WillRenderCanvases willRenderCanvases
    static void _set_willRenderCanvases(::UnityEngine::Canvas::WillRenderCanvases* value);
    // public UnityEngine.RenderMode get_renderMode()
    // Offset: 0x2A4C190
    ::UnityEngine::RenderMode get_renderMode();
    // public System.Void set_renderMode(UnityEngine.RenderMode value)
    // Offset: 0x2A4C1D0
    void set_renderMode(::UnityEngine::RenderMode value);
    // public System.Boolean get_isRootCanvas()
    // Offset: 0x2A4C220
    bool get_isRootCanvas();
    // public System.Single get_scaleFactor()
    // Offset: 0x2A4C260
    float get_scaleFactor();
    // public System.Void set_scaleFactor(System.Single value)
    // Offset: 0x2A4C2A0
    void set_scaleFactor(float value);
    // public System.Single get_referencePixelsPerUnit()
    // Offset: 0x2A4C2F0
    float get_referencePixelsPerUnit();
    // public System.Void set_referencePixelsPerUnit(System.Single value)
    // Offset: 0x2A4C330
    void set_referencePixelsPerUnit(float value);
    // public System.Boolean get_pixelPerfect()
    // Offset: 0x2A4C380
    bool get_pixelPerfect();
    // public System.Void set_pixelPerfect(System.Boolean value)
    // Offset: 0x2A4C3C0
    void set_pixelPerfect(bool value);
    // public System.Int32 get_renderOrder()
    // Offset: 0x2A4C410
    int get_renderOrder();
    // public System.Boolean get_overrideSorting()
    // Offset: 0x2A4C450
    bool get_overrideSorting();
    // public System.Void set_overrideSorting(System.Boolean value)
    // Offset: 0x2A4C490
    void set_overrideSorting(bool value);
    // public System.Int32 get_sortingOrder()
    // Offset: 0x2A4C4E0
    int get_sortingOrder();
    // public System.Void set_sortingOrder(System.Int32 value)
    // Offset: 0x2A4C520
    void set_sortingOrder(int value);
    // public System.Int32 get_targetDisplay()
    // Offset: 0x2A4C570
    int get_targetDisplay();
    // public System.Int32 get_sortingLayerID()
    // Offset: 0x2A4C5B0
    int get_sortingLayerID();
    // public System.Void set_sortingLayerID(System.Int32 value)
    // Offset: 0x2A4C5F0
    void set_sortingLayerID(int value);
    // public UnityEngine.AdditionalCanvasShaderChannels get_additionalShaderChannels()
    // Offset: 0x2A4C640
    ::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels();
    // public System.Void set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels value)
    // Offset: 0x2A4C680
    void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels value);
    // public UnityEngine.Canvas get_rootCanvas()
    // Offset: 0x2A4C6D0
    ::UnityEngine::Canvas* get_rootCanvas();
    // public UnityEngine.Vector2 get_renderingDisplaySize()
    // Offset: 0x2A4C710
    ::UnityEngine::Vector2 get_renderingDisplaySize();
    // public UnityEngine.Camera get_worldCamera()
    // Offset: 0x2A4C7B8
    ::UnityEngine::Camera* get_worldCamera();
    // public System.Void set_worldCamera(UnityEngine.Camera value)
    // Offset: 0x2A4C7F8
    void set_worldCamera(::UnityEngine::Camera* value);
    // static public System.Void add_preWillRenderCanvases(UnityEngine.Canvas/UnityEngine.WillRenderCanvases value)
    // Offset: 0x2A4BEB8
    static void add_preWillRenderCanvases(::UnityEngine::Canvas::WillRenderCanvases* value);
    // static public System.Void remove_preWillRenderCanvases(UnityEngine.Canvas/UnityEngine.WillRenderCanvases value)
    // Offset: 0x2A4BF6C
    static void remove_preWillRenderCanvases(::UnityEngine::Canvas::WillRenderCanvases* value);
    // static public System.Void add_willRenderCanvases(UnityEngine.Canvas/UnityEngine.WillRenderCanvases value)
    // Offset: 0x2A4C020
    static void add_willRenderCanvases(::UnityEngine::Canvas::WillRenderCanvases* value);
    // static public System.Void remove_willRenderCanvases(UnityEngine.Canvas/UnityEngine.WillRenderCanvases value)
    // Offset: 0x2A4C0D8
    static void remove_willRenderCanvases(::UnityEngine::Canvas::WillRenderCanvases* value);
    // static public UnityEngine.Material GetDefaultCanvasMaterial()
    // Offset: 0x2A4C848
    static ::UnityEngine::Material* GetDefaultCanvasMaterial();
    // static public UnityEngine.Material GetETC1SupportedCanvasMaterial()
    // Offset: 0x2A4C87C
    static ::UnityEngine::Material* GetETC1SupportedCanvasMaterial();
    // static public System.Void ForceUpdateCanvases()
    // Offset: 0x2A4C8B0
    static void ForceUpdateCanvases();
    // static private System.Void SendPreWillRenderCanvases()
    // Offset: 0x2A4C8C4
    static void SendPreWillRenderCanvases();
    // static private System.Void SendWillRenderCanvases()
    // Offset: 0x2A4C924
    static void SendWillRenderCanvases();
    // private System.Void get_renderingDisplaySize_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x2A4C768
    void get_renderingDisplaySize_Injected(ByRef<::UnityEngine::Vector2> ret);
    // public System.Void .ctor()
    // Offset: 0x2A4CB90
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Canvas* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Canvas::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Canvas*, creationType>()));
    }
  }; // UnityEngine.Canvas
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Canvas::get_renderMode
// Il2CppName: get_renderMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderMode (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_renderMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_renderMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::set_renderMode
// Il2CppName: set_renderMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(::UnityEngine::RenderMode)>(&UnityEngine::Canvas::set_renderMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "set_renderMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_isRootCanvas
// Il2CppName: get_isRootCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_isRootCanvas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_isRootCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_scaleFactor
// Il2CppName: get_scaleFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_scaleFactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_scaleFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::set_scaleFactor
// Il2CppName: set_scaleFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(float)>(&UnityEngine::Canvas::set_scaleFactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "set_scaleFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_referencePixelsPerUnit
// Il2CppName: get_referencePixelsPerUnit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_referencePixelsPerUnit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_referencePixelsPerUnit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::set_referencePixelsPerUnit
// Il2CppName: set_referencePixelsPerUnit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(float)>(&UnityEngine::Canvas::set_referencePixelsPerUnit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "set_referencePixelsPerUnit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_pixelPerfect
// Il2CppName: get_pixelPerfect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_pixelPerfect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_pixelPerfect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::set_pixelPerfect
// Il2CppName: set_pixelPerfect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(bool)>(&UnityEngine::Canvas::set_pixelPerfect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "set_pixelPerfect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_renderOrder
// Il2CppName: get_renderOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_renderOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_renderOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_overrideSorting
// Il2CppName: get_overrideSorting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_overrideSorting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_overrideSorting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::set_overrideSorting
// Il2CppName: set_overrideSorting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(bool)>(&UnityEngine::Canvas::set_overrideSorting)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "set_overrideSorting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_sortingOrder
// Il2CppName: get_sortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_sortingOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_sortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::set_sortingOrder
// Il2CppName: set_sortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(int)>(&UnityEngine::Canvas::set_sortingOrder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "set_sortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_targetDisplay
// Il2CppName: get_targetDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_targetDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_targetDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_sortingLayerID
// Il2CppName: get_sortingLayerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_sortingLayerID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_sortingLayerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::set_sortingLayerID
// Il2CppName: set_sortingLayerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(int)>(&UnityEngine::Canvas::set_sortingLayerID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "set_sortingLayerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_additionalShaderChannels
// Il2CppName: get_additionalShaderChannels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AdditionalCanvasShaderChannels (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_additionalShaderChannels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_additionalShaderChannels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::set_additionalShaderChannels
// Il2CppName: set_additionalShaderChannels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(::UnityEngine::AdditionalCanvasShaderChannels)>(&UnityEngine::Canvas::set_additionalShaderChannels)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AdditionalCanvasShaderChannels")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "set_additionalShaderChannels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_rootCanvas
// Il2CppName: get_rootCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas* (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_rootCanvas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_rootCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_renderingDisplaySize
// Il2CppName: get_renderingDisplaySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_renderingDisplaySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_renderingDisplaySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_worldCamera
// Il2CppName: get_worldCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (UnityEngine::Canvas::*)()>(&UnityEngine::Canvas::get_worldCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_worldCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::set_worldCamera
// Il2CppName: set_worldCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(::UnityEngine::Camera*)>(&UnityEngine::Canvas::set_worldCamera)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "set_worldCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::add_preWillRenderCanvases
// Il2CppName: add_preWillRenderCanvases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Canvas::WillRenderCanvases*)>(&UnityEngine::Canvas::add_preWillRenderCanvases)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas/WillRenderCanvases")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "add_preWillRenderCanvases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::remove_preWillRenderCanvases
// Il2CppName: remove_preWillRenderCanvases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Canvas::WillRenderCanvases*)>(&UnityEngine::Canvas::remove_preWillRenderCanvases)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas/WillRenderCanvases")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "remove_preWillRenderCanvases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::add_willRenderCanvases
// Il2CppName: add_willRenderCanvases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Canvas::WillRenderCanvases*)>(&UnityEngine::Canvas::add_willRenderCanvases)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas/WillRenderCanvases")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "add_willRenderCanvases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::remove_willRenderCanvases
// Il2CppName: remove_willRenderCanvases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Canvas::WillRenderCanvases*)>(&UnityEngine::Canvas::remove_willRenderCanvases)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas/WillRenderCanvases")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "remove_willRenderCanvases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::GetDefaultCanvasMaterial
// Il2CppName: GetDefaultCanvasMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::Canvas::GetDefaultCanvasMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "GetDefaultCanvasMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::GetETC1SupportedCanvasMaterial
// Il2CppName: GetETC1SupportedCanvasMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::Canvas::GetETC1SupportedCanvasMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "GetETC1SupportedCanvasMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::ForceUpdateCanvases
// Il2CppName: ForceUpdateCanvases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Canvas::ForceUpdateCanvases)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "ForceUpdateCanvases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::SendPreWillRenderCanvases
// Il2CppName: SendPreWillRenderCanvases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Canvas::SendPreWillRenderCanvases)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "SendPreWillRenderCanvases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::SendWillRenderCanvases
// Il2CppName: SendWillRenderCanvases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Canvas::SendWillRenderCanvases)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "SendWillRenderCanvases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::get_renderingDisplaySize_Injected
// Il2CppName: get_renderingDisplaySize_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Canvas::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Canvas::get_renderingDisplaySize_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Canvas*), "get_renderingDisplaySize_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Canvas::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
