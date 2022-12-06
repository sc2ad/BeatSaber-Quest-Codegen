// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.IFormatter
#include "System/Runtime/Serialization/IFormatter.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "System/Runtime/Serialization/Formatters/FormatterTypeStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "System/Runtime/Serialization/Formatters/TypeFilterLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: SerializationBinder
  class SerializationBinder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: TypeInformation
  class TypeInformation;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: HeaderHandler
  class HeaderHandler;
  // Forward declaring type: Header
  class Header;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryFormatter
  class BinaryFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 10706C0
  class BinaryFormatter : public ::Il2CppObject/*, public ::System::Runtime::Serialization::IFormatter*/ {
    public:
    public:
    // System.Runtime.Serialization.ISurrogateSelector m_surrogates
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Serialization::ISurrogateSelector* m_surrogates;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::ISurrogateSelector*) == 0x8);
    // System.Runtime.Serialization.StreamingContext m_context
    // Size: 0xC
    // Offset: 0x18
    ::System::Runtime::Serialization::StreamingContext m_context;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::StreamingContext) == 0xC);
    // Padding between fields: m_context and: m_binder
    char __padding1[0x4] = {};
    // System.Runtime.Serialization.SerializationBinder m_binder
    // Size: 0x8
    // Offset: 0x28
    ::System::Runtime::Serialization::SerializationBinder* m_binder;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::SerializationBinder*) == 0x8);
    // System.Runtime.Serialization.Formatters.FormatterTypeStyle m_typeFormat
    // Size: 0x4
    // Offset: 0x30
    ::System::Runtime::Serialization::Formatters::FormatterTypeStyle m_typeFormat;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::FormatterTypeStyle) == 0x4);
    // System.Runtime.Serialization.Formatters.FormatterAssemblyStyle m_assemblyFormat
    // Size: 0x4
    // Offset: 0x34
    ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle m_assemblyFormat;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle) == 0x4);
    // System.Runtime.Serialization.Formatters.TypeFilterLevel m_securityLevel
    // Size: 0x4
    // Offset: 0x38
    ::System::Runtime::Serialization::Formatters::TypeFilterLevel m_securityLevel;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::TypeFilterLevel) == 0x4);
    // Padding between fields: m_securityLevel and: m_crossAppDomainArray
    char __padding5[0x4] = {};
    // System.Object[] m_crossAppDomainArray
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::Il2CppObject*> m_crossAppDomainArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IFormatter
    operator ::System::Runtime::Serialization::IFormatter() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IFormatter*>(this);
    }
    // Creating interface conversion operator: i_IFormatter
    inline ::System::Runtime::Serialization::IFormatter* i_IFormatter() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::IFormatter*>(this);
    }
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* _get_typeNameCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache
    static void _set_typeNameCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* value);
    // Get instance field reference: System.Runtime.Serialization.ISurrogateSelector m_surrogates
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::ISurrogateSelector*& dyn_m_surrogates();
    // Get instance field reference: System.Runtime.Serialization.StreamingContext m_context
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::StreamingContext& dyn_m_context();
    // Get instance field reference: System.Runtime.Serialization.SerializationBinder m_binder
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::SerializationBinder*& dyn_m_binder();
    // Get instance field reference: System.Runtime.Serialization.Formatters.FormatterTypeStyle m_typeFormat
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& dyn_m_typeFormat();
    // Get instance field reference: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle m_assemblyFormat
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& dyn_m_assemblyFormat();
    // Get instance field reference: System.Runtime.Serialization.Formatters.TypeFilterLevel m_securityLevel
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::TypeFilterLevel& dyn_m_securityLevel();
    // Get instance field reference: System.Object[] m_crossAppDomainArray
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_m_crossAppDomainArray();
    // public System.Void set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle value)
    // Offset: 0x18F5DE0
    void set_AssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);
    // public System.Void set_SurrogateSelector(System.Runtime.Serialization.ISurrogateSelector value)
    // Offset: 0x18F5DE8
    void set_SurrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value);
    // public System.Void set_Binder(System.Runtime.Serialization.SerializationBinder value)
    // Offset: 0x18F5DF0
    void set_Binder(::System::Runtime::Serialization::SerializationBinder* value);
    // public System.Void .ctor(System.Runtime.Serialization.ISurrogateSelector selector, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18EAC88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryFormatter* New_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryFormatter*, creationType>(selector, context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18F6D30
    static void _cctor();
    // public System.Object Deserialize(System.IO.Stream serializationStream)
    // Offset: 0x18EE300
    ::Il2CppObject* Deserialize(::System::IO::Stream* serializationStream);
    // System.Object Deserialize(System.IO.Stream serializationStream, System.Runtime.Remoting.Messaging.HeaderHandler handler, System.Boolean fCheck)
    // Offset: 0x18F5E5C
    ::Il2CppObject* Deserialize(::System::IO::Stream* serializationStream, ::System::Runtime::Remoting::Messaging::HeaderHandler* handler, bool fCheck);
    // public System.Object Deserialize(System.IO.Stream serializationStream, System.Runtime.Remoting.Messaging.HeaderHandler handler)
    // Offset: 0x18F5E54
    ::Il2CppObject* Deserialize(::System::IO::Stream* serializationStream, ::System::Runtime::Remoting::Messaging::HeaderHandler* handler);
    // public System.Void Serialize(System.IO.Stream serializationStream, System.Object graph)
    // Offset: 0x18EE198
    void Serialize(::System::IO::Stream* serializationStream, ::Il2CppObject* graph);
    // public System.Void Serialize(System.IO.Stream serializationStream, System.Object graph, System.Runtime.Remoting.Messaging.Header[] headers)
    // Offset: 0x18F64F8
    void Serialize(::System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::ArrayW<::System::Runtime::Remoting::Messaging::Header*> headers);
    // System.Void Serialize(System.IO.Stream serializationStream, System.Object graph, System.Runtime.Remoting.Messaging.Header[] headers, System.Boolean fCheck)
    // Offset: 0x18F6500
    void Serialize(::System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::ArrayW<::System::Runtime::Remoting::Messaging::Header*> headers, bool fCheck);
    // static System.Runtime.Serialization.Formatters.Binary.TypeInformation GetTypeInformation(System.Type type)
    // Offset: 0x18F6B18
    static ::System::Runtime::Serialization::Formatters::Binary::TypeInformation* GetTypeInformation(::System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x18F5DF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryFormatter*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
  #pragma pack(pop)
  static check_size<sizeof(BinaryFormatter), 64 + sizeof(::ArrayW<::Il2CppObject*>)> __System_Runtime_Serialization_Formatters_Binary_BinaryFormatterSizeCheck;
  static_assert(sizeof(BinaryFormatter) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_AssemblyFormat
// Il2CppName: set_AssemblyFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::*)(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_AssemblyFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters", "FormatterAssemblyStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "set_AssemblyFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_SurrogateSelector
// Il2CppName: set_SurrogateSelector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::*)(::System::Runtime::Serialization::ISurrogateSelector*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_SurrogateSelector)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "set_SurrogateSelector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_Binder
// Il2CppName: set_Binder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::*)(::System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_Binder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "set_Binder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::*)(::System::IO::Stream*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize)> {
  static const MethodInfo* get() {
    static auto* serializationStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationStream});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::*)(::System::IO::Stream*, ::System::Runtime::Remoting::Messaging::HeaderHandler*, bool)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize)> {
  static const MethodInfo* get() {
    static auto* serializationStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "HeaderHandler")->byval_arg;
    static auto* fCheck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationStream, handler, fCheck});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::*)(::System::IO::Stream*, ::System::Runtime::Remoting::Messaging::HeaderHandler*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize)> {
  static const MethodInfo* get() {
    static auto* serializationStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "HeaderHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationStream, handler});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::*)(::System::IO::Stream*, ::Il2CppObject*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize)> {
  static const MethodInfo* get() {
    static auto* serializationStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationStream, graph});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::*)(::System::IO::Stream*, ::Il2CppObject*, ::ArrayW<::System::Runtime::Remoting::Messaging::Header*>)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize)> {
  static const MethodInfo* get() {
    static auto* serializationStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* headers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "Header"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationStream, graph, headers});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::*)(::System::IO::Stream*, ::Il2CppObject*, ::ArrayW<::System::Runtime::Remoting::Messaging::Header*>, bool)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize)> {
  static const MethodInfo* get() {
    static auto* serializationStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* headers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "Header"), 1)->byval_arg;
    static auto* fCheck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationStream, graph, headers, fCheck});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::GetTypeInformation
// Il2CppName: GetTypeInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::TypeInformation* (*)(::System::Type*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::GetTypeInformation)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*), "GetTypeInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
