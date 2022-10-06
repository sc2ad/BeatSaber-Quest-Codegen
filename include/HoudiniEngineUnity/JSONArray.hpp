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
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONArray
  class JSONArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::JSONArray);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONArray*, "HoudiniEngineUnity", "JSONArray");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.JSONArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 112D1A4
  class JSONArray : public ::HoudiniEngineUnity::JSONNode {
    public:
    // Nested type: ::HoudiniEngineUnity::JSONArray::$get_Children$d__22
    class $get_Children$d__22;
    public:
    // private System.Collections.Generic.List`1<HoudiniEngineUnity.JSONNode> m_List
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>* m_List;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>*) == 0x8);
    // private System.Boolean inline
    // Size: 0x1
    // Offset: 0x18
    bool _inline;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<HoudiniEngineUnity.JSONNode> m_List
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>*& dyn_m_List();
    // Get instance field reference: private System.Boolean inline
    [[deprecated("Use field access instead!")]] bool& dyn_inline();
    // public override System.Boolean get_Inline()
    // Offset: 0x1A390A8
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::get_Inline()
    bool get_Inline();
    // public override System.Void set_Inline(System.Boolean value)
    // Offset: 0x1A390B0
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Inline(System.Boolean value)
    void set_Inline(bool value);
    // public override HoudiniEngineUnity.JSONNodeType get_Tag()
    // Offset: 0x1A390BC
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNodeType JSONNode::get_Tag()
    ::HoudiniEngineUnity::JSONNodeType get_Tag();
    // public override System.Boolean get_IsArray()
    // Offset: 0x1A390C4
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::get_IsArray()
    bool get_IsArray();
    // public override HoudiniEngineUnity.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0x1A39188
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::get_Item(System.Int32 aIndex)
    ::HoudiniEngineUnity::JSONNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, HoudiniEngineUnity.JSONNode value)
    // Offset: 0x1A392A8
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.Int32 aIndex, HoudiniEngineUnity.JSONNode value)
    void set_Item(int aIndex, ::HoudiniEngineUnity::JSONNode* value);
    // public override HoudiniEngineUnity.JSONNode get_Item(System.String aKey)
    // Offset: 0x1A395D4
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::get_Item(System.String aKey)
    ::HoudiniEngineUnity::JSONNode* get_Item(::StringW aKey);
    // public override System.Void set_Item(System.String aKey, HoudiniEngineUnity.JSONNode value)
    // Offset: 0x1A39634
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.String aKey, HoudiniEngineUnity.JSONNode value)
    void set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value);
    // public override System.Int32 get_Count()
    // Offset: 0x1A396F4
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Int32 JSONNode::get_Count()
    int get_Count();
    // public override System.Collections.Generic.IEnumerable`1<HoudiniEngineUnity.JSONNode> get_Children()
    // Offset: 0x1A39920
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Collections.Generic.IEnumerable`1<HoudiniEngineUnity.JSONNode> JSONNode::get_Children()
    ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children();
    // public System.Void .ctor()
    // Offset: 0x1A39B50
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::JSONArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONArray*, creationType>()));
    }
    // public override HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator GetEnumerator()
    // Offset: 0x1A390CC
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator JSONNode::GetEnumerator()
    ::HoudiniEngineUnity::JSONNode::Enumerator GetEnumerator();
    // public override System.Void Add(System.String aKey, HoudiniEngineUnity.JSONNode aItem)
    // Offset: 0x1A39744
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::Add(System.String aKey, HoudiniEngineUnity.JSONNode aItem)
    void Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem);
    // public override HoudiniEngineUnity.JSONNode Remove(System.Int32 aIndex)
    // Offset: 0x1A39804
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::Remove(System.Int32 aIndex)
    ::HoudiniEngineUnity::JSONNode* Remove(int aIndex);
    // public override HoudiniEngineUnity.JSONNode Remove(HoudiniEngineUnity.JSONNode aNode)
    // Offset: 0x1A398B0
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::Remove(HoudiniEngineUnity.JSONNode aNode)
    ::HoudiniEngineUnity::JSONNode* Remove(::HoudiniEngineUnity::JSONNode* aNode);
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    // Offset: 0x1A399D8
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);
  }; // HoudiniEngineUnity.JSONArray
  #pragma pack(pop)
  static check_size<sizeof(JSONArray), 24 + sizeof(bool)> __HoudiniEngineUnity_JSONArraySizeCheck;
  static_assert(sizeof(JSONArray) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::get_Inline
// Il2CppName: get_Inline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONArray::*)()>(&HoudiniEngineUnity::JSONArray::get_Inline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "get_Inline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::set_Inline
// Il2CppName: set_Inline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONArray::*)(bool)>(&HoudiniEngineUnity::JSONArray::set_Inline)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "set_Inline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNodeType (HoudiniEngineUnity::JSONArray::*)()>(&HoudiniEngineUnity::JSONArray::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::get_IsArray
// Il2CppName: get_IsArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONArray::*)()>(&HoudiniEngineUnity::JSONArray::get_IsArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "get_IsArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONArray::*)(int)>(&HoudiniEngineUnity::JSONArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONArray::*)(int, ::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONArray::set_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONArray::*)(::StringW)>(&HoudiniEngineUnity::JSONArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONArray::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONArray::set_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::JSONArray::*)()>(&HoudiniEngineUnity::JSONArray::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* (HoudiniEngineUnity::JSONArray::*)()>(&HoudiniEngineUnity::JSONArray::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode::Enumerator (HoudiniEngineUnity::JSONArray::*)()>(&HoudiniEngineUnity::JSONArray::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONArray::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONArray::Add)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aItem = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, aItem});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONArray::*)(int)>(&HoudiniEngineUnity::JSONArray::Remove)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONArray::*)(::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONArray::Remove)> {
  static const MethodInfo* get() {
    static auto* aNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aNode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONArray::*)(::System::Text::StringBuilder*, int, int, ::HoudiniEngineUnity::JSONTextMode)>(&HoudiniEngineUnity::JSONArray::WriteToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* aSB = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* aIndent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aIndentInc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aMode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONTextMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aSB, aIndent, aIndentInc, aMode});
  }
};
