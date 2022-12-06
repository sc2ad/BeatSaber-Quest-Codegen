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
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECPoint*, "Org.BouncyCastle.Math.EC", "ECPoint");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class ECPoint : public ::Il2CppObject {
    public:
    // Nested type: ::Org::BouncyCastle::Math::EC::ECPoint::ValidityCallback
    class ValidityCallback;
    public:
    // protected internal readonly Org.BouncyCastle.Math.EC.ECCurve m_curve
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::EC::ECCurve* m_curve;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // protected internal readonly Org.BouncyCastle.Math.EC.ECFieldElement m_x
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Math::EC::ECFieldElement* m_x;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::ECFieldElement*) == 0x8);
    // protected internal readonly Org.BouncyCastle.Math.EC.ECFieldElement m_y
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Math::EC::ECFieldElement* m_y;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::ECFieldElement*) == 0x8);
    // protected internal readonly Org.BouncyCastle.Math.EC.ECFieldElement[] m_zs
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> m_zs;
    // Field size check
    static_assert(sizeof(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>) == 0x8);
    // protected internal readonly System.Boolean m_withCompression
    // Size: 0x1
    // Offset: 0x30
    bool m_withCompression;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_withCompression and: m_preCompTable
    char __padding4[0x7] = {};
    // protected internal System.Collections.IDictionary m_preCompTable
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::IDictionary* m_preCompTable;
    // Field size check
    static_assert(sizeof(::System::Collections::IDictionary*) == 0x8);
    public:
    // Get static field: static private readonly Org.BouncyCastle.Security.SecureRandom Random
    static ::Org::BouncyCastle::Security::SecureRandom* _get_Random();
    // Set static field: static private readonly Org.BouncyCastle.Security.SecureRandom Random
    static void _set_Random(::Org::BouncyCastle::Security::SecureRandom* value);
    // Get static field: static protected Org.BouncyCastle.Math.EC.ECFieldElement[] EMPTY_ZS
    static ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> _get_EMPTY_ZS();
    // Set static field: static protected Org.BouncyCastle.Math.EC.ECFieldElement[] EMPTY_ZS
    static void _set_EMPTY_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> value);
    // Get instance field reference: protected internal readonly Org.BouncyCastle.Math.EC.ECCurve m_curve
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::ECCurve*& dyn_m_curve();
    // Get instance field reference: protected internal readonly Org.BouncyCastle.Math.EC.ECFieldElement m_x
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::ECFieldElement*& dyn_m_x();
    // Get instance field reference: protected internal readonly Org.BouncyCastle.Math.EC.ECFieldElement m_y
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::ECFieldElement*& dyn_m_y();
    // Get instance field reference: protected internal readonly Org.BouncyCastle.Math.EC.ECFieldElement[] m_zs
    [[deprecated("Use field access instead!")]] ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>& dyn_m_zs();
    // Get instance field reference: protected internal readonly System.Boolean m_withCompression
    [[deprecated("Use field access instead!")]] bool& dyn_m_withCompression();
    // Get instance field reference: protected internal System.Collections.IDictionary m_preCompTable
    [[deprecated("Use field access instead!")]] ::System::Collections::IDictionary*& dyn_m_preCompTable();
    // public Org.BouncyCastle.Math.EC.ECCurve get_Curve()
    // Offset: 0x27E8058
    ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve();
    // protected System.Int32 get_CurveCoordinateSystem()
    // Offset: 0x27E8060
    int get_CurveCoordinateSystem();
    // public Org.BouncyCastle.Math.EC.ECFieldElement get_AffineXCoord()
    // Offset: 0x27E807C
    ::Org::BouncyCastle::Math::EC::ECFieldElement* get_AffineXCoord();
    // public Org.BouncyCastle.Math.EC.ECFieldElement get_AffineYCoord()
    // Offset: 0x27E80B4
    ::Org::BouncyCastle::Math::EC::ECFieldElement* get_AffineYCoord();
    // public Org.BouncyCastle.Math.EC.ECFieldElement get_XCoord()
    // Offset: 0x27E80EC
    ::Org::BouncyCastle::Math::EC::ECFieldElement* get_XCoord();
    // public Org.BouncyCastle.Math.EC.ECFieldElement get_YCoord()
    // Offset: 0x27E80F4
    ::Org::BouncyCastle::Math::EC::ECFieldElement* get_YCoord();
    // protected internal Org.BouncyCastle.Math.EC.ECFieldElement get_RawXCoord()
    // Offset: 0x27E8148
    ::Org::BouncyCastle::Math::EC::ECFieldElement* get_RawXCoord();
    // protected internal Org.BouncyCastle.Math.EC.ECFieldElement get_RawYCoord()
    // Offset: 0x27E8150
    ::Org::BouncyCastle::Math::EC::ECFieldElement* get_RawYCoord();
    // protected internal Org.BouncyCastle.Math.EC.ECFieldElement[] get_RawZCoords()
    // Offset: 0x27E8158
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> get_RawZCoords();
    // public System.Boolean get_IsInfinity()
    // Offset: 0x27E1558
    bool get_IsInfinity();
    // public System.Boolean get_IsCompressed()
    // Offset: 0x27E85CC
    bool get_IsCompressed();
    // protected internal System.Boolean get_CompressionYTilde()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CompressionYTilde();
    // protected System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x27E7E44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::ECPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPoint*, creationType>(curve, x, y, withCompression)));
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x27E7EF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::ECPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPoint*, creationType>(curve, x, y, zs, withCompression)));
    }
    // static private System.Void .cctor()
    // Offset: 0x27E8E14
    static void _cctor();
    // static protected Org.BouncyCastle.Math.EC.ECFieldElement[] GetInitialZCoords(Org.BouncyCastle.Math.EC.ECCurve curve)
    // Offset: 0x27E7B90
    static ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> GetInitialZCoords(::Org::BouncyCastle::Math::EC::ECCurve* curve);
    // protected System.Boolean SatisfiesCurveEquation()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool SatisfiesCurveEquation();
    // protected System.Boolean SatisfiesOrder()
    // Offset: 0x27E7F4C
    bool SatisfiesOrder();
    // public Org.BouncyCastle.Math.EC.ECFieldElement GetZCoord(System.Int32 index)
    // Offset: 0x27E80FC
    ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int index);
    // protected System.Void CheckNormalized()
    // Offset: 0x27E8160
    void CheckNormalized();
    // public System.Boolean IsNormalized()
    // Offset: 0x27E81F4
    bool IsNormalized();
    // public Org.BouncyCastle.Math.EC.ECPoint Normalize()
    // Offset: 0x27E827C
    ::Org::BouncyCastle::Math::EC::ECPoint* Normalize();
    // Org.BouncyCastle.Math.EC.ECPoint Normalize(Org.BouncyCastle.Math.EC.ECFieldElement zInv)
    // Offset: 0x27E8420
    ::Org::BouncyCastle::Math::EC::ECPoint* Normalize(::Org::BouncyCastle::Math::EC::ECFieldElement* zInv);
    // protected Org.BouncyCastle.Math.EC.ECPoint CreateScaledPoint(Org.BouncyCastle.Math.EC.ECFieldElement sx, Org.BouncyCastle.Math.EC.ECFieldElement sy)
    // Offset: 0x27E8530
    ::Org::BouncyCastle::Math::EC::ECPoint* CreateScaledPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* sx, ::Org::BouncyCastle::Math::EC::ECFieldElement* sy);
    // public System.Boolean IsValid()
    // Offset: 0x27E5CC0
    bool IsValid();
    // System.Boolean IsValidPartial()
    // Offset: 0x27E4B84
    bool IsValidPartial();
    // System.Boolean ImplIsValid(System.Boolean decompressed, System.Boolean checkOrder)
    // Offset: 0x27E7150
    bool ImplIsValid(bool decompressed, bool checkOrder);
    // public Org.BouncyCastle.Math.EC.ECPoint ScaleX(Org.BouncyCastle.Math.EC.ECFieldElement scale)
    // Offset: 0x27E8620
    ::Org::BouncyCastle::Math::EC::ECPoint* ScaleX(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);
    // public Org.BouncyCastle.Math.EC.ECPoint ScaleY(Org.BouncyCastle.Math.EC.ECFieldElement scale)
    // Offset: 0x27E86C0
    ::Org::BouncyCastle::Math::EC::ECPoint* ScaleY(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.ECPoint other)
    // Offset: 0x27E8804
    bool Equals(::Org::BouncyCastle::Math::EC::ECPoint* other);
    // public System.Byte[] GetEncoded(System.Boolean compressed)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> GetEncoded(bool compressed);
    // public Org.BouncyCastle.Math.EC.ECPoint Add(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);
    // public Org.BouncyCastle.Math.EC.ECPoint Subtract(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Org::BouncyCastle::Math::EC::ECPoint* Subtract(::Org::BouncyCastle::Math::EC::ECPoint* b);
    // public Org.BouncyCastle.Math.EC.ECPoint Negate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Org::BouncyCastle::Math::EC::ECPoint* Negate();
    // public Org.BouncyCastle.Math.EC.ECPoint TimesPow2(System.Int32 e)
    // Offset: 0x27E8CEC
    ::Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(int e);
    // public Org.BouncyCastle.Math.EC.ECPoint Twice()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Org::BouncyCastle::Math::EC::ECPoint* Twice();
    // public Org.BouncyCastle.Math.EC.ECPoint Multiply(Org.BouncyCastle.Math.BigInteger b)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Org::BouncyCastle::Math::EC::ECPoint* Multiply(::Org::BouncyCastle::Math::BigInteger* b);
    // public Org.BouncyCastle.Math.EC.ECPoint TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x27E8DB8
    ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);
    // public Org.BouncyCastle.Math.EC.ECPoint ThreeTimes()
    // Offset: 0x27E8E00
    ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x27E8768
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x27E8AC4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x27E8B94
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Math.EC.ECPoint
  #pragma pack(pop)
  static check_size<sizeof(ECPoint), 56 + sizeof(::System::Collections::IDictionary*)> __Org_BouncyCastle_Math_EC_ECPointSizeCheck;
  static_assert(sizeof(ECPoint) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_Curve
// Il2CppName: get_Curve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_Curve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_Curve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_CurveCoordinateSystem
// Il2CppName: get_CurveCoordinateSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_CurveCoordinateSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_CurveCoordinateSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_AffineXCoord
// Il2CppName: get_AffineXCoord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_AffineXCoord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_AffineXCoord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_AffineYCoord
// Il2CppName: get_AffineYCoord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_AffineYCoord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_AffineYCoord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_XCoord
// Il2CppName: get_XCoord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_XCoord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_XCoord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_YCoord
// Il2CppName: get_YCoord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_YCoord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_YCoord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_RawXCoord
// Il2CppName: get_RawXCoord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_RawXCoord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_RawXCoord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_RawYCoord
// Il2CppName: get_RawYCoord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_RawYCoord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_RawYCoord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_RawZCoords
// Il2CppName: get_RawZCoords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_RawZCoords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_RawZCoords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_IsInfinity
// Il2CppName: get_IsInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_IsInfinity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_IsInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_IsCompressed
// Il2CppName: get_IsCompressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_IsCompressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_IsCompressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::get_CompressionYTilde
// Il2CppName: get_CompressionYTilde
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_CompressionYTilde)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "get_CompressionYTilde", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::ECPoint::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::GetInitialZCoords
// Il2CppName: GetInitialZCoords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(&Org::BouncyCastle::Math::EC::ECPoint::GetInitialZCoords)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "GetInitialZCoords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::SatisfiesCurveEquation
// Il2CppName: SatisfiesCurveEquation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::SatisfiesCurveEquation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "SatisfiesCurveEquation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::SatisfiesOrder
// Il2CppName: SatisfiesOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::SatisfiesOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "SatisfiesOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::GetZCoord
// Il2CppName: GetZCoord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECPoint::*)(int)>(&Org::BouncyCastle::Math::EC::ECPoint::GetZCoord)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "GetZCoord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::CheckNormalized
// Il2CppName: CheckNormalized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::CheckNormalized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "CheckNormalized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::IsNormalized
// Il2CppName: IsNormalized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::IsNormalized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "IsNormalized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::Normalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::ECPoint::Normalize)> {
  static const MethodInfo* get() {
    static auto* zInv = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zInv});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::CreateScaledPoint
