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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: KeySequence
  class KeySequence;
  // Forward declaring type: LocatedActiveAxis
  class LocatedActiveAxis;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: KSStruct
  class KSStruct;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::KSStruct);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::KSStruct*, "System.Xml.Schema", "KSStruct");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.KSStruct
  // [TokenAttribute] Offset: FFFFFFFF
  class KSStruct : public ::Il2CppObject {
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
    // public System.Int32 depth
    // Size: 0x4
    // Offset: 0x10
    int depth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: depth and: ks
    char __padding0[0x4] = {};
    // public System.Xml.Schema.KeySequence ks
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::KeySequence* ks;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::KeySequence*) == 0x8);
    // public System.Xml.Schema.LocatedActiveAxis[] fields
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*> fields;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::LocatedActiveAxis*>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 depth
    int& dyn_depth();
    // Get instance field reference: public System.Xml.Schema.KeySequence ks
    ::System::Xml::Schema::KeySequence*& dyn_ks();
    // Get instance field reference: public System.Xml.Schema.LocatedActiveAxis[] fields
    ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*>& dyn_fields();
    // public System.Void .ctor(System.Xml.Schema.KeySequence ks, System.Int32 dim)
    // Offset: 0x149A15C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KSStruct* New_ctor(::System::Xml::Schema::KeySequence* ks, int dim) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::KSStruct::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KSStruct*, creationType>(ks, dim)));
    }
  }; // System.Xml.Schema.KSStruct
  #pragma pack(pop)
  static check_size<sizeof(KSStruct), 32 + sizeof(::ArrayW<::System::Xml::Schema::LocatedActiveAxis*>)> __System_Xml_Schema_KSStructSizeCheck;
  static_assert(sizeof(KSStruct) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::KSStruct::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
