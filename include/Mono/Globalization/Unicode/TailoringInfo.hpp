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
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: TailoringInfo
  class TailoringInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Globalization::Unicode::TailoringInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::TailoringInfo*, "Mono.Globalization.Unicode", "TailoringInfo");
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.TailoringInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class TailoringInfo : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 LCID
    // Size: 0x4
    // Offset: 0x10
    int LCID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 TailoringIndex
    // Size: 0x4
    // Offset: 0x14
    int TailoringIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 TailoringCount
    // Size: 0x4
    // Offset: 0x18
    int TailoringCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean FrenchSort
    // Size: 0x1
    // Offset: 0x1C
    bool FrenchSort;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Int32 LCID
    [[deprecated("Use field access instead!")]] int& dyn_LCID();
    // Get instance field reference: public readonly System.Int32 TailoringIndex
    [[deprecated("Use field access instead!")]] int& dyn_TailoringIndex();
    // Get instance field reference: public readonly System.Int32 TailoringCount
    [[deprecated("Use field access instead!")]] int& dyn_TailoringCount();
    // Get instance field reference: public readonly System.Boolean FrenchSort
    [[deprecated("Use field access instead!")]] bool& dyn_FrenchSort();
    // public System.Void .ctor(System.Int32 lcid, System.Int32 tailoringIndex, System.Int32 tailoringCount, System.Boolean frenchSort)
    // Offset: 0x1FA8198
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TailoringInfo* New_ctor(int lcid, int tailoringIndex, int tailoringCount, bool frenchSort) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Globalization::Unicode::TailoringInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TailoringInfo*, creationType>(lcid, tailoringIndex, tailoringCount, frenchSort)));
    }
  }; // Mono.Globalization.Unicode.TailoringInfo
  #pragma pack(pop)
  static check_size<sizeof(TailoringInfo), 28 + sizeof(bool)> __Mono_Globalization_Unicode_TailoringInfoSizeCheck;
  static_assert(sizeof(TailoringInfo) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::TailoringInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
