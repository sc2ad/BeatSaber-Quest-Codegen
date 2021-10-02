// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Array/System.ArrayEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Array::ArrayEnumerator : public ::Il2CppObject/*, public System::ICloneable, public System::Collections::IEnumerator*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Array _array
    // Size: 0x8
    // Offset: 0x10
    System::Array* array;
    // Field size check
    static_assert(sizeof(System::Array*) == 0x8);
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
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Array _array
    System::Array*& dyn__array();
    // Get instance field reference: private System.Int32 _index
    int& dyn__index();
    // Get instance field reference: private System.Int32 _endIndex
    int& dyn__endIndex();
    // public System.Object get_Current()
    // Offset: 0x198BB94
    ::Il2CppObject* get_Current();
    // System.Void .ctor(System.Array array)
    // Offset: 0x198B174
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Array::ArrayEnumerator* New_ctor(System::Array* array) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::ArrayEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Array::ArrayEnumerator*, creationType>(array)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x198BB58
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x198BB80
    void Reset();
    // public System.Object Clone()
    // Offset: 0x198BB8C
    ::Il2CppObject* Clone();
  }; // System.Array/System.ArrayEnumerator
  #pragma pack(pop)
  static check_size<sizeof(Array::ArrayEnumerator), 28 + sizeof(int)> __System_Array_ArrayEnumeratorSizeCheck;
  static_assert(sizeof(Array::ArrayEnumerator) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Array::ArrayEnumerator*, "System", "Array/ArrayEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
