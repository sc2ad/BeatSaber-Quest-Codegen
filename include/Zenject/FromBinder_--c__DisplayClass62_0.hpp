// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::FromBinder::$$c__DisplayClass62_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FromBinder::$$c__DisplayClass62_0*, "Zenject", "FromBinder/<>c__DisplayClass62_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass62_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass62_0 : public ::Il2CppObject {
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
    // public System.Boolean includeInactive
    // Size: 0x1
    // Offset: 0x10
    bool includeInactive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean excludeSelf
    // Size: 0x1
    // Offset: 0x11
    bool excludeSelf;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean includeInactive
    bool& dyn_includeInactive();
    // Get instance field reference: public System.Boolean excludeSelf
    bool& dyn_excludeSelf();
    // Zenject.IProvider <FromComponentsInParents>b__0(Zenject.DiContainer container, System.Type concreteType)
    // Offset: 0x1D34C38
    ::Zenject::IProvider* $FromComponentsInParents$b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D34D14
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D34D70
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1D30844
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass62_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FromBinder::$$c__DisplayClass62_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass62_0*, creationType>()));
    }
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass62_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass62_0), 17 + sizeof(bool)> __Zenject_FromBinder_$$c__DisplayClass62_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass62_0) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass62_0::$FromComponentsInParents$b__0
// Il2CppName: <FromComponentsInParents>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (Zenject::FromBinder::$$c__DisplayClass62_0::*)(::Zenject::DiContainer*, ::System::Type*)>(&Zenject::FromBinder::$$c__DisplayClass62_0::$FromComponentsInParents$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass62_0*), "<FromComponentsInParents>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, concreteType});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass62_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::FromBinder::$$c__DisplayClass62_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass62_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass62_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::FromBinder::$$c__DisplayClass62_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass62_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass62_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
