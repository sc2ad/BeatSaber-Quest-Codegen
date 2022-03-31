// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateDisposable
  class ILateDisposable;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DisposableManager::$$c__DisplayClass4_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager::$$c__DisplayClass4_1*, "Zenject", "DisposableManager/<>c__DisplayClass4_1");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DisposableManager/Zenject.<>c__DisplayClass4_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DisposableManager::$$c__DisplayClass4_1 : public ::Il2CppObject {
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
    // public Zenject.ILateDisposable lateDisposable
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::ILateDisposable* lateDisposable;
    // Field size check
    static_assert(sizeof(::Zenject::ILateDisposable*) == 0x8);
    public:
    // Creating conversion operator: operator ::Zenject::ILateDisposable*
    constexpr operator ::Zenject::ILateDisposable*() const noexcept {
      return lateDisposable;
    }
    // Get instance field reference: public Zenject.ILateDisposable lateDisposable
    ::Zenject::ILateDisposable*& dyn_lateDisposable();
    // System.Boolean <.ctor>b__2(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x1DDC2E0
    bool $_ctor$b__2(::ModestTree::Util::ValuePair_2<::System::Type*, int>* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DDC378
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DDC3D4
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1DDAE6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposableManager::$$c__DisplayClass4_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DisposableManager::$$c__DisplayClass4_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposableManager::$$c__DisplayClass4_1*, creationType>()));
    }
  }; // Zenject.DisposableManager/Zenject.<>c__DisplayClass4_1
  #pragma pack(pop)
  static check_size<sizeof(DisposableManager::$$c__DisplayClass4_1), 16 + sizeof(::Zenject::ILateDisposable*)> __Zenject_DisposableManager_$$c__DisplayClass4_1SizeCheck;
  static_assert(sizeof(DisposableManager::$$c__DisplayClass4_1) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c__DisplayClass4_1::$_ctor$b__2
// Il2CppName: <.ctor>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::DisposableManager::$$c__DisplayClass4_1::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int>*)>(&Zenject::DisposableManager::$$c__DisplayClass4_1::$_ctor$b__2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c__DisplayClass4_1*), "<.ctor>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c__DisplayClass4_1::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::DisposableManager::$$c__DisplayClass4_1::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c__DisplayClass4_1*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c__DisplayClass4_1::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::DisposableManager::$$c__DisplayClass4_1::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c__DisplayClass4_1*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c__DisplayClass4_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
