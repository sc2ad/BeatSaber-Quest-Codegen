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
  // Forward declaring type: MissingMethodException
  class MissingMethodException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MissingMethodException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingMethodException*, "System", "MissingMethodException");
// Type namespace: System
namespace System {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: System.MissingMethodException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106CC5C
  class MissingMethodException : public ::System::MissingMemberException {
    public:
    public:
    // private System.String signature
    // Size: 0x8
    // Offset: 0xA0
    ::StringW signature;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return signature;
    }
    // Get instance field reference: private System.String signature
    [[deprecated("Use field access instead!")]] ::StringW& dyn_signature();
    // public System.Void .ctor(System.String className, System.String methodName)
    // Offset: 0x1C204DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor(::StringW className, ::StringW methodName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>(className, methodName)));
    }
    // private System.Void .ctor(System.String className, System.String methodName, System.String signature, System.String message)
    // Offset: 0x1C20510
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor(::StringW className, ::StringW methodName, ::StringW signature, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>(className, methodName, signature, message)));
    }
    // public override System.String get_Message()
    // Offset: 0x1C203E0
    // Implemented from: System.MissingMemberException
    // Base method: System.String MissingMemberException::get_Message()
    ::StringW get_Message();
    // public System.Void .ctor()
    // Offset: 0x1C2033C
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor()
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1C203AC
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.String message)
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C203DC
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>(info, context)));
    }
  }; // System.MissingMethodException
  #pragma pack(pop)
  static check_size<sizeof(MissingMethodException), 160 + sizeof(::StringW)> __System_MissingMethodExceptionSizeCheck;
  static_assert(sizeof(MissingMethodException) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MissingMethodException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMethodException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMethodException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::MissingMethodException::*)()>(&System::MissingMethodException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MissingMethodException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MissingMethodException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMethodException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMethodException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
