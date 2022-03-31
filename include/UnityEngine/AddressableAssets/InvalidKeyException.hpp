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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: InvalidKeyException
  class InvalidKeyException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::InvalidKeyException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::InvalidKeyException*, "UnityEngine.AddressableAssets", "InvalidKeyException");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.InvalidKeyException
  // [TokenAttribute] Offset: FFFFFFFF
  class InvalidKeyException : public ::System::Exception {
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
    // private System.Object <Key>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppObject* Key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Type <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    ::System::Type* Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.Object <Key>k__BackingField
    ::Il2CppObject*& dyn_$Key$k__BackingField();
    // Get instance field reference: private System.Type <Type>k__BackingField
    ::System::Type*& dyn_$Type$k__BackingField();
    // public System.Object get_Key()
    // Offset: 0x18922A4
    ::Il2CppObject* get_Key();
    // private System.Void set_Key(System.Object value)
    // Offset: 0x18922AC
    void set_Key(::Il2CppObject* value);
    // public System.Type get_Type()
    // Offset: 0x18922B4
    ::System::Type* get_Type();
    // private System.Void set_Type(System.Type value)
    // Offset: 0x18922BC
    void set_Type(::System::Type* value);
    // public System.Void .ctor(System.Object key)
    // Offset: 0x18922C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidKeyException* New_ctor(::Il2CppObject* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::InvalidKeyException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidKeyException*, creationType>(key)));
    }
    // public System.Void .ctor(System.Object key, System.Type type)
    // Offset: 0x1887F64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidKeyException* New_ctor(::Il2CppObject* key, ::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::InvalidKeyException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidKeyException*, creationType>(key, type)));
    }
    // public override System.String get_Message()
    // Offset: 0x1892544
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
    // public System.Void .ctor()
    // Offset: 0x1892354
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidKeyException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::InvalidKeyException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidKeyException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x18923BC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidKeyException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::InvalidKeyException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidKeyException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x1892434
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidKeyException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::InvalidKeyException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidKeyException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo message, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18924B4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo message, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidKeyException* New_ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::InvalidKeyException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidKeyException*, creationType>(message, context)));
    }
  }; // UnityEngine.AddressableAssets.InvalidKeyException
  #pragma pack(pop)
  static check_size<sizeof(InvalidKeyException), 144 + sizeof(::System::Type*)> __UnityEngine_AddressableAssets_InvalidKeyExceptionSizeCheck;
  static_assert(sizeof(InvalidKeyException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::AddressableAssets::InvalidKeyException::*)()>(&UnityEngine::AddressableAssets::InvalidKeyException::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::InvalidKeyException*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::InvalidKeyException::*)(::Il2CppObject*)>(&UnityEngine::AddressableAssets::InvalidKeyException::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::InvalidKeyException*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::AddressableAssets::InvalidKeyException::*)()>(&UnityEngine::AddressableAssets::InvalidKeyException::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::InvalidKeyException*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::InvalidKeyException::*)(::System::Type*)>(&UnityEngine::AddressableAssets::InvalidKeyException::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::InvalidKeyException*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::InvalidKeyException::*)()>(&UnityEngine::AddressableAssets::InvalidKeyException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::InvalidKeyException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::InvalidKeyException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
