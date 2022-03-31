// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT113R2Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractECLookupTable
#include "Org/BouncyCastle/Math/EC/AbstractECLookupTable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT113R2Curve/SecT113R2LookupTable");
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve/Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2LookupTable
  // [TokenAttribute] Offset: FFFFFFFF
  class SecT113R2Curve::SecT113R2LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve m_outer
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* m_outer;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve*) == 0x8);
    // private readonly System.UInt64[] m_table
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint64_t> m_table;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private readonly System.Int32 m_size
    // Size: 0x4
    // Offset: 0x20
    int m_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve m_outer
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve*& dyn_m_outer();
    // Get instance field reference: private readonly System.UInt64[] m_table
    ::ArrayW<uint64_t>& dyn_m_table();
    // Get instance field reference: private readonly System.Int32 m_size
    int& dyn_m_size();
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve outer, System.UInt64[] table, System.Int32 size)
    // Offset: 0x23856B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT113R2Curve::SecT113R2LookupTable* New_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* outer, ::ArrayW<uint64_t> table, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT113R2Curve::SecT113R2LookupTable*, creationType>(outer, table, size)));
    }
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x2385930
    ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y);
    // public override System.Int32 get_Size()
    // Offset: 0x23857F8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x2385800
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x2385A14
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve/Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2LookupTable
  #pragma pack(pop)
  static check_size<sizeof(SecT113R2Curve::SecT113R2LookupTable), 32 + sizeof(int)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecT113R2Curve_SecT113R2LookupTableSizeCheck;
  static_assert(sizeof(SecT113R2Curve::SecT113R2LookupTable) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::CreatePoint
// Il2CppName: CreatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::CreatePoint)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable*), "CreatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::Lookup
// Il2CppName: Lookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::*)(int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::Lookup)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable*), "Lookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::LookupVar
// Il2CppName: LookupVar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::*)(int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable::LookupVar)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SecT113R2LookupTable*), "LookupVar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