// Il2CppName: CreateScaledPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::ECPoint::CreateScaledPoint)> {
  static const MethodInfo* get() {
    static auto* sx = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* sy = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "CreateScaledPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sx, sy});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::IsValidPartial
// Il2CppName: IsValidPartial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::IsValidPartial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "IsValidPartial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::ImplIsValid
// Il2CppName: ImplIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)(bool, bool)>(&Org::BouncyCastle::Math::EC::ECPoint::ImplIsValid)> {
  static const MethodInfo* get() {
    static auto* decompressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* checkOrder = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "ImplIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decompressed, checkOrder});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::ScaleX
// Il2CppName: ScaleX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::ECPoint::ScaleX)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "ScaleX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::ScaleY
// Il2CppName: ScaleY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::ECPoint::ScaleY)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "ScaleY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECPoint::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::GetEncoded
// Il2CppName: GetEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Math::EC::ECPoint::*)(bool)>(&Org::BouncyCastle::Math::EC::ECPoint::GetEncoded)> {
  static const MethodInfo* get() {
    static auto* compressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "GetEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compressed});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECPoint::Add)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECPoint::Subtract)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::Negate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::TimesPow2
// Il2CppName: TimesPow2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)(int)>(&Org::BouncyCastle::Math::EC::ECPoint::TimesPow2)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "TimesPow2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::Twice
// Il2CppName: Twice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::Twice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "Twice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)(::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECPoint::Multiply)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::TwicePlus
// Il2CppName: TwicePlus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECPoint::TwicePlus)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "TwicePlus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::ThreeTimes
// Il2CppName: ThreeTimes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::ThreeTimes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "ThreeTimes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::EC::ECPoint::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
