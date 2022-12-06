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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADObjRef
  class CADObjRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADObjRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADObjRef*, "System.Runtime.Remoting.Messaging", "CADObjRef");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADObjRef
  // [TokenAttribute] Offset: FFFFFFFF
  class CADObjRef : public ::Il2CppObject {
    public:
    public:
    // System.Runtime.Remoting.ObjRef objref
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Remoting::ObjRef* objref;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::ObjRef*) == 0x8);
    // System.Int32 SourceDomain
    // Size: 0x4
    // Offset: 0x18
    int SourceDomain;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: SourceDomain and: TypeInfo
    char __padding1[0x4] = {};
    // System.Byte[] TypeInfo
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> TypeInfo;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: System.Runtime.Remoting.ObjRef objref
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::ObjRef*& dyn_objref();
    // Get instance field reference: System.Int32 SourceDomain
    [[deprecated("Use field access instead!")]] int& dyn_SourceDomain();
    // Get instance field reference: System.Byte[] TypeInfo
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_TypeInfo();
    // public System.Void .ctor(System.Runtime.Remoting.ObjRef o, System.Int32 sourceDomain)
    // Offset: 0x1D34FB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CADObjRef* New_ctor(::System::Runtime::Remoting::ObjRef* o, int sourceDomain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::CADObjRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CADObjRef*, creationType>(o, sourceDomain)));
    }
  }; // System.Runtime.Remoting.Messaging.CADObjRef
  #pragma pack(pop)
  static check_size<sizeof(CADObjRef), 32 + sizeof(::ArrayW<uint8_t>)> __System_Runtime_Remoting_Messaging_CADObjRefSizeCheck;
  static_assert(sizeof(CADObjRef) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADObjRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
