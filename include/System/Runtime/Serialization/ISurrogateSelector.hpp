// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::ISurrogateSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISurrogateSelector*, "System.Runtime.Serialization", "ISurrogateSelector");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ISurrogateSelector
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 11ABE68
  class ISurrogateSelector {
    public:
    // public System.Runtime.Serialization.ISerializationSurrogate GetSurrogate(System.Type type, System.Runtime.Serialization.StreamingContext context, out System.Runtime.Serialization.ISurrogateSelector selector)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context, ByRef<::System::Runtime::Serialization::ISurrogateSelector*> selector);
  }; // System.Runtime.Serialization.ISurrogateSelector
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::ISurrogateSelector::GetSurrogate
// Il2CppName: GetSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (System::Runtime::Serialization::ISurrogateSelector::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext, ByRef<::System::Runtime::Serialization::ISurrogateSelector*>)>(&System::Runtime::Serialization::ISurrogateSelector::GetSurrogate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* selector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ISurrogateSelector*), "GetSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, context, selector});
  }
};
