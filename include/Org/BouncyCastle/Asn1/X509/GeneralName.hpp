// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Including type: Org.BouncyCastle.Asn1.IAsn1Choice
#include "Org/BouncyCastle/Asn1/IAsn1Choice.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.GeneralName
  class GeneralName : public Org::BouncyCastle::Asn1::Asn1Encodable, public Org::BouncyCastle::Asn1::IAsn1Choice {
    public:
    // readonly Org.BouncyCastle.Asn1.Asn1Encodable obj
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Encodable* obj;
    // readonly System.Int32 tag
    // Offset: 0x18
    int tag;
    // public System.Void .ctor(System.Int32 tag, Org.BouncyCastle.Asn1.Asn1Encodable name)
    // Offset: 0x160C7B0
    static GeneralName* New_ctor(int tag, Org::BouncyCastle::Asn1::Asn1Encodable* name);
    // static public Org.BouncyCastle.Asn1.X509.GeneralName GetInstance(System.Object obj)
    // Offset: 0x160C7F8
    static Org::BouncyCastle::Asn1::X509::GeneralName* GetInstance(::Il2CppObject* obj);
    // public System.Int32 get_TagNo()
    // Offset: 0x160CC98
    int get_TagNo();
    // public Org.BouncyCastle.Asn1.Asn1Encodable get_Name()
    // Offset: 0x160CCA0
    Org::BouncyCastle::Asn1::Asn1Encodable* get_Name();
    // public override System.String ToString()
    // Offset: 0x160CCA8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x160CE70
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.GeneralName
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::GeneralName*, "Org.BouncyCastle.Asn1.X509", "GeneralName");
#pragma pack(pop)