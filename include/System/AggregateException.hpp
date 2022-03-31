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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: AggregateException
  class AggregateException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::AggregateException);
DEFINE_IL2CPP_ARG_TYPE(::System::AggregateException*, "System", "AggregateException");
// Type namespace: System
namespace System {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.AggregateException
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 11A7E50
  class AggregateException : public ::System::Exception {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> m_innerExceptions
    // Size: 0x8
    // Offset: 0x88
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* m_innerExceptions;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*
    constexpr operator ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*() const noexcept {
      return m_innerExceptions;
    }
    // Get instance field reference: private System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> m_innerExceptions
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*& dyn_m_innerExceptions();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> get_InnerExceptions()
    // Offset: 0x1E625B8
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* get_InnerExceptions();
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Exception> innerExceptions)
    // Offset: 0x1E61750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>(innerExceptions)));
    }
    // public System.Void .ctor(System.Exception[] innerExceptions)
    // Offset: 0x1E61870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor(::ArrayW<::System::Exception*> innerExceptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>(innerExceptions)));
    }
    // public System.Void .ctor(System.String message, System.Collections.Generic.IEnumerable`1<System.Exception> innerExceptions)
    // Offset: 0x1E617BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>(message, innerExceptions)));
    }
    // public System.Void .ctor(System.String message, System.Exception[] innerExceptions)
    // Offset: 0x1E618DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor(::StringW message, ::ArrayW<::System::Exception*> innerExceptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>(message, innerExceptions)));
    }
    // private System.Void .ctor(System.String message, System.Collections.Generic.IList`1<System.Exception> innerExceptions)
    // Offset: 0x1E618E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Exception*>* innerExceptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>(message, innerExceptions)));
    }
    // System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> innerExceptionInfos)
    // Offset: 0x1E61D54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>(innerExceptionInfos)));
    }
    // System.Void .ctor(System.String message, System.Collections.Generic.IEnumerable`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> innerExceptionInfos)
    // Offset: 0x1E61DC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>(message, innerExceptionInfos)));
    }
    // private System.Void .ctor(System.String message, System.Collections.Generic.IList`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> innerExceptionInfos)
    // Offset: 0x1E61E74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>(message, innerExceptionInfos)));
    }
    // public System.AggregateException Flatten()
    // Offset: 0x1E625C0
    ::System::AggregateException* Flatten();
    // public System.Void .ctor()
    // Offset: 0x1E61674
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E622A0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AggregateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E62458
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x1E62860
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::StringW ToString();
  }; // System.AggregateException
  #pragma pack(pop)
  static check_size<sizeof(AggregateException), 136 + sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*)> __System_AggregateExceptionSizeCheck;
  static_assert(sizeof(AggregateException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::AggregateException::get_InnerExceptions
// Il2CppName: get_InnerExceptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* (System::AggregateException::*)()>(&System::AggregateException::get_InnerExceptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AggregateException*), "get_InnerExceptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::Flatten
// Il2CppName: Flatten
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AggregateException* (System::AggregateException::*)()>(&System::AggregateException::Flatten)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AggregateException*), "Flatten", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AggregateException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AggregateException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::AggregateException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AggregateException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::AggregateException::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::AggregateException::*)()>(&System::AggregateException::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AggregateException*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
