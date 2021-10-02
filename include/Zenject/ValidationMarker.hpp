// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ValidationMarker
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ValidationMarker : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Boolean <InstantiateFailed>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool InstantiateFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: InstantiateFailed and: MarkedType
    char __padding0[0x7] = {};
    // private System.Type <MarkedType>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Type* MarkedType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean <InstantiateFailed>k__BackingField
    bool& dyn_$InstantiateFailed$k__BackingField();
    // Get instance field reference: private System.Type <MarkedType>k__BackingField
    System::Type*& dyn_$MarkedType$k__BackingField();
    // public System.Boolean get_InstantiateFailed()
    // Offset: 0x25EDD5C
    bool get_InstantiateFailed();
    // private System.Void set_InstantiateFailed(System.Boolean value)
    // Offset: 0x25EDD64
    void set_InstantiateFailed(bool value);
    // public System.Type get_MarkedType()
    // Offset: 0x25EDD70
    System::Type* get_MarkedType();
    // private System.Void set_MarkedType(System.Type value)
    // Offset: 0x25EDD78
    void set_MarkedType(System::Type* value);
    // public System.Void .ctor(System.Type markedType, System.Boolean instantiateFailed)
    // Offset: 0x25EDCEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidationMarker* New_ctor(System::Type* markedType, bool instantiateFailed) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ValidationMarker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidationMarker*, creationType>(markedType, instantiateFailed)));
    }
    // public System.Void .ctor(System.Type markedType)
    // Offset: 0x25EDD2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidationMarker* New_ctor(System::Type* markedType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ValidationMarker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidationMarker*, creationType>(markedType)));
    }
  }; // Zenject.ValidationMarker
  #pragma pack(pop)
  static check_size<sizeof(ValidationMarker), 24 + sizeof(System::Type*)> __Zenject_ValidationMarkerSizeCheck;
  static_assert(sizeof(ValidationMarker) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationMarker*, "Zenject", "ValidationMarker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ValidationMarker::get_InstantiateFailed
// Il2CppName: get_InstantiateFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ValidationMarker::*)()>(&Zenject::ValidationMarker::get_InstantiateFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ValidationMarker*), "get_InstantiateFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ValidationMarker::set_InstantiateFailed
// Il2CppName: set_InstantiateFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ValidationMarker::*)(bool)>(&Zenject::ValidationMarker::set_InstantiateFailed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ValidationMarker*), "set_InstantiateFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ValidationMarker::get_MarkedType
// Il2CppName: get_MarkedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::ValidationMarker::*)()>(&Zenject::ValidationMarker::get_MarkedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ValidationMarker*), "get_MarkedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ValidationMarker::set_MarkedType
// Il2CppName: set_MarkedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ValidationMarker::*)(System::Type*)>(&Zenject::ValidationMarker::set_MarkedType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ValidationMarker*), "set_MarkedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ValidationMarker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ValidationMarker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
