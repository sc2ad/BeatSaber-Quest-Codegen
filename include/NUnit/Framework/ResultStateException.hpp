// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Forward declaring type: ResultStateException
  class ResultStateException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::ResultStateException);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::ResultStateException*, "NUnit.Framework", "ResultStateException");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.ResultStateException
  // [TokenAttribute] Offset: FFFFFFFF
  class ResultStateException : public ::System::Exception {
    public:
    // public NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public System.Void .ctor(System.String message)
    // Offset: 0x2A7BE04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultStateException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::ResultStateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultStateException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2A7BE7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultStateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::ResultStateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultStateException*, creationType>(info, context)));
    }
  }; // NUnit.Framework.ResultStateException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::ResultStateException::get_ResultState
// Il2CppName: get_ResultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ResultState* (NUnit::Framework::ResultStateException::*)()>(&NUnit::Framework::ResultStateException::get_ResultState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::ResultStateException*), "get_ResultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::ResultStateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::ResultStateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
