// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterRandomType
#include "BeatmapSaveDataVersion3/BeatmapSaveData_IndexFilterRandomType.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType
#include "BeatmapSaveDataVersion3/BeatmapSaveData_IndexFilterLimitAlsoAffectsType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Skipping declaration: IndexFilterType because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilter");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::IndexFilter : public ::Il2CppObject {
    public:
    // Nested type: ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType
    struct IndexFilterType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType
    // [TokenAttribute] Offset: FFFFFFFF
    struct IndexFilterType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: IndexFilterType
      constexpr IndexFilterType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType Division
      static constexpr const int Division = 1;
      // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType Division
      static ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType _get_Division();
      // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType Division
      static void _set_Division(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType value);
      // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType StepAndOffset
      static constexpr const int StepAndOffset = 2;
      // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType StepAndOffset
      static ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType _get_StepAndOffset();
      // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType StepAndOffset
      static void _set_StepAndOffset(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType
    #pragma pack(pop)
    static check_size<sizeof(BeatmapSaveData::IndexFilter::IndexFilterType), 0 + sizeof(int)> __BeatmapSaveDataVersion3_BeatmapSaveData_IndexFilter_IndexFilterTypeSizeCheck;
    static_assert(sizeof(BeatmapSaveData::IndexFilter::IndexFilterType) == 0x4);
    public:
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType f
    // Size: 0x4
    // Offset: 0x10
    ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType f;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType) == 0x4);
    // private System.Int32 p
    // Size: 0x4
    // Offset: 0x14
    int p;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 t
    // Size: 0x4
    // Offset: 0x18
    int t;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 r
    // Size: 0x4
    // Offset: 0x1C
    int r;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 c
    // Size: 0x4
    // Offset: 0x20
    int c;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterRandomType n
    // Size: 0x4
    // Offset: 0x24
    ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterRandomType n;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterRandomType) == 0x4);
    // private System.Int32 s
    // Size: 0x4
    // Offset: 0x28
    int s;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single l
    // Size: 0x4
    // Offset: 0x2C
    float l;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType d
    // Size: 0x4
    // Offset: 0x30
    ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType d;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType) == 0x4);
    public:
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType f
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType& dyn_f();
    // Get instance field reference: private System.Int32 p
    [[deprecated("Use field access instead!")]] int& dyn_p();
    // Get instance field reference: private System.Int32 t
    [[deprecated("Use field access instead!")]] int& dyn_t();
    // Get instance field reference: private System.Int32 r
    [[deprecated("Use field access instead!")]] int& dyn_r();
    // Get instance field reference: private System.Int32 c
    [[deprecated("Use field access instead!")]] int& dyn_c();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterRandomType n
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterRandomType& dyn_n();
    // Get instance field reference: private System.Int32 s
    [[deprecated("Use field access instead!")]] int& dyn_s();
    // Get instance field reference: private System.Single l
    [[deprecated("Use field access instead!")]] float& dyn_l();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType d
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType& dyn_d();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType get_type()
    // Offset: 0x28BE25C
    ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType get_type();
    // public System.Int32 get_param0()
    // Offset: 0x28BE264
    int get_param0();
    // public System.Int32 get_param1()
    // Offset: 0x28BE26C
    int get_param1();
    // public System.Boolean get_reversed()
    // Offset: 0x28BE274
    bool get_reversed();
    // public System.Int32 get_chunks()
    // Offset: 0x28BE284
    int get_chunks();
    // public System.Single get_limit()
    // Offset: 0x28BE28C
    float get_limit();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType get_limitAlsoAffectsType()
    // Offset: 0x28BE294
    ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType get_limitAlsoAffectsType();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterRandomType get_random()
    // Offset: 0x28BE29C
    ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterRandomType get_random();
    // public System.Int32 get_seed()
    // Offset: 0x28BE2A4
    int get_seed();
    // public System.Void .ctor(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter/BeatmapSaveDataVersion3.IndexFilterType type, System.Int32 param0, System.Int32 param1, System.Boolean reversed, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterRandomType random, System.Int32 seed, System.Int32 chunks, System.Single limit, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType limitAlsoAffectsType)
    // Offset: 0x28BE2AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::IndexFilter* New_ctor(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType type, int param0, int param1, bool reversed, ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterRandomType random, int seed, int chunks, float limit, ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType limitAlsoAffectsType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::IndexFilter*, creationType>(type, param0, param1, reversed, random, seed, chunks, limit, limitAlsoAffectsType)));
    }
    // public System.Void .ctor(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter other)
    // Offset: 0x28BE338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::IndexFilter* New_ctor(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::IndexFilter*, creationType>(other)));
    }
    // static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter CreateDivisionIndexFilter(System.Int32 numberOfSections, System.Int32 divisionIdx, System.Boolean reversed)
    // Offset: 0x28BE3B0
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* CreateDivisionIndexFilter(int numberOfSections, int divisionIdx, bool reversed);
    // static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter CreateStepFilter(System.Int32 offset, System.Int32 step, System.Boolean reversed)
    // Offset: 0x28BE444
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* CreateStepFilter(int offset, int step, bool reversed);
    // static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter CreateForExtension()
    // Offset: 0x28BE4D8
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* CreateForExtension();
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::IndexFilter), 48 + sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType)> __BeatmapSaveDataVersion3_BeatmapSaveData_IndexFilterSizeCheck;
  static_assert(sizeof(BeatmapSaveData::IndexFilter) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilter/IndexFilterType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::IndexFilterType (BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_param0
// Il2CppName: get_param0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_param0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "get_param0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_param1
// Il2CppName: get_param1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_param1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "get_param1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_reversed
// Il2CppName: get_reversed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_reversed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "get_reversed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_chunks
// Il2CppName: get_chunks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_chunks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "get_chunks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_limit
// Il2CppName: get_limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_limit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "get_limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_limitAlsoAffectsType
// Il2CppName: get_limitAlsoAffectsType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType (BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_limitAlsoAffectsType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "get_limitAlsoAffectsType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_random
// Il2CppName: get_random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterRandomType (BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_random)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "get_random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_seed
// Il2CppName: get_seed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::get_seed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "get_seed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::CreateDivisionIndexFilter
// Il2CppName: CreateDivisionIndexFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* (*)(int, int, bool)>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::CreateDivisionIndexFilter)> {
  static const MethodInfo* get() {
    static auto* numberOfSections = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* divisionIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reversed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "CreateDivisionIndexFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numberOfSections, divisionIdx, reversed});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::CreateStepFilter
// Il2CppName: CreateStepFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* (*)(int, int, bool)>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::CreateStepFilter)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* step = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reversed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "CreateStepFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, step, reversed});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::CreateForExtension
// Il2CppName: CreateForExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* (*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter::CreateForExtension)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*), "CreateForExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
