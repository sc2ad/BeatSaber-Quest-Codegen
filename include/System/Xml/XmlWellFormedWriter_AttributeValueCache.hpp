// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlWellFormedWriter::AttributeValueCache : public ::Il2CppObject {
    public:
    // Nested type: System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType
    struct ItemType;
    // Nested type: System::Xml::XmlWellFormedWriter::AttributeValueCache::Item
    class Item;
    // Nested type: System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk
    class BufferChunk;
    // private System.Text.StringBuilder stringValue
    // Size: 0x8
    // Offset: 0x10
    System::Text::StringBuilder* stringValue;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.String singleStringValue
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* singleStringValue;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.Item[] items
    // Size: 0x8
    // Offset: 0x20
    ::ArrayWrapper<System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*> items;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*>) == 0x8);
    // private System.Int32 firstItem
    // Size: 0x4
    // Offset: 0x28
    int firstItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastItem
    // Size: 0x4
    // Offset: 0x2C
    int lastItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AttributeValueCache
    AttributeValueCache(System::Text::StringBuilder* stringValue_ = {}, ::Il2CppString* singleStringValue_ = {}, ::ArrayWrapper<System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*> items_ = {}, int firstItem_ = {}, int lastItem_ = {}) noexcept : stringValue{stringValue_}, singleStringValue{singleStringValue_}, items{items_}, firstItem{firstItem_}, lastItem{lastItem_} {}
    // Get instance field reference: private System.Text.StringBuilder stringValue
    System::Text::StringBuilder*& dyn_stringValue();
    // Get instance field reference: private System.String singleStringValue
    ::Il2CppString*& dyn_singleStringValue();
    // Get instance field reference: private System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.Item[] items
    ::ArrayWrapper<System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*>& dyn_items();
    // Get instance field reference: private System.Int32 firstItem
    int& dyn_firstItem();
    // Get instance field reference: private System.Int32 lastItem
    int& dyn_lastItem();
    // System.String get_StringValue()
    // Offset: 0x25F5564
    ::Il2CppString* get_StringValue();
    // System.Void WriteEntityRef(System.String name)
    // Offset: 0x25F5594
    void WriteEntityRef(::Il2CppString* name);
    // System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x25F58D0
    void WriteCharEntity(::Il2CppChar ch);
    // System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x25F596C
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // System.Void WriteWhitespace(System.String ws)
    // Offset: 0x25F5A40
    void WriteWhitespace(::Il2CppString* ws);
    // System.Void WriteString(System.String text)
    // Offset: 0x25F5A94
    void WriteString(::Il2CppString* text);
    // System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x25F5B08
    void WriteChars(::ArrayWrapper<::Il2CppChar> buffer, int index, int count);
    // System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x25F5C04
    void WriteRaw(::ArrayWrapper<::Il2CppChar> buffer, int index, int count);
    // System.Void WriteRaw(System.String data)
    // Offset: 0x25F5CC0
    void WriteRaw(::Il2CppString* data);
    // System.Void WriteValue(System.String value)
    // Offset: 0x25F5D14
    void WriteValue(::Il2CppString* value);
    // System.Void Replay(System.Xml.XmlWriter writer)
    // Offset: 0x25F5D68
    void Replay(System::Xml::XmlWriter* writer);
    // System.Void Trim()
    // Offset: 0x25F6074
    void Trim();
    // System.Void Clear()
    // Offset: 0x25F64E8
    void Clear();
    // private System.Void StartComplexValue()
    // Offset: 0x25F5710
    void StartComplexValue();
    // private System.Void AddItem(System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType type, System.Object data)
    // Offset: 0x25F5758
    void AddItem(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType type, ::Il2CppObject* data);
    // public System.Void .ctor()
    // Offset: 0x25F652C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlWellFormedWriter::AttributeValueCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlWellFormedWriter::AttributeValueCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlWellFormedWriter::AttributeValueCache*, creationType>()));
    }
  }; // System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache
  #pragma pack(pop)
  static check_size<sizeof(XmlWellFormedWriter::AttributeValueCache), 44 + sizeof(int)> __System_Xml_XmlWellFormedWriter_AttributeValueCacheSizeCheck;
  static_assert(sizeof(XmlWellFormedWriter::AttributeValueCache) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::AttributeValueCache*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::get_StringValue
// Il2CppName: get_StringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)()>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::get_StringValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "get_StringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(::Il2CppString*)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteEntityRef)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(::Il2CppChar)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteCharEntity)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteSurrogateCharEntity)> {
  static const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteWhitespace
// Il2CppName: WriteWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(::Il2CppString*)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteWhitespace)> {
  static const MethodInfo* get() {
    static auto* ws = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "WriteWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ws});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(::Il2CppString*)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteString)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(::ArrayWrapper<::Il2CppChar>, int, int)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteChars)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(::ArrayWrapper<::Il2CppChar>, int, int)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(::Il2CppString*)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(::Il2CppString*)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::Replay
// Il2CppName: Replay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(System::Xml::XmlWriter*)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::Replay)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "Replay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::Trim
// Il2CppName: Trim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)()>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::Trim)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "Trim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)()>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::StartComplexValue
// Il2CppName: StartComplexValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)()>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::StartComplexValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "StartComplexValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::AddItem
// Il2CppName: AddItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::AttributeValueCache::*)(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType, ::Il2CppObject*)>(&System::Xml::XmlWellFormedWriter::AttributeValueCache::AddItem)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWellFormedWriter/AttributeValueCache/ItemType")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWellFormedWriter::AttributeValueCache*), "AddItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, data});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
