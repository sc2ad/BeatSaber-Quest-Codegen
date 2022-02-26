// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.CollectionBase
#include "System/Collections/CollectionBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlArrayItemAttribute
  class XmlArrayItemAttribute;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlArrayItemAttributes
  class XmlArrayItemAttributes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlArrayItemAttributes);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlArrayItemAttributes*, "System.Xml.Serialization", "XmlArrayItemAttributes");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlArrayItemAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 11943A4
  class XmlArrayItemAttributes : public ::System::Collections::CollectionBase {
    public:
    // public System.Xml.Serialization.XmlArrayItemAttribute get_Item(System.Int32 index)
    // Offset: 0x1951188
    ::System::Xml::Serialization::XmlArrayItemAttribute* get_Item(int index);
    // public System.Int32 Add(System.Xml.Serialization.XmlArrayItemAttribute attribute)
    // Offset: 0x1951294
    int Add(::System::Xml::Serialization::XmlArrayItemAttribute* attribute);
    // System.Void AddKeyHash(System.Text.StringBuilder sb)
    // Offset: 0x1951364
    void AddKeyHash(::System::Text::StringBuilder* sb);
    // public System.Void .ctor()
    // Offset: 0x1951444
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlArrayItemAttributes* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlArrayItemAttributes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlArrayItemAttributes*, creationType>()));
    }
  }; // System.Xml.Serialization.XmlArrayItemAttributes
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttributes::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlArrayItemAttribute* (System::Xml::Serialization::XmlArrayItemAttributes::*)(int)>(&System::Xml::Serialization::XmlArrayItemAttributes::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttributes*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttributes::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlArrayItemAttributes::*)(::System::Xml::Serialization::XmlArrayItemAttribute*)>(&System::Xml::Serialization::XmlArrayItemAttributes::Add)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlArrayItemAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttributes*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttributes::AddKeyHash
// Il2CppName: AddKeyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlArrayItemAttributes::*)(::System::Text::StringBuilder*)>(&System::Xml::Serialization::XmlArrayItemAttributes::AddKeyHash)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlArrayItemAttributes*), "AddKeyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlArrayItemAttributes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
