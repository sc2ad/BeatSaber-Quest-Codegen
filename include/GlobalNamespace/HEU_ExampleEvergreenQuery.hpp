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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HAPI_GeoInfo
  struct HAPI_GeoInfo;
  // Forward declaring type: HAPI_AttributeOwner
  struct HAPI_AttributeOwner;
  // Forward declaring type: HAPI_AttributeInfo
  struct HAPI_AttributeInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HEU_ExampleEvergreenQuery
  class HEU_ExampleEvergreenQuery;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HEU_ExampleEvergreenQuery);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ExampleEvergreenQuery*, "", "HEU_ExampleEvergreenQuery");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HEU_ExampleEvergreenQuery
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ExampleEvergreenQuery : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x16EF850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ExampleEvergreenQuery* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HEU_ExampleEvergreenQuery::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ExampleEvergreenQuery*, creationType>()));
    }
    // static public System.Void StartQuery()
    // Offset: 0x16EDF8C
    static void StartQuery();
    // static public HoudiniEngineUnity.HEU_HoudiniAsset QueryHoudiniAsset(UnityEngine.GameObject rootGO)
    // Offset: 0x16EE220
    static ::HoudiniEngineUnity::HEU_HoudiniAsset* QueryHoudiniAsset(::UnityEngine::GameObject* rootGO);
    // static public System.Void CookAsset(HoudiniEngineUnity.HEU_HoudiniAsset houdiniAsset)
    // Offset: 0x16EE3DC
    static void CookAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset);
    // static public System.Void ChangeParmsAndCook(HoudiniEngineUnity.HEU_HoudiniAsset houdiniAsset)
    // Offset: 0x16EE404
    static void ChangeParmsAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset);
    // static public System.Void QueryObjects(HoudiniEngineUnity.HEU_HoudiniAsset houdiniAsset)
    // Offset: 0x16EE728
    static void QueryObjects(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset);
    // static public System.Void QueryGeoParts(HoudiniEngineUnity.HEU_SessionBase session, ref HoudiniEngineUnity.HAPI_GeoInfo geoInfo)
    // Offset: 0x16EEF04
    static void QueryGeoParts(::HoudiniEngineUnity::HEU_SessionBase* session, ByRef<::HoudiniEngineUnity::HAPI_GeoInfo> geoInfo);
    // static public System.Void QueryPartAttributeByOwner(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, HoudiniEngineUnity.HAPI_AttributeOwner owner, System.Int32 count, System.Text.StringBuilder sb)
    // Offset: 0x16EF36C
    static void QueryPartAttributeByOwner(::HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, int count, ::System::Text::StringBuilder* sb);
    // static public System.Void QueryAttributeByStorageType(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, ref HoudiniEngineUnity.HAPI_AttributeInfo attrInfo, System.String attrName)
    // Offset: 0x16EF6AC
    static void QueryAttributeByStorageType(::HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::StringW attrName);
    // static public System.Void QueryAttribute(HoudiniEngineUnity.HEU_HoudiniAsset houdiniAsset, System.String objName, System.String geoName, System.Int32 partID, System.String attrName)
    // Offset: 0x16EEA6C
    static void QueryAttribute(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset, ::StringW objName, ::StringW geoName, int partID, ::StringW attrName);
  }; // HEU_ExampleEvergreenQuery
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::StartQuery
// Il2CppName: StartQuery
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::HEU_ExampleEvergreenQuery::StartQuery)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleEvergreenQuery*), "StartQuery", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::QueryHoudiniAsset
// Il2CppName: QueryHoudiniAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset* (*)(::UnityEngine::GameObject*)>(&GlobalNamespace::HEU_ExampleEvergreenQuery::QueryHoudiniAsset)> {
  static const MethodInfo* get() {
    static auto* rootGO = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleEvergreenQuery*), "QueryHoudiniAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootGO});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::CookAsset
// Il2CppName: CookAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&GlobalNamespace::HEU_ExampleEvergreenQuery::CookAsset)> {
  static const MethodInfo* get() {
    static auto* houdiniAsset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleEvergreenQuery*), "CookAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{houdiniAsset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::ChangeParmsAndCook
// Il2CppName: ChangeParmsAndCook
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&GlobalNamespace::HEU_ExampleEvergreenQuery::ChangeParmsAndCook)> {
  static const MethodInfo* get() {
    static auto* houdiniAsset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleEvergreenQuery*), "ChangeParmsAndCook", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{houdiniAsset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::QueryObjects
// Il2CppName: QueryObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&GlobalNamespace::HEU_ExampleEvergreenQuery::QueryObjects)> {
  static const MethodInfo* get() {
    static auto* houdiniAsset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleEvergreenQuery*), "QueryObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{houdiniAsset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::QueryGeoParts
// Il2CppName: QueryGeoParts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase*, ByRef<::HoudiniEngineUnity::HAPI_GeoInfo>)>(&GlobalNamespace::HEU_ExampleEvergreenQuery::QueryGeoParts)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_GeoInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleEvergreenQuery*), "QueryGeoParts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::QueryPartAttributeByOwner
// Il2CppName: QueryPartAttributeByOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase*, int, int, ::HoudiniEngineUnity::HAPI_AttributeOwner, int, ::System::Text::StringBuilder*)>(&GlobalNamespace::HEU_ExampleEvergreenQuery::QueryPartAttributeByOwner)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_AttributeOwner")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleEvergreenQuery*), "QueryPartAttributeByOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, owner, count, sb});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::QueryAttributeByStorageType
// Il2CppName: QueryAttributeByStorageType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase*, int, int, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ::StringW)>(&GlobalNamespace::HEU_ExampleEvergreenQuery::QueryAttributeByStorageType)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_AttributeInfo")->this_arg;
    static auto* attrName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleEvergreenQuery*), "QueryAttributeByStorageType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, attrInfo, attrName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleEvergreenQuery::QueryAttribute
// Il2CppName: QueryAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW, ::StringW, int, ::StringW)>(&GlobalNamespace::HEU_ExampleEvergreenQuery::QueryAttribute)> {
  static const MethodInfo* get() {
    static auto* houdiniAsset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* objName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* geoName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleEvergreenQuery*), "QueryAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{houdiniAsset, objName, geoName, partID, attrName});
  }
};
