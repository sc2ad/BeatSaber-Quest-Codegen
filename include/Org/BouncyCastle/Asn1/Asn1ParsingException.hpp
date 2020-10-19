// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.InvalidOperationException
#include "System/InvalidOperationException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1ParsingException
  class Asn1ParsingException : public System::InvalidOperationException {
    public:
    // public System.Void .ctor()
    // Offset: 0x1316FB4
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static Asn1ParsingException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x1316FBC
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static Asn1ParsingException* New_ctor(::Il2CppString* message);
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0x1316FC4
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.String message, System.Exception exception)
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception exception)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception exception)
    static Asn1ParsingException* New_ctor(::Il2CppString* message, System::Exception* exception);
  }; // Org.BouncyCastle.Asn1.Asn1ParsingException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1ParsingException*, "Org.BouncyCastle.Asn1", "Asn1ParsingException");
#pragma pack(pop)