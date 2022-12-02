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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: ByteStack
  class ByteStack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::ByteStack);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ByteStack*, "System.Xml", "ByteStack");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.ByteStack
  // [TokenAttribute] Offset: FFFFFFFF
  class ByteStack : public ::Il2CppObject {
    public:
    public:
    // private System.Byte[] stack
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> stack;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 growthRate
    // Size: 0x4
    // Offset: 0x18
    int growthRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 top
    // Size: 0x4
    // Offset: 0x1C
    int top;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Byte[] stack
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_stack();
    // Get instance field reference: private System.Int32 growthRate
    [[deprecated("Use field access instead!")]] int& dyn_growthRate();
    // Get instance field reference: private System.Int32 top
    [[deprecated("Use field access instead!")]] int& dyn_top();
    // Get instance field reference: private System.Int32 size
    [[deprecated("Use field access instead!")]] int& dyn_size();
    // public System.Void .ctor(System.Int32 growthRate)
    // Offset: 0x1ADF8A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteStack* New_ctor(int growthRate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::ByteStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteStack*, creationType>(growthRate)));
    }
    // public System.Void Push(System.Byte data)
    // Offset: 0x1ADF920
    void Push(uint8_t data);
    // public System.Byte Pop()
    // Offset: 0x1ADFA08
    uint8_t Pop();
  }; // System.Xml.ByteStack
  #pragma pack(pop)
  static check_size<sizeof(ByteStack), 32 + sizeof(int)> __System_Xml_ByteStackSizeCheck;
  static_assert(sizeof(ByteStack) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::ByteStack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::ByteStack::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::ByteStack::*)(uint8_t)>(&System::Xml::ByteStack::Push)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ByteStack*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Xml::ByteStack::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Xml::ByteStack::*)()>(&System::Xml::ByteStack::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ByteStack*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
