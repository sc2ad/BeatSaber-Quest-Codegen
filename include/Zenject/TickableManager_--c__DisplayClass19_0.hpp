// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.TickableManager
#include "Zenject/TickableManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateTickable
  class ILateTickable;
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
NEED_NO_BOX(::Zenject::TickableManager::$$c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickableManager::$$c__DisplayClass19_0*, "Zenject", "TickableManager/<>c__DisplayClass19_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.TickableManager/Zenject.<>c__DisplayClass19_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TickableManager::$$c__DisplayClass19_0 : public ::Il2CppObject {
    public:
    public:
    // public Zenject.ILateTickable tickable
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::ILateTickable* tickable;
    // Field size check
    static_assert(sizeof(::Zenject::ILateTickable*) == 0x8);
    public:
    // Creating conversion operator: operator ::Zenject::ILateTickable*
    constexpr operator ::Zenject::ILateTickable*() const noexcept {
      return tickable;
    }
    // Get instance field reference: public Zenject.ILateTickable tickable
    [[deprecated("Use field access instead!")]] ::Zenject::ILateTickable*& dyn_tickable();
    // public System.Void .ctor()
    // Offset: 0x1DC42A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TickableManager::$$c__DisplayClass19_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::TickableManager::$$c__DisplayClass19_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TickableManager::$$c__DisplayClass19_0*, creationType>()));
    }
    // System.Boolean <InitLateTickables>b__1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x1DC5A9C
    bool $InitLateTickables$b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int>* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DC5B34
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DC5B90
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.TickableManager/Zenject.<>c__DisplayClass19_0
  #pragma pack(pop)
  static check_size<sizeof(TickableManager::$$c__DisplayClass19_0), 16 + sizeof(::Zenject::ILateTickable*)> __Zenject_TickableManager_$$c__DisplayClass19_0SizeCheck;
  static_assert(sizeof(TickableManager::$$c__DisplayClass19_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TickableManager::$$c__DisplayClass19_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::TickableManager::$$c__DisplayClass19_0::$InitLateTickables$b__1
// Il2CppName: <InitLateTickables>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::TickableManager::$$c__DisplayClass19_0::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int>*)>(&Zenject::TickableManager::$$c__DisplayClass19_0::$InitLateTickables$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c__DisplayClass19_0*), "<InitLateTickables>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c__DisplayClass19_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::TickableManager::$$c__DisplayClass19_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c__DisplayClass19_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c__DisplayClass19_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::TickableManager::$$c__DisplayClass19_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c__DisplayClass19_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
