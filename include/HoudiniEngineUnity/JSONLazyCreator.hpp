// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.JSONNode
#include "HoudiniEngineUnity/JSONNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONArray
  class JSONArray;
  // Forward declaring type: JSONObject
  class JSONObject;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONLazyCreator
  class JSONLazyCreator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::JSONLazyCreator);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONLazyCreator*, "HoudiniEngineUnity", "JSONLazyCreator");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.JSONLazyCreator
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1144D4C
  class JSONLazyCreator : public ::HoudiniEngineUnity::JSONNode {
    public:
    public:
    // private HoudiniEngineUnity.JSONNode m_Node
    // Size: 0x8
    // Offset: 0x10
    ::HoudiniEngineUnity::JSONNode* m_Node;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::JSONNode*) == 0x8);
    // private System.String m_Key
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private HoudiniEngineUnity.JSONNode m_Node
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::JSONNode*& dyn_m_Node();
    // Get instance field reference: private System.String m_Key
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Key();
    // public System.Void .ctor(HoudiniEngineUnity.JSONNode aNode)
    // Offset: 0x1A5F334
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONLazyCreator* New_ctor(::HoudiniEngineUnity::JSONNode* aNode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::JSONLazyCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONLazyCreator*, creationType>(aNode)));
    }
    // public System.Void .ctor(HoudiniEngineUnity.JSONNode aNode, System.String aKey)
    // Offset: 0x1A602F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONLazyCreator* New_ctor(::HoudiniEngineUnity::JSONNode* aNode, ::StringW aKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::JSONLazyCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONLazyCreator*, creationType>(aNode, aKey)));
    }
    // private T Set(T aVal)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T Set(T aVal) {
      static_assert(std::is_convertible_v<T, ::HoudiniEngineUnity::JSONNode*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::JSONLazyCreator::Set");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Set", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aVal)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, aVal);
    }
    // public override HoudiniEngineUnity.JSONNodeType get_Tag()
    // Offset: 0x1A602CC
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNodeType JSONNode::get_Tag()
    ::HoudiniEngineUnity::JSONNodeType get_Tag();
    // public override HoudiniEngineUnity.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0x1A60374
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::get_Item(System.Int32 aIndex)
    ::HoudiniEngineUnity::JSONNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, HoudiniEngineUnity.JSONNode value)
    // Offset: 0x1A603D4
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.Int32 aIndex, HoudiniEngineUnity.JSONNode value)
    void set_Item(int aIndex, ::HoudiniEngineUnity::JSONNode* value);
    // public override HoudiniEngineUnity.JSONNode get_Item(System.String aKey)
    // Offset: 0x1A60468
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::get_Item(System.String aKey)
    ::HoudiniEngineUnity::JSONNode* get_Item(::StringW aKey);
    // public override System.Void set_Item(System.String aKey, HoudiniEngineUnity.JSONNode value)
    // Offset: 0x1A604D8
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.String aKey, HoudiniEngineUnity.JSONNode value)
    void set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value);
    // public override System.Int32 get_AsInt()
    // Offset: 0x1A60784
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Int32 JSONNode::get_AsInt()
    int get_AsInt();
    // public override System.Void set_AsInt(System.Int32 value)
    // Offset: 0x1A60878
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_AsInt(System.Int32 value)
    void set_AsInt(int value);
    // public override System.Single get_AsFloat()
    // Offset: 0x1A608F4
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Single JSONNode::get_AsFloat()
    float get_AsFloat();
    // public override System.Void set_AsFloat(System.Single value)
    // Offset: 0x1A6096C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_AsFloat(System.Single value)
    void set_AsFloat(float value);
    // public override System.Double get_AsDouble()
    // Offset: 0x1A609E8
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Double JSONNode::get_AsDouble()
    double get_AsDouble();
    // public override System.Void set_AsDouble(System.Double value)
    // Offset: 0x1A60A60
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_AsDouble(System.Double value)
    void set_AsDouble(double value);
    // public override System.Int64 get_AsLong()
    // Offset: 0x1A60ADC
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Int64 JSONNode::get_AsLong()
    int64_t get_AsLong();
    // public override System.Void set_AsLong(System.Int64 value)
    // Offset: 0x1A60C30
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_AsLong(System.Int64 value)
    void set_AsLong(int64_t value);
    // public override System.Boolean get_AsBool()
    // Offset: 0x1A60D38
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::get_AsBool()
    bool get_AsBool();
    // public override System.Void set_AsBool(System.Boolean value)
    // Offset: 0x1A60DB0
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_AsBool(System.Boolean value)
    void set_AsBool(bool value);
    // public override HoudiniEngineUnity.JSONArray get_AsArray()
    // Offset: 0x1A60E2C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONArray JSONNode::get_AsArray()
    ::HoudiniEngineUnity::JSONArray* get_AsArray();
    // public override HoudiniEngineUnity.JSONObject get_AsObject()
    // Offset: 0x1A60E98
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONObject JSONNode::get_AsObject()
    ::HoudiniEngineUnity::JSONObject* get_AsObject();
    // public override HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator GetEnumerator()
    // Offset: 0x1A602D4
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator JSONNode::GetEnumerator()
    ::HoudiniEngineUnity::JSONNode::Enumerator GetEnumerator();
    // public override System.Void Add(HoudiniEngineUnity.JSONNode aItem)
    // Offset: 0x1A60604
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::Add(HoudiniEngineUnity.JSONNode aItem)
    void Add(::HoudiniEngineUnity::JSONNode* aItem);
    // public override System.Void Add(System.String aKey, HoudiniEngineUnity.JSONNode aItem)
    // Offset: 0x1A60698
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::Add(System.String aKey, HoudiniEngineUnity.JSONNode aItem)
    void Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1A60764
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1A6077C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    // Offset: 0x1A60F04
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);
  }; // HoudiniEngineUnity.JSONLazyCreator
  #pragma pack(pop)
  static check_size<sizeof(JSONLazyCreator), 24 + sizeof(::StringW)> __HoudiniEngineUnity_JSONLazyCreatorSizeCheck;
  static_assert(sizeof(JSONLazyCreator) == 0x20);
  // static public System.Boolean op_Equality(HoudiniEngineUnity.JSONLazyCreator a, System.Object b)
  // Offset: 0x1A60734
  bool operator ==(::HoudiniEngineUnity::JSONLazyCreator* a, ::Il2CppObject& b);
  // static public System.Boolean op_Inequality(HoudiniEngineUnity.JSONLazyCreator a, System.Object b)
  // Offset: 0x1A6074C
  bool operator !=(::HoudiniEngineUnity::JSONLazyCreator* a, ::Il2CppObject& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::Set
// Il2CppName: Set
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNodeType (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONLazyCreator::*)(int)>(&HoudiniEngineUnity::JSONLazyCreator::get_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(int, ::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONLazyCreator::set_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONLazyCreator::*)(::StringW)>(&HoudiniEngineUnity::JSONLazyCreator::get_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONLazyCreator::set_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_AsInt
// Il2CppName: get_AsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::get_AsInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_AsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::set_AsInt
// Il2CppName: set_AsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(int)>(&HoudiniEngineUnity::JSONLazyCreator::set_AsInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "set_AsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_AsFloat
// Il2CppName: get_AsFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::get_AsFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_AsFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::set_AsFloat
// Il2CppName: set_AsFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(float)>(&HoudiniEngineUnity::JSONLazyCreator::set_AsFloat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "set_AsFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_AsDouble
// Il2CppName: get_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::get_AsDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::set_AsDouble
// Il2CppName: set_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(double)>(&HoudiniEngineUnity::JSONLazyCreator::set_AsDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "set_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_AsLong
// Il2CppName: get_AsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::get_AsLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_AsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::set_AsLong
// Il2CppName: set_AsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(int64_t)>(&HoudiniEngineUnity::JSONLazyCreator::set_AsLong)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "set_AsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_AsBool
// Il2CppName: get_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::get_AsBool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::set_AsBool
// Il2CppName: set_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(bool)>(&HoudiniEngineUnity::JSONLazyCreator::set_AsBool)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "set_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_AsArray
// Il2CppName: get_AsArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONArray* (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::get_AsArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_AsArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::get_AsObject
// Il2CppName: get_AsObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONObject* (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::get_AsObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "get_AsObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode::Enumerator (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONLazyCreator::Add)> {
  static const MethodInfo* get() {
    static auto* aItem = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aItem});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONLazyCreator::Add)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aItem = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, aItem});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONLazyCreator::*)(::Il2CppObject*)>(&HoudiniEngineUnity::JSONLazyCreator::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::JSONLazyCreator::*)()>(&HoudiniEngineUnity::JSONLazyCreator::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONLazyCreator::*)(::System::Text::StringBuilder*, int, int, ::HoudiniEngineUnity::JSONTextMode)>(&HoudiniEngineUnity::JSONLazyCreator::WriteToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* aSB = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* aIndent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aIndentInc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aMode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONTextMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONLazyCreator*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aSB, aIndent, aIndentInc, aMode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONLazyCreator::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
