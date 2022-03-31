// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: FontStyles
  struct FontStyles;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontStyleStack
  struct TMP_FontStyleStack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontStyleStack, "TMPro", "TMP_FontStyleStack");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0xA
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_FontStyleStack
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_FontStyleStack/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Byte bold
    // Size: 0x1
    // Offset: 0x0
    uint8_t bold;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte italic
    // Size: 0x1
    // Offset: 0x1
    uint8_t italic;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte underline
    // Size: 0x1
    // Offset: 0x2
    uint8_t underline;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte strikethrough
    // Size: 0x1
    // Offset: 0x3
    uint8_t strikethrough;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte highlight
    // Size: 0x1
    // Offset: 0x4
    uint8_t highlight;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte superscript
    // Size: 0x1
    // Offset: 0x5
    uint8_t superscript;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte subscript
    // Size: 0x1
    // Offset: 0x6
    uint8_t subscript;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte uppercase
    // Size: 0x1
    // Offset: 0x7
    uint8_t uppercase;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte lowercase
    // Size: 0x1
    // Offset: 0x8
    uint8_t lowercase;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte smallcaps
    // Size: 0x1
    // Offset: 0x9
    uint8_t smallcaps;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: TMP_FontStyleStack
    constexpr TMP_FontStyleStack(uint8_t bold_ = {}, uint8_t italic_ = {}, uint8_t underline_ = {}, uint8_t strikethrough_ = {}, uint8_t highlight_ = {}, uint8_t superscript_ = {}, uint8_t subscript_ = {}, uint8_t uppercase_ = {}, uint8_t lowercase_ = {}, uint8_t smallcaps_ = {}) noexcept : bold{bold_}, italic{italic_}, underline{underline_}, strikethrough{strikethrough_}, highlight{highlight_}, superscript{superscript_}, subscript{subscript_}, uppercase{uppercase_}, lowercase{lowercase_}, smallcaps{smallcaps_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Byte bold
    uint8_t& dyn_bold();
    // Get instance field reference: public System.Byte italic
    uint8_t& dyn_italic();
    // Get instance field reference: public System.Byte underline
    uint8_t& dyn_underline();
    // Get instance field reference: public System.Byte strikethrough
    uint8_t& dyn_strikethrough();
    // Get instance field reference: public System.Byte highlight
    uint8_t& dyn_highlight();
    // Get instance field reference: public System.Byte superscript
    uint8_t& dyn_superscript();
    // Get instance field reference: public System.Byte subscript
    uint8_t& dyn_subscript();
    // Get instance field reference: public System.Byte uppercase
    uint8_t& dyn_uppercase();
    // Get instance field reference: public System.Byte lowercase
    uint8_t& dyn_lowercase();
    // Get instance field reference: public System.Byte smallcaps
    uint8_t& dyn_smallcaps();
    // public System.Void Clear()
    // Offset: 0x143E984
    void Clear();
    // public System.Byte Add(TMPro.FontStyles style)
    // Offset: 0x143E990
    uint8_t Add(::TMPro::FontStyles style);
    // public System.Byte Remove(TMPro.FontStyles style)
    // Offset: 0x143EA58
    uint8_t Remove(::TMPro::FontStyles style);
  }; // TMPro.TMP_FontStyleStack
  #pragma pack(pop)
  static check_size<sizeof(TMP_FontStyleStack), 9 + sizeof(uint8_t)> __TMPro_TMP_FontStyleStackSizeCheck;
  static_assert(sizeof(TMP_FontStyleStack) == 0xA);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_FontStyleStack::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_FontStyleStack::*)()>(&TMPro::TMP_FontStyleStack::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontStyleStack), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontStyleStack::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (TMPro::TMP_FontStyleStack::*)(::TMPro::FontStyles)>(&TMPro::TMP_FontStyleStack::Add)> {
  static const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("TMPro", "FontStyles")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontStyleStack), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontStyleStack::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (TMPro::TMP_FontStyleStack::*)(::TMPro::FontStyles)>(&TMPro::TMP_FontStyleStack::Remove)> {
  static const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("TMPro", "FontStyles")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontStyleStack), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style});
  }
};
