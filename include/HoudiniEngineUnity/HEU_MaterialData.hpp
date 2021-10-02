// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_ParmInfo
#include "HoudiniEngineUnity/HAPI_ParmInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_MaterialInfo
  struct HAPI_MaterialInfo;
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HAPI_NodeInfo
  struct HAPI_NodeInfo;
  // Forward declaring type: HAPI_ImageInfo
  struct HAPI_ImageInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_MaterialData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_MaterialData : public UnityEngine::ScriptableObject/*, public HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_MaterialData*>*/ {
    public:
    // Nested type: HoudiniEngineUnity::HEU_MaterialData::Source
    struct Source;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source
    // [TokenAttribute] Offset: FFFFFFFF
    struct Source/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Source
      constexpr Source(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source DEFAULT
      static constexpr const int DEFAULT = 0;
      // Get static field: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source DEFAULT
      static HoudiniEngineUnity::HEU_MaterialData::Source _get_DEFAULT();
      // Set static field: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source DEFAULT
      static void _set_DEFAULT(HoudiniEngineUnity::HEU_MaterialData::Source value);
      // static field const value: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source HOUDINI
      static constexpr const int HOUDINI = 1;
      // Get static field: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source HOUDINI
      static HoudiniEngineUnity::HEU_MaterialData::Source _get_HOUDINI();
      // Set static field: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source HOUDINI
      static void _set_HOUDINI(HoudiniEngineUnity::HEU_MaterialData::Source value);
      // static field const value: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source UNITY
      static constexpr const int UNITY = 2;
      // Get static field: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source UNITY
      static HoudiniEngineUnity::HEU_MaterialData::Source _get_UNITY();
      // Set static field: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source UNITY
      static void _set_UNITY(HoudiniEngineUnity::HEU_MaterialData::Source value);
      // static field const value: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source SUBSTANCE
      static constexpr const int SUBSTANCE = 3;
      // Get static field: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source SUBSTANCE
      static HoudiniEngineUnity::HEU_MaterialData::Source _get_SUBSTANCE();
      // Set static field: static public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source SUBSTANCE
      static void _set_SUBSTANCE(HoudiniEngineUnity::HEU_MaterialData::Source value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source
    #pragma pack(pop)
    static check_size<sizeof(HEU_MaterialData::Source), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_MaterialData_SourceSizeCheck;
    static_assert(sizeof(HEU_MaterialData::Source) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source _materialSource
    // Size: 0x4
    // Offset: 0x20
    HoudiniEngineUnity::HEU_MaterialData::Source materialSource;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_MaterialData::Source) == 0x4);
    // public System.Int32 _materialKey
    // Size: 0x4
    // Offset: 0x24
    int materialKey;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_MaterialData*>
    operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_MaterialData*>() noexcept {
      return *reinterpret_cast<HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_MaterialData*>*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Material _material
    UnityEngine::Material*& dyn__material();
    // Get instance field reference: public HoudiniEngineUnity.HEU_MaterialData/HoudiniEngineUnity.Source _materialSource
    HoudiniEngineUnity::HEU_MaterialData::Source& dyn__materialSource();
    // Get instance field reference: public System.Int32 _materialKey
    int& dyn__materialKey();
    // public System.Boolean IsExistingMaterial()
    // Offset: 0x152B214
    bool IsExistingMaterial();
    // public System.Void UpdateMaterialFromHoudini(HoudiniEngineUnity.HAPI_MaterialInfo materialInfo, System.String assetCacheFolderPath)
    // Offset: 0x152B228
    void UpdateMaterialFromHoudini(HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::Il2CppString* assetCacheFolderPath);
    // public System.Void UseLegacyShaders(HoudiniEngineUnity.HAPI_MaterialInfo materialInfo, System.String assetCacheFolderPath, HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HAPI_NodeInfo nodeInfo, HoudiniEngineUnity.HAPI_ParmInfo[] parmInfos)
    // Offset: 0x152BFB4
    void UseLegacyShaders(HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::Il2CppString* assetCacheFolderPath, HoudiniEngineUnity::HEU_SessionBase* session, HoudiniEngineUnity::HAPI_NodeInfo nodeInfo, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parmInfos);
    // static public System.String GetTextureFileNameFromMaterialParam(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 nodeID, HoudiniEngineUnity.HAPI_ParmInfo parmInfo)
    // Offset: 0x152C4B4
    static ::Il2CppString* GetTextureFileNameFromMaterialParam(HoudiniEngineUnity::HEU_SessionBase* session, int nodeID, HoudiniEngineUnity::HAPI_ParmInfo parmInfo);
    // static public System.Boolean IsTransparentMaterial(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 nodeID, HoudiniEngineUnity.HAPI_ParmInfo[] parameters)
    // Offset: 0x152BF28
    static bool IsTransparentMaterial(HoudiniEngineUnity::HEU_SessionBase* session, int nodeID, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parameters);
    // static public System.Boolean GetMaterialAlpha(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 nodeID, HoudiniEngineUnity.HAPI_ParmInfo[] parameters, System.Single defaultValue, out System.Single alpha)
    // Offset: 0x152CB84
    static bool GetMaterialAlpha(HoudiniEngineUnity::HEU_SessionBase* session, int nodeID, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parameters, float defaultValue, ByRef<float> alpha);
    // static public System.String GetSupportedFileFormat(HoudiniEngineUnity.HEU_SessionBase session, ref HoudiniEngineUnity.HAPI_ImageInfo imageInfo)
    // Offset: 0x152CD3C
    static ::Il2CppString* GetSupportedFileFormat(HoudiniEngineUnity::HEU_SessionBase* session, ByRef<HoudiniEngineUnity::HAPI_ImageInfo> imageInfo);
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_MaterialData other)
    // Offset: 0x152CE44
    bool IsEquivalentTo(HoudiniEngineUnity::HEU_MaterialData* other);
    // public System.Void .ctor()
    // Offset: 0x152CFBC
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_MaterialData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_MaterialData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_MaterialData*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_MaterialData
  #pragma pack(pop)
  static check_size<sizeof(HEU_MaterialData), 36 + sizeof(int)> __HoudiniEngineUnity_HEU_MaterialDataSizeCheck;
  static_assert(sizeof(HEU_MaterialData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_MaterialData*, "HoudiniEngineUnity", "HEU_MaterialData");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_MaterialData::Source, "HoudiniEngineUnity", "HEU_MaterialData/Source");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MaterialData::IsExistingMaterial
// Il2CppName: IsExistingMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_MaterialData::*)()>(&HoudiniEngineUnity::HEU_MaterialData::IsExistingMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MaterialData*), "IsExistingMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MaterialData::UpdateMaterialFromHoudini
// Il2CppName: UpdateMaterialFromHoudini
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_MaterialData::*)(HoudiniEngineUnity::HAPI_MaterialInfo, ::Il2CppString*)>(&HoudiniEngineUnity::HEU_MaterialData::UpdateMaterialFromHoudini)> {
  static const MethodInfo* get() {
    static auto* materialInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_MaterialInfo")->byval_arg;
    static auto* assetCacheFolderPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MaterialData*), "UpdateMaterialFromHoudini", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materialInfo, assetCacheFolderPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MaterialData::UseLegacyShaders
// Il2CppName: UseLegacyShaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_MaterialData::*)(HoudiniEngineUnity::HAPI_MaterialInfo, ::Il2CppString*, HoudiniEngineUnity::HEU_SessionBase*, HoudiniEngineUnity::HAPI_NodeInfo, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>)>(&HoudiniEngineUnity::HEU_MaterialData::UseLegacyShaders)> {
  static const MethodInfo* get() {
    static auto* materialInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_MaterialInfo")->byval_arg;
    static auto* assetCacheFolderPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* nodeInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_NodeInfo")->byval_arg;
    static auto* parmInfos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MaterialData*), "UseLegacyShaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materialInfo, assetCacheFolderPath, session, nodeInfo, parmInfos});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MaterialData::GetTextureFileNameFromMaterialParam
// Il2CppName: GetTextureFileNameFromMaterialParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(HoudiniEngineUnity::HEU_SessionBase*, int, HoudiniEngineUnity::HAPI_ParmInfo)>(&HoudiniEngineUnity::HEU_MaterialData::GetTextureFileNameFromMaterialParam)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parmInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MaterialData*), "GetTextureFileNameFromMaterialParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, nodeID, parmInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MaterialData::IsTransparentMaterial
// Il2CppName: IsTransparentMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>)>(&HoudiniEngineUnity::HEU_MaterialData::IsTransparentMaterial)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MaterialData*), "IsTransparentMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, nodeID, parameters});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MaterialData::GetMaterialAlpha
// Il2CppName: GetMaterialAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>, float, ByRef<float>)>(&HoudiniEngineUnity::HEU_MaterialData::GetMaterialAlpha)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo"), 1)->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* alpha = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MaterialData*), "GetMaterialAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, nodeID, parameters, defaultValue, alpha});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MaterialData::GetSupportedFileFormat
// Il2CppName: GetSupportedFileFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(HoudiniEngineUnity::HEU_SessionBase*, ByRef<HoudiniEngineUnity::HAPI_ImageInfo>)>(&HoudiniEngineUnity::HEU_MaterialData::GetSupportedFileFormat)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* imageInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ImageInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MaterialData*), "GetSupportedFileFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, imageInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MaterialData::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_MaterialData::*)(HoudiniEngineUnity::HEU_MaterialData*)>(&HoudiniEngineUnity::HEU_MaterialData::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_MaterialData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MaterialData*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MaterialData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
