// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: ECPointMap
  class ECPointMap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECPointMap);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECPointMap*, "Org.BouncyCastle.Math.EC", "ECPointMap");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECPointMap
  // [TokenAttribute] Offset: FFFFFFFF
  class ECPointMap {
    public:
    // public Org.BouncyCastle.Math.EC.ECPoint Map(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Org::BouncyCastle::Math::EC::ECPoint* Map(::Org::BouncyCastle::Math::EC::ECPoint* p);
  }; // Org.BouncyCastle.Math.EC.ECPointMap
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPointMap::Map
// Il2CppName: Map
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPointMap::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECPointMap::Map)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPointMap*), "Map", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
