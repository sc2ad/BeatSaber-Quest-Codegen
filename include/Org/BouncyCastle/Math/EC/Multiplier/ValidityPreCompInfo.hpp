// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
#include "Org/BouncyCastle/Math/EC/Multiplier/PreCompInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x13
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.ValidityPreCompInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidityPreCompInfo : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Boolean failed
    // Size: 0x1
    // Offset: 0x10
    bool failed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean curveEquationPassed
    // Size: 0x1
    // Offset: 0x11
    bool curveEquationPassed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean orderPassed
    // Size: 0x1
    // Offset: 0x12
    bool orderPassed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
    operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this);
    }
    // Get static field: static readonly System.String PRECOMP_NAME
    static ::Il2CppString* _get_PRECOMP_NAME();
    // Set static field: static readonly System.String PRECOMP_NAME
    static void _set_PRECOMP_NAME(::Il2CppString* value);
    // Get instance field reference: private System.Boolean failed
    bool& dyn_failed();
    // Get instance field reference: private System.Boolean curveEquationPassed
    bool& dyn_curveEquationPassed();
    // Get instance field reference: private System.Boolean orderPassed
    bool& dyn_orderPassed();
    // static private System.Void .cctor()
    // Offset: 0x1F85490
    static void _cctor();
    // System.Boolean HasFailed()
    // Offset: 0x1F85454
    bool HasFailed();
    // System.Void ReportFailed()
    // Offset: 0x1F8545C
    void ReportFailed();
    // System.Boolean HasCurveEquationPassed()
    // Offset: 0x1F85468
    bool HasCurveEquationPassed();
    // System.Void ReportCurveEquationPassed()
    // Offset: 0x1F85470
    void ReportCurveEquationPassed();
    // System.Boolean HasOrderPassed()
    // Offset: 0x1F8547C
    bool HasOrderPassed();
    // System.Void ReportOrderPassed()
    // Offset: 0x1F85484
    void ReportOrderPassed();
    // public System.Void .ctor()
    // Offset: 0x1F854EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidityPreCompInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidityPreCompInfo*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Multiplier.ValidityPreCompInfo
  #pragma pack(pop)
  static check_size<sizeof(ValidityPreCompInfo), 18 + sizeof(bool)> __Org_BouncyCastle_Math_EC_Multiplier_ValidityPreCompInfoSizeCheck;
  static_assert(sizeof(ValidityPreCompInfo) == 0x13);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "ValidityPreCompInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::HasFailed
// Il2CppName: HasFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::HasFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*), "HasFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::ReportFailed
// Il2CppName: ReportFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::ReportFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*), "ReportFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::HasCurveEquationPassed
// Il2CppName: HasCurveEquationPassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::HasCurveEquationPassed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*), "HasCurveEquationPassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::ReportCurveEquationPassed
// Il2CppName: ReportCurveEquationPassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::ReportCurveEquationPassed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*), "ReportCurveEquationPassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::HasOrderPassed
// Il2CppName: HasOrderPassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::HasOrderPassed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*), "HasOrderPassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::ReportOrderPassed
// Il2CppName: ReportOrderPassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::ReportOrderPassed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*), "ReportOrderPassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
