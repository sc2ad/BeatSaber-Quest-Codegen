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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryAssemblyInfo
  class BinaryAssemblyInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryAssemblyInfo : public ::Il2CppObject {
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
    // System.String assemblyString
    // Size: 0x8
    // Offset: 0x10
    ::StringW assemblyString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Reflection.Assembly assembly
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::Assembly* assembly;
    // Field size check
    static_assert(sizeof(::System::Reflection::Assembly*) == 0x8);
    public:
    // Get instance field reference: System.String assemblyString
    ::StringW& dyn_assemblyString();
    // Get instance field reference: private System.Reflection.Assembly assembly
    ::System::Reflection::Assembly*& dyn_assembly();
    // System.Void .ctor(System.String assemblyString)
    // Offset: 0x18B82B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryAssemblyInfo* New_ctor(::StringW assemblyString) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryAssemblyInfo*, creationType>(assemblyString)));
    }
    // System.Void .ctor(System.String assemblyString, System.Reflection.Assembly assembly)
    // Offset: 0x18B82DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryAssemblyInfo* New_ctor(::StringW assemblyString, ::System::Reflection::Assembly* assembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryAssemblyInfo*, creationType>(assemblyString, assembly)));
    }
    // System.Reflection.Assembly GetAssembly()
    // Offset: 0x18B8314
    ::System::Reflection::Assembly* GetAssembly();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
  #pragma pack(pop)
  static check_size<sizeof(BinaryAssemblyInfo), 24 + sizeof(::System::Reflection::Assembly*)> __System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfoSizeCheck;
  static_assert(sizeof(BinaryAssemblyInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::GetAssembly
// Il2CppName: GetAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::GetAssembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*), "GetAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
