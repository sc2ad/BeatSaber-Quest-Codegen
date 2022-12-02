// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: KerningPairKey
  struct KerningPairKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::KerningPairKey, "TMPro", "KerningPairKey");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.KerningPairKey
  // [TokenAttribute] Offset: FFFFFFFF
  struct KerningPairKey/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 ascii_Left
    // Size: 0x4
    // Offset: 0x0
    uint ascii_Left;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 ascii_Right
    // Size: 0x4
    // Offset: 0x4
    uint ascii_Right;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 key
    // Size: 0x4
    // Offset: 0x8
    uint key;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: KerningPairKey
    constexpr KerningPairKey(uint ascii_Left_ = {}, uint ascii_Right_ = {}, uint key_ = {}) noexcept : ascii_Left{ascii_Left_}, ascii_Right{ascii_Right_}, key{key_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 ascii_Left
    [[deprecated("Use field access instead!")]] uint& dyn_ascii_Left();
    // Get instance field reference: public System.UInt32 ascii_Right
    [[deprecated("Use field access instead!")]] uint& dyn_ascii_Right();
    // Get instance field reference: public System.UInt32 key
    [[deprecated("Use field access instead!")]] uint& dyn_key();
    // public System.Void .ctor(System.UInt32 ascii_left, System.UInt32 ascii_right)
    // Offset: 0x1485248
    KerningPairKey(uint ascii_left, uint ascii_right);
  }; // TMPro.KerningPairKey
  #pragma pack(pop)
  static check_size<sizeof(KerningPairKey), 8 + sizeof(uint)> __TMPro_KerningPairKeySizeCheck;
  static_assert(sizeof(KerningPairKey) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::KerningPairKey::KerningPairKey
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
