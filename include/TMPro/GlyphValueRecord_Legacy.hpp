// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore::LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphValueRecord
  struct GlyphValueRecord;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: GlyphValueRecord_Legacy
  struct GlyphValueRecord_Legacy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::GlyphValueRecord_Legacy, "TMPro", "GlyphValueRecord_Legacy");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.GlyphValueRecord_Legacy
  // [TokenAttribute] Offset: FFFFFFFF
  struct GlyphValueRecord_Legacy/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single xPlacement
    // Size: 0x4
    // Offset: 0x0
    float xPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single yPlacement
    // Size: 0x4
    // Offset: 0x4
    float yPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xAdvance
    // Size: 0x4
    // Offset: 0x8
    float xAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single yAdvance
    // Size: 0x4
    // Offset: 0xC
    float yAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GlyphValueRecord_Legacy
    constexpr GlyphValueRecord_Legacy(float xPlacement_ = {}, float yPlacement_ = {}, float xAdvance_ = {}, float yAdvance_ = {}) noexcept : xPlacement{xPlacement_}, yPlacement{yPlacement_}, xAdvance{xAdvance_}, yAdvance{yAdvance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single xPlacement
    [[deprecated("Use field access instead!")]] float& dyn_xPlacement();
    // Get instance field reference: public System.Single yPlacement
    [[deprecated("Use field access instead!")]] float& dyn_yPlacement();
    // Get instance field reference: public System.Single xAdvance
    [[deprecated("Use field access instead!")]] float& dyn_xAdvance();
    // Get instance field reference: public System.Single yAdvance
    [[deprecated("Use field access instead!")]] float& dyn_yAdvance();
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphValueRecord valueRecord)
    // Offset: 0x1484FFC
    GlyphValueRecord_Legacy(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord);
  }; // TMPro.GlyphValueRecord_Legacy
  #pragma pack(pop)
  static check_size<sizeof(GlyphValueRecord_Legacy), 12 + sizeof(float)> __TMPro_GlyphValueRecord_LegacySizeCheck;
  static_assert(sizeof(GlyphValueRecord_Legacy) == 0x10);
  // static public TMPro.GlyphValueRecord_Legacy op_Addition(TMPro.GlyphValueRecord_Legacy a, TMPro.GlyphValueRecord_Legacy b)
  // Offset: 0x1485068
  ::TMPro::GlyphValueRecord_Legacy operator+(const ::TMPro::GlyphValueRecord_Legacy& a, const ::TMPro::GlyphValueRecord_Legacy& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::GlyphValueRecord_Legacy::GlyphValueRecord_Legacy
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::GlyphValueRecord_Legacy::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
