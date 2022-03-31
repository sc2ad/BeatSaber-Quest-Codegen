// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Array::ArrayEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Array::ArrayEnumerator*, "System", "Array/ArrayEnumerator");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Array/System.ArrayEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Array::ArrayEnumerator : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Collections::IEnumerator*/ {
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
    // private System.Array _array
    // Size: 0x8
    // Offset: 0x10
    ::System::Array* array;
    // Field size check
    static_assert(sizeof(::System::Array*) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _endIndex
    // Size: 0x4
    // Offset: 0x1C
    int endIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Array _array
    ::System::Array*& dyn__array();
    // Get instance field reference: private System.Int32 _index
    int& dyn__index();
    // Get instance field reference: private System.Int32 _endIndex
    int& dyn__endIndex();
    // public System.Object get_Current()
    // Offset: 0x1E69248
    ::Il2CppObject* get_Current();
    // System.Void .ctor(System.Array array)
    // Offset: 0x1E68828
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Array::ArrayEnumerator* New_ctor(::System::Array* array) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Array::ArrayEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Array::ArrayEnumerator*, creationType>(array)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1E6920C
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1E69234
    void Reset();
    // public System.Object Clone()
    // Offset: 0x1E69240
    ::Il2CppObject* Clone();
  }; // System.Array/System.ArrayEnumerator
  #pragma pack(pop)
  static check_size<sizeof(Array::ArrayEnumerator), 28 + sizeof(int)> __System_Array_ArrayEnumeratorSizeCheck;
  static_assert(sizeof(Array::ArrayEnumerator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Array::ArrayEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Array::ArrayEnumerator::*)()>(&System::Array::ArrayEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Array::ArrayEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Array::ArrayEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Array::ArrayEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Array::ArrayEnumerator::*)()>(&System::Array::ArrayEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Array::ArrayEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Array::ArrayEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::ArrayEnumerator::*)()>(&System::Array::ArrayEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Array::ArrayEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Array::ArrayEnumerator::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Array::ArrayEnumerator::*)()>(&System::Array::ArrayEnumerator::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Array::ArrayEnumerator*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
