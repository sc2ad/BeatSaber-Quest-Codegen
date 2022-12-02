// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MissingMemberException
#include "System/MissingMemberException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: MissingFieldException
  class MissingFieldException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MissingFieldException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingFieldException*, "System", "MissingFieldException");
// Type namespace: System
namespace System {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: System.MissingFieldException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106CD34
  class MissingFieldException : public ::System::MissingMemberException {
    public:
    // public System.Void .ctor(System.String className, System.String fieldName)
    // Offset: 0x1C26598
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingFieldException* New_ctor(::StringW className, ::StringW fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingFieldException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingFieldException*, creationType>(className, fieldName)));
    }
    // public override System.String get_Message()
    // Offset: 0x1C2631C
    // Implemented from: System.MissingMemberException
    // Base method: System.String MissingMemberException::get_Message()
    ::StringW get_Message();
    // public System.Void .ctor()
    // Offset: 0x1C260F4
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor()
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingFieldException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingFieldException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingFieldException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1C261B0
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.String message)
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingFieldException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingFieldException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingFieldException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C261E0
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingFieldException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingFieldException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingFieldException*, creationType>(info, context)));
    }
  }; // System.MissingFieldException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MissingFieldException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingFieldException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::MissingFieldException::*)()>(&System::MissingFieldException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MissingFieldException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MissingFieldException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingFieldException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingFieldException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
