// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
#include "Org/BouncyCastle/Math/EC/Multiplier/AbstractECMultiplier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: GlvEndomorphism
  class GlvEndomorphism;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: GlvMultiplier
  class GlvMultiplier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "GlvMultiplier");
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.GlvMultiplier
  // [TokenAttribute] Offset: FFFFFFFF
  class GlvMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
    public:
    public:
    // protected readonly Org.BouncyCastle.Math.EC.ECCurve curve
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::EC::ECCurve* curve;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism glvEndomorphism
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* glvEndomorphism;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*) == 0x8);
    public:
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.EC.ECCurve curve
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::ECCurve*& dyn_curve();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism glvEndomorphism
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*& dyn_glvEndomorphism();
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism glvEndomorphism)
    // Offset: 0x23984DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlvMultiplier* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* glvEndomorphism) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlvMultiplier*, creationType>(curve, glvEndomorphism)));
    }
    // protected override Org.BouncyCastle.Math.EC.ECPoint MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x23985A0
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECMultiplier::MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);
  }; // Org.BouncyCastle.Math.EC.Multiplier.GlvMultiplier
  #pragma pack(pop)
  static check_size<sizeof(GlvMultiplier), 24 + sizeof(::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*)> __Org_BouncyCastle_Math_EC_Multiplier_GlvMultiplierSizeCheck;
  static_assert(sizeof(GlvMultiplier) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::MultiplyPositive
// Il2CppName: MultiplyPositive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::MultiplyPositive)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*), "MultiplyPositive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, k});
  }
};
