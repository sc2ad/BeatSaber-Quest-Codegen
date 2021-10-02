// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x120
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.GradientImage
  // [TokenAttribute] Offset: FFFFFFFF
  class GradientImage : public UnityEngine::UI::Image {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.Color _color0
    // Size: 0x10
    // Offset: 0xF8
    UnityEngine::Color color0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _color1
    // Size: 0x10
    // Offset: 0x108
    UnityEngine::Color color1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    // Size: 0x8
    // Offset: 0x118
    HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper;
    // Field size check
    static_assert(sizeof(HMUI::CurvedCanvasSettingsHelper*) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEE2AD0
    // Get static field: static private readonly UnityEngine.Vector2 kVec2Zero
    static UnityEngine::Vector2 _get_kVec2Zero();
    // Set static field: static private readonly UnityEngine.Vector2 kVec2Zero
    static void _set_kVec2Zero(UnityEngine::Vector2 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEE2AE0
    // Get static field: static private readonly UnityEngine.Vector3 kVec3Zero
    static UnityEngine::Vector3 _get_kVec3Zero();
    // Set static field: static private readonly UnityEngine.Vector3 kVec3Zero
    static void _set_kVec3Zero(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEE2AF0
    // Get static field: static private readonly UnityEngine.Vector4 kVec4Zero
    static UnityEngine::Vector4 _get_kVec4Zero();
    // Set static field: static private readonly UnityEngine.Vector4 kVec4Zero
    static void _set_kVec4Zero(UnityEngine::Vector4 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEE2B00
    // Get static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static ::ArrayW<UnityEngine::Vector2> _get_s_VertScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static void _set_s_VertScratch(::ArrayW<UnityEngine::Vector2> value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEE2B10
    // Get static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static ::ArrayW<UnityEngine::Vector2> _get_s_UVScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static void _set_s_UVScratch(::ArrayW<UnityEngine::Vector2> value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEE2B20
    // Get static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static ::ArrayW<UnityEngine::Color> _get_s_ColorScratch();
    // Set static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static void _set_s_ColorScratch(::ArrayW<UnityEngine::Color> value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEE2B30
    // Get static field: static private readonly UnityEngine.Vector3[] s_Xy
    static ::ArrayW<UnityEngine::Vector3> _get_s_Xy();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Xy
    static void _set_s_Xy(::ArrayW<UnityEngine::Vector3> value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEE2B40
    // Get static field: static private readonly UnityEngine.Vector3[] s_Uv
    static ::ArrayW<UnityEngine::Vector3> _get_s_Uv();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Uv
    static void _set_s_Uv(::ArrayW<UnityEngine::Vector3> value);
    // Get instance field reference: private UnityEngine.Color _color0
    UnityEngine::Color& dyn__color0();
    // Get instance field reference: private UnityEngine.Color _color1
    UnityEngine::Color& dyn__color1();
    // Get instance field reference: private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    HMUI::CurvedCanvasSettingsHelper*& dyn__curvedCanvasSettingsHelper();
    // public UnityEngine.Color get_color0()
    // Offset: 0x1489850
    UnityEngine::Color get_color0();
    // public System.Void set_color0(UnityEngine.Color value)
    // Offset: 0x1489860
    void set_color0(UnityEngine::Color value);
    // public UnityEngine.Color get_color1()
    // Offset: 0x14898A8
    UnityEngine::Color get_color1();
    // public System.Void set_color1(UnityEngine.Color value)
    // Offset: 0x14898BC
    void set_color1(UnityEngine::Color value);
    // private System.Void GenerateSimpleSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect, System.Single curvedUIRadius)
    // Offset: 0x1489A8C
    void GenerateSimpleSprite(UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect, float curvedUIRadius);
    // private System.Void GenerateSlicedSprite(UnityEngine.UI.VertexHelper vh, System.Single curvedUIRadius)
    // Offset: 0x1489F14
    void GenerateSlicedSprite(UnityEngine::UI::VertexHelper* vh, float curvedUIRadius);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color0, UnityEngine.Color32 color1, UnityEngine.Vector2 uv0Min, UnityEngine.Vector2 uv0Max, System.Single elementWidthScale, System.Single curvedUIRadius)
    // Offset: 0x148CCBC
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, float elementWidthScale, float curvedUIRadius);
    // public System.Void .ctor()
    // Offset: 0x148DAEC
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GradientImage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::GradientImage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GradientImage*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x148DB74
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::.cctor()
    // Base method: System.Void Graphic::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x1489904
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* toFill);
    // private System.Void GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x148A914
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill)
    void GenerateTiledSprite(UnityEngine::UI::VertexHelper* toFill);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    // Offset: 0x148D280
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, ::ArrayW<UnityEngine::Vector3> quadPositions, UnityEngine::Color32 color, ::ArrayW<UnityEngine::Vector3> quadUVs);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)
    // Offset: 0x148D074
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax);
    // private UnityEngine.Vector4 GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    // Offset: 0x148CBA0
    // Implemented from: UnityEngine.UI.Image
    // Base method: UnityEngine.Vector4 Image::GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect rect);
    // private System.Void GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect)
    // Offset: 0x148B8C0
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect)
    void GenerateFilledSprite(UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);
    // static private System.Boolean RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    // Offset: 0x148D408
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Boolean Image::RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    static bool RadialCut(::ArrayW<UnityEngine::Vector3> xy, ::ArrayW<UnityEngine::Vector3> uv, float fill, bool invert, int corner);
    // static private System.Void RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    // Offset: 0x148D574
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    static void RadialCut(::ArrayW<UnityEngine::Vector3> xy, float cos, float sin, bool invert, int corner);
    // private UnityEngine.Vector4 GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    // Offset: 0x148C6FC
    // Implemented from: UnityEngine.UI.Image
    // Base method: UnityEngine.Vector4 Image::GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);
  }; // HMUI.GradientImage
  #pragma pack(pop)
  static check_size<sizeof(GradientImage), 280 + sizeof(HMUI::CurvedCanvasSettingsHelper*)> __HMUI_GradientImageSizeCheck;
  static_assert(sizeof(GradientImage) == 0x120);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage*, "HMUI", "GradientImage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::GradientImage::get_color0
