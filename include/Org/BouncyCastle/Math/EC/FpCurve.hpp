// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpCurve
#include "Org/BouncyCastle/Math/EC/AbstractFpCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: FpPoint
  class FpPoint;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
  // Skipping declaration: ECCurve because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.FpCurve
  // [TokenAttribute] Offset: FFFFFFFF
  class FpCurve : public Org::BouncyCastle::Math::EC::AbstractFpCurve {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // protected readonly Org.BouncyCastle.Math.BigInteger m_q
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Math::BigInteger* m_q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_r
    // Size: 0x8
    // Offset: 0x58
    Org::BouncyCastle::Math::BigInteger* m_r;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.EC.FpPoint m_infinity
    // Size: 0x8
    // Offset: 0x60
    Org::BouncyCastle::Math::EC::FpPoint* m_infinity;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::FpPoint*) == 0x8);
    public:
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_q
    Org::BouncyCastle::Math::BigInteger*& dyn_m_q();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_r
    Org::BouncyCastle::Math::BigInteger*& dyn_m_r();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.EC.FpPoint m_infinity
    Org::BouncyCastle::Math::EC::FpPoint*& dyn_m_infinity();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a, Org.BouncyCastle.Math.BigInteger b, Org.BouncyCastle.Math.BigInteger order, Org.BouncyCastle.Math.BigInteger cofactor)
    // Offset: 0x231CA64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FpCurve* New_ctor(Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a, Org::BouncyCastle::Math::BigInteger* b, Org::BouncyCastle::Math::BigInteger* order, Org::BouncyCastle::Math::BigInteger* cofactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::FpCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FpCurve*, creationType>(q, a, b, order, cofactor)));
    }
    // protected System.Void .ctor(Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger r, Org.BouncyCastle.Math.EC.ECFieldElement a, Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.BigInteger order, Org.BouncyCastle.Math.BigInteger cofactor)
    // Offset: 0x231CD7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FpCurve* New_ctor(Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* r, Org::BouncyCastle::Math::EC::ECFieldElement* a, Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::BigInteger* order, Org::BouncyCastle::Math::BigInteger* cofactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::FpCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FpCurve*, creationType>(q, r, a, b, order, cofactor)));
    }
    // public override Org.BouncyCastle.Math.EC.ECPoint get_Infinity()
    // Offset: 0x231CEF4
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::get_Infinity()
    Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x231CEFC
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Int32 ECCurve::get_FieldSize()
    int get_FieldSize();
    // protected override Org.BouncyCastle.Math.EC.ECCurve CloneCurve()
    // Offset: 0x231CE3C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECCurve ECCurve::CloneCurve()
    Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();
    // public override System.Boolean SupportsCoordinateSystem(System.Int32 coord)
    // Offset: 0x231CED4
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Boolean ECCurve::SupportsCoordinateSystem(System.Int32 coord)
    bool SupportsCoordinateSystem(int coord);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x231CF18
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x231D068
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x231D0F0
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression);
    // public override Org.BouncyCastle.Math.EC.ECPoint ImportPoint(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x231D190
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::ImportPoint(Org.BouncyCastle.Math.EC.ECPoint p)
    Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(Org::BouncyCastle::Math::EC::ECPoint* p);
  }; // Org.BouncyCastle.Math.EC.FpCurve
  #pragma pack(pop)
  static check_size<sizeof(FpCurve), 96 + sizeof(Org::BouncyCastle::Math::EC::FpPoint*)> __Org_BouncyCastle_Math_EC_FpCurveSizeCheck;
  static_assert(sizeof(FpCurve) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::FpCurve*, "Org.BouncyCastle.Math.EC", "FpCurve");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::get_Infinity
// Il2CppName: get_Infinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::FpCurve::*)()>(&Org::BouncyCastle::Math::EC::FpCurve::get_Infinity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::FpCurve*), "get_Infinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::get_FieldSize
// Il2CppName: get_FieldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::FpCurve::*)()>(&Org::BouncyCastle::Math::EC::FpCurve::get_FieldSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::FpCurve*), "get_FieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::CloneCurve
// Il2CppName: CloneCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve* (Org::BouncyCastle::Math::EC::FpCurve::*)()>(&Org::BouncyCastle::Math::EC::FpCurve::CloneCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::FpCurve*), "CloneCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::SupportsCoordinateSystem
// Il2CppName: SupportsCoordinateSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::FpCurve::*)(int)>(&Org::BouncyCastle::Math::EC::FpCurve::SupportsCoordinateSystem)> {
  static const MethodInfo* get() {
    static auto* coord = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::FpCurve*), "SupportsCoordinateSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coord});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::FpCurve::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::FpCurve::FromBigInteger)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::FpCurve*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::CreateRawPoint
// Il2CppName: CreateRawPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::FpCurve::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(&Org::BouncyCastle::Math::EC::FpCurve::CreateRawPoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::FpCurve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::CreateRawPoint
// Il2CppName: CreateRawPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::FpCurve::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement*>, bool)>(&Org::BouncyCastle::Math::EC::FpCurve::CreateRawPoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* zs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement"), 1)->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::FpCurve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zs, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::FpCurve::ImportPoint
// Il2CppName: ImportPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::FpCurve::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::FpCurve::ImportPoint)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::FpCurve*), "ImportPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
