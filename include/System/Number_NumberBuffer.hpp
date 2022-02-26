// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Number
#include "System/Number.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Number::NumberBuffer, "System", "Number/NumberBuffer");
// Type namespace: System
namespace System {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Number/System.NumberBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  // [FriendAccessAllowedAttribute] Offset: 1187140
  struct Number::NumberBuffer/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Byte* baseAddress
    // Size: 0x8
    // Offset: 0x0
    uint8_t* baseAddress;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // public System.Char* digits
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppChar* digits;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // public System.Int32 precision
    // Size: 0x4
    // Offset: 0x10
    int precision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 scale
    // Size: 0x4
    // Offset: 0x14
    int scale;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean sign
    // Size: 0x1
    // Offset: 0x18
    bool sign;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: NumberBuffer
    constexpr NumberBuffer(uint8_t* baseAddress_ = {}, ::Il2CppChar* digits_ = {}, int precision_ = {}, int scale_ = {}, bool sign_ = {}) noexcept : baseAddress{baseAddress_}, digits{digits_}, precision{precision_}, scale{scale_}, sign{sign_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly System.Int32 NumberBufferBytes
    static int _get_NumberBufferBytes();
    // Set static field: static public readonly System.Int32 NumberBufferBytes
    static void _set_NumberBufferBytes(int value);
    // Get instance field reference: private System.Byte* baseAddress
    uint8_t*& dyn_baseAddress();
    // Get instance field reference: public System.Char* digits
    ::Il2CppChar*& dyn_digits();
    // Get instance field reference: public System.Int32 precision
    int& dyn_precision();
    // Get instance field reference: public System.Int32 scale
    int& dyn_scale();
    // Get instance field reference: public System.Boolean sign
    bool& dyn_sign();
    // public System.Void .ctor(System.Byte* stackBuffer)
    // Offset: 0x2156244
    NumberBuffer(uint8_t* stackBuffer);
    // static private System.Void .cctor()
    // Offset: 0x215627C
    static void _cctor();
    // public System.Byte* PackForNative()
    // Offset: 0x2156258
    uint8_t* PackForNative();
  }; // System.Number/System.NumberBuffer
  #pragma pack(pop)
  static check_size<sizeof(Number::NumberBuffer), 24 + sizeof(bool)> __System_Number_NumberBufferSizeCheck;
  static_assert(sizeof(Number::NumberBuffer) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Number::NumberBuffer::NumberBuffer
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Number::NumberBuffer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Number::NumberBuffer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Number::NumberBuffer), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Number::NumberBuffer::PackForNative
// Il2CppName: PackForNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (System::Number::NumberBuffer::*)()>(&System::Number::NumberBuffer::PackForNative)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Number::NumberBuffer), "PackForNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