// Il2CppName: get_color0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::GradientImage::*)()>(&HMUI::GradientImage::get_color0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "get_color0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::set_color0
// Il2CppName: set_color0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::GradientImage::*)(UnityEngine::Color)>(&HMUI::GradientImage::set_color0)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "set_color0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::get_color1
// Il2CppName: get_color1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::GradientImage::*)()>(&HMUI::GradientImage::get_color1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "get_color1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::set_color1
// Il2CppName: set_color1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::GradientImage::*)(UnityEngine::Color)>(&HMUI::GradientImage::set_color1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "set_color1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::GenerateSimpleSprite
// Il2CppName: GenerateSimpleSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::GradientImage::*)(UnityEngine::UI::VertexHelper*, bool, float)>(&HMUI::GradientImage::GenerateSimpleSprite)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* lPreserveAspect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "GenerateSimpleSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh, lPreserveAspect, curvedUIRadius});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::GenerateSlicedSprite
// Il2CppName: GenerateSlicedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::GradientImage::*)(UnityEngine::UI::VertexHelper*, float)>(&HMUI::GradientImage::GenerateSlicedSprite)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "GenerateSlicedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh, curvedUIRadius});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::AddQuad
// Il2CppName: AddQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper*, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, float, float)>(&HMUI::GradientImage::AddQuad)> {
  static const MethodInfo* get() {
    static auto* vertexHelper = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* posMin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* posMax = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* color0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* color1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uv0Min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv0Max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* elementWidthScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "AddQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertexHelper, posMin, posMax, color0, color1, uv0Min, uv0Max, elementWidthScale, curvedUIRadius});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::GradientImage::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HMUI::GradientImage::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::OnPopulateMesh
// Il2CppName: OnPopulateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::GradientImage::*)(UnityEngine::UI::VertexHelper*)>(&HMUI::GradientImage::OnPopulateMesh)> {
  static const MethodInfo* get() {
    static auto* toFill = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "OnPopulateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toFill});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::GenerateTiledSprite
// Il2CppName: GenerateTiledSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::GradientImage::*)(UnityEngine::UI::VertexHelper*)>(&HMUI::GradientImage::GenerateTiledSprite)> {
  static const MethodInfo* get() {
    static auto* toFill = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "GenerateTiledSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toFill});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::AddQuad
// Il2CppName: AddQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper*, ::ArrayW<UnityEngine::Vector3>, UnityEngine::Color32, ::ArrayW<UnityEngine::Vector3>)>(&HMUI::GradientImage::AddQuad)> {
  static const MethodInfo* get() {
    static auto* vertexHelper = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* quadPositions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* quadUVs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "AddQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertexHelper, quadPositions, color, quadUVs});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::AddQuad
// Il2CppName: AddQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper*, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2)>(&HMUI::GradientImage::AddQuad)> {
  static const MethodInfo* get() {
    static auto* vertexHelper = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* posMin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* posMax = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uvMin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uvMax = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "AddQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertexHelper, posMin, posMax, color, uvMin, uvMax});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::GetAdjustedBorders
// Il2CppName: GetAdjustedBorders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (HMUI::GradientImage::*)(UnityEngine::Vector4, UnityEngine::Rect)>(&HMUI::GradientImage::GetAdjustedBorders)> {
  static const MethodInfo* get() {
    static auto* border = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "GetAdjustedBorders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{border, rect});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::GenerateFilledSprite
// Il2CppName: GenerateFilledSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::GradientImage::*)(UnityEngine::UI::VertexHelper*, bool)>(&HMUI::GradientImage::GenerateFilledSprite)> {
  static const MethodInfo* get() {
    static auto* toFill = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* preserveAspect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "GenerateFilledSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toFill, preserveAspect});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::RadialCut
// Il2CppName: RadialCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Vector3>, float, bool, int)>(&HMUI::GradientImage::RadialCut)> {
  static const MethodInfo* get() {
    static auto* xy = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* uv = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* fill = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* invert = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* corner = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "RadialCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xy, uv, fill, invert, corner});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::RadialCut
// Il2CppName: RadialCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::Vector3>, float, float, bool, int)>(&HMUI::GradientImage::RadialCut)> {
  static const MethodInfo* get() {
    static auto* xy = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* cos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* invert = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* corner = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "RadialCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xy, cos, sin, invert, corner});
  }
};
// Writing MetadataGetter for method: HMUI::GradientImage::GetDrawingDimensions
// Il2CppName: GetDrawingDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (HMUI::GradientImage::*)(bool)>(&HMUI::GradientImage::GetDrawingDimensions)> {
  static const MethodInfo* get() {
    static auto* shouldPreserveAspect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::GradientImage*), "GetDrawingDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldPreserveAspect});
  }
};
