// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpPoint
#include "Org/BouncyCastle/Math/EC/AbstractFpPoint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECPoint because it is already included!
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Custom::Djb
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
  // Forward declaring type: Curve25519FieldElement
  class Curve25519FieldElement;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Djb
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
  // Forward declaring type: Curve25519Point
  class Curve25519Point;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519Point");
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Djb
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point
  // [TokenAttribute] Offset: FFFFFFFF
  class Curve25519Point : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
    public:
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x232A074
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Curve25519Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Curve25519Point*, creationType>(curve, x, y)));
    }
    // protected Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement CalculateJacobianModifiedW(Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement Z, System.UInt32[] ZSquared)
    // Offset: 0x232D588
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* CalculateJacobianModifiedW(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* Z, ::ArrayW<uint> ZSquared);
    // protected Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement GetJacobianModifiedW()
    // Offset: 0x232D71C
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* GetJacobianModifiedW();
    // protected Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point TwiceJacobianModified(System.Boolean calculateW)
    // Offset: 0x232D85C
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* TwiceJacobianModified(bool calculateW);
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x232A358
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Curve25519Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Curve25519Point*, creationType>(curve, x, y, withCompression)));
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x232A4BC
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Curve25519Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Curve25519Point*, creationType>(curve, x, y, zs, withCompression)));
    }
    // public override Org.BouncyCastle.Math.EC.ECFieldElement GetZCoord(System.Int32 index)
    // Offset: 0x232CB6C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECPoint::GetZCoord(System.Int32 index)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint Add(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x232CB8C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Add(Org.BouncyCastle.Math.EC.ECPoint b)
    ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint Twice()
    // Offset: 0x232D2B8
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Twice()
    ::Org::BouncyCastle::Math::EC::ECPoint* Twice();
    // public override Org.BouncyCastle.Math.EC.ECPoint TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x232D358
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint ThreeTimes()
    // Offset: 0x232D42C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::ThreeTimes()
    ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();
    // public override Org.BouncyCastle.Math.EC.ECPoint Negate()
    // Offset: 0x232D4B0
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Negate()
    ::Org::BouncyCastle::Math::EC::ECPoint* Negate();
  }; // Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::CalculateJacobianModifiedW
// Il2CppName: CalculateJacobianModifiedW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* (Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement*, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::CalculateJacobianModifiedW)> {
  static const MethodInfo* get() {
    static auto* Z = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519FieldElement")->byval_arg;
    static auto* ZSquared = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*), "CalculateJacobianModifiedW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Z, ZSquared});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::GetJacobianModifiedW
// Il2CppName: GetJacobianModifiedW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* (Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::GetJacobianModifiedW)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*), "GetJacobianModifiedW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::TwiceJacobianModified
// Il2CppName: TwiceJacobianModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* (Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(bool)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::TwiceJacobianModified)> {
  static const MethodInfo* get() {
    static auto* calculateW = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*), "TwiceJacobianModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{calculateW});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::GetZCoord
// Il2CppName: GetZCoord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(int)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::GetZCoord)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*), "GetZCoord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Add)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Twice
// Il2CppName: Twice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Twice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*), "Twice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::TwicePlus
// Il2CppName: TwicePlus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::TwicePlus)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*), "TwicePlus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::ThreeTimes
// Il2CppName: ThreeTimes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::ThreeTimes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*), "ThreeTimes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)()>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Negate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
