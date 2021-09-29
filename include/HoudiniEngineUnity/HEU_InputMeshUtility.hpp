// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector3Int
#include "UnityEngine/Vector3Int.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HAPI_PartInfo
  struct HAPI_PartInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputMeshUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputMeshUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HEU_InputMeshUtility
    HEU_InputMeshUtility() noexcept {}
    // static public System.Boolean SetMeshPointAttribute(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.String attrName, System.Int32 tupleSize, UnityEngine.Vector3[] data, ref HoudiniEngineUnity.HAPI_PartInfo partInfo, System.Boolean bConvertToHoudiniCoordinateSystem)
    // Offset: 0x1520028
    static bool SetMeshPointAttribute(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ::Il2CppString* attrName, int tupleSize, ::ArrayWrapper<UnityEngine::Vector3> data, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo, bool bConvertToHoudiniCoordinateSystem);
    // static public System.Boolean SetMeshPointAttribute(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.String attrName, System.Int32 tupleSize, System.Single[] data, ref HoudiniEngineUnity.HAPI_PartInfo partInfo)
    // Offset: 0x1524840
    static bool SetMeshPointAttribute(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ::Il2CppString* attrName, int tupleSize, ::ArrayWrapper<float> data, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo);
    // static public System.Boolean SetMeshVertexAttribute(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.String attrName, System.Int32 tupleSize, UnityEngine.Vector3[] data, System.Int32[] indices, ref HoudiniEngineUnity.HAPI_PartInfo partInfo, System.Boolean bConvertToHoudiniCoordinateSystem)
    // Offset: 0x152027C
    static bool SetMeshVertexAttribute(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ::Il2CppString* attrName, int tupleSize, ::ArrayWrapper<UnityEngine::Vector3> data, ::ArrayWrapper<int> indices, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo, bool bConvertToHoudiniCoordinateSystem);
    // static public System.Boolean SetMeshVertexFloatAttribute(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.String attrName, System.Int32 tupleSize, System.Single[] data, System.Int32[] indices, ref HoudiniEngineUnity.HAPI_PartInfo partInfo)
    // Offset: 0x1520514
    static bool SetMeshVertexFloatAttribute(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ::Il2CppString* attrName, int tupleSize, ::ArrayWrapper<float> data, ::ArrayWrapper<int> indices, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo);
    // static public System.Boolean UploadMeshIntoHoudiniNode(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 assetNodeID, System.Int32 objectID, System.Int32 geoID, ref UnityEngine.Mesh mesh)
    // Offset: 0x1524A34
    static bool UploadMeshIntoHoudiniNode(HoudiniEngineUnity::HEU_SessionBase* session, int assetNodeID, int objectID, int geoID, ByRef<UnityEngine::Mesh*> mesh);
    // static public System.Boolean SetMeshPointAttribute(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.String attrName, System.Int32 tupleSize, UnityEngine.Vector3Int[] data, ref HoudiniEngineUnity.HAPI_PartInfo partInfo)
    // Offset: 0x15242E8
    static bool SetMeshPointAttribute(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ::Il2CppString* attrName, int tupleSize, ::ArrayWrapper<UnityEngine::Vector3Int> data, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo);
    // static public System.Boolean SetMeshPointAttribute(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.String attrName, System.String[] data, ref HoudiniEngineUnity.HAPI_PartInfo partInfo)
    // Offset: 0x152451C
    static bool SetMeshPointAttribute(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ::Il2CppString* attrName, ::ArrayWrapper<::Il2CppString*> data, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo);
    // static public System.Boolean SetMeshDetailAttribute(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.String attrName, System.Int32 tupleSize, UnityEngine.Vector3 data, ref HoudiniEngineUnity.HAPI_PartInfo partInfo)
    // Offset: 0x15246A8
    static bool SetMeshDetailAttribute(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ::Il2CppString* attrName, int tupleSize, UnityEngine::Vector3 data, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo);
  }; // HoudiniEngineUnity.HEU_InputMeshUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputMeshUtility*, "HoudiniEngineUnity", "HEU_InputMeshUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshPointAttribute
// Il2CppName: SetMeshPointAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ::Il2CppString*, int, ::ArrayWrapper<UnityEngine::Vector3>, ByRef<HoudiniEngineUnity::HAPI_PartInfo>, bool)>(&HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshPointAttribute)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tupleSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* partInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PartInfo")->this_arg;
    static auto* bConvertToHoudiniCoordinateSystem = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputMeshUtility*), "SetMeshPointAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, attrName, tupleSize, data, partInfo, bConvertToHoudiniCoordinateSystem});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshPointAttribute
// Il2CppName: SetMeshPointAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ::Il2CppString*, int, ::ArrayWrapper<float>, ByRef<HoudiniEngineUnity::HAPI_PartInfo>)>(&HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshPointAttribute)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tupleSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* partInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PartInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputMeshUtility*), "SetMeshPointAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, attrName, tupleSize, data, partInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshVertexAttribute
// Il2CppName: SetMeshVertexAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ::Il2CppString*, int, ::ArrayWrapper<UnityEngine::Vector3>, ::ArrayWrapper<int>, ByRef<HoudiniEngineUnity::HAPI_PartInfo>, bool)>(&HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshVertexAttribute)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tupleSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* partInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PartInfo")->this_arg;
    static auto* bConvertToHoudiniCoordinateSystem = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputMeshUtility*), "SetMeshVertexAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, attrName, tupleSize, data, indices, partInfo, bConvertToHoudiniCoordinateSystem});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshVertexFloatAttribute
// Il2CppName: SetMeshVertexFloatAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ::Il2CppString*, int, ::ArrayWrapper<float>, ::ArrayWrapper<int>, ByRef<HoudiniEngineUnity::HAPI_PartInfo>)>(&HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshVertexFloatAttribute)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tupleSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* partInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PartInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputMeshUtility*), "SetMeshVertexFloatAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, attrName, tupleSize, data, indices, partInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputMeshUtility::UploadMeshIntoHoudiniNode
// Il2CppName: UploadMeshIntoHoudiniNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, int, ByRef<UnityEngine::Mesh*>)>(&HoudiniEngineUnity::HEU_InputMeshUtility::UploadMeshIntoHoudiniNode)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* assetNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputMeshUtility*), "UploadMeshIntoHoudiniNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, assetNodeID, objectID, geoID, mesh});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshPointAttribute
// Il2CppName: SetMeshPointAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ::Il2CppString*, int, ::ArrayWrapper<UnityEngine::Vector3Int>, ByRef<HoudiniEngineUnity::HAPI_PartInfo>)>(&HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshPointAttribute)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tupleSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int"), 1)->byval_arg;
    static auto* partInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PartInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputMeshUtility*), "SetMeshPointAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, attrName, tupleSize, data, partInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshPointAttribute
// Il2CppName: SetMeshPointAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ::Il2CppString*, ::ArrayWrapper<::Il2CppString*>, ByRef<HoudiniEngineUnity::HAPI_PartInfo>)>(&HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshPointAttribute)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* partInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PartInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputMeshUtility*), "SetMeshPointAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, attrName, data, partInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshDetailAttribute
// Il2CppName: SetMeshDetailAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ::Il2CppString*, int, UnityEngine::Vector3, ByRef<HoudiniEngineUnity::HAPI_PartInfo>)>(&HoudiniEngineUnity::HEU_InputMeshUtility::SetMeshDetailAttribute)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tupleSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* partInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PartInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputMeshUtility*), "SetMeshDetailAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, attrName, tupleSize, data, partInfo});
  }
};
