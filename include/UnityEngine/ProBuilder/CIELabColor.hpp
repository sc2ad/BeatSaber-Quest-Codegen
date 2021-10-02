// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: XYZColor
  class XYZColor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.CIELabColor
  // [TokenAttribute] Offset: FFFFFFFF
  class CIELabColor : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Single L
    // Size: 0x4
    // Offset: 0x10
    float L;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single a
    // Size: 0x4
    // Offset: 0x14
    float a;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single b
    // Size: 0x4
    // Offset: 0x18
    float b;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single L
    float& dyn_L();
    // Get instance field reference: public System.Single a
    float& dyn_a();
    // Get instance field reference: public System.Single b
    float& dyn_b();
    // public System.Void .ctor(System.Single L, System.Single a, System.Single b)
    // Offset: 0x21563A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CIELabColor* New_ctor(float L, float a, float b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::CIELabColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CIELabColor*, creationType>(L, a, b)));
    }
    // static public UnityEngine.ProBuilder.CIELabColor FromXYZ(UnityEngine.ProBuilder.XYZColor xyz)
    // Offset: 0x21563EC
    static UnityEngine::ProBuilder::CIELabColor* FromXYZ(UnityEngine::ProBuilder::XYZColor* xyz);
    // static public UnityEngine.ProBuilder.CIELabColor FromRGB(UnityEngine.Color col)
    // Offset: 0x2156644
    static UnityEngine::ProBuilder::CIELabColor* FromRGB(UnityEngine::Color col);
    // public override System.String ToString()
    // Offset: 0x21566E4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.CIELabColor
  #pragma pack(pop)
  static check_size<sizeof(CIELabColor), 24 + sizeof(float)> __UnityEngine_ProBuilder_CIELabColorSizeCheck;
  static_assert(sizeof(CIELabColor) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::CIELabColor*, "UnityEngine.ProBuilder", "CIELabColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::CIELabColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::CIELabColor::FromXYZ
// Il2CppName: FromXYZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::CIELabColor* (*)(UnityEngine::ProBuilder::XYZColor*)>(&UnityEngine::ProBuilder::CIELabColor::FromXYZ)> {
  static const MethodInfo* get() {
    static auto* xyz = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "XYZColor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::CIELabColor*), "FromXYZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xyz});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::CIELabColor::FromRGB
// Il2CppName: FromRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::CIELabColor* (*)(UnityEngine::Color)>(&UnityEngine::ProBuilder::CIELabColor::FromRGB)> {
  static const MethodInfo* get() {
    static auto* col = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::CIELabColor*), "FromRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{col});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::CIELabColor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::CIELabColor::*)()>(&UnityEngine::ProBuilder::CIELabColor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::CIELabColor*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
