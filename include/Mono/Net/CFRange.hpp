// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Mono.Net
namespace Mono::Net {
  // Forward declaring type: CFRange
  struct CFRange;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::CFRange, "Mono.Net", "CFRange");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Net.CFRange
  // [TokenAttribute] Offset: FFFFFFFF
  struct CFRange/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr Location
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr Location;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.IntPtr Length
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr Length;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: CFRange
    constexpr CFRange(::System::IntPtr Location_ = {}, ::System::IntPtr Length_ = {}) noexcept : Location{Location_}, Length{Length_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr Location
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Location();
    // Get instance field reference: public System.IntPtr Length
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Length();
    // public System.Void .ctor(System.Int32 loc, System.Int32 len)
    // Offset: 0x1AF7E58
    CFRange(int loc, int len);
  }; // Mono.Net.CFRange
  #pragma pack(pop)
  static check_size<sizeof(CFRange), 8 + sizeof(::System::IntPtr)> __Mono_Net_CFRangeSizeCheck;
  static_assert(sizeof(CFRange) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFRange::CFRange
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
