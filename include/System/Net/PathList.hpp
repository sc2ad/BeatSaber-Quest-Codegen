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
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: SortedList
  class SortedList;
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: PathList
  class PathList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::PathList);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::PathList*, "System.Net", "PathList");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.PathList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1064F2C
  class PathList : public ::Il2CppObject {
    public:
    // Nested type: ::System::Net::PathList::PathListComparer
    class PathListComparer;
    public:
    // private System.Collections.SortedList m_list
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::SortedList* m_list;
    // Field size check
    static_assert(sizeof(::System::Collections::SortedList*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::SortedList*
    constexpr operator ::System::Collections::SortedList*() const noexcept {
      return m_list;
    }
    // Get instance field reference: private System.Collections.SortedList m_list
    [[deprecated("Use field access instead!")]] ::System::Collections::SortedList*& dyn_m_list();
    // public System.Int32 get_Count()
    // Offset: 0x1BA4924
    int get_Count();
    // public System.Collections.ICollection get_Values()
    // Offset: 0x1BA4CD8
    ::System::Collections::ICollection* get_Values();
    // public System.Object get_Item(System.String s)
    // Offset: 0x1BA4CFC
    ::Il2CppObject* get_Item(::StringW s);
    // public System.Void set_Item(System.String s, System.Object value)
    // Offset: 0x1BA4D20
    void set_Item(::StringW s, ::Il2CppObject* value);
    // public System.Object get_SyncRoot()
    // Offset: 0x1BA4CB4
    ::Il2CppObject* get_SyncRoot();
    // public System.Void .ctor()
    // Offset: 0x1BA4860
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::PathList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathList*, creationType>()));
    }
    // public System.Int32 GetCookiesCount()
    // Offset: 0x1BA4948
    int GetCookiesCount();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1BA4DF4
    ::System::Collections::IEnumerator* GetEnumerator();
  }; // System.Net.PathList
  #pragma pack(pop)
  static check_size<sizeof(PathList), 16 + sizeof(::System::Collections::SortedList*)> __System_Net_PathListSizeCheck;
  static_assert(sizeof(PathList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::PathList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::PathList::*)()>(&System::Net::PathList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::PathList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::PathList::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Net::PathList::*)()>(&System::Net::PathList::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::PathList*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::PathList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::PathList::*)(::StringW)>(&System::Net::PathList::get_Item)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::PathList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::PathList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::PathList::*)(::StringW, ::Il2CppObject*)>(&System::Net::PathList::set_Item)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::PathList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, value});
  }
};
// Writing MetadataGetter for method: System::Net::PathList::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::PathList::*)()>(&System::Net::PathList::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::PathList*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::PathList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::PathList::GetCookiesCount
// Il2CppName: GetCookiesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::PathList::*)()>(&System::Net::PathList::GetCookiesCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::PathList*), "GetCookiesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::PathList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Net::PathList::*)()>(&System::Net::PathList::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::PathList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
