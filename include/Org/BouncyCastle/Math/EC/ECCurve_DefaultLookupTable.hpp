// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
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
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable*, "Org.BouncyCastle.Math.EC", "ECCurve/DefaultLookupTable");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECCurve/Org.BouncyCastle.Math.EC.DefaultLookupTable
  // [TokenAttribute] Offset: FFFFFFFF
  class ECCurve::DefaultLookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECCurve m_outer
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::EC::ECCurve* m_outer;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // private readonly System.Byte[] m_table
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> m_table;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Int32 m_size
    // Size: 0x4
    // Offset: 0x20
    int m_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.ECCurve m_outer
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::ECCurve*& dyn_m_outer();
    // Get instance field reference: private readonly System.Byte[] m_table
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_table();
    // Get instance field reference: private readonly System.Int32 m_size
    [[deprecated("Use field access instead!")]] int& dyn_m_size();
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve outer, System.Byte[] table, System.Int32 size)
    // Offset: 0x27F2504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECCurve::DefaultLookupTable* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, ::ArrayW<uint8_t> table, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECCurve::DefaultLookupTable*, creationType>(outer, table, size)));
    }
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.Byte[] x, System.Byte[] y)
    // Offset: 0x27F32AC
    ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y);
    // public override System.Int32 get_Size()
    // Offset: 0x27F3108
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x27F3110
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x27F33A8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.ECCurve/Org.BouncyCastle.Math.EC.DefaultLookupTable
  #pragma pack(pop)
  static check_size<sizeof(ECCurve::DefaultLookupTable), 32 + sizeof(int)> __Org_BouncyCastle_Math_EC_ECCurve_DefaultLookupTableSizeCheck;
  static_assert(sizeof(ECCurve::DefaultLookupTable) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::CreatePoint
// Il2CppName: CreatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::CreatePoint)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable*), "CreatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::Lookup
// Il2CppName: Lookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::*)(int)>(&Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::Lookup)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable*), "Lookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::LookupVar
// Il2CppName: LookupVar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::*)(int)>(&Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable::LookupVar)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable*), "LookupVar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
