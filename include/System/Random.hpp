// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Random);
DEFINE_IL2CPP_ARG_TYPE(::System::Random*, "System", "Random");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Random
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106CF5C
  class Random : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 inext
    // Size: 0x4
    // Offset: 0x10
    int inext;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 inextp
    // Size: 0x4
    // Offset: 0x14
    int inextp;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] SeedArray
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> SeedArray;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // static field const value: static private System.Int32 MBIG
    static constexpr const int MBIG = 2147483647;
    // Get static field: static private System.Int32 MBIG
    static int _get_MBIG();
    // Set static field: static private System.Int32 MBIG
    static void _set_MBIG(int value);
    // static field const value: static private System.Int32 MSEED
    static constexpr const int MSEED = 161803398;
    // Get static field: static private System.Int32 MSEED
    static int _get_MSEED();
    // Set static field: static private System.Int32 MSEED
    static void _set_MSEED(int value);
    // static field const value: static private System.Int32 MZ
    static constexpr const int MZ = 0;
    // Get static field: static private System.Int32 MZ
    static int _get_MZ();
    // Set static field: static private System.Int32 MZ
    static void _set_MZ(int value);
    // Get instance field reference: private System.Int32 inext
    [[deprecated("Use field access instead!")]] int& dyn_inext();
    // Get instance field reference: private System.Int32 inextp
    [[deprecated("Use field access instead!")]] int& dyn_inextp();
    // Get instance field reference: private System.Int32[] SeedArray
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_SeedArray();
    // public System.Void .ctor(System.Int32 Seed)
    // Offset: 0x22E4888
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Random* New_ctor(int Seed) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Random::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Random*, creationType>(Seed)));
    }
    // protected System.Double Sample()
    // Offset: 0x22E4AE4
    double Sample();
    // private System.Int32 InternalSample()
    // Offset: 0x22E4B08
    int InternalSample();
    // public System.Int32 Next()
    // Offset: 0x22E4BA4
    int Next();
    // private System.Double GetSampleForLargeRange()
    // Offset: 0x22E4BA8
    double GetSampleForLargeRange();
    // public System.Int32 Next(System.Int32 minValue, System.Int32 maxValue)
    // Offset: 0x22E4BF8
    int Next(int minValue, int maxValue);
    // public System.Int32 Next(System.Int32 maxValue)
    // Offset: 0x22E4D88
    int Next(int maxValue);
    // public System.Double NextDouble()
    // Offset: 0x22E4EA0
    double NextDouble();
    // public System.Void NextBytes(System.Byte[] buffer)
    // Offset: 0x22E4EAC
    void NextBytes(::ArrayW<uint8_t> buffer);
    // public System.Void .ctor()
    // Offset: 0x22E0E7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Random* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Random::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Random*, creationType>()));
    }
  }; // System.Random
  #pragma pack(pop)
  static check_size<sizeof(Random), 24 + sizeof(::ArrayW<int>)> __System_RandomSizeCheck;
  static_assert(sizeof(Random) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Random::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Random::Sample
// Il2CppName: Sample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Random::*)()>(&System::Random::Sample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "Sample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Random::InternalSample
// Il2CppName: InternalSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Random::*)()>(&System::Random::InternalSample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "InternalSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Random::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Random::*)()>(&System::Random::Next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Random::GetSampleForLargeRange
// Il2CppName: GetSampleForLargeRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Random::*)()>(&System::Random::GetSampleForLargeRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "GetSampleForLargeRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Random::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Random::*)(int, int)>(&System::Random::Next)> {
  static const MethodInfo* get() {
    static auto* minValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minValue, maxValue});
  }
};
// Writing MetadataGetter for method: System::Random::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Random::*)(int)>(&System::Random::Next)> {
  static const MethodInfo* get() {
    static auto* maxValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxValue});
  }
};
// Writing MetadataGetter for method: System::Random::NextDouble
// Il2CppName: NextDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Random::*)()>(&System::Random::NextDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "NextDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Random::NextBytes
// Il2CppName: NextBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Random::*)(::ArrayW<uint8_t>)>(&System::Random::NextBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "NextBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::Random::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
