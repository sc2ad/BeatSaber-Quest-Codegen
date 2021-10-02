// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed448
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed448.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed448/Org.BouncyCastle.Math.EC.Rfc8032.PointPrecomp
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed448::PointPrecomp : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // System.UInt32[] x
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint> x;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // System.UInt32[] y
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint> y;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    public:
    // Get instance field reference: System.UInt32[] x
    ::ArrayW<uint>& dyn_x();
    // Get instance field reference: System.UInt32[] y
    ::ArrayW<uint>& dyn_y();
    // public System.Void .ctor()
    // Offset: 0x1F92294
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed448::PointPrecomp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecomp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed448::PointPrecomp*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed448/Org.BouncyCastle.Math.EC.Rfc8032.PointPrecomp
  #pragma pack(pop)
  static check_size<sizeof(Ed448::PointPrecomp), 24 + sizeof(::ArrayW<uint>)> __Org_BouncyCastle_Math_EC_Rfc8032_Ed448_PointPrecompSizeCheck;
  static_assert(sizeof(Ed448::PointPrecomp) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecomp*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/PointPrecomp");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecomp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
