// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.PropertyNameTable
#include "Newtonsoft/Json/Utilities/PropertyNameTable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::PropertyNameTable::Entry);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::PropertyNameTable::Entry*, "Newtonsoft.Json.Utilities", "PropertyNameTable/Entry");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.PropertyNameTable/Newtonsoft.Json.Utilities.Entry
  // [TokenAttribute] Offset: FFFFFFFF
  class PropertyNameTable::Entry : public ::Il2CppObject {
    public:
    public:
    // readonly System.String Value
    // Size: 0x8
    // Offset: 0x10
    ::StringW Value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // readonly System.Int32 HashCode
    // Size: 0x4
    // Offset: 0x18
    int HashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: HashCode and: Next
    char __padding1[0x4] = {};
    // Newtonsoft.Json.Utilities.PropertyNameTable/Newtonsoft.Json.Utilities.Entry Next
    // Size: 0x8
    // Offset: 0x20
    ::Newtonsoft::Json::Utilities::PropertyNameTable::Entry* Next;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::PropertyNameTable::Entry*) == 0x8);
    public:
    // Get instance field reference: readonly System.String Value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Value();
    // Get instance field reference: readonly System.Int32 HashCode
    [[deprecated("Use field access instead!")]] int& dyn_HashCode();
    // Get instance field reference: Newtonsoft.Json.Utilities.PropertyNameTable/Newtonsoft.Json.Utilities.Entry Next
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Utilities::PropertyNameTable::Entry*& dyn_Next();
    // System.Void .ctor(System.String value, System.Int32 hashCode, Newtonsoft.Json.Utilities.PropertyNameTable/Newtonsoft.Json.Utilities.Entry next)
    // Offset: 0x2127674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyNameTable::Entry* New_ctor(::StringW value, int hashCode, ::Newtonsoft::Json::Utilities::PropertyNameTable::Entry* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::PropertyNameTable::Entry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyNameTable::Entry*, creationType>(value, hashCode, next)));
    }
  }; // Newtonsoft.Json.Utilities.PropertyNameTable/Newtonsoft.Json.Utilities.Entry
  #pragma pack(pop)
  static check_size<sizeof(PropertyNameTable::Entry), 32 + sizeof(::Newtonsoft::Json::Utilities::PropertyNameTable::Entry*)> __Newtonsoft_Json_Utilities_PropertyNameTable_EntrySizeCheck;
  static_assert(sizeof(PropertyNameTable::Entry) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::PropertyNameTable::Entry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
