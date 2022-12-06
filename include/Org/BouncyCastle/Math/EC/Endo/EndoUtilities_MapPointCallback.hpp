// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Endo.EndoUtilities
#include "Org/BouncyCastle/Math/EC/Endo/EndoUtilities.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/IPreCompCallback.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
  // Forward declaring type: EndoPreCompInfo
  class EndoPreCompInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback*, "Org.BouncyCastle.Math.EC.Endo", "EndoUtilities/MapPointCallback");
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.EndoUtilities/Org.BouncyCastle.Math.EC.Endo.MapPointCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class EndoUtilities::MapPointCallback : public ::Il2CppObject/*, public ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
    public:
    public:
    // private readonly Org.BouncyCastle.Math.EC.Endo.ECEndomorphism m_endomorphism
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*) == 0x8);
    // private readonly Org.BouncyCastle.Math.EC.ECPoint m_point
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Math::EC::ECPoint* m_point;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // Creating interface conversion operator: i_IPreCompCallback
    inline ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i_IPreCompCallback() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.Endo.ECEndomorphism m_endomorphism
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& dyn_m_endomorphism();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.ECPoint m_point
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::ECPoint*& dyn_m_point();
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism, Org.BouncyCastle.Math.EC.ECPoint point)
    // Offset: 0x27E9744
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndoUtilities::MapPointCallback* New_ctor(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint* point) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndoUtilities::MapPointCallback*, creationType>(endomorphism, point)));
    }
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x27E97D8
    ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
    // private System.Boolean CheckExisting(Org.BouncyCastle.Math.EC.Endo.EndoPreCompInfo existingEndo, Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism)
    // Offset: 0x27E99D8
    bool CheckExisting(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo* existingEndo, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism);
  }; // Org.BouncyCastle.Math.EC.Endo.EndoUtilities/Org.BouncyCastle.Math.EC.Endo.MapPointCallback
  #pragma pack(pop)
  static check_size<sizeof(EndoUtilities::MapPointCallback), 24 + sizeof(::Org::BouncyCastle::Math::EC::ECPoint*)> __Org_BouncyCastle_Math_EC_Endo_EndoUtilities_MapPointCallbackSizeCheck;
  static_assert(sizeof(EndoUtilities::MapPointCallback) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::Precompute
// Il2CppName: Precompute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::Precompute)> {
  static const MethodInfo* get() {
    static auto* existing = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "PreCompInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback*), "Precompute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existing});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::CheckExisting
// Il2CppName: CheckExisting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*)>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::CheckExisting)> {
  static const MethodInfo* get() {
    static auto* existingEndo = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Endo", "EndoPreCompInfo")->byval_arg;
    static auto* endomorphism = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback*), "CheckExisting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existingEndo, endomorphism});
  }
};
