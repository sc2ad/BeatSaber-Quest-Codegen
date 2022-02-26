// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: SpanHelpers
  class SpanHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::SpanHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::SpanHelpers*, "System", "SpanHelpers");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.SpanHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: 1186524
  class SpanHelpers : public ::Il2CppObject {
    public:
    // Nested type: ::System::SpanHelpers::PerTypeValues_1<T>
    template<typename T>
    class PerTypeValues_1;
    // static public System.Boolean IsReferenceOrContainsReferences()
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsReferenceOrContainsReferences() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::SpanHelpers::IsReferenceOrContainsReferences");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "SpanHelpers", "IsReferenceOrContainsReferences", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static private System.Boolean IsReferenceOrContainsReferencesCore(System.Type type)
    // Offset: 0x1FFBAF4
    static bool IsReferenceOrContainsReferencesCore(::System::Type* type);
  }; // System.SpanHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::SpanHelpers::IsReferenceOrContainsReferences
// Il2CppName: IsReferenceOrContainsReferences
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::SpanHelpers::IsReferenceOrContainsReferencesCore
// Il2CppName: IsReferenceOrContainsReferencesCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&System::SpanHelpers::IsReferenceOrContainsReferencesCore)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SpanHelpers*), "IsReferenceOrContainsReferencesCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
