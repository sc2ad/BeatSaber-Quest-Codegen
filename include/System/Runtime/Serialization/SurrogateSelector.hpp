// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISurrogateSelector
#include "System/Runtime/Serialization/ISurrogateSelector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SurrogateHashtable
  class SurrogateHashtable;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SurrogateSelector
  class SurrogateSelector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateSelector*, "System.Runtime.Serialization", "SurrogateSelector");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SurrogateSelector
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1070660
  class SurrogateSelector : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISurrogateSelector*/ {
    public:
    public:
    // System.Runtime.Serialization.SurrogateHashtable m_surrogates
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Serialization::SurrogateHashtable* m_surrogates;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::SurrogateHashtable*) == 0x8);
    // System.Runtime.Serialization.ISurrogateSelector m_nextSelector
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Serialization::ISurrogateSelector* m_nextSelector;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::ISurrogateSelector*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISurrogateSelector
    operator ::System::Runtime::Serialization::ISurrogateSelector() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISurrogateSelector*>(this);
    }
    // Creating interface conversion operator: i_ISurrogateSelector
    inline ::System::Runtime::Serialization::ISurrogateSelector* i_ISurrogateSelector() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISurrogateSelector*>(this);
    }
    // Get instance field reference: System.Runtime.Serialization.SurrogateHashtable m_surrogates
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::SurrogateHashtable*& dyn_m_surrogates();
    // Get instance field reference: System.Runtime.Serialization.ISurrogateSelector m_nextSelector
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::ISurrogateSelector*& dyn_m_nextSelector();
    // public System.Void AddSurrogate(System.Type type, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ISerializationSurrogate surrogate)
    // Offset: 0x168382C
    void AddSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISerializationSurrogate* surrogate);
    // public System.Runtime.Serialization.ISerializationSurrogate GetSurrogate(System.Type type, System.Runtime.Serialization.StreamingContext context, out System.Runtime.Serialization.ISurrogateSelector selector)
    // Offset: 0x1683960
    ::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context, ByRef<::System::Runtime::Serialization::ISurrogateSelector*> selector);
    // public System.Void .ctor()
    // Offset: 0x16837BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SurrogateSelector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::SurrogateSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SurrogateSelector*, creationType>()));
    }
  }; // System.Runtime.Serialization.SurrogateSelector
  #pragma pack(pop)
  static check_size<sizeof(SurrogateSelector), 24 + sizeof(::System::Runtime::Serialization::ISurrogateSelector*)> __System_Runtime_Serialization_SurrogateSelectorSizeCheck;
  static_assert(sizeof(SurrogateSelector) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SurrogateSelector::AddSurrogate
// Il2CppName: AddSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SurrogateSelector::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISerializationSurrogate*)>(&System::Runtime::Serialization::SurrogateSelector::AddSurrogate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* surrogate = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISerializationSurrogate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SurrogateSelector*), "AddSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, context, surrogate});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SurrogateSelector::GetSurrogate
// Il2CppName: GetSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (System::Runtime::Serialization::SurrogateSelector::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext, ByRef<::System::Runtime::Serialization::ISurrogateSelector*>)>(&System::Runtime::Serialization::SurrogateSelector::GetSurrogate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* selector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SurrogateSelector*), "GetSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, context, selector});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SurrogateSelector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
