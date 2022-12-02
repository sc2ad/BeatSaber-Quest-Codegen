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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ScalarSplitParameters
  class ScalarSplitParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, "Org.BouncyCastle.Math.EC.Endo", "ScalarSplitParameters");
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class ScalarSplitParameters : public ::Il2CppObject {
    public:
    public:
    // protected readonly Org.BouncyCastle.Math.BigInteger m_v1A
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::BigInteger* m_v1A;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_v1B
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Math::BigInteger* m_v1B;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_v2A
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Math::BigInteger* m_v2A;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_v2B
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Math::BigInteger* m_v2B;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_g1
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Math::BigInteger* m_g1;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_g2
    // Size: 0x8
    // Offset: 0x38
    ::Org::BouncyCastle::Math::BigInteger* m_g2;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly System.Int32 m_bits
    // Size: 0x4
    // Offset: 0x40
    int m_bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_v1A
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_m_v1A();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_v1B
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_m_v1B();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_v2A
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_m_v2A();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_v2B
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_m_v2B();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_g1
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_m_g1();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_g2
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_m_g2();
    // Get instance field reference: protected readonly System.Int32 m_bits
    [[deprecated("Use field access instead!")]] int& dyn_m_bits();
    // public Org.BouncyCastle.Math.BigInteger get_V1A()
    // Offset: 0x27F2228
    ::Org::BouncyCastle::Math::BigInteger* get_V1A();
    // public Org.BouncyCastle.Math.BigInteger get_V1B()
    // Offset: 0x27F2230
    ::Org::BouncyCastle::Math::BigInteger* get_V1B();
    // public Org.BouncyCastle.Math.BigInteger get_V2A()
    // Offset: 0x27F2238
    ::Org::BouncyCastle::Math::BigInteger* get_V2A();
    // public Org.BouncyCastle.Math.BigInteger get_V2B()
    // Offset: 0x27F2240
    ::Org::BouncyCastle::Math::BigInteger* get_V2B();
    // public Org.BouncyCastle.Math.BigInteger get_G1()
    // Offset: 0x27F2248
    ::Org::BouncyCastle::Math::BigInteger* get_G1();
    // public Org.BouncyCastle.Math.BigInteger get_G2()
    // Offset: 0x27F2250
    ::Org::BouncyCastle::Math::BigInteger* get_G2();
    // public System.Int32 get_Bits()
    // Offset: 0x27F2258
    int get_Bits();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger[] v1, Org.BouncyCastle.Math.BigInteger[] v2, Org.BouncyCastle.Math.BigInteger g1, Org.BouncyCastle.Math.BigInteger g2, System.Int32 bits)
    // Offset: 0x27F2120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScalarSplitParameters* New_ctor(::ArrayW<::Org::BouncyCastle::Math::BigInteger*> v1, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> v2, ::Org::BouncyCastle::Math::BigInteger* g1, ::Org::BouncyCastle::Math::BigInteger* g2, int bits) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScalarSplitParameters*, creationType>(v1, v2, g1, g2, bits)));
    }
    // static private System.Void CheckVector(Org.BouncyCastle.Math.BigInteger[] v, System.String name)
    // Offset: 0x27F2074
    static void CheckVector(::ArrayW<::Org::BouncyCastle::Math::BigInteger*> v, ::StringW name);
  }; // Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters
  #pragma pack(pop)
  static check_size<sizeof(ScalarSplitParameters), 64 + sizeof(int)> __Org_BouncyCastle_Math_EC_Endo_ScalarSplitParametersSizeCheck;
  static_assert(sizeof(ScalarSplitParameters) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_V1A
// Il2CppName: get_V1A
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::*)()>(&Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_V1A)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*), "get_V1A", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_V1B
// Il2CppName: get_V1B
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::*)()>(&Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_V1B)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*), "get_V1B", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_V2A
// Il2CppName: get_V2A
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::*)()>(&Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_V2A)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*), "get_V2A", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_V2B
// Il2CppName: get_V2B
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::*)()>(&Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_V2B)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*), "get_V2B", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_G1
// Il2CppName: get_G1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::*)()>(&Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_G1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*), "get_G1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_G2
// Il2CppName: get_G2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::*)()>(&Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_G2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*), "get_G2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_Bits
// Il2CppName: get_Bits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::*)()>(&Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::get_Bits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*), "get_Bits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::CheckVector
// Il2CppName: CheckVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::Org::BouncyCastle::Math::BigInteger*>, ::StringW)>(&Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::CheckVector)> {
  static const MethodInfo* get() {
    static auto* v = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger"), 1)->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*), "CheckVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v, name});
  }
};
