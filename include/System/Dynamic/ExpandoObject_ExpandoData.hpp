// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Dynamic.ExpandoObject
#include "System/Dynamic/ExpandoObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: ExpandoClass
  class ExpandoClass;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::ExpandoObject::ExpandoData);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::ExpandoObject::ExpandoData*, "System.Dynamic", "ExpandoObject/ExpandoData");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.ExpandoObject/System.Dynamic.ExpandoData
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 119E07C
  class ExpandoObject::ExpandoData : public ::Il2CppObject {
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
    // readonly System.Dynamic.ExpandoClass Class
    // Size: 0x8
    // Offset: 0x10
    ::System::Dynamic::ExpandoClass* Class;
    // Field size check
    static_assert(sizeof(::System::Dynamic::ExpandoClass*) == 0x8);
    // private readonly System.Object[] _dataArray
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> dataArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x20
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static System.Dynamic.ExpandoObject/System.Dynamic.ExpandoData Empty
    static ::System::Dynamic::ExpandoObject::ExpandoData* _get_Empty();
    // Set static field: static System.Dynamic.ExpandoObject/System.Dynamic.ExpandoData Empty
    static void _set_Empty(::System::Dynamic::ExpandoObject::ExpandoData* value);
    // Get instance field reference: readonly System.Dynamic.ExpandoClass Class
    ::System::Dynamic::ExpandoClass*& dyn_Class();
    // Get instance field reference: private readonly System.Object[] _dataArray
    ::ArrayW<::Il2CppObject*>& dyn__dataArray();
    // Get instance field reference: private System.Int32 _version
    int& dyn__version();
    // System.Object get_Item(System.Int32 index)
    // Offset: 0x15EBF18
    ::Il2CppObject* get_Item(int index);
    // System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x15EC32C
    void set_Item(int index, ::Il2CppObject* value);
    // System.Int32 get_Version()
    // Offset: 0x15EDD1C
    int get_Version();
    // System.Int32 get_Length()
    // Offset: 0x15EC69C
    int get_Length();
    // System.Void .ctor(System.Dynamic.ExpandoClass klass, System.Object[] data, System.Int32 version)
    // Offset: 0x15EDE38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpandoObject::ExpandoData* New_ctor(::System::Dynamic::ExpandoClass* klass, ::ArrayW<::Il2CppObject*> data, int version) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::ExpandoObject::ExpandoData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpandoObject::ExpandoData*, creationType>(klass, data, version)));
    }
    // static private System.Void .cctor()
    // Offset: 0x15EDE84
    static void _cctor();
    // System.Dynamic.ExpandoObject/System.Dynamic.ExpandoData UpdateClass(System.Dynamic.ExpandoClass newClass)
    // Offset: 0x15EC6D4
    ::System::Dynamic::ExpandoObject::ExpandoData* UpdateClass(::System::Dynamic::ExpandoClass* newClass);
    // static private System.Int32 GetAlignedSize(System.Int32 len)
    // Offset: 0x15EDE78
    static int GetAlignedSize(int len);
    // private System.Void .ctor()
    // Offset: 0x15EDD24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpandoObject::ExpandoData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::ExpandoObject::ExpandoData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpandoObject::ExpandoData*, creationType>()));
    }
  }; // System.Dynamic.ExpandoObject/System.Dynamic.ExpandoData
  #pragma pack(pop)
  static check_size<sizeof(ExpandoObject::ExpandoData), 32 + sizeof(int)> __System_Dynamic_ExpandoObject_ExpandoDataSizeCheck;
  static_assert(sizeof(ExpandoObject::ExpandoData) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::ExpandoObject::ExpandoData::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Dynamic::ExpandoObject::ExpandoData::*)(int)>(&System::Dynamic::ExpandoObject::ExpandoData::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::ExpandoObject::ExpandoData*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Dynamic::ExpandoObject::ExpandoData::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Dynamic::ExpandoObject::ExpandoData::*)(int, ::Il2CppObject*)>(&System::Dynamic::ExpandoObject::ExpandoData::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::ExpandoObject::ExpandoData*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Dynamic::ExpandoObject::ExpandoData::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Dynamic::ExpandoObject::ExpandoData::*)()>(&System::Dynamic::ExpandoObject::ExpandoData::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::ExpandoObject::ExpandoData*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::ExpandoObject::ExpandoData::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Dynamic::ExpandoObject::ExpandoData::*)()>(&System::Dynamic::ExpandoObject::ExpandoData::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::ExpandoObject::ExpandoData*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::ExpandoObject::ExpandoData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Dynamic::ExpandoObject::ExpandoData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Dynamic::ExpandoObject::ExpandoData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::ExpandoObject::ExpandoData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::ExpandoObject::ExpandoData::UpdateClass
// Il2CppName: UpdateClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::ExpandoObject::ExpandoData* (System::Dynamic::ExpandoObject::ExpandoData::*)(::System::Dynamic::ExpandoClass*)>(&System::Dynamic::ExpandoObject::ExpandoData::UpdateClass)> {
  static const MethodInfo* get() {
    static auto* newClass = &::il2cpp_utils::GetClassFromName("System.Dynamic", "ExpandoClass")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::ExpandoObject::ExpandoData*), "UpdateClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newClass});
  }
};
// Writing MetadataGetter for method: System::Dynamic::ExpandoObject::ExpandoData::GetAlignedSize
// Il2CppName: GetAlignedSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Dynamic::ExpandoObject::ExpandoData::GetAlignedSize)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::ExpandoObject::ExpandoData*), "GetAlignedSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: System::Dynamic::ExpandoObject::ExpandoData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
