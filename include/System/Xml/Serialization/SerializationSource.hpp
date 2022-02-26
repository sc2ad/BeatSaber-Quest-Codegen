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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: SerializationSource
  class SerializationSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::SerializationSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::SerializationSource*, "System.Xml.Serialization", "SerializationSource");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.SerializationSource
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationSource : public ::Il2CppObject {
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
    // private System.Type[] includedTypes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Type*> includedTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.String namspace
    // Size: 0x8
    // Offset: 0x18
    ::StringW namspace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean canBeGenerated
    // Size: 0x1
    // Offset: 0x20
    bool canBeGenerated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Type[] includedTypes
    ::ArrayW<::System::Type*>& dyn_includedTypes();
    // Get instance field reference: private System.String namspace
    ::StringW& dyn_namspace();
    // Get instance field reference: private System.Boolean canBeGenerated
    bool& dyn_canBeGenerated();
    // public System.Void .ctor(System.String namspace, System.Type[] includedTypes)
    // Offset: 0x194AA28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationSource* New_ctor(::StringW namspace, ::ArrayW<::System::Type*> includedTypes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::SerializationSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationSource*, creationType>(namspace, includedTypes)));
    }
    // protected System.Boolean BaseEquals(System.Xml.Serialization.SerializationSource other)
    // Offset: 0x194AA68
    bool BaseEquals(::System::Xml::Serialization::SerializationSource* other);
  }; // System.Xml.Serialization.SerializationSource
  #pragma pack(pop)
  static check_size<sizeof(SerializationSource), 32 + sizeof(bool)> __System_Xml_Serialization_SerializationSourceSizeCheck;
  static_assert(sizeof(SerializationSource) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::SerializationSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::SerializationSource::BaseEquals
// Il2CppName: BaseEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::SerializationSource::*)(::System::Xml::Serialization::SerializationSource*)>(&System::Xml::Serialization::SerializationSource::BaseEquals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "SerializationSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::SerializationSource*), "BaseEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
