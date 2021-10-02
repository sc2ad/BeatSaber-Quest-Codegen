// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/IPreCompCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECPoint/Org.BouncyCastle.Math.EC.ValidityCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class ECPoint::ValidityCallback : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly Org.BouncyCastle.Math.EC.ECPoint m_outer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECPoint* m_outer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // private readonly System.Boolean m_decompressed
    // Size: 0x1
    // Offset: 0x18
    bool m_decompressed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Boolean m_checkOrder
    // Size: 0x1
    // Offset: 0x19
    bool m_checkOrder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.ECPoint m_outer
    Org::BouncyCastle::Math::EC::ECPoint*& dyn_m_outer();
    // Get instance field reference: private readonly System.Boolean m_decompressed
    bool& dyn_m_decompressed();
    // Get instance field reference: private readonly System.Boolean m_checkOrder
    bool& dyn_m_checkOrder();
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECPoint outer, System.Boolean decompressed, System.Boolean checkOrder)
    // Offset: 0x2317800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPoint::ValidityCallback* New_ctor(Org::BouncyCastle::Math::EC::ECPoint* outer, bool decompressed, bool checkOrder) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::ECPoint::ValidityCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPoint::ValidityCallback*, creationType>(outer, decompressed, checkOrder)));
    }
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x23180CC
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
  }; // Org.BouncyCastle.Math.EC.ECPoint/Org.BouncyCastle.Math.EC.ValidityCallback
  #pragma pack(pop)
  static check_size<sizeof(ECPoint::ValidityCallback), 25 + sizeof(bool)> __Org_BouncyCastle_Math_EC_ECPoint_ValidityCallbackSizeCheck;
  static_assert(sizeof(ECPoint::ValidityCallback) == 0x1A);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECPoint::ValidityCallback*, "Org.BouncyCastle.Math.EC", "ECPoint/ValidityCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::ValidityCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPoint::ValidityCallback::Precompute
// Il2CppName: Precompute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (Org::BouncyCastle::Math::EC::ECPoint::ValidityCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(&Org::BouncyCastle::Math::EC::ECPoint::ValidityCallback::Precompute)> {
  static const MethodInfo* get() {
    static auto* existing = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "PreCompInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPoint::ValidityCallback*), "Precompute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existing});
  }
};
