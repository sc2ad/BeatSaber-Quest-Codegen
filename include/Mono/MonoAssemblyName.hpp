// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Size: 0x4A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.MonoAssemblyName
  // [TokenAttribute] Offset: FFFFFFFF
  struct MonoAssemblyName/*, public System::ValueType*/ {
    public:
    // Nested type: Mono::MonoAssemblyName::$public_key_token$e__FixedBuffer
    struct $public_key_token$e__FixedBuffer;
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Mono.MonoAssemblyName/Mono.<public_key_token>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: E5B6D4
    // [UnsafeValueTypeAttribute] Offset: E5B6D4
    struct $public_key_token$e__FixedBuffer/*, public System::ValueType*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $public_key_token$e__FixedBuffer
      constexpr $public_key_token$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Byte FixedElementField
      uint8_t& dyn_FixedElementField();
    }; // Mono.MonoAssemblyName/Mono.<public_key_token>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(MonoAssemblyName::$public_key_token$e__FixedBuffer), 0 + sizeof(uint8_t)> __Mono_MonoAssemblyName_$public_key_token$e__FixedBufferSizeCheck;
    static_assert(sizeof(MonoAssemblyName::$public_key_token$e__FixedBuffer) == 0x1);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // System.IntPtr name
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr name;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.IntPtr culture
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr culture;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.IntPtr hash_value
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr hash_value;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.IntPtr public_key
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr public_key;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // [FixedBufferAttribute] Offset: 0xE6289C
    // Mono.MonoAssemblyName/Mono.<public_key_token>e__FixedBuffer public_key_token
    // Size: 0x1
    // Offset: 0x20
    Mono::MonoAssemblyName::$public_key_token$e__FixedBuffer public_key_token;
    // Field size check
    static_assert(sizeof(Mono::MonoAssemblyName::$public_key_token$e__FixedBuffer) == 0x1);
    // Padding between fields: public_key_token and: hash_alg
    char __padding4[0x13] = {};
    // System.UInt32 hash_alg
    // Size: 0x4
    // Offset: 0x34
    uint hash_alg;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 hash_len
    // Size: 0x4
    // Offset: 0x38
    uint hash_len;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 flags
    // Size: 0x4
    // Offset: 0x3C
    uint flags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt16 major
    // Size: 0x2
    // Offset: 0x40
    uint16_t major;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 minor
    // Size: 0x2
    // Offset: 0x42
    uint16_t minor;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 build
    // Size: 0x2
    // Offset: 0x44
    uint16_t build;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 revision
    // Size: 0x2
    // Offset: 0x46
    uint16_t revision;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 arch
    // Size: 0x2
    // Offset: 0x48
    uint16_t arch;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: MonoAssemblyName
    constexpr MonoAssemblyName(System::IntPtr name_ = {}, System::IntPtr culture_ = {}, System::IntPtr hash_value_ = {}, System::IntPtr public_key_ = {}, Mono::MonoAssemblyName::$public_key_token$e__FixedBuffer public_key_token_ = {}, uint hash_alg_ = {}, uint hash_len_ = {}, uint flags_ = {}, uint16_t major_ = {}, uint16_t minor_ = {}, uint16_t build_ = {}, uint16_t revision_ = {}, uint16_t arch_ = {}) noexcept : name{name_}, culture{culture_}, hash_value{hash_value_}, public_key{public_key_}, public_key_token{public_key_token_}, hash_alg{hash_alg_}, hash_len{hash_len_}, flags{flags_}, major{major_}, minor{minor_}, build{build_}, revision{revision_}, arch{arch_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.IntPtr name
    System::IntPtr& dyn_name();
    // Get instance field reference: System.IntPtr culture
    System::IntPtr& dyn_culture();
    // Get instance field reference: System.IntPtr hash_value
    System::IntPtr& dyn_hash_value();
    // Get instance field reference: System.IntPtr public_key
    System::IntPtr& dyn_public_key();
    // Get instance field reference: Mono.MonoAssemblyName/Mono.<public_key_token>e__FixedBuffer public_key_token
    Mono::MonoAssemblyName::$public_key_token$e__FixedBuffer& dyn_public_key_token();
    // Get instance field reference: System.UInt32 hash_alg
    uint& dyn_hash_alg();
    // Get instance field reference: System.UInt32 hash_len
    uint& dyn_hash_len();
    // Get instance field reference: System.UInt32 flags
    uint& dyn_flags();
    // Get instance field reference: System.UInt16 major
    uint16_t& dyn_major();
    // Get instance field reference: System.UInt16 minor
    uint16_t& dyn_minor();
    // Get instance field reference: System.UInt16 build
    uint16_t& dyn_build();
    // Get instance field reference: System.UInt16 revision
    uint16_t& dyn_revision();
    // Get instance field reference: System.UInt16 arch
    uint16_t& dyn_arch();
  }; // Mono.MonoAssemblyName
  #pragma pack(pop)
  static check_size<sizeof(MonoAssemblyName), 72 + sizeof(uint16_t)> __Mono_MonoAssemblyNameSizeCheck;
  static_assert(sizeof(MonoAssemblyName) == 0x4A);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::MonoAssemblyName, "Mono", "MonoAssemblyName");
DEFINE_IL2CPP_ARG_TYPE(Mono::MonoAssemblyName::$public_key_token$e__FixedBuffer, "Mono", "MonoAssemblyName/<public_key_token>e__FixedBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
