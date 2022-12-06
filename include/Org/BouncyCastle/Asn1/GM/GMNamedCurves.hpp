// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::GM
namespace Org::BouncyCastle::Asn1::GM {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECPoint
  class X9ECPoint;
  // Forward declaring type: X9ECParametersHolder
  class X9ECParametersHolder;
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.GM
namespace Org::BouncyCastle::Asn1::GM {
  // Forward declaring type: GMNamedCurves
  class GMNamedCurves;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::GM::GMNamedCurves);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::GM::GMNamedCurves*, "Org.BouncyCastle.Asn1.GM", "GMNamedCurves");
// Type namespace: Org.BouncyCastle.Asn1.GM
namespace Org::BouncyCastle::Asn1::GM {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.GM.GMNamedCurves
  // [TokenAttribute] Offset: FFFFFFFF
  class GMNamedCurves : public ::Il2CppObject {
    public:
    // Nested type: ::Org::BouncyCastle::Asn1::GM::GMNamedCurves::SM2P256V1Holder
    class SM2P256V1Holder;
    // Nested type: ::Org::BouncyCastle::Asn1::GM::GMNamedCurves::WapiP192V1Holder
    class WapiP192V1Holder;
    // Get static field: static private readonly System.Collections.IDictionary objIds
    static ::System::Collections::IDictionary* _get_objIds();
    // Set static field: static private readonly System.Collections.IDictionary objIds
    static void _set_objIds(::System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary curves
    static ::System::Collections::IDictionary* _get_curves();
    // Set static field: static private readonly System.Collections.IDictionary curves
    static void _set_curves(::System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary names
    static ::System::Collections::IDictionary* _get_names();
    // Set static field: static private readonly System.Collections.IDictionary names
    static void _set_names(::System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x1CED24C
    static void _cctor();
    // static private Org.BouncyCastle.Asn1.X9.X9ECPoint ConfigureBasepoint(Org.BouncyCastle.Math.EC.ECCurve curve, System.String encoding)
    // Offset: 0x1CECE8C
    static ::Org::BouncyCastle::Asn1::X9::X9ECPoint* ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::StringW encoding);
    // static private Org.BouncyCastle.Math.EC.ECCurve ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve curve)
    // Offset: 0x1CECF7C
    static ::Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve);
    // static private Org.BouncyCastle.Math.BigInteger FromHex(System.String hex)
    // Offset: 0x1CECF80
    static ::Org::BouncyCastle::Math::BigInteger* FromHex(::StringW hex);
    // static private System.Void DefineCurve(System.String name, Org.BouncyCastle.Asn1.DerObjectIdentifier oid, Org.BouncyCastle.Asn1.X9.X9ECParametersHolder holder)
    // Offset: 0x1CED01C
    static void DefineCurve(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByName(System.String name)
    // Offset: 0x1CED3AC
    static ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::StringW name);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x1CED594
    static ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static public Org.BouncyCastle.Asn1.DerObjectIdentifier GetOid(System.String name)
    // Offset: 0x1CED444
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW name);
  }; // Org.BouncyCastle.Asn1.GM.GMNamedCurves
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::GM::GMNamedCurves::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::GM::GMNamedCurves::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::GM::GMNamedCurves*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::GM::GMNamedCurves::ConfigureBasepoint
// Il2CppName: ConfigureBasepoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::StringW)>(&Org::BouncyCastle::Asn1::GM::GMNamedCurves::ConfigureBasepoint)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::GM::GMNamedCurves*), "ConfigureBasepoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve, encoding});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::GM::GMNamedCurves::ConfigureCurve
// Il2CppName: ConfigureCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(&Org::BouncyCastle::Asn1::GM::GMNamedCurves::ConfigureCurve)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::GM::GMNamedCurves*), "ConfigureCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::GM::GMNamedCurves::FromHex
// Il2CppName: FromHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::StringW)>(&Org::BouncyCastle::Asn1::GM::GMNamedCurves::FromHex)> {
  static const MethodInfo* get() {
    static auto* hex = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::GM::GMNamedCurves*), "FromHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hex});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::GM::GMNamedCurves::DefineCurve
// Il2CppName: DefineCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(&Org::BouncyCastle::Asn1::GM::GMNamedCurves::DefineCurve)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    static auto* holder = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X9", "X9ECParametersHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::GM::GMNamedCurves*), "DefineCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, oid, holder});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::GM::GMNamedCurves::GetByName
// Il2CppName: GetByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&Org::BouncyCastle::Asn1::GM::GMNamedCurves::GetByName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::GM::GMNamedCurves*), "GetByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::GM::GMNamedCurves::GetByOid
// Il2CppName: GetByOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Asn1::GM::GMNamedCurves::GetByOid)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::GM::GMNamedCurves*), "GetByOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::GM::GMNamedCurves::GetOid
// Il2CppName: GetOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&Org::BouncyCastle::Asn1::GM::GMNamedCurves::GetOid)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::GM::GMNamedCurves*), "GetOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
