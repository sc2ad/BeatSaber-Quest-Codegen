// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.F2mCurve
#include "Org/BouncyCastle/Math/EC/F2mCurve.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractECLookupTable
#include "Org/BouncyCastle/Math/EC/AbstractECLookupTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.F2mCurve/Org.BouncyCastle.Math.EC.DefaultF2mLookupTable
  // [TokenAttribute] Offset: FFFFFFFF
  class F2mCurve::DefaultF2mLookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly Org.BouncyCastle.Math.EC.F2mCurve m_outer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::F2mCurve* m_outer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::F2mCurve*) == 0x8);
    // private readonly System.Int64[] m_table
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int64_t> m_table;
    // Field size check
    static_assert(sizeof(::ArrayW<int64_t>) == 0x8);
    // private readonly System.Int32 m_size
    // Size: 0x4
    // Offset: 0x20
    int m_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.F2mCurve m_outer
    Org::BouncyCastle::Math::EC::F2mCurve*& dyn_m_outer();
    // Get instance field reference: private readonly System.Int64[] m_table
    ::ArrayW<int64_t>& dyn_m_table();
    // Get instance field reference: private readonly System.Int32 m_size
    int& dyn_m_size();
    // System.Void .ctor(Org.BouncyCastle.Math.EC.F2mCurve outer, System.Int64[] table, System.Int32 size)
    // Offset: 0x2319AE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static F2mCurve::DefaultF2mLookupTable* New_ctor(Org::BouncyCastle::Math::EC::F2mCurve* outer, ::ArrayW<int64_t> table, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<F2mCurve::DefaultF2mLookupTable*, creationType>(outer, table, size)));
    }
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.Int64[] x, System.Int64[] y)
    // Offset: 0x2319CC4
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<int64_t> x, ::ArrayW<int64_t> y);
    // public override System.Int32 get_Size()
    // Offset: 0x2319B24
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x2319B2C
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x2319E84
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.F2mCurve/Org.BouncyCastle.Math.EC.DefaultF2mLookupTable
  #pragma pack(pop)
  static check_size<sizeof(F2mCurve::DefaultF2mLookupTable), 32 + sizeof(int)> __Org_BouncyCastle_Math_EC_F2mCurve_DefaultF2mLookupTableSizeCheck;
  static_assert(sizeof(F2mCurve::DefaultF2mLookupTable) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable*, "Org.BouncyCastle.Math.EC", "F2mCurve/DefaultF2mLookupTable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::CreatePoint
// Il2CppName: CreatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::*)(::ArrayW<int64_t>, ::ArrayW<int64_t>)>(&Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::CreatePoint)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable*), "CreatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::*)()>(&Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::Lookup
// Il2CppName: Lookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::*)(int)>(&Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::Lookup)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable*), "Lookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::LookupVar
// Il2CppName: LookupVar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::*)(int)>(&Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::LookupVar)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable*), "LookupVar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
