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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DisposableManager::LateDisposableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager::LateDisposableInfo*, "Zenject", "DisposableManager/LateDisposableInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DisposableManager/Zenject.LateDisposableInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DisposableManager::LateDisposableInfo : public ::Il2CppObject {
    public:
    public:
    // public Zenject.ILateDisposable LateDisposable
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::ILateDisposable* LateDisposable;
    // Field size check
    static_assert(sizeof(::Zenject::ILateDisposable*) == 0x8);
    // public System.Int32 Priority
    // Size: 0x4
    // Offset: 0x18
    int Priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public Zenject.ILateDisposable LateDisposable
    [[deprecated("Use field access instead!")]] ::Zenject::ILateDisposable*& dyn_LateDisposable();
    // Get instance field reference: public System.Int32 Priority
    [[deprecated("Use field access instead!")]] int& dyn_Priority();
    // public System.Void .ctor(Zenject.ILateDisposable lateDisposable, System.Int32 priority)
    // Offset: 0x1E7BB1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposableManager::LateDisposableInfo* New_ctor(::Zenject::ILateDisposable* lateDisposable, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DisposableManager::LateDisposableInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposableManager::LateDisposableInfo*, creationType>(lateDisposable, priority)));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1E7D3A8
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1E7D4B4
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.DisposableManager/Zenject.LateDisposableInfo
  #pragma pack(pop)
  static check_size<sizeof(DisposableManager::LateDisposableInfo), 24 + sizeof(int)> __Zenject_DisposableManager_LateDisposableInfoSizeCheck;
  static_assert(sizeof(DisposableManager::LateDisposableInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DisposableManager::LateDisposableInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DisposableManager::LateDisposableInfo::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::DisposableManager::LateDisposableInfo::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::LateDisposableInfo*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::LateDisposableInfo::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::DisposableManager::LateDisposableInfo::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::LateDisposableInfo*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
