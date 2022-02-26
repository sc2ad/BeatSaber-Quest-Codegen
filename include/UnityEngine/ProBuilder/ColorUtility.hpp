// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: CIELabColor
  class CIELabColor;
  // Forward declaring type: XYZColor
  class XYZColor;
  // Forward declaring type: HSVColor
  class HSVColor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ColorUtility
  class ColorUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::ColorUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ColorUtility*, "UnityEngine.ProBuilder", "ColorUtility");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ColorUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorUtility : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ProBuilder.CIELabColor> ColorNameLookup
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>* _get_ColorNameLookup();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ProBuilder.CIELabColor> ColorNameLookup
    static void _set_ColorNameLookup(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2506218
    static void _cctor();
    // static private System.Boolean approx(System.Single lhs, System.Single rhs)
    // Offset: 0x250575C
    static bool approx(float lhs, float rhs);
    // static public UnityEngine.Color GetColor(UnityEngine.Vector3 vec)
    // Offset: 0x25057E0
    static ::UnityEngine::Color GetColor(::UnityEngine::Vector3 vec);
    // static public UnityEngine.ProBuilder.XYZColor RGBToXYZ(UnityEngine.Color col)
    // Offset: 0x2505890
    static ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(::UnityEngine::Color col);
    // static public UnityEngine.ProBuilder.XYZColor RGBToXYZ(System.Single r, System.Single g, System.Single b)
    // Offset: 0x2505914
    static ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(float r, float g, float b);
    // static public UnityEngine.ProBuilder.CIELabColor XYZToCIE_Lab(UnityEngine.ProBuilder.XYZColor xyz)
    // Offset: 0x25042C4
    static ::UnityEngine::ProBuilder::CIELabColor* XYZToCIE_Lab(::UnityEngine::ProBuilder::XYZColor* xyz);
    // static public System.Single DeltaE(UnityEngine.ProBuilder.CIELabColor lhs, UnityEngine.ProBuilder.CIELabColor rhs)
    // Offset: 0x2505B58
    static float DeltaE(::UnityEngine::ProBuilder::CIELabColor* lhs, ::UnityEngine::ProBuilder::CIELabColor* rhs);
    // static public UnityEngine.Color HSVtoRGB(UnityEngine.ProBuilder.HSVColor hsv)
    // Offset: 0x2505C28
    static ::UnityEngine::Color HSVtoRGB(::UnityEngine::ProBuilder::HSVColor* hsv);
    // static public UnityEngine.Color HSVtoRGB(System.Single h, System.Single s, System.Single v)
    // Offset: 0x2505CB4
    static ::UnityEngine::Color HSVtoRGB(float h, float s, float v);
    // static public UnityEngine.ProBuilder.HSVColor RGBtoHSV(UnityEngine.Color color)
    // Offset: 0x2505E38
    static ::UnityEngine::ProBuilder::HSVColor* RGBtoHSV(::UnityEngine::Color color);
    // static public System.String GetColorName(UnityEngine.Color InColor)
    // Offset: 0x2506010
    static ::StringW GetColorName(::UnityEngine::Color InColor);
    // static private UnityEngine.ProBuilder.CIELabColor CIELabFromRGB(System.Single R, System.Single G, System.Single B, System.Single Scale)
    // Offset: 0x25061EC
    static ::UnityEngine::ProBuilder::CIELabColor* CIELabFromRGB(float R, float G, float B, float Scale);
  }; // UnityEngine.ProBuilder.ColorUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::ColorUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::approx
// Il2CppName: approx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float)>(&UnityEngine::ProBuilder::ColorUtility::approx)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "approx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::ColorUtility::GetColor)> {
  static const MethodInfo* get() {
    static auto* vec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vec});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::RGBToXYZ
// Il2CppName: RGBToXYZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::XYZColor* (*)(::UnityEngine::Color)>(&UnityEngine::ProBuilder::ColorUtility::RGBToXYZ)> {
  static const MethodInfo* get() {
    static auto* col = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "RGBToXYZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{col});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::RGBToXYZ
// Il2CppName: RGBToXYZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::XYZColor* (*)(float, float, float)>(&UnityEngine::ProBuilder::ColorUtility::RGBToXYZ)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* g = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "RGBToXYZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, g, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::XYZToCIE_Lab
// Il2CppName: XYZToCIE_Lab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::CIELabColor* (*)(::UnityEngine::ProBuilder::XYZColor*)>(&UnityEngine::ProBuilder::ColorUtility::XYZToCIE_Lab)> {
  static const MethodInfo* get() {
    static auto* xyz = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "XYZColor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "XYZToCIE_Lab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xyz});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::DeltaE
// Il2CppName: DeltaE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::ProBuilder::CIELabColor*, ::UnityEngine::ProBuilder::CIELabColor*)>(&UnityEngine::ProBuilder::ColorUtility::DeltaE)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "CIELabColor")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "CIELabColor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "DeltaE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::HSVtoRGB
// Il2CppName: HSVtoRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::ProBuilder::HSVColor*)>(&UnityEngine::ProBuilder::ColorUtility::HSVtoRGB)> {
  static const MethodInfo* get() {
    static auto* hsv = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "HSVColor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "HSVtoRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hsv});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::HSVtoRGB
// Il2CppName: HSVtoRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(float, float, float)>(&UnityEngine::ProBuilder::ColorUtility::HSVtoRGB)> {
  static const MethodInfo* get() {
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "HSVtoRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h, s, v});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::RGBtoHSV
// Il2CppName: RGBtoHSV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::HSVColor* (*)(::UnityEngine::Color)>(&UnityEngine::ProBuilder::ColorUtility::RGBtoHSV)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "RGBtoHSV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::GetColorName
// Il2CppName: GetColorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Color)>(&UnityEngine::ProBuilder::ColorUtility::GetColorName)> {
  static const MethodInfo* get() {
    static auto* InColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "GetColorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{InColor});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorUtility::CIELabFromRGB
// Il2CppName: CIELabFromRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::CIELabColor* (*)(float, float, float, float)>(&UnityEngine::ProBuilder::ColorUtility::CIELabFromRGB)> {
  static const MethodInfo* get() {
    static auto* R = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* G = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* Scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorUtility*), "CIELabFromRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{R, G, B, Scale});
  }
};
