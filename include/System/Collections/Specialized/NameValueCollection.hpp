// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Specialized.NameObjectCollectionBase
#include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DBNull
  class DBNull;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: NameValueCollection
  class NameValueCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::NameValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameValueCollection*, "System.Collections.Specialized", "NameValueCollection");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.NameValueCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1065184
  class NameValueCollection : public ::System::Collections::Specialized::NameObjectCollectionBase {
    public:
    public:
    // private System.String[] _all
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::StringW> all;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.String[] _allKeys
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::StringW> allKeys;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: private System.String[] _all
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__all();
    // Get instance field reference: private System.String[] _allKeys
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__allKeys();
    // public System.String get_Item(System.String name)
    // Offset: 0x1DEC0E8
    ::StringW get_Item(::StringW name);
    // public System.Void set_Item(System.String name, System.String value)
    // Offset: 0x1DEC0F8
    void set_Item(::StringW name, ::StringW value);
    // protected System.Void InvalidateCachedArrays()
    // Offset: 0x1DEBAE0
    void InvalidateCachedArrays();
    // static private System.String GetAsOneString(System.Collections.ArrayList list)
    // Offset: 0x1DEBAE8
    static ::StringW GetAsOneString(::System::Collections::ArrayList* list);
    // static private System.String[] GetAsStringArray(System.Collections.ArrayList list)
    // Offset: 0x1DEBCA0
    static ::ArrayW<::StringW> GetAsStringArray(::System::Collections::ArrayList* list);
    // public System.Void Add(System.String name, System.String value)
    // Offset: 0x1DEBD50
    void Add(::StringW name, ::StringW value);
    // public System.String Get(System.String name)
    // Offset: 0x1DEBEC0
    ::StringW Get(::StringW name);
    // public System.String[] GetValues(System.String name)
    // Offset: 0x1DEBF5C
    ::ArrayW<::StringW> GetValues(::StringW name);
    // public System.Void Set(System.String name, System.String value)
    // Offset: 0x1DEBFF8
    void Set(::StringW name, ::StringW value);
    // public System.Void Remove(System.String name)
    // Offset: 0x1DEC0E0
    void Remove(::StringW name);
    // public System.String Get(System.Int32 index)
    // Offset: 0x1DEC108
    ::StringW Get(int index);
    // public System.String[] GetValues(System.Int32 index)
    // Offset: 0x1DEC19C
    ::ArrayW<::StringW> GetValues(int index);
    // public System.String GetKey(System.Int32 index)
    // Offset: 0x1DEC230
    ::StringW GetKey(int index);
    // public System.Void .ctor()
    // Offset: 0x1DEB8A0
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameValueCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x1DEB904
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.Int32 capacity)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameValueCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Int32 capacity, System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x1DEB978
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.Int32 capacity, System.Collections.IEqualityComparer equalityComparer)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor(int capacity, ::System::Collections::IEqualityComparer* equalityComparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameValueCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>(capacity, equalityComparer)));
    }
    // System.Void .ctor(System.DBNull dummy)
    // Offset: 0x1DEB9FC
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.DBNull dummy)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor(::System::DBNull* dummy) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameValueCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>(dummy)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1DEBA64
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameValueCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>(info, context)));
    }
  }; // System.Collections.Specialized.NameValueCollection
  #pragma pack(pop)
  static check_size<sizeof(NameValueCollection), 88 + sizeof(::ArrayW<::StringW>)> __System_Collections_Specialized_NameValueCollectionSizeCheck;
  static_assert(sizeof(NameValueCollection) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Specialized::NameValueCollection::*)(::StringW)>(&System::Collections::Specialized::NameValueCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameValueCollection::*)(::StringW, ::StringW)>(&System::Collections::Specialized::NameValueCollection::set_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::InvalidateCachedArrays
// Il2CppName: InvalidateCachedArrays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameValueCollection::*)()>(&System::Collections::Specialized::NameValueCollection::InvalidateCachedArrays)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "InvalidateCachedArrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::GetAsOneString
// Il2CppName: GetAsOneString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::ArrayList*)>(&System::Collections::Specialized::NameValueCollection::GetAsOneString)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "GetAsOneString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::GetAsStringArray
// Il2CppName: GetAsStringArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::System::Collections::ArrayList*)>(&System::Collections::Specialized::NameValueCollection::GetAsStringArray)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "GetAsStringArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameValueCollection::*)(::StringW, ::StringW)>(&System::Collections::Specialized::NameValueCollection::Add)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Specialized::NameValueCollection::*)(::StringW)>(&System::Collections::Specialized::NameValueCollection::Get)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::GetValues
// Il2CppName: GetValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Collections::Specialized::NameValueCollection::*)(::StringW)>(&System::Collections::Specialized::NameValueCollection::GetValues)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "GetValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameValueCollection::*)(::StringW, ::StringW)>(&System::Collections::Specialized::NameValueCollection::Set)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameValueCollection::*)(::StringW)>(&System::Collections::Specialized::NameValueCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Specialized::NameValueCollection::*)(int)>(&System::Collections::Specialized::NameValueCollection::Get)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::GetValues
// Il2CppName: GetValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Collections::Specialized::NameValueCollection::*)(int)>(&System::Collections::Specialized::NameValueCollection::GetValues)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "GetValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Specialized::NameValueCollection::*)(int)>(&System::Collections::Specialized::NameValueCollection::GetKey)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameValueCollection*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameValueCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
