// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_dateTimeBase
#include "System/Xml/Schema/Datatype_dateTimeBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_timeNoTimeZone
  class Datatype_timeNoTimeZone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_timeNoTimeZone);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_timeNoTimeZone*, "System.Xml.Schema", "Datatype_timeNoTimeZone");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_timeNoTimeZone
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_timeNoTimeZone : public ::System::Xml::Schema::Datatype_dateTimeBase {
    public:
    // System.Void .ctor()
    // Offset: 0x1C86D50
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_timeNoTimeZone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_timeNoTimeZone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_timeNoTimeZone*, creationType>()));
    }
  }; // System.Xml.Schema.Datatype_timeNoTimeZone
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_timeNoTimeZone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
