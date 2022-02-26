// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.Ephemeron
#include "System/Runtime/CompilerServices/Ephemeron.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: GC
  class GC;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::GC);
DEFINE_IL2CPP_ARG_TYPE(::System::GC*, "System", "GC");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.GC
  // [TokenAttribute] Offset: FFFFFFFF
  class GC : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Object EPHEMERON_TOMBSTONE
    static ::Il2CppObject* _get_EPHEMERON_TOMBSTONE();
    // Set static field: static readonly System.Object EPHEMERON_TOMBSTONE
    static void _set_EPHEMERON_TOMBSTONE(::Il2CppObject* value);
    // static public System.Int32 get_MaxGeneration()
    // Offset: 0x188A2D0
    static int get_MaxGeneration();
    // static private System.Void .cctor()
    // Offset: 0x188A534
    static void _cctor();
    // static private System.Int32 GetCollectionCount(System.Int32 generation)
    // Offset: 0x188A25C
    static int GetCollectionCount(int generation);
    // static private System.Int32 GetMaxGeneration()
    // Offset: 0x188A260
    static int GetMaxGeneration();
    // static private System.Void InternalCollect(System.Int32 generation)
    // Offset: 0x188A264
    static void InternalCollect(int generation);
    // static System.Void register_ephemeron_array(System.Runtime.CompilerServices.Ephemeron[] array)
    // Offset: 0x188A268
    static void register_ephemeron_array(::ArrayW<::System::Runtime::CompilerServices::Ephemeron> array);
    // static private System.Object get_ephemeron_tombstone()
    // Offset: 0x188A26C
    static ::Il2CppObject* get_ephemeron_tombstone();
    // static public System.Void Collect()
    // Offset: 0x188A270
    static void Collect();
    // static public System.Int32 CollectionCount(System.Int32 generation)
    // Offset: 0x188A32C
    static int CollectionCount(int generation);
    // static public System.Void KeepAlive(System.Object obj)
    // Offset: 0x188A3E0
    static void KeepAlive(::Il2CppObject* obj);
    // static private System.Void _SuppressFinalize(System.Object o)
    // Offset: 0x188A3E4
    static void _SuppressFinalize(::Il2CppObject* o);
    // static public System.Void SuppressFinalize(System.Object obj)
    // Offset: 0x188A3E8
    static void SuppressFinalize(::Il2CppObject* obj);
    // static private System.Void _ReRegisterForFinalize(System.Object o)
    // Offset: 0x188A48C
    static void _ReRegisterForFinalize(::Il2CppObject* o);
    // static public System.Void ReRegisterForFinalize(System.Object obj)
    // Offset: 0x188A490
    static void ReRegisterForFinalize(::Il2CppObject* obj);
  }; // System.GC
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::GC::get_MaxGeneration
// Il2CppName: get_MaxGeneration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::GC::get_MaxGeneration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "get_MaxGeneration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::GC::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::GC::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::GC*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::GC::GetCollectionCount
// Il2CppName: GetCollectionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::GC::GetCollectionCount)> {
  static const MethodInfo* get() {
    static auto* generation = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "GetCollectionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{generation});
  }
};
// Writing MetadataGetter for method: System::GC::GetMaxGeneration
// Il2CppName: GetMaxGeneration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::GC::GetMaxGeneration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "GetMaxGeneration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::GC::InternalCollect
// Il2CppName: InternalCollect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&System::GC::InternalCollect)> {
  static const MethodInfo* get() {
    static auto* generation = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "InternalCollect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{generation});
  }
};
// Writing MetadataGetter for method: System::GC::register_ephemeron_array
// Il2CppName: register_ephemeron_array
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::System::Runtime::CompilerServices::Ephemeron>)>(&System::GC::register_ephemeron_array)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "Ephemeron"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "register_ephemeron_array", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: System::GC::get_ephemeron_tombstone
// Il2CppName: get_ephemeron_tombstone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::GC::get_ephemeron_tombstone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "get_ephemeron_tombstone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::GC::Collect
// Il2CppName: Collect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::GC::Collect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "Collect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::GC::CollectionCount
// Il2CppName: CollectionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::GC::CollectionCount)> {
  static const MethodInfo* get() {
    static auto* generation = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "CollectionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{generation});
  }
};
// Writing MetadataGetter for method: System::GC::KeepAlive
// Il2CppName: KeepAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::GC::KeepAlive)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "KeepAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::GC::_SuppressFinalize
// Il2CppName: _SuppressFinalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::GC::_SuppressFinalize)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "_SuppressFinalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::GC::SuppressFinalize
// Il2CppName: SuppressFinalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::GC::SuppressFinalize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "SuppressFinalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::GC::_ReRegisterForFinalize
// Il2CppName: _ReRegisterForFinalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::GC::_ReRegisterForFinalize)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "_ReRegisterForFinalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::GC::ReRegisterForFinalize
// Il2CppName: ReRegisterForFinalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::GC::ReRegisterForFinalize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::GC*), "ReRegisterForFinalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
