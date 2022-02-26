// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSimpleJSON.JSONObject
#include "OVRSimpleJSON/JSONObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0*, "OVRSimpleJSON", "JSONObject/<>c__DisplayClass21_0");
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONObject/OVRSimpleJSON.<>c__DisplayClass21_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JSONObject::$$c__DisplayClass21_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public OVRSimpleJSON.JSONNode aNode
    // Size: 0x8
    // Offset: 0x10
    ::OVRSimpleJSON::JSONNode* aNode;
    // Field size check
    static_assert(sizeof(::OVRSimpleJSON::JSONNode*) == 0x8);
    public:
    // Creating conversion operator: operator ::OVRSimpleJSON::JSONNode*
    constexpr operator ::OVRSimpleJSON::JSONNode*() const noexcept {
      return aNode;
    }
    // Get instance field reference: public OVRSimpleJSON.JSONNode aNode
    ::OVRSimpleJSON::JSONNode*& dyn_aNode();
    // System.Boolean <Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,OVRSimpleJSON.JSONNode> k)
    // Offset: 0x243BFC0
    bool $Remove$b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> k);
    // public System.Void .ctor()
    // Offset: 0x243BBA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONObject::$$c__DisplayClass21_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONObject::$$c__DisplayClass21_0*, creationType>()));
    }
  }; // OVRSimpleJSON.JSONObject/OVRSimpleJSON.<>c__DisplayClass21_0
  #pragma pack(pop)
  static check_size<sizeof(JSONObject::$$c__DisplayClass21_0), 16 + sizeof(::OVRSimpleJSON::JSONNode*)> __OVRSimpleJSON_JSONObject_$$c__DisplayClass21_0SizeCheck;
  static_assert(sizeof(JSONObject::$$c__DisplayClass21_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0::$Remove$b__0
// Il2CppName: <Remove>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0::$Remove$b__0)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0*), "<Remove>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
