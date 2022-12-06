// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PoolExpandMethods
#include "Zenject/PoolExpandMethods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: MemoryPoolBindInfo
  class MemoryPoolBindInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::MemoryPoolBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MemoryPoolBindInfo*, "Zenject", "MemoryPoolBindInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MemoryPoolBindInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class MemoryPoolBindInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean <ShowExpandWarning>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool ShowExpandWarning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ShowExpandWarning and: ExpandMethod
    char __padding0[0x3] = {};
    // private Zenject.PoolExpandMethods <ExpandMethod>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    ::Zenject::PoolExpandMethods ExpandMethod;
    // Field size check
    static_assert(sizeof(::Zenject::PoolExpandMethods) == 0x4);
    // private System.Int32 <InitialSize>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int InitialSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <MaxSize>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int MaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Boolean <ShowExpandWarning>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ShowExpandWarning$k__BackingField();
    // Get instance field reference: private Zenject.PoolExpandMethods <ExpandMethod>k__BackingField
    [[deprecated("Use field access instead!")]] ::Zenject::PoolExpandMethods& dyn_$ExpandMethod$k__BackingField();
    // Get instance field reference: private System.Int32 <InitialSize>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$InitialSize$k__BackingField();
    // Get instance field reference: private System.Int32 <MaxSize>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$MaxSize$k__BackingField();
    // public System.Boolean get_ShowExpandWarning()
    // Offset: 0x1CB45E8
    bool get_ShowExpandWarning();
    // public System.Void set_ShowExpandWarning(System.Boolean value)
    // Offset: 0x1CB45F0
    void set_ShowExpandWarning(bool value);
    // public Zenject.PoolExpandMethods get_ExpandMethod()
    // Offset: 0x1CB45FC
    ::Zenject::PoolExpandMethods get_ExpandMethod();
    // public System.Void set_ExpandMethod(Zenject.PoolExpandMethods value)
    // Offset: 0x1CB4604
    void set_ExpandMethod(::Zenject::PoolExpandMethods value);
    // public System.Int32 get_InitialSize()
    // Offset: 0x1CB460C
    int get_InitialSize();
    // public System.Void set_InitialSize(System.Int32 value)
    // Offset: 0x1CB4614
    void set_InitialSize(int value);
    // public System.Int32 get_MaxSize()
    // Offset: 0x1CB461C
    int get_MaxSize();
    // public System.Void set_MaxSize(System.Int32 value)
    // Offset: 0x1CB4624
    void set_MaxSize(int value);
    // public System.Void .ctor()
    // Offset: 0x1CB45B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolBindInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPoolBindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolBindInfo*, creationType>()));
    }
  }; // Zenject.MemoryPoolBindInfo
  #pragma pack(pop)
  static check_size<sizeof(MemoryPoolBindInfo), 28 + sizeof(int)> __Zenject_MemoryPoolBindInfoSizeCheck;
  static_assert(sizeof(MemoryPoolBindInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::get_ShowExpandWarning
// Il2CppName: get_ShowExpandWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MemoryPoolBindInfo::*)()>(&Zenject::MemoryPoolBindInfo::get_ShowExpandWarning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "get_ShowExpandWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::set_ShowExpandWarning
// Il2CppName: set_ShowExpandWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MemoryPoolBindInfo::*)(bool)>(&Zenject::MemoryPoolBindInfo::set_ShowExpandWarning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "set_ShowExpandWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::get_ExpandMethod
// Il2CppName: get_ExpandMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::PoolExpandMethods (Zenject::MemoryPoolBindInfo::*)()>(&Zenject::MemoryPoolBindInfo::get_ExpandMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "get_ExpandMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::set_ExpandMethod
// Il2CppName: set_ExpandMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MemoryPoolBindInfo::*)(::Zenject::PoolExpandMethods)>(&Zenject::MemoryPoolBindInfo::set_ExpandMethod)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "PoolExpandMethods")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "set_ExpandMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::get_InitialSize
// Il2CppName: get_InitialSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::MemoryPoolBindInfo::*)()>(&Zenject::MemoryPoolBindInfo::get_InitialSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "get_InitialSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::set_InitialSize
// Il2CppName: set_InitialSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MemoryPoolBindInfo::*)(int)>(&Zenject::MemoryPoolBindInfo::set_InitialSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "set_InitialSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::get_MaxSize
// Il2CppName: get_MaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::MemoryPoolBindInfo::*)()>(&Zenject::MemoryPoolBindInfo::get_MaxSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "get_MaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::set_MaxSize
// Il2CppName: set_MaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MemoryPoolBindInfo::*)(int)>(&Zenject::MemoryPoolBindInfo::set_MaxSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "set_MaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
