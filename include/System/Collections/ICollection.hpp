// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::ICollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ICollection*, "System.Collections", "ICollection");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ICollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 105B340
  class ICollection/*, public ::System::Collections::IEnumerable*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating interface conversion operator: i_IEnumerable
    inline ::System::Collections::IEnumerable* i_IEnumerable() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count();
    // public System.Object get_SyncRoot()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_SyncRoot();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyTo(::System::Array* array, int index);
  }; // System.Collections.ICollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::ICollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ICollection::*)()>(&System::Collections::ICollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ICollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ICollection::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ICollection::*)()>(&System::Collections::ICollection::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ICollection*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ICollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ICollection::*)(::System::Array*, int)>(&System::Collections::ICollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ICollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
