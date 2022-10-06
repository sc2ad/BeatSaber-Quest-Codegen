// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEvents
  class SerializationEvents;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEventsCache
  class SerializationEventsCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::SerializationEventsCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEventsCache*, "System.Runtime.Serialization", "SerializationEventsCache");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationEventsCache
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationEventsCache : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Hashtable cache
    static ::System::Collections::Hashtable* _get_cache();
    // Set static field: static private System.Collections.Hashtable cache
    static void _set_cache(::System::Collections::Hashtable* value);
    // static private System.Void .cctor()
    // Offset: 0x167712C
    static void _cctor();
    // static System.Runtime.Serialization.SerializationEvents GetSerializationEventsForType(System.Type t)
    // Offset: 0x1674DFC
    static ::System::Runtime::Serialization::SerializationEvents* GetSerializationEventsForType(::System::Type* t);
  }; // System.Runtime.Serialization.SerializationEventsCache
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEventsCache::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Serialization::SerializationEventsCache::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEventsCache*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEventsCache::GetSerializationEventsForType
// Il2CppName: GetSerializationEventsForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEvents* (*)(::System::Type*)>(&System::Runtime::Serialization::SerializationEventsCache::GetSerializationEventsForType)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEventsCache*), "GetSerializationEventsForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
