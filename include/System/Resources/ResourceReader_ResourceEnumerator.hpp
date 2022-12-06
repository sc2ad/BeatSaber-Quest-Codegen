// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Resources.ResourceReader
#include "System/Resources/ResourceReader.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::ResourceReader::ResourceEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceReader::ResourceEnumerator*, "System.Resources", "ResourceReader/ResourceEnumerator");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ResourceReader/System.Resources.ResourceEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceReader::ResourceEnumerator : public ::Il2CppObject/*, public ::System::Collections::IDictionaryEnumerator*/ {
    public:
    public:
    // private System.Resources.ResourceReader _reader
    // Size: 0x8
    // Offset: 0x10
    ::System::Resources::ResourceReader* reader;
    // Field size check
    static_assert(sizeof(::System::Resources::ResourceReader*) == 0x8);
    // private System.Boolean _currentIsValid
    // Size: 0x1
    // Offset: 0x18
    bool currentIsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: currentIsValid and: currentName
    char __padding1[0x3] = {};
    // private System.Int32 _currentName
    // Size: 0x4
    // Offset: 0x1C
    int currentName;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _dataPosition
    // Size: 0x4
    // Offset: 0x20
    int dataPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IDictionaryEnumerator
    operator ::System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IDictionaryEnumerator
    inline ::System::Collections::IDictionaryEnumerator* i_IDictionaryEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Get instance field reference: private System.Resources.ResourceReader _reader
    [[deprecated("Use field access instead!")]] ::System::Resources::ResourceReader*& dyn__reader();
    // Get instance field reference: private System.Boolean _currentIsValid
    [[deprecated("Use field access instead!")]] bool& dyn__currentIsValid();
    // Get instance field reference: private System.Int32 _currentName
    [[deprecated("Use field access instead!")]] int& dyn__currentName();
    // Get instance field reference: private System.Int32 _dataPosition
    [[deprecated("Use field access instead!")]] int& dyn__dataPosition();
    // public System.Object get_Key()
    // Offset: 0x1E04EF4
    ::Il2CppObject* get_Key();
    // public System.Object get_Current()
    // Offset: 0x1E04FCC
    ::Il2CppObject* get_Current();
    // System.Int32 get_DataPosition()
    // Offset: 0x1E052DC
    int get_DataPosition();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x1E05038
    ::System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Value()
    // Offset: 0x1E052E4
    ::Il2CppObject* get_Value();
    // System.Void .ctor(System.Resources.ResourceReader reader)
    // Offset: 0x1E01CE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceReader::ResourceEnumerator* New_ctor(::System::Resources::ResourceReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Resources::ResourceReader::ResourceEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceReader::ResourceEnumerator*, creationType>(reader)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1E04E98
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1E053B8
    void Reset();
  }; // System.Resources.ResourceReader/System.Resources.ResourceEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ResourceReader::ResourceEnumerator), 32 + sizeof(int)> __System_Resources_ResourceReader_ResourceEnumeratorSizeCheck;
  static_assert(sizeof(ResourceReader::ResourceEnumerator) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::ResourceReader::ResourceEnumerator::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::ResourceEnumerator::*)()>(&System::Resources::ResourceReader::ResourceEnumerator::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader::ResourceEnumerator*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ResourceEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::ResourceEnumerator::*)()>(&System::Resources::ResourceReader::ResourceEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader::ResourceEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ResourceEnumerator::get_DataPosition
// Il2CppName: get_DataPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::ResourceReader::ResourceEnumerator::*)()>(&System::Resources::ResourceReader::ResourceEnumerator::get_DataPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader::ResourceEnumerator*), "get_DataPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ResourceEnumerator::get_Entry
// Il2CppName: get_Entry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (System::Resources::ResourceReader::ResourceEnumerator::*)()>(&System::Resources::ResourceReader::ResourceEnumerator::get_Entry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader::ResourceEnumerator*), "get_Entry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ResourceEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::ResourceEnumerator::*)()>(&System::Resources::ResourceReader::ResourceEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader::ResourceEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ResourceEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::ResourceReader::ResourceEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Resources::ResourceReader::ResourceEnumerator::*)()>(&System::Resources::ResourceReader::ResourceEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader::ResourceEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ResourceEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::ResourceEnumerator::*)()>(&System::Resources::ResourceReader::ResourceEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader::ResourceEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
