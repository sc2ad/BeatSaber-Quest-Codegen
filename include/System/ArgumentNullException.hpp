// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
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
  // Forward declaring type: ArgumentNullException
  class ArgumentNullException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ArgumentNullException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArgumentNullException*, "System", "ArgumentNullException");
// Type namespace: System
namespace System {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.ArgumentNullException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106C654
  class ArgumentNullException : public ::System::ArgumentException {
    public:
    // public System.Void .ctor()
    // Offset: 0x1F1F4E8
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentNullException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArgumentNullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentNullException*, creationType>()));
    }
    // public System.Void .ctor(System.String paramName)
    // Offset: 0x1F1CB98
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName)
    // Base method: System.Void SystemException::.ctor(System.String paramName)
    // Base method: System.Void Exception::.ctor(System.String paramName)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentNullException* New_ctor(::StringW paramName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArgumentNullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentNullException*, creationType>(paramName)));
    }
    // public System.Void .ctor(System.String paramName, System.String message)
    // Offset: 0x1F1F570
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName, System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentNullException* New_ctor(::StringW paramName, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArgumentNullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentNullException*, creationType>(paramName, message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1F1F5C4
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentNullException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArgumentNullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentNullException*, creationType>(info, context)));
    }
  }; // System.ArgumentNullException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ArgumentNullException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentNullException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentNullException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentNullException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
